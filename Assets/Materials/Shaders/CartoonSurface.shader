Shader "Custom/CartoonSurface"
{
    Properties
    {
         [HDR] _Color ("Color", Color) = (1, 0, 0, 1)
         _SpecColor ("Specular", Color) = (1, 1, 1, 1)
         _MainTex ("Texture", 2D) = "white" {}


         _Smothness ("Smoothness", Range(0, 1)) = 0.5

         _ShadowBorder ("Shadow Border", Range(0, 1)) = 0.5
    }

    SubShader
    {
        Tags 
        { 
            "RenderType" = "Opaque" 
            "RenderPipeline" = "UniversalPipeline" 
        }

        Pass
        {
            HLSLPROGRAM

            #pragma vertex vert
            #pragma fragment frag

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include "CustomLight.hlsl"

            // The structure definition defines which variables it contains
            // This example uses the Attributes structure as an input structure in
            // the vertex shader.
            struct Attributes
            {
                // The positionOS variable contains the vertex positions in object
                // space.
                float4 positionOS : POSITION;
                float3 normalOS : NORMAL;

                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                // The positions in this struct must have the SV_POSITION semantic.
                float4 positionHCS  : SV_POSITION;

                float2 uv : TEXCOORD0;

                float3 positionWS : TEXCOORD1;
                float3 normalWS : TEXCOORD2;
                float3 viewWS : TEXCOORD3;
            };

            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);

            CBUFFER_START(UnityPerMaterial)
                float4 _Color;
                float4 _MainTex_ST;

                float4 _SpecColor;

                float _Smothness;
                float _ShadowBorder;
            CBUFFER_END

            
            float4 getDiffuse(Light light, Varyings IN, float4 albedo)
            {
                return (LightingLambert(light.color, light.direction, IN.normalWS), 1) * albedo;
            }

            float4 getSpecular(Light light, Varyings IN, float4 specColor)
            {
                return (DirectSpecular_float(light.color, light.direction, IN.normalWS, IN.viewWS, specColor, _Smothness), 1);
            }

            // The vertex shader definition with properties defined in the Varyings
            // structure. The type of the vert function must match the type (struct)
            // that it returns.
            Varyings vert(Attributes IN)
            {
                // Declaring the output object (OUT) with the Varyings struct.
                Varyings OUT;
                // The TransformObjectToHClip function transforms vertex positions
                // from object space to homogenous clip space.
                OUT.positionHCS = TransformObjectToHClip(IN.positionOS.xyz);

                OUT.positionWS = TransformObjectToWorld(IN.positionOS.xyz);
                OUT.normalWS = TransformObjectToWorldNormal(IN.normalOS);
                OUT.viewWS = GetWorldSpaceNormalizeViewDir(OUT.positionWS);

                OUT.uv = TRANSFORM_TEX(IN.uv, _MainTex);
                // Returning the output.
                return OUT;
            }

            // The fragment shader definition.
            float4 frag(Varyings IN) : SV_Target
            {
                Light ml_data = MainLight_float(IN.positionWS, IN.normalWS);

                //float main_shade = ceil(dot(ml_data.direction, IN.normalWS) * 4) / 4;
                float ml_dot = dot(ml_data.direction, IN.normalWS);
                float shadeStep = step(_ShadowBorder * 2 - 1, ml_dot);

                float main_shade = shadeStep;

                float4 color_shade = shadeStep;

                float4 color_texture = _Color * SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, IN.uv);

                float4 specColor = _SpecColor * clamp(ml_dot, 0, 1);
                float3 color_specular = getSpecular(ml_data, IN, specColor);

                color_specular = step(_ShadowBorder, color_specular);

                float4 color_diffuse = getDiffuse(ml_data, IN, color_texture);

                return (color_diffuse + float4(color_specular, 1));
            }
            ENDHLSL
        }
    }
}