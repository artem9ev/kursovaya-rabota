#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8;
struct ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119;
struct ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859;
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
struct Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F;
struct Dictionary_2_t9FD5BCF6472D0F3CFF8CD65D1FD37D005328C5AA;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE;
struct DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D;
struct Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE;
struct FieldCodec_1_tAA241F655222CE53A643B134178139B68498180B;
struct FieldCodec_1_t9110E7FB9DF62F710B6C9A0710254FD1F9AD451B;
struct FieldCodec_1_tEE4D384CF652B96E8D99BFF946620C713AA96E63;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IAsyncStreamReader_1_tA1166BF8AA4C587BED2CE436C8C02F593D404760;
struct IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IList_1_t578B54F2958F422CA9AB7A88B403C3EA5FA1F0D9;
struct IServerStreamWriter_1_t58FF025E5F63F8C0B6D5B55199DBB7D1857096C0;
struct KeyCollection_t9E58D9F12ABBDAB8791CB4F4A9109C20341AF450;
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E;
struct MessageParser_1_t1E79BBEB4D70CA62BE584F8FF2A3E54F8CFA4B1B;
struct MessageParser_1_tDDE4A1F61D0A310B72BA8047AF6FF68535B79541;
struct Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464;
struct Pinnable_1_t5C92294B898A0EBC116531B9EA1927938424BC1B;
struct Queue_1_t809FBDE5C54BBD49E0BB1BBA51EB5D97276F0D10;
struct ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00;
struct RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920;
struct RepeatedField_1_t9F911D763EBB4B8C1EB3A4DCB65C10632D72DCE2;
struct RepeatedField_1_tB6BD85BC5FD01A33A7FE2E3EDF0156E7A0A8251C;
struct RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972;
struct ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6;
struct ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671;
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E;
struct UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772;
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
struct ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646;
struct EntryU5BU5D_t0DD6AD768D52BA937CEF81216DF615ED6690FF64;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EdgeU5BU5D_t3FB7186604AC525254E63AD4E67B89E17BC1EC02;
struct FaceU5BU5D_tBFA50C5DB07DC299CA6A1FEA58903865EFC8CBE8;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ScriptableRendererFeatureU5BU5D_t64361F1FA79104227050258B0751D3DF2E9FDA1C;
struct SharedVertexU5BU5D_t4E2D5FC09F97A34098AA531DF389E849C7C423F3;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct FileDescriptor_tC4A9F06830BDAC4CCBE4F56140A052BFFC2FFBF5;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4;
struct IServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6;
struct IService_tB6943624153C7B44A54DF14EBD2D7C843B7B3CC5;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
struct MethodInfo_t;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5;
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
struct Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7;
struct ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D;
struct ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2;
struct ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A;
struct ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF;
struct ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B;
struct ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19;
struct SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027;
struct Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct Type_t;
struct UnknownFieldSet_tCBD90737310F70AB6AD87ED2929B169ED75B1356;
struct UnwrapParameters_t297B12CB66CA28218D43D0CEE8BD1ECB7E10CD75;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
struct DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B;
struct ProbeVolumeResources_t30A6677110700C97538A9A5E99ABEE1F847C4CE7;

IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IService_tB6943624153C7B44A54DF14EBD2D7C843B7B3CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m1953F22F27A0142CB3AD1C85DE93EFE382D4CA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m852138E0E87B4155E5552A8E04C15FA3F0187AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEDFBA1A78C8BF94339410CCE79ED2B8947023112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m699A9E1D941711453887F76F5DD8E797A46A5D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAE6ED860C85D209F30D618BEA4BFDD76B35BA058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D00798DA88A674D293CCBE90C17BC10763B3237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65E52814F3289E84E69A7324ED46026114A0FFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0ED7F868DFBF0B8A5F2C3A7252C548079FD8BB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m1D63999C67AACBD7BEA4F24655ABEE9722E5625B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119  : public RuntimeObject
{
	Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___method;
	ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859* ___handler;
};
struct Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0DD6AD768D52BA937CEF81216DF615ED6690FF64* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9E58D9F12ABBDAB8791CB4F4A9109C20341AF450* ____keys;
	ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646* ____values;
	RuntimeObject* ____syncRoot;
};
struct DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE  : public RuntimeObject
{
	Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___method;
	DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* ___handler;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D  : public RuntimeObject
{
	Dictionary_2_t9FD5BCF6472D0F3CFF8CD65D1FD37D005328C5AA* ___U3CValuesByNumberU3Ek__BackingField;
};
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6  : public RuntimeObject
{
	ScriptableRendererFeatureU5BU5D_t64361F1FA79104227050258B0751D3DF2E9FDA1C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct PerTypeValues_1_tFB5E6C2E4926DC7480D7A6170057234C54F99FD1  : public RuntimeObject
{
};
struct PerTypeValues_1_tE89C0FD9589148E4B5AFFF945FB28B5605532C8C  : public RuntimeObject
{
};
struct PerTypeValues_1_t6C7D72A9CEA467E2E90AA2C0F8CF56FCE1865E29  : public RuntimeObject
{
};
struct PerTypeValues_1_tC2AFFE3D4CC02A099202ECBBC2C952EF436E37A8  : public RuntimeObject
{
};
struct PerTypeValues_1_t919D5AD02389F4CF8EDBD0588B40755C956DD6B5  : public RuntimeObject
{
};
struct PerTypeValues_1_tFA9BEA03B09A60029AF6D55A88F73A4F8E8608B8  : public RuntimeObject
{
};
struct PerTypeValues_1_tAF927B394876C551F431F00CCDFFE200EE5C97EC  : public RuntimeObject
{
};
struct PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069  : public RuntimeObject
{
};
struct PerTypeValues_1_t762F814E3C63230AD062DC265FFF481F8911BA31  : public RuntimeObject
{
};
struct PerTypeValues_1_tEBDF0CC18C3AD47E7841EA83B6189A1C0722D516  : public RuntimeObject
{
};
struct RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
	int32_t ___count;
};
struct ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6  : public RuntimeObject
{
	Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___method;
	ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671* ___handler;
};
struct UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E  : public RuntimeObject
{
	Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___method;
	UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772* ___handler;
};
struct ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646  : public RuntimeObject
{
	Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F* ____dictionary;
};
struct DescriptorBase_t822D37F58B826301C887046CA37C4211C744A89D  : public RuntimeObject
{
	int32_t ___U3CIndexU3Ek__BackingField;
	String_t* ___U3CFullNameU3Ek__BackingField;
	FileDescriptor_tC4A9F06830BDAC4CCBE4F56140A052BFFC2FFBF5* ___U3CFileU3Ek__BackingField;
};
struct Extension_tE336FE1F2EB78E20062658122EF3B818B6D84A1B  : public RuntimeObject
{
	int32_t ___U3CFieldNumberU3Ek__BackingField;
};
struct Layer_tF12B2F87C397A2BE4A2F04768753EA2B6867C039  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inputs;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___outputs;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE  : public RuntimeObject
{
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CsamplerU3Ek__BackingField;
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CinlineSamplerU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_Recorder;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_InlineRecorder;
};
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};
struct SequenceMarshal_t6BFE5B8AF8C055BD30EA78928C514E01AE0BE10D  : public RuntimeObject
{
};
struct ServerCalls_t483FCBA5C47FB4068A3C98E9143C15D2BECB7488  : public RuntimeObject
{
};
struct ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A  : public RuntimeObject
{
	UnknownFieldSet_tCBD90737310F70AB6AD87ED2929B169ED75B1356* ____unknownFields;
	String_t* ___name_;
	RepeatedField_1_t9F911D763EBB4B8C1EB3A4DCB65C10632D72DCE2* ___method_;
	ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* ___options_;
};
struct ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF  : public RuntimeObject
{
	RuntimeObject* ___m_Services;
};
struct ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B  : public RuntimeObject
{
	UnknownFieldSet_tCBD90737310F70AB6AD87ED2929B169ED75B1356* ____unknownFields;
	ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D* ____extensions;
	int32_t ____hasBits0;
	bool ___deprecated_;
	RepeatedField_1_tB6BD85BC5FD01A33A7FE2E3EDF0156E7A0A8251C* ___uninterpretedOption_;
};
struct SetPropertyUtility_tD587A194C84F640B40FCDA35FC6D46BFE68626F0  : public RuntimeObject
{
};
struct SetPropertyUtility_t7A9A8AC1523C59CF066D8802A39FD11F635AE623  : public RuntimeObject
{
};
struct ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19  : public RuntimeObject
{
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___m_LightDataBuffer;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___m_LightIndicesBuffer;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___m_AdditionalLightShadowParamsStructuredBuffer;
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___m_AdditionalLightShadowSliceMatricesStructuredBuffer;
};
struct ShapeFactory_t3676B94F7C01FCE1EE74B73ACF1F65BA29BE6A40  : public RuntimeObject
{
};
struct SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899  : public RuntimeObject
{
};
struct SpanHelpers_tDDA01A8F56B97E7BB54B9699E7BAD5F2DA58D70D  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data;
};
struct U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data;
};
struct U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E 
{
	ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___data;
};
struct U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786 
{
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ____list;
	int32_t ____index;
	int32_t ____version;
	ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* ____current;
};
struct Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8 
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentValue;
};
struct Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48 
{
	Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* ____currentValue;
};
struct Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE  : public Extension_tE336FE1F2EB78E20062658122EF3B818B6D84A1B
{
	FieldCodec_1_tEE4D384CF652B96E8D99BFF946620C713AA96E63* ___codec;
};
struct ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_com_define
#define ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_com_define
struct ReadOnlyMemory_1_t56EA892D67DBE586339115545879EBEF373CC277_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920  : public Extension_tE336FE1F2EB78E20062658122EF3B818B6D84A1B
{
	FieldCodec_1_tEE4D384CF652B96E8D99BFF946620C713AA96E63* ___codec;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD__padding[1];
	};
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844 
{
	RuntimeObject* ____object;
	int32_t ____integer;
};
struct SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____integer;
};
struct SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____integer;
};
struct ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2  : public DescriptorBase_t822D37F58B826301C887046CA37C4211C744A89D
{
	ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* ___proto;
	RuntimeObject* ___methods;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6__padding[1];
	};
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Unary_t65231DA36441BB529F12E00F032E5154F876F824  : public Layer_tF12B2F87C397A2BE4A2F04768753EA2B6867C039
{
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00  : public RuntimeObject
{
	ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F ___U3CMemoryU3Ek__BackingField;
	ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00* ___U3CNextU3Ek__BackingField;
	int64_t ___U3CRunningIndexU3Ek__BackingField;
};
struct ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE 
{
	SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844 ____sequenceStart;
	SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844 ____sequenceEnd;
};
struct ReadOnlySpan_1_tB8EAC4CD2FAEF89749778E7AAF4D2A1A48724639 
{
	Pinnable_1_t5C92294B898A0EBC116531B9EA1927938424BC1B* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct ElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94 
{
	int32_t ___value__;
};
struct ExceptionArgument_t32F69FC17267C34851B230133D8BAAEDDF1872FA 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct MethodType_t7873BA123471943AAAC2C35E01B1139D2E26CE56 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PInfo_t8E650D58C9259127E18C225459323E41106C2877 
{
	int32_t ___value__;
};
struct PivotLocation_t808911BD84909EBB29F10B4921C9AA24DEAF1FBE 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyAttributes_tE026D5D3C04F074C19F2200702FE4F265C309797 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027  : public RuntimeObject
{
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___MessageQueue;
	Guid_t ___U3CChannelIdU3Ek__BackingField;
};
struct Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F  : public Unary_t65231DA36441BB529F12E00F032E5154F876F824
{
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct CacheValidState_t6EAFCFFDCA0827879ECE57B2E99919A0B9C893D0 
{
	uint8_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464  : public RuntimeObject
{
	int32_t ___type;
	String_t* ___serviceName;
	String_t* ___name;
	Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E* ___requestMarshaller;
	Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E* ___responseMarshaller;
	String_t* ___fullName;
};
struct PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	int32_t ___m_Value;
};
struct PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	float ___m_Value;
};
typedef Il2CppFullySharedGenericStruct PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	String_t* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	char* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	Il2CppChar* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859  : public MulticastDelegate_t
{
};
struct DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};
struct ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671  : public MulticastDelegate_t
{
};
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};
struct UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	intptr_t ___klass;
	intptr_t ___prop;
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info;
	int32_t ___cached;
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter;
};
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B* ___debugShaders;
	ProbeVolumeResources_t30A6677110700C97538A9A5E99ABEE1F847C4CE7* ___probeVolumeResources;
	bool ___U3CisInvalidatedU3Ek__BackingField;
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures;
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___m_RendererFeatureMap;
	bool ___m_UseNativeRenderPass;
	bool ___m_StripShadowsOffVariants;
	bool ___m_StripAdditionalLightOffVariants;
};
struct ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_Active;
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___m_MeshFormatVersion;
	FaceU5BU5D_tBFA50C5DB07DC299CA6A1FEA58903865EFC8CBE8* ___m_Faces;
	SharedVertexU5BU5D_t4E2D5FC09F97A34098AA531DF389E849C7C423F3* ___m_SharedVertices;
	uint8_t ___m_CacheValid;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_SharedVertexLookup;
	SharedVertexU5BU5D_t4E2D5FC09F97A34098AA531DF389E849C7C423F3* ___m_SharedTextures;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_SharedTextureLookup;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Positions;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_Textures0;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Textures2;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Textures3;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Tangents;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Normals;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___m_Colors;
	bool ___U3CuserCollisionsU3Ek__BackingField;
	UnwrapParameters_t297B12CB66CA28218D43D0CEE8BD1ECB7E10CD75* ___m_UnwrapParameters;
	bool ___m_PreserveMeshAssetOnDestroy;
	String_t* ___assetGuid;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___m_MeshRenderer;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_MeshFilter;
	uint16_t ___m_VersionIndex;
	uint16_t ___m_InstanceVersionIndex;
	bool ___m_IsSelectable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_SelectedFaces;
	EdgeU5BU5D_t3FB7186604AC525254E63AD4E67B89E17BC1EC02* ___m_SelectedEdges;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_SelectedVertices;
	bool ___m_SelectedCacheDirty;
	int32_t ___m_SelectedSharedVerticesCount;
	int32_t ___m_SelectedCoincidentVertexCount;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_SelectedSharedVertices;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedCoincidentVertices;
};
struct ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119_StaticFields
{
	RuntimeObject* ___Logger;
};
struct DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE_StaticFields
{
	RuntimeObject* ___Logger;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields
{
	EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields
{
	EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields
{
	EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6_StaticFields
{
	ScriptableRendererFeatureU5BU5D_t64361F1FA79104227050258B0751D3DF2E9FDA1C* ___s_emptyArray;
};
struct PerTypeValues_1_tFB5E6C2E4926DC7480D7A6170057234C54F99FD1_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tE89C0FD9589148E4B5AFFF945FB28B5605532C8C_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t6C7D72A9CEA467E2E90AA2C0F8CF56FCE1865E29_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tC2AFFE3D4CC02A099202ECBBC2C952EF436E37A8_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t919D5AD02389F4CF8EDBD0588B40755C956DD6B5_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tFA9BEA03B09A60029AF6D55A88F73A4F8E8608B8_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tAF927B394876C551F431F00CCDFFE200EE5C97EC_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t762F814E3C63230AD062DC265FFF481F8911BA31_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tEBDF0CC18C3AD47E7841EA83B6189A1C0722D516_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___EqualityComparer;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___EmptyArray;
};
struct ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6_StaticFields
{
	RuntimeObject* ___Logger;
};
struct UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E_StaticFields
{
	RuntimeObject* ___Logger;
};
struct ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A_StaticFields
{
	MessageParser_1_t1E79BBEB4D70CA62BE584F8FF2A3E54F8CFA4B1B* ____parser;
	String_t* ___NameDefaultValue;
	FieldCodec_1_tAA241F655222CE53A643B134178139B68498180B* ____repeated_method_codec;
};
struct ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B_StaticFields
{
	MessageParser_1_tDDE4A1F61D0A310B72BA8047AF6FF68535B79541* ____parser;
	bool ___DeprecatedDefaultValue;
	FieldCodec_1_t9110E7FB9DF62F710B6C9A0710254FD1F9AD451B* ____repeated_uninterpretedOption_codec;
};
struct ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19_StaticFields
{
	ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* ___m_Instance;
};
struct SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_StaticFields
{
	Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F* ___s_RegisteredChannels;
	Queue_1_t809FBDE5C54BBD49E0BB1BBA51EB5D97276F0D10* ___s_CachedMessages;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticFields
{
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___s_QuickSortSampler;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___s_InsertionSortSampler;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE_StaticFields
{
	ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE ___Empty;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock;
};
struct Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F_StaticFields
{
	String_t* ___k_OpName;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarker;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
struct ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5_StaticFields
{
	Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8* ___meshWillBeDestroyed;
	Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8* ___meshWasInitialized;
	Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8* ___componentWillBeDestroyed;
	Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8* ___componentHasBeenReset;
	Action_1_t6108AE00781B10E279B67301D149E81626A1C7B8* ___elementSelectionChanged;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___s_CachedHashSet;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334  : public RuntimeArray
{
	ALIGN_FIELD (8) ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE m_Items[1];

	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		m_Items[index] = value;
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientStreamingServerCallHandler_2__ctor_m654FB762FEC3DDADB8980F98308BA3F2FB605941_gshared (ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859* ___1_handler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2_gshared (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* ___1_handler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerStreamingServerCallHandler_2__ctor_m0F951EECDED40527099EECD27613B89A4E03CEA3_gshared (ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671* ___1_handler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryServerCallHandler_2__ctor_m9EC9F44254932A80E5FCA8DD7E4EE7464E830534_gshared (UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772* ___1_handler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceManager_GetService_TisRuntimeObject_mCF50A0038278469A11C74F40ECA8AE0B27AE52F7_gshared (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m29C11BF8C434B5768FA2FA60E3E4A9C7FE498762_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E3735567A9066EF764FA6AB2E80EA66A074B30E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m57103F03EBD40F07DF6E2875A446620B8C1FEB75_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8 ValueCollection_GetEnumerator_mB2733C33EA584968EFC8B1C6D3B3EB1B65111843_gshared (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4CE294246806CA00D6E66F53D74A31D53A934324_gshared (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD940DC6E45C702CD712A3AAA27659E88E4B85CB5_gshared (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Sign_mE06AC5C28ED68B6497988A72BDBD86D205EFCEFD_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Sign_m8B397EDAF69D7CC970B7E5047EA39CD43746E8C7_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7E1DBF188BBECF1D7E896CE444FD5743CDE01D4D_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2BC07E825ED0955A169AC86FBE4ED3174E2F4565_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0544208FEC6D736DCE1ACFF471BEAC07A10E9880_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisRuntimeObject_m2E01D43E1B0ED8962FF5621FE8A40D569CF041C4_gshared (RuntimeObject** ___0_first, RuntimeObject** ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ScriptableRendererData_get_rendererFeatures_m1DF4156F6E0733E01D096AE7A3C43EC6C9D2DD45_inline (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* __this, const RuntimeMethod* method) ;
inline Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786 List_1_GetEnumerator_m0ED7F868DFBF0B8A5F2C3A7252C548079FD8BB4F (List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786 (*) (List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mEDFBA1A78C8BF94339410CCE79ED2B8947023112 (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* Enumerator_get_Current_m65E52814F3289E84E69A7324ED46026114A0FFAE_inline (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786* __this, const RuntimeMethod* method)
{
	return ((  ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* (*) (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m699A9E1D941711453887F76F5DD8E797A46A5D48 (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void ClientStreamingServerCallHandler_2__ctor_m654FB762FEC3DDADB8980F98308BA3F2FB605941 (ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859* ___1_handler, const RuntimeMethod* method)
{
	((  void (*) (ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119*, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464*, ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859*, const RuntimeMethod*))ClientStreamingServerCallHandler_2__ctor_m654FB762FEC3DDADB8980F98308BA3F2FB605941_gshared)(__this, ___0_method, ___1_handler, method);
}
inline void DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2 (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* ___1_handler, const RuntimeMethod* method)
{
	((  void (*) (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE*, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464*, DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB*, const RuntimeMethod*))DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2_gshared)(__this, ___0_method, ___1_handler, method);
}
inline void ServerStreamingServerCallHandler_2__ctor_m0F951EECDED40527099EECD27613B89A4E03CEA3 (ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671* ___1_handler, const RuntimeMethod* method)
{
	((  void (*) (ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6*, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464*, ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671*, const RuntimeMethod*))ServerStreamingServerCallHandler_2__ctor_m0F951EECDED40527099EECD27613B89A4E03CEA3_gshared)(__this, ___0_method, ___1_handler, method);
}
inline void UnaryServerCallHandler_2__ctor_m9EC9F44254932A80E5FCA8DD7E4EE7464E830534 (UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772* ___1_handler, const RuntimeMethod* method)
{
	((  void (*) (UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E*, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464*, UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772*, const RuntimeMethod*))UnaryServerCallHandler_2__ctor_m9EC9F44254932A80E5FCA8DD7E4EE7464E830534_gshared)(__this, ___0_method, ___1_handler, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* ServiceDescriptor_get_Proto_m8BB29E43724945E3D54B1929EE112CFF8BC4EF0C_inline (ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* ServiceDescriptorProto_get_Options_mD64A84716C82BE13B86789E4F10A1D9457358ACB_inline (ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* __this, const RuntimeMethod* method) ;
inline RuntimeObject* ServiceManager_GetService_TisRuntimeObject_mCF50A0038278469A11C74F40ECA8AE0B27AE52F7 (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF*, const RuntimeMethod*))ServiceManager_GetService_TisRuntimeObject_mCF50A0038278469A11C74F40ECA8AE0B27AE52F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1 (bool* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0 (Il2CppChar* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline)(method);
}
inline int32_t Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, int32_t ___0_count, int32_t ___1_stride, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
inline int32_t Marshal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m29C11BF8C434B5768FA2FA60E3E4A9C7FE498762 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m29C11BF8C434B5768FA2FA60E3E4A9C7FE498762_gshared)(method);
}
inline int32_t Marshal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E3735567A9066EF764FA6AB2E80EA66A074B30E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E3735567A9066EF764FA6AB2E80EA66A074B30E_gshared)(method);
}
inline int32_t Marshal_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m57103F03EBD40F07DF6E2875A446620B8C1FEB75 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m57103F03EBD40F07DF6E2875A446620B8C1FEB75_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5* ShapeFactory_Instantiate_m1CCC4FB7BB33256B8E8EF952F87361CD60D86024 (Type_t* ___0_shapeType, int32_t ___1_pivotType, const RuntimeMethod* method) ;
inline ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646* Dictionary_2_get_Values_m1953F22F27A0142CB3AD1C85DE93EFE382D4CA40 (Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646* (*) (Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F*, const RuntimeMethod*))Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared)(__this, method);
}
inline Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48 ValueCollection_GetEnumerator_m1D63999C67AACBD7BEA4F24655ABEE9722E5625B (ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48 (*) (ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646*, const RuntimeMethod*))ValueCollection_GetEnumerator_mB2733C33EA584968EFC8B1C6D3B3EB1B65111843_gshared)(__this, method);
}
inline void Enumerator_Dispose_m852138E0E87B4155E5552A8E04C15FA3F0187AEE (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48*, const RuntimeMethod*))Enumerator_Dispose_m4CE294246806CA00D6E66F53D74A31D53A934324_gshared)(__this, method);
}
inline SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* Enumerator_get_Current_m4D00798DA88A674D293CCBE90C17BC10763B3237_inline (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48* __this, const RuntimeMethod* method)
{
	return ((  SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* (*) (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48*, const RuntimeMethod*))Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mAE6ED860C85D209F30D618BEA4BFDD76B35BA058 (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48*, const RuntimeMethod*))Enumerator_MoveNext_mD940DC6E45C702CD712A3AAA27659E88E4B85CB5_gshared)(__this, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Sign_mE06AC5C28ED68B6497988A72BDBD86D205EFCEFD (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_Sign_mE06AC5C28ED68B6497988A72BDBD86D205EFCEFD_gshared)(___0_a, method);
}
inline PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Sign_m8B397EDAF69D7CC970B7E5047EA39CD43746E8C7 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_Sign_m8B397EDAF69D7CC970B7E5047EA39CD43746E8C7_gshared)(___0_a, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_m4B73587A2295443A73B64DDD3D484D8EAECC0D65 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___0_sampler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, const RuntimeMethod* method) ;
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, const RuntimeMethod*))Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7 (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* ___2_p, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7_gshared)(___0_a, ___1_b, ___2_p, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7E1DBF188BBECF1D7E896CE444FD5743CDE01D4D (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7E1DBF188BBECF1D7E896CE444FD5743CDE01D4D_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___4_compare, const RuntimeMethod* method)
{
	return ((  ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5 (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m5A5074EB7648DFF4FA6A8E08CE03E9A08B6E0602 (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___0_value, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2BC07E825ED0955A169AC86FBE4ED3174E2F4565 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2BC07E825ED0955A169AC86FBE4ED3174E2F4565_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0544208FEC6D736DCE1ACFF471BEAC07A10E9880 (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0544208FEC6D736DCE1ACFF471BEAC07A10E9880_gshared)(___0_first, ___1_second, ___2_length, method);
}
inline int32_t SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject**, RuntimeObject*, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool SpanHelpers_SequenceEqual_TisRuntimeObject_m2E01D43E1B0ED8962FF5621FE8A40D569CF041C4 (RuntimeObject** ___0_first, RuntimeObject** ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject**, RuntimeObject**, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisRuntimeObject_m2E01D43E1B0ED8962FF5621FE8A40D569CF041C4_gshared)(___0_first, ___1_second, ___2_length, method);
}
inline int32_t SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2 (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject**, RuntimeObject*, int32_t, const RuntimeMethod*))SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
inline EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_mAF1194CAFB553C09F2169BC4443CD31BB887F0AD_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3A6CEF00507A96943B44267C4343626C7931EBC9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m6C17D5E42F6711B37C42757BA1932EE23D436EB6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m53AFB3A16E25820C78D63342DF651B98AD7230F0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCEA9A307651CE3079A5EE156235AD794AF2B3BAB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_mA2BE555615A37D440B410298B0AAE6D7BFFB4C3D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455_mDA068E306B70D11820DAA4670E3357016C3A6F9C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m88B7F18FC2148289B50E51FCDC090785C27FF770_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2BC6A2C988B479F5DEA417F45048212DDAA0DCE8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m7E1B62A6DB6B0559375098C8EEE2B38C4602B042_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_m1AEF89E4349585503A18DFF3AF9F1F4824D84F31_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_mE4CA22B48BCBF8DD3FFD54B5F60C1852118A0696_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_mA36C458345073DF998EFF72A82021437C7F8D5FF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mD48EFE38700F66D3064FC9824BE3198F358DEC34_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m7FD9677D7143EDC3ACDD6313A30FE78B3F95CB7E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m2B02352EB2BA6080F0837FCDEB4D12097D494A2E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m81462F4B3CB4FCD3DB492DFBBAA5399372450663_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDataSourceContext_t7458B85023D9BF30FBDC3023358BD2FB7BBE0332_mE886EFA263010D2E01397C3F9951022628DAFEF9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m574136BD2E7CF6AEE223B36AF44132A2D81FFD9E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_m4E43C7C1A0F05CA5AB9357AE5726A1D0976BCA74_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m33DD11879EFE23B025756C4C6FA9C4E9EAE1A341_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_m49AC063800A1580963F8ADAA57DA30E21AB50A3D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_m552304D23060862B9E66C04778706AD9A948B88B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m5707EF3EFB65BACC9330A690833A768637D85983_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6B982EB3DDA8C5B837C78B2633A4E89BF78DDB0D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB8C698455DEC8C37FA1279D58CAA26108A553D49_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m459212FB93268F321385FACDDC1EF523DB882068_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mC227699B698E241EC0D583C323AC28777AB4D78B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m88D69294E9277EB04085B3BA415841EE15CCE5BE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mEE8401B878DCF114BCCDDCFA21ECEA29738E0E2F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mD7E323420EE6B571E82C1D9E2C9631D0586F28D3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_mCDA876ADE48219DBBD1A2832D69DF6E0FDDBE575_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m68B3853E876DF76A8A84C6413570EB84707EA083_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEdge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_m4C4AF9B929EE3E047D69EFA5974B93AFBDBBEB01_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEdgeLookup_t300611D73C712629140424DC4556FECAFE210899_mA25D60028A54294F8F258A6D181C9FFDA0F42F09_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m73A555B73E9D44AB4ED068DAF00DD7E1AC7B8ECF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m11A3B4B867D9F8E51BF3B96B2EF146DCA624D810_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEventActuatorInfo_t3DAA5085D8F6C99523F7FC47919516A6944A6930_m2A18AC28E635C3E5DBDA1B89EBCA985B79753E1E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEventObservationSpec_tFF23015F1DAE6DB848056B607777C950605D122A_mE95C8E87CE66CDD76BAFFBC5AACA078454AC1D11_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7_m1183D3625A4C2215DCADDC79EA6DE19327B500C6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_mE1B904E990BD9745FA67D7BCD8E088B1CA1E1250_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m04893453A1F6607C4DAAB5E1EE476E92027FEFCA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m58997DBBC007C27F2A66C9F8AB0318D952FD0469_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_mD1BA41069AF27E571E1BA19626FAE6DE11C461A1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mC7446DDED03BCF50CA4D9B91805BC3255DF268BE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_m872BF2A16E062A960FE063C981F5075F3FC49D2A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mA74E20C1A327E3314BF8445E3CC1CC0C1DC0EBC3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mA7132A315C3F18286E4F0F5662F2C5F0FCBE5F4F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_m58E2BAA3B97A5353ECB8B2259B97659B1BAAB79D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m20D9257D638B323F4E999255ABD08BEB40428269_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE105E8670B01B48E0951639ACBC2A20F1739E4EE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_m6EA30C38D11DCF0023818495C7E2398302BDF881_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m0FD10FD487C028F81C41AE207187579AC859E8E4_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB_m7A42D3566F4EBDE067330EE7517C87E0C070F10F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGuid_t_m4723CCE11850F84118D3EEC4B9940D83DD3775EC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m8F309C19D1CC3BFBA6CE7F4AAC88CD21FB1F9988_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m8E30253306FAF5489E85B324BB3A32F5E8DCBF9C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m012E62BAB0A188513068A309FCBA7C062D29AC33_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIndex_t5614B28257879876E049288D09C47602B22F2301_mB7CC1A91F59285F1430EDC50B3CA6284EA157722_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_mBB71BEBA58C2BF5288B5E4D4D5BE8909990A3B54_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m16DF5F01989174D1216E2A1A15F13C80879BDB82_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mCBCB1AEC5B7222D5C1B8658AA032A178FE6A6445_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mE863E452D25C1923E93F839A932CF0AD599BDE93_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_m65BB2E24076160FD0A89BF40F124A98EDC53F12D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_mAA5159B2FC1AD9EA0715C1C73237DB28540E2208_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_m59317891F48D9F2A3B2E30B253265F1BFC96B52E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m2C56A4CD00614E311D7699B778F80B48F89007D8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mF085BD4E560B42CA2B2F0A9ED28D3B63B7889380_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m2D88B96CA59CD06BE30B9544547062C8D8A142A9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mE491AF4E458EB8C08D2D71A8AD773C6EEFEB303A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m16DAA0B83C6D01BEFDE92B6C04F59D8504C2925A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAC48FD995D125CD5EAAAD92379FE2E1E3572322D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCAE38F2391CDF81252D314623460548AE0079479_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m3743012E0198F21BF0F2018495C9391E414BD17A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIntPtr_t_mC554E250492418F2614325A23662FAD9EE24D4B3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10_m26B1CAAC21A05680D158BA75FEABD88194A4CF3A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_m242C33DF5C80D1A1B1999AC33AEF75EB130586FA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_m79184107C50156521E71F26AE5FAC6716FFFF34F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m2302908805B8ABC3115292D4C66FE1BF0C1943F7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m7330947EA0EDD008E348FCF34DCC4CB406103D82_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m353238505B24720F51405E834902C7C05DFE116A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m8D1F29EE8FD48A04FEA75BD398E95AB70D634145_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6_m3B9E1DC6014C46F4EA02F75D0F6B26AFFD1E0140_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLigatureSubstitutionRecord_t10CDFEAC5F3C347AD07317E6FAE884F4D9121525_mE12E319C363C2CD86320AD08A6D6305168774901_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mD0DEC5232D364DBDE5231F86861696940E3FDCA0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m1A04EA2EFDBD722FDFA0C993F3E9877367F07296_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_m373609D74FB5AFB4510C5BA464213CCC0C9B1696_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_m529B8F32F39D4A0832982BB82B39F86B0260C94B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_m94F65E161B0CFE2F57473EF7BD73044390E5D181_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71_mABC89E2A2F5F434B1446023AB3396A48C4BC03A6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m2C7BCD442BAB545EC338032E486FFA9FC582142C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654_mF9B6D828EDC907A49E69559574AA777A29EA8C17_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m9BD6F39E59EF2B1327B7AB59C763D1E69033C688_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE7E56CE03E0A1D67553BEF553209CD4A7D2B611B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mFC772BFFD5FC2334CEC9C707B8E24EE543F75BC5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mAC10D482686C4D15C33A16AB486B71FF6E5C1B4A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMultipleSubstitutionRecord_tDD3C48B2E85DBF2625372D2C0E6A6BDD146EC00E_m1CBC6FD86644C3C9CD04978B489A45E2F292C6B6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m62F48B63E01DCB185233B00E67659010A993FED4_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_mD6DDA6949EFC3D5D1BD7A4E83442F09101619F87_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_m530D96F7A98E0EF1B4EBEA2C060DF38506BCFE24_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_mBB21300D239145008F2D102A21AC0FEE9595C057_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_mB9205BBFBC9CECB89ECDAD23FCB418ACA06683BF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_mD810467F6E5EA8C6E29F15B2AF7AE4BA00E5C693_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m434B9F41B350F8882309168DEBC655B9A2BFC8EF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m116360578779445ACB52E52385196FCA9CEFA125_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisObservationSpec_t03F07E4C9C7B4586FBAF9E696DE12C8B3F57712A_m332AD83B9E3AA7FB693B8488F6E992589EC6D25F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisObservationSummary_tA242676ADF3AB77857858A3C38AD2CE8F4C49441_m0566890F67DD43D0B1FC27DB2D750772EB2FD27A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderContext_tF8A07609A274625BEEE254608925CAD2BF4DFDB5_mA90B7CE33020CD85309B2E3995300F6284A6D4C2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m72C943C660928E1C1C11B4F0D70D1DD1E321AE05_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m3714DA6294394963B78A75032777977E232C90F2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_m8DEFD157B599E7F9EDEB34D275DFD84B9C0E8F62_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mA5C1DBF8FACEE37C8AE4E4FE11CD08F6D80BDDAB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m321B16E4499D81366383EF0C545DD78DBC8625EE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m5B4D92C42051C10573B095C92B8F0E5FDF872872_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m747B4E66DFEF978D9C456C6F9AF06DB8C07D84E9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m1CF0C69F5FF6E90B701BE03C53A30CBFAA6BEC2F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_mA44FA684EA4539F294FCE8BB345205091DEB6634_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m7F16329EB2EBD4C9AA1479CED2B18EE69EAD86F5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m6355A83509396399B1E9F92D11A9D6017617271B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mE6F9E06E426FA168D5FDDBC1B734DB19B05EA336_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mE8B0FC08EB603607B729AE361407FFE0BD944D45_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m45B85AAEFDD5E996AEB964315831D7C2796CDAC2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m170F5CFAA62BF12430D8C201A1D01A081CA02322_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_m5EF152500A62BCC42A9EFC0A8AAB8B2468920407_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2_mBB802E80D279BA7D6E0ECB06B16CC15B7D045028_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_m23A181119E543B58719E05C0536E80A95D745F26_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPropertyPathInfo_t4F516150FF223D10399DC8E09E5DA06F616C124C_mACB60DABDBAFFF45069F94EC030A6E2747FFCCA6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_m047167D1A4FC379D9D9C6091BFC71E1B203A9A0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mEF117F42E5CFD1904564AF1843AF8DED6B9F0232_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRange_t2E1D6269D6D386B091A4D3DD347B8D4C5A35F95F_m36471E84187C4B719DC7E1FA7CF98FB0AB0B3383_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m28D6D8B9D0F25DF6F70EE2353EBEA7B7D84BF13C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRaycastCommand_t4EB71893B65E7E4E56292BC591E8B256FBBAAE29_m406978EF0B25C6677053BA4131297E55FAA42350_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mCD8929450C203433B8DD0B904687671201A20610_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mB24E6F3691C24F766750EE7C12D405A17F7CDCE1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_mB0EBCFF0304182532DE30D5ED4463BF397569980_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_mE6BA072B4BD60936C13904EE17B85946694AFF80_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mDB05559F75A298816CD4075D7C28E600722FE5C0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mCEFA20A8D008EDA00FC84F8C2D0180BBC5A3EF48_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mA9AE7E492B9A882A86AE315C35B0193890F27711_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_mB158131DE2B8C36032ACF29561E858476657C03B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m7548419B6DB82A1BC77EF6FE26BD9113CFC850FB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_mA16B39314A196C91838E0B02331C9F2845BA5382_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRendererListHandle_t2DFC72A560B979AE0BAFBABBD8B9AF5DC1FEFEBA_m4B7CF4C66DA068317554D10CF8A28A9DA5E9A457_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_m2140283D9C570D3A27552D2B9B4070C79E3489E5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m5671207FE987F8AB4A78A6CC4701D050AE384FC9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m0144F8C0F491A25CEFC8D00E1508F27954320ACF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mF3E3C1B81B1866464089F56C8207424D18B80F5B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m36300DF4E37F02A69B8FAF8D9FBB499B3E654F0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_mA298A5ADF0F77D175872621D2B840C55244EBC6F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mEE0932E8AEFEC43D59F88ED6D2F25904639AE5F0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_mC4BBD91AE0819AF882CF0614BC396FE939DDFE9D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m07F43344DDC659024604ADAB1622C3BD5A05EABC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m112667268C86B5F99D66D29D2F3091A478749422_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSerializedCommand_tC29E0C661BDD3D6C4B4EAEE095AADFCDF5CE97AB_mF188FB1252EF50483117F28A7AA993DBAD5C1E25_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_m6A10828ABC8F454779DCD2F0189A82F36256F97B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m3055025C1B65401F284A4F796E222F8A0AC47A7C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_m600F0E8E409D96D31F56C5C25324FCE2B92DAABA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mEFE88C871AE1801784B83B0425730F499BDE1964_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF4B37A7431E25B623D74EEF7BDA201A6B7C7E83C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mD47C7E9C6354F0540EE333C7EF2B1A365E0B1C92_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSpherecastCommand_tE6054B0BDEE79BBBA6262513060985ACE4E3910B_m7D027A2267E009913377CC9421255A646A3F535F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m14CEAACFF9DED571CB990F68A030D7CC4651B221_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_m69336E4DE260A2B67618AF722E11A64328CB74BF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStringOffset_t429FFE4819A3944F4D1176FF9582DBADA89A1DDE_mA6A50EC49573CD6DE10F129DB8BC7ABF7E86A76D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mE246DD0980BFD22F21E835F061E6709D856B32BF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_mB6002D5E4FA943561DB76841880862BBD7F6C471_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m548D6C7702B48B4C82AF3B3CE876EFCE6D0B80AE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_m77C50B78B3DFB314E2D8971B5B5B68B4A7E1B421_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_m1CD203E97A857DE31F2CCC594777D1FED97BD9D2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mB568557216CFA8A170FC400E8BEDF70D6BDFA43F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_m719F704610878AC2E5C4D473478573DBECDAD276_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_mCEB009B0BC7EE227E053F846BD98AA5335B516C9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_m86FF794EE5AF1A8F70103A184C952C2F4581C1C7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSubstring_t2E16755269E6716C22074D6BC0A9099915E67849_m354943F6204BD7A764CE0BDD9517752191A3F173_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026_mE5A71BEDA0DAAA2D3BE6D537C8DE71C994FDA6BF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34_mCE4FE33526CF9A986D39D5E71301362DC13AA12A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_mDED2DE8DE99B071B40668D90492A286B96D479E8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_m6458D0161D51CA1401BD4DA983F6BAC5F221E947_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m55E77CDB3D31C388386EA884A05901EB9EDA3ECF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m79A013CAC403AAC54518082FBF214240F5CF54B1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mD42B99FD71186DCE4737D0A2D3A64A5AB91823C7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB72B8E0A5B54249FE2B106E2B07C801DBE5FA33A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_m703F98D03626C19253EC6A3BD2C8BCE497988E9B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTriangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290_m1BF768EBB2E8FEA65748E1AEC6CEF74F3CA920ED_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mED1E8E6B6574312E23424258FF57A01E7BA9AD50_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mB7114FED4DCB9566613BD855E85678218AC6C93F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mD54A9BEA00FB061388CAC24D3F0FCEDDFB2E0B8C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65FE2EEC2706812FBF7CE25B1AAAA02F8966D4EF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7BCE33CF342376EBC4BFD27568B4B75C682801BE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m751D54110C3F75FC82B3DD1F1A31F159AB2D472A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7A749C2A0049AC898751B6B8798B5A3A3BF99D15_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mEE13EE5863C71B3416C3B2AD5EA5DFAD0CA3ACAA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_m4EE165BACEACB1DBAEA9D771BAA905E507142F42_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_mA827ADD140F545D3F0369980C1D9AB6380B79C7A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m00713EB65E249430026B4D772CB3FFCAE7B5989D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0D87CD6D4399BAF9F45F9A5C4773669D057FCAA6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m19CBBAD5A6DBE74CA2028C3FA013745A34F44174_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m70DF1DA7434ACD56051C5C1B8D71D950D683A07A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE08753840A9F0DC719079D39ECF5A79E516403B2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mCBB9BB38B75525599CB7F17DFD58DAF845A4C2D5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m92B452A0C28BEBBBF5077822C6979A6DE54A9AEF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m2D669FFEE8C4367BF30D97F425094A6692AF977A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m0FBED4313AA9BE2E6D7C87545CADC8DFB80D49FD_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVisualEffectPlayableSerializedEvent_t81FFD0AB85C7A0D22E898F03776FD3513BB4B4C1_mAD2B5F22AA2D35FB250D9720A09193C24471209E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWorldSpaceData_t1F653E7DB8EA00BA1A22EC93964627BCB938E922_mAA00E3C506D7815F875C188632A803E50AB81802_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m6024EF54F4166BAD3DB90D61E3A3ED56305F7B59_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m62E09A49C17D6054301D7ACD2C841EF52D0DC6CA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_m44834C692B3BA2CFA13BC58A454310752F5147DF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m03C58E08204449A487EDDA9D0D01D8058C01DE33_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m36C68BC159395DAE262FAD5EEFC56958D5BCD40C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m4DA8AEB330DA604DFD5407B93BCE832AE36E875C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m48AC3229B5CA14690E2393DCD026878F37562268_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m53ED08B6211A2A3E17C884D87B401C8048D420DB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m3EF58D37B3ED1411F294170764B6D9852568B6B1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m8DCDB54689F63D6133BEE93E6BB61D0762A4B092_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_mC12837362913B71C603C79D03B49697A849793BA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNotificationContext_tDD3427B7EC4DB358C79E077AEE029BBFE128AD2A_m3575FF96747A8D9946F083B10C2D8182A2F0AA6C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m498E97C1F22EFD7845506BB03B31CAAB430A31E8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m96A1798C54D25442E5ED5E7CD163A95317A63C02_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_m706FB517938EC472ED6DB92DDF6B00ED1CB25FAF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m740ECCEC3DC3FC69D6D0515ABF40B8AC631CFBA2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m70EDF969D9CAF218348BD2583366FD9204BC02C3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_mE82CF7B80AE01EC1C5A0A72163BB2E6C004AB24D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4_mB5D099368BA2CA568714CE2325726F0D2408713C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_mDCCA843E8D87EA85B3DEDC317322A519EEF8FA9F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_mCFDB85CD8F7BA699B04AF458DD13F0BBC9320BD0_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393_mB77CEAAED49E143E1280D27C6C49FFD083C95302_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_mF512AA1D5B8B55A4FB0FAE3DAAE65B431BAB5E7D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_m34475E4CC00F4585A8E5C3B9C3C0DB22D82C90CB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D_mC48E96145B6B2A7A111BA83D46BC84DF931FF97E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_mD442FC929645A806DF412E181CB68352282F11D7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mDC9B5115F282F95542CC1266E02D050620D904F8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_m87B4C0501A7EBB8151886E68D2FBF3D2AF67AB08_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m7E59E0C43C8F243C69BC0C91CF4EA5A3F824EB3F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m65716715AEE40FF6771917CF0E78E39F3F45912B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_mE6483B4F791E5864BB2B7A5627E93BC2128BB141_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRegistration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_mDD29360E949F4B7D744FEE0ED62CE74DE0080FEF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_mF59EE3869BB6BA4BDAF2A71F305AA53216A0D111_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m33A848A59952E28CDF8ACDB802F020D99C10CEFA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_m1FEC868079C602878108729FC6600C5443DB2547_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7_mFF64F383BBA92F4A5C3C882CB5E7FFC338A06241_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_mCCC6BD5192F0EFDBB253C247D2F571A0A0013F7C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F_mB5A43D7F5D203F970E85C72AC68ABB5C3F916639_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_m6B1DD8319CFCF7A0759DE6DF09FDE77ED63ED22B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_mF326C078D49F42BA12AFFCE4F769314D693335EC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_mB28429861542EAA9FC4DD9A763DE144933A90A24_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_m214301A4BD2866383607FB22003A9342A1131081_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_m0B13FC1061DB458F4C2517D15F1054F995874C06_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m6EEA3E4B9AFFBEC67BB52BF47D9167413D2FAC00_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_mC860E23C846EECC6CA28FF04D50492ED45E23E21_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m26FF50E70FB7FA03C60587947DFE78E9AF32890D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_m07BF58A08A26130F3762B7CE477F75146F0EB3D2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C_m820B128ECAAFA7F4478EB75DFB55C946FB4E950F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m7F4844A7FA91217178357818C62F85D1C9BC8474_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInput_tD8D01F2A6200BED9D1B4E6137826AD3FA4901A31_mCA8F75B622E2A424D8FD134FDC05F395519FE4F7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOutput_t7A6747E925D1D50C2B5C4F52EE622EC5CBDDEF22_m43B484F46CB7446F1092CE750FF3FC4D42B54104_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_m508E0FF213E8B8B04C54113CBEF6A85972C9F94D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m15937617870D02E7D0BCE5BD93149494D0672153_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_mA4B3EFE1E4ED83BFF25F7D9736A24E0B4D434003_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDisplayNode_t90DB5755B55521D46D3C5B616A28E43F7F8E6109_m2376EEE877EBC302FCF33AD37E23B88C01F36F71_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m488C64FB9FAD3FB3D7102E41C8380324D8A00A5F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B_m009CFD55632103939A81DEEA68C4AB64F2D65018_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E_m3023C35485B17F3ED22BE219AF01A2EE4A4D4A4C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_mF58ACB2C463E2B08876C7EF7A0B034331E51FFD4_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_m8AC7EFC2D3990DD11B8E0B2FF9608AA46C4E4982_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisStreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A_mFCAFC6DB9A1068FB9A4227390F6FEBF4AC4A8578_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_mE1B2CF43EC7E1CBFD630086F50935215B6FE9486_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_m843113A2A17C682D6365EC071B15105ED4449304_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_mFA8CB48402552A3511824388D3A515F5E3F6758B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mA8B31A6B49A4D9CE35E5D70D6B6D1FE145AB009C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_mF5A3CA4C20FB5F7269DA569ADAED132B6E9A9F11_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_mFCBCE5365D861BC7CB87C411A181D08A11251C2E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSegment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_m2002F3BFCB0D37AA32C54F8BC6FC885F2FC9E4BA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_m406DD5AAEA9CF4132A1D1A844A18EC26AA2165F6_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_m70397B41EC752836C3313E8CFF97447E4A8335EF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m92B6622AF61DA697FDB82271F54ED3E5700FF461_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCachedSideChannelMessage_tCDB7AB7547712A23E9A8D271E6853FCEB877C218_mE795F658C19896EAF1D69413D67F57B082367F4C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m36B124D74D670B4EF26C4084506CED8809A9CBC5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_m25E68AA999FC576AF9F59709AE10CED5D198E252_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_mB2ADD02F2624CCA79363EA84E31C9E0BAA7A5E4E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSelectorWorkItem_t6102FC514D46872DD33C533B82F10A8B875C48F5_m0B1D7B222AD296A3EA45811ADA611765E2D40643_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574_m36B4C384C51F87826A81CA0B98D28662DB18EECA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_m9EB95A4F554EA942451473A58E7F73AB21B706FC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2_m2EDD59CC7D1E77940D45005B966897B480833AF2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F_m1EC002FFEED954BAEAC1231FCA091ED8B83CA643_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mF05CF42DF2AFF0B432C748C37EEE4500CEF65B1A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_m0D58005CEBACBD6B3BDCFDF869425C66F10A0A2E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m07BCC36A9DE1F822FA1E3F607EEAF64672351DBE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m755538E0B42B4F62730ED547448C7C2564324691_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_m39D499796B3498234E549F85266A634141BDBF04_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_m7C3B7FE9CB03EF2B9DA8462FF77634BDD76107D5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m6E09AB115A87A4604FC27389E564A069DE477C06_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mCFBFB983839FA8F2EA12AF10CBD5EFFAAEC97D7C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRaycastHitData_t5EAB266730389AB27715962670C2512800451841_m0AF8C614A90F177A4663C78CF22902D53612E0C8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED_mDAD4315819D25753026C85C09AEA739D114B0F58_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_mD9B2AF8E7E5B75BB55165A0B3756AC3C4F13492F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_m0D46A5B7724505577ED011B181D2B505F371F339_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E_m52C63253E2B054AAC9A933038D094EF897722FBD_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m132D986D32E7CE29A247B039F02C3CE54F3C0B3C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBone_t45A5AE3FD1F023346E79F0A823629DF304C64C07_m45BF76130F73E8EC854C68977F0D770ED4159B40_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisClipEvent_tB1B5AECDBECAE26DCDD484137C0921A674007B98_m162B67346982DC94E2B3730D686BF4090E766D74_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisClip_tC949C974A2BADA24828069ADEFE11370814BBF65_m0C9C976D6864A921C516BDAC1E928485160953FB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEvent_tE4504A5B6293BF5B848A7939E03B434FABD98C4D_m5ED5D293020723B3C629FAA5424BA85BFAA8B6DB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m3304D68567489842E325534FFECBCC3614E1350B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m5902ADB97DC959E05D4FD94BD5E2E9C0C2282963_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mC3D2CAFC3B50CA1811D2728A5AD3EEA702C645CD_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m40BAF75B08A450C00310925E7A47C34180E34F35_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m0C85289561DF1F98E92EC985F4AEC8C6AC908B03_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_mDFC617A785E9D4E598D57549212038FA3A4BCA27_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMember_t80DC9FA2D006E30C065284F045DD2C635250A984_mFB992D4C7EB4FC9DC0869401B6DB17DECAEB6BCF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_m621FA7B20D83A33EF9656930BC222A23EB0F03D8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_mB67C94EA97C335F45DB731E8B0A90A1E0F5E91F2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisLayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_m23F83651DEA8666AA34809FD0513A75BF597C780_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_m1F408B33EEB9C50D33DCC0C7F0CE1166E1766341_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m0C6DFB3806F79F5494FCAE5D132C88A41CE99732_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_m3D7BC986FAEB857DD187EFD8B0EB3FECD1E3805C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m47A58EAEB04476A6AC24E6D05F7861D21335917E_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_mF3B4C1ECF5910952C8A546465B6D92D3A433E995_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_mF52512494448312013ED12CFE61CEC0D09435F98_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_m4BA0DF95A6B954DF7BE55053FB2CF37EB75A1F4F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF0611EDC41DA8F4F03BD135DCF20E262EA42D3E3_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2);
	const uint32_t SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___0_getter;
		RuntimeObject* L_1 = ___1_obj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_mE4B36707DB7E08FCD6D3A3799C958AB637E8AE64_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___0_getter;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRendererData_TryGetRendererFeature_TisRuntimeObject_m77C40288EAE6FCFB88FA24DFE755A3C7E3BFFDB5_gshared (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* __this, RuntimeObject** ___0_rendererFeature, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEDFBA1A78C8BF94339410CCE79ED2B8947023112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m699A9E1D941711453887F76F5DD8E797A46A5D48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65E52814F3289E84E69A7324ED46026114A0FFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0ED7F868DFBF0B8A5F2C3A7252C548079FD8BB4F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* V_1 = NULL;
	bool V_2 = false;
	{
		List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* L_0;
		L_0 = ScriptableRendererData_get_rendererFeatures_m1DF4156F6E0733E01D096AE7A3C43EC6C9D2DD45_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_tAE036FA290FC0CC475BEF0D5890C759A8DA9B786 L_1;
		L_1 = List_1_GetEnumerator_m0ED7F868DFBF0B8A5F2C3A7252C548079FD8BB4F(L_0, List_1_GetEnumerator_m0ED7F868DFBF0B8A5F2C3A7252C548079FD8BB4F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{
				Enumerator_Dispose_mEDFBA1A78C8BF94339410CCE79ED2B8947023112((&V_0), Enumerator_Dispose_mEDFBA1A78C8BF94339410CCE79ED2B8947023112_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* L_2;
				L_2 = Enumerator_get_Current_m65E52814F3289E84E69A7324ED46026114A0FFAE_inline((&V_0), Enumerator_get_Current_m65E52814F3289E84E69A7324ED46026114A0FFAE_RuntimeMethod_var);
				V_1 = L_2;
				ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* L_3 = V_1;
				NullCheck((RuntimeObject*)L_3);
				Type_t* L_4;
				L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				bool L_7;
				L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
				if (!L_7)
				{
					goto IL_0042_1;
				}
			}
			{
				RuntimeObject** L_8 = ___0_rendererFeature;
				ScriptableRendererFeature_tF2ED08AD2498105378D4DAB0386A0F8A144EF4C6* L_9 = V_1;
				*(RuntimeObject**)L_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 2)));
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 2))));
				V_2 = (bool)1;
				goto IL_0064;
			}

IL_0042_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m699A9E1D941711453887F76F5DD8E797A46A5D48((&V_0), Enumerator_MoveNext_m699A9E1D941711453887F76F5DD8E797A46A5D48_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		RuntimeObject** L_11 = ___0_rendererFeature;
		il2cpp_codegen_initobj(L_11, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0064:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetArray_TisIl2CppFullySharedGenericAny_mC7AEFD834436D5A0E06B5386C2784B0D6766DF43_gshared (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE ___0_sequence, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* ___1_segment, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_0 = ___1_segment;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		bool L_1;
		L_1 = ((  bool (*) (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE*, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_sequence), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetReadOnlyMemory_TisIl2CppFullySharedGenericAny_m53F985E97230FC5BC4862844B14AD6605B2CA05D_gshared (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE ___0_sequence, ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F* ___1_memory, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		bool L_0;
		L_0 = ((  bool (*) (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_sequence), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F* L_1 = ___1_memory;
		il2cpp_codegen_initobj(L_1, sizeof(ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F));
		return (bool)0;
	}

IL_0015:
	{
		ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F* L_2 = ___1_memory;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F L_3;
		L_3 = ((  ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F (*) (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_sequence), il2cpp_rgctx_method(method->rgctx_data, 5));
		*(ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F*)L_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((ReadOnlyMemory_1_tE6A387F94837A9D216522949CA6F6A7EECA2442F*)L_2)->____object), (void*)NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetReadOnlySequenceSegment_TisIl2CppFullySharedGenericAny_m99C8A134CFABB04364B3D41AD50BAA6B5E2BDFD1_gshared (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE ___0_sequence, ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00** ___1_startSegment, int32_t* ___2_startIndex, ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00** ___3_endSegment, int32_t* ___4_endIndex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00** L_0 = ___1_startSegment;
		int32_t* L_1 = ___2_startIndex;
		ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00** L_2 = ___3_endSegment;
		int32_t* L_3 = ___4_endIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		bool L_4;
		L_4 = ((  bool (*) (ReadOnlySequence_1_tEAF97D26379B56E892BE5F6C2BD06CE86EFD2CCE*, ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00**, int32_t*, ReadOnlySequenceSegment_1_t1203C25058F3DBA79F5B64AFF118420887AB7D00**, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_sequence), L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerCalls_ClientStreamingCall_TisRuntimeObject_TisRuntimeObject_m8CF83EF0CA5425385BA86FE5C0B5E569233C0C7B_gshared (Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859* ___1_handler, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* L_0 = ___0_method;
		ClientStreamingServerMethod_2_t360261C59F2E294A55CA024C4D0A66ACD29B9859* L_1 = ___1_handler;
		ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119* L_2 = (ClientStreamingServerCallHandler_2_tE54CA8704FEF90CAF3556C5157AB820306E70119*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		ClientStreamingServerCallHandler_2__ctor_m654FB762FEC3DDADB8980F98308BA3F2FB605941(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerCalls_DuplexStreamingCall_TisRuntimeObject_TisRuntimeObject_mDF59864C5AC2CB82CAB49677B0E2BD5D1F0AD905_gshared (Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* ___1_handler, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* L_0 = ___0_method;
		DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* L_1 = ___1_handler;
		DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE* L_2 = (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerCalls_ServerStreamingCall_TisRuntimeObject_TisRuntimeObject_mA0251288E94B37E9D75A5B1B69FBE8F45A6D1213_gshared (Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671* ___1_handler, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* L_0 = ___0_method;
		ServerStreamingServerMethod_2_t9574EE4812EDBF60D2688C0FA8CC7B7018ADC671* L_1 = ___1_handler;
		ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6* L_2 = (ServerStreamingServerCallHandler_2_t438D3F7CC2514B015EDC10FAA8257EED941F20C6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		ServerStreamingServerCallHandler_2__ctor_m0F951EECDED40527099EECD27613B89A4E03CEA3(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerCalls_UnaryCall_TisRuntimeObject_TisRuntimeObject_mEA7EC5B60EF1A4AC27751EFA1161CD01137721C3_gshared (Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772* ___1_handler, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* L_0 = ___0_method;
		UnaryServerMethod_2_tCC2EFB94DAB1A40EB173C610CC42A64059551772* L_1 = ___1_handler;
		UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E* L_2 = (UnaryServerCallHandler_2_tE75457BDC5773ED2B09494A7817812618941DD1E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		UnaryServerCallHandler_2__ctor_m9EC9F44254932A80E5FCA8DD7E4EE7464E830534(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_GetOption_TisIl2CppFullySharedGenericAny_m1020A101EFC9871AD4276154F5CA8D747D197B13_gshared (ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2* __this, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* ___0_extension, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
	memset(V_0, 0, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
	{
		ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* L_0;
		L_0 = ServiceDescriptor_get_Proto_m8BB29E43724945E3D54B1929EE112CFF8BC4EF0C_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* L_1;
		L_1 = ServiceDescriptorProto_get_Options_mD64A84716C82BE13B86789E4F10A1D9457358ACB_inline(L_0, NULL);
		Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* L_2 = ___0_extension;
		NullCheck(L_1);
		InvokerActionInvoker2< Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_4);
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		return;
	}

IL_0024:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_7);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 3))));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 3))), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_tA298153D745B14413D3DEC4C5EA0BA35DBC2C101);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* ServiceDescriptor_GetOption_TisIl2CppFullySharedGenericAny_mDEBE867F7C073A2F5A9B92FB865B5C18C592B776_gshared (ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2* __this, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* L_0;
		L_0 = ServiceDescriptor_get_Proto_m8BB29E43724945E3D54B1929EE112CFF8BC4EF0C_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* L_1;
		L_1 = ServiceDescriptorProto_get_Options_mD64A84716C82BE13B86789E4F10A1D9457358ACB_inline(L_0, NULL);
		RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* L_2 = ___0_extension;
		NullCheck(L_1);
		RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* L_3;
		L_3 = ((  RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* (*) (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B*, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_3);
		RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* L_4;
		L_4 = ((  RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* (*) (RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceManager_GetService_TisRuntimeObject_mCF50A0038278469A11C74F40ECA8AE0B27AE52F7_gshared (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___m_Services;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7, IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var, L_2, L_3, (&V_1));
		RuntimeObject* L_5 = V_1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0024;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceManager_GetService_TisIl2CppFullySharedGenericAny_mFE75687EFA3BBB6BAF2733D312FE10F9F7194707_gshared (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
	const Il2CppFullySharedGenericAny L_8 = L_6;
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
	memset(V_2, 0, SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___m_Services;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7, IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var, L_2, L_3, (&V_1));
		RuntimeObject* L_5 = V_1;
		void* L_7 = UnBox_Any((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)), SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
		goto IL_0024;
	}

IL_0024:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_tE82034840514F307E21B6FFC415C4940FBD29CF9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceManager_StopService_TisRuntimeObject_mEC39D4B04053482BE39A07BB6ABFAECF9464D139_gshared (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IService_tB6943624153C7B44A54DF14EBD2D7C843B7B3CC5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = ServiceManager_GetService_TisRuntimeObject_mCF50A0038278469A11C74F40ECA8AE0B27AE52F7(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		NullCheck((RuntimeObject*)(V_0));
		InterfaceActionInvoker0::Invoke(0, IService_tB6943624153C7B44A54DF14EBD2D7C843B7B3CC5_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0));
		RuntimeObject* L_3 = __this->___m_Services;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(6, IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var, L_3, L_5);
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceManager_StopService_TisIl2CppFullySharedGenericAny_m86C233BC1F6625D12D6CC7794E9C4A436491B241_gshared (ServiceManager_t34B31F2EDF42C15BBD978EDCC6B759539743DEDF* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
	memset(V_0, 0, SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
	bool V_1 = false;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t7DF365D486713C1FE9D7BB7EAEE5A01BB2E0D264);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		bool L_3 = L_2;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)(Il2CppFullySharedGenericAny*)V_0);
		RuntimeObject* L_6 = __this->___m_Services;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(6, IDictionary_2_t5C66CA874FF1BDA090CD606305BA7497929CA042_il2cpp_TypeInfo_var, L_6, L_8);
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceOptions_ClearExtension_TisIl2CppFullySharedGenericAny_m0B277C8BD5DE98F33207A087C0A4B8FEB71F0C60_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* L_1 = ___0_extension;
		((  void (*) (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceOptions_ClearExtension_TisIl2CppFullySharedGenericAny_m26752BEE30BC33E57DD6DD57B1AFB20F3E5D8398_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* L_1 = ___0_extension;
		((  void (*) (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceOptions_GetExtension_TisIl2CppFullySharedGenericAny_m0BBA8CB42FF3558379ED98108FB2FEB89173F714_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* ___0_extension, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF5BDD2140EC02C238FB271DFDEB2D28A6AFE3F8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tF5BDD2140EC02C238FB271DFDEB2D28A6AFE3F8E);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* L_1 = ___0_extension;
		InvokerActionInvoker3< ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tF5BDD2140EC02C238FB271DFDEB2D28A6AFE3F8E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* ServiceOptions_GetExtension_TisIl2CppFullySharedGenericAny_m8093BBA4D5E82142DB598A482E92514DC754C280_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* L_1 = ___0_extension;
		RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* L_2;
		L_2 = ((  RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* (*) (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* ServiceOptions_GetOrInitializeExtension_TisIl2CppFullySharedGenericAny_mF5CAEED223EEEEB58C6607AE6C6A3BEA4C13D4D0_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920* L_1 = ___0_extension;
		RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* L_2;
		L_2 = ((  RepeatedField_1_t80883CB879A33724A72EE343A4184742179D3972* (*) (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, RepeatedExtension_2_tA25862685B641E16602D11C7AF7D7E34834DA920*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceOptions_HasExtension_TisIl2CppFullySharedGenericAny_m63722559575888D6C8CB6C4D5D849BA3B5CAB70B_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* ___0_extension, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* L_1 = ___0_extension;
		bool L_2;
		L_2 = ((  bool (*) (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceOptions_SetExtension_TisIl2CppFullySharedGenericAny_m39D700DD79EAD0EF8AE5590E36D63D152A0ECD9D_gshared (ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* __this, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* ___0_extension, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t3190F2657B95DC815DAB9F0AAC744A2901D0AA41 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t3190F2657B95DC815DAB9F0AAC744A2901D0AA41);
	{
		ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D** L_0 = (ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**)(&__this->____extensions);
		Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE* L_1 = ___0_extension;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_t3190F2657B95DC815DAB9F0AAC744A2901D0AA41);
		InvokerActionInvoker3< ExtensionSet_1_t892AFA99E5BEDBD2442606ECC490E8B57A73BA9D**, Extension_2_t6DB9FBEAB9A239852EA41C69CE60D9612DA8CFDE*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m01819E5BCB283FECD09F412899624B68D23D408F_gshared (RuntimeObject** ___0_currentValue, RuntimeObject* ___1_newValue, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_currentValue;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___1_newValue;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject** L_3 = ___0_currentValue;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject** L_5 = ___0_currentValue;
		RuntimeObject* L_6 = ___1_newValue;
		NullCheck((*L_5));
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (*L_5), L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		RuntimeObject** L_8 = ___0_currentValue;
		RuntimeObject* L_9 = ___1_newValue;
		*(RuntimeObject**)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)L_9);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetEquatableStruct_TisIl2CppFullySharedGenericAny_m46B9D6D20F31E6CD9CA6AEBE837E7124D0FCED6F_gshared (Il2CppFullySharedGenericAny* ___0_currentValue, Il2CppFullySharedGenericAny ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t28AEE5CED085043F4021279BD15E4A4595D95B16 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t28AEE5CED085043F4021279BD15E4A4595D95B16);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_newValue : &___1_newValue), SizeOf_T_t28AEE5CED085043F4021279BD15E4A4595D95B16);
		bool L_3;
		L_3 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (void*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_newValue : &___1_newValue), SizeOf_T_t28AEE5CED085043F4021279BD15E4A4595D95B16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_5, SizeOf_T_t28AEE5CED085043F4021279BD15E4A4595D95B16);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_5);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC5853627DE5D7B57CA91271BE9B87C37468C5B0_gshared (bool* ___0_currentValue, bool ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool* L_0 = ___0_currentValue;
		bool L_1 = ___1_newValue;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_4;
		L_4 = Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		bool* L_5 = ___0_currentValue;
		bool L_6 = ___1_newValue;
		*(bool*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m092CE7A99757F329A043C95552E8B3B423FCCC3C_gshared (Il2CppChar* ___0_currentValue, Il2CppChar ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppChar* L_0 = ___0_currentValue;
		Il2CppChar L_1 = ___1_newValue;
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_4;
		L_4 = Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		Il2CppChar* L_5 = ___0_currentValue;
		Il2CppChar L_6 = ___1_newValue;
		*(Il2CppChar*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE6315CF1CE5FA8F8C0132CCC9F41080CF201D0AB_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___0_currentValue;
		int32_t L_1 = ___1_newValue;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		bool L_4;
		L_4 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t* L_5 = ___0_currentValue;
		int32_t L_6 = ___1_newValue;
		*(int32_t*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6625DA5A19FE58FF1A311A17DF1531C080135BF4_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___0_currentValue;
		int32_t L_1 = ___1_newValue;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		Il2CppFakeBox<int32_t> L_4(il2cpp_rgctx_data(method->rgctx_data, 1), L_0);
		bool L_5;
		L_5 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t* L_6 = ___0_currentValue;
		int32_t L_7 = ___1_newValue;
		*(int32_t*)L_6 = L_7;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1695F711101D5AC5A1F63CE010CF455DDA1627CC_gshared (float* ___0_currentValue, float ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		float* L_0 = ___0_currentValue;
		float L_1 = ___1_newValue;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		bool L_4;
		L_4 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		float* L_5 = ___0_currentValue;
		float L_6 = ___1_newValue;
		*(float*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisIl2CppFullySharedGenericStruct_m02A4246793C5C70B3AEE28C1B34979AE4CF52035_gshared (Il2CppFullySharedGenericStruct* ___0_currentValue, Il2CppFullySharedGenericStruct ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4558918B360B6D33767D3C706E5D23EACD2BE42E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t4558918B360B6D33767D3C706E5D23EACD2BE42E);
	const Il2CppFullySharedGenericStruct L_6 = L_1;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_1, ___1_newValue, SizeOf_T_t4558918B360B6D33767D3C706E5D23EACD2BE42E);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		bool L_4;
		L_4 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, (void*)L_0, L_2);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		Il2CppFullySharedGenericStruct* L_5 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_6, ___1_newValue, SizeOf_T_t4558918B360B6D33767D3C706E5D23EACD2BE42E);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_5, L_6, SizeOf_T_t4558918B360B6D33767D3C706E5D23EACD2BE42E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_5, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m0AB9B5D3D06FCB75E487FA73ADF780D2A90F22DC_gshared (RuntimeObject** ___0_currentValue, RuntimeObject* ___1_newValue, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_currentValue;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___1_newValue;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject** L_3 = ___0_currentValue;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject** L_5 = ___0_currentValue;
		RuntimeObject* L_6 = ___1_newValue;
		NullCheck((*L_5));
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (*L_5), L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		RuntimeObject** L_8 = ___0_currentValue;
		RuntimeObject* L_9 = ___1_newValue;
		*(RuntimeObject**)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)L_9);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8D96C8077BB7384F3CE2D22D7F7432CD43DDDC77_gshared (bool* ___0_currentValue, bool ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0;
		L_0 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool* L_1 = ___0_currentValue;
		bool L_2 = (*(bool*)L_1);
		bool L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		bool* L_5 = ___0_currentValue;
		bool L_6 = ___1_newValue;
		*(bool*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18A822ED66C0EDFFF967DD2EE9848945B34E87B5_gshared (Il2CppChar* ___0_currentValue, Il2CppChar ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0;
		L_0 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppChar* L_1 = ___0_currentValue;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		Il2CppChar L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Il2CppChar* L_5 = ___0_currentValue;
		Il2CppChar L_6 = ___1_newValue;
		*(Il2CppChar*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_m9C058D0B8344122080B4EA792AD0A489EB927099_gshared (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* ___0_currentValue, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_0;
		L_0 = EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_1 = ___0_currentValue;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_2 = (*(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11*)L_1);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* L_5 = ___0_currentValue;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_6 = ___1_newValue;
		*(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED6D8023FCEE74764642E262219A183C576362A_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t* L_1 = ___0_currentValue;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t* L_5 = ___0_currentValue;
		int32_t L_6 = ___1_newValue;
		*(int32_t*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m25D8BCECB38D1D07CD8BCEDE0739A0F7EF955150_gshared (int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0;
		L_0 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t* L_1 = ___0_currentValue;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t* L_5 = ___0_currentValue;
		int32_t L_6 = ___1_newValue;
		*(int32_t*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisNavigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_m3647C557CFFC5721FAAC342AC4C9613B69F15F6B_gshared (Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* ___0_currentValue, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_0;
		L_0 = EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* L_1 = ___0_currentValue;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_2 = (*(Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_1);
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* L_5 = ___0_currentValue;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_6 = ___1_newValue;
		*(Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnUp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnDown), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnLeft), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C*)L_5)->___m_SelectOnRight), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF97FFCC58933AFC108E72BFF17641AA1305A628_gshared (float* ___0_currentValue, float ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0;
		L_0 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		float* L_1 = ___0_currentValue;
		float L_2 = (*(float*)L_1);
		float L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		float* L_5 = ___0_currentValue;
		float L_6 = ___1_newValue;
		*(float*)L_5 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_mE16632C284B9E24D8747A1D0A25CE4C3D5B102EC_gshared (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* ___0_currentValue, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_0;
		L_0 = EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* L_1 = ___0_currentValue;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_2 = (*(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_1);
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_3 = ___1_newValue;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* L_5 = ___0_currentValue;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = ___1_newValue;
		*(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_HighlightedSprite), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_PressedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_SelectedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD*)L_5)->___m_DisabledSprite), (void*)NULL);
		#endif
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisIl2CppFullySharedGenericStruct_m53D5867BC66A8AE3BF6ED2A7515C83C8EA8DB375_gshared (Il2CppFullySharedGenericStruct* ___0_currentValue, Il2CppFullySharedGenericStruct ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	const Il2CppFullySharedGenericStruct L_6 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy(L_3, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		Il2CppFullySharedGenericStruct* L_5 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_6, ___1_newValue, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_5, L_6, SizeOf_T_t2B35672C0DFF2AE016E1355CBCBFFADAEBE7E740);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericStruct*)L_5, (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ShaderData_GetOrUpdateBuffer_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB93A79A40A529AA1CE4D71CADD4986F2CA3D79B7_gshared (ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___0_buffer, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_0 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_2 = ___0_buffer;
		int32_t L_3 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_5, L_3, L_4, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_5);
		goto IL_0031;
	}

IL_0013:
	{
		int32_t L_6 = ___1_size;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_7 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_8 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_8, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_10 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_10);
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_12 = ___0_buffer;
		int32_t L_13 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_15 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
	}

IL_0031:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_16 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_17 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ShaderData_GetOrUpdateBuffer_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB7EB88CF218EAF7986B61EFA9566ADCFF447A6B5_gshared (ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___0_buffer, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_0 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_2 = ___0_buffer;
		int32_t L_3 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m29C11BF8C434B5768FA2FA60E3E4A9C7FE498762(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_5, L_3, L_4, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_5);
		goto IL_0031;
	}

IL_0013:
	{
		int32_t L_6 = ___1_size;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_7 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_8 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_8, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_10 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_10);
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_12 = ___0_buffer;
		int32_t L_13 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Marshal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m29C11BF8C434B5768FA2FA60E3E4A9C7FE498762(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_15 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
	}

IL_0031:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_16 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_17 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ShaderData_GetOrUpdateBuffer_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m42B9F88CD2E4F0DC0E4E995EE91F0FA5229229F2_gshared (ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___0_buffer, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_0 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_2 = ___0_buffer;
		int32_t L_3 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E3735567A9066EF764FA6AB2E80EA66A074B30E(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_5, L_3, L_4, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_5);
		goto IL_0031;
	}

IL_0013:
	{
		int32_t L_6 = ___1_size;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_7 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_8 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_8, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_10 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_10);
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_12 = ___0_buffer;
		int32_t L_13 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Marshal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E3735567A9066EF764FA6AB2E80EA66A074B30E(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_15 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
	}

IL_0031:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_16 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_17 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ShaderData_GetOrUpdateBuffer_TisIl2CppFullySharedGenericStruct_m64A0FBCC747D569D6758BD0C0233427F94B2055C_gshared (ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___0_buffer, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_0 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_2 = ___0_buffer;
		int32_t L_3 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_5, L_3, L_4, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_5);
		goto IL_0031;
	}

IL_0013:
	{
		int32_t L_6 = ___1_size;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_7 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_8 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_8, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_10 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_10);
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_12 = ___0_buffer;
		int32_t L_13 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_15 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
	}

IL_0031:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_16 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_17 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ShaderData_GetOrUpdateBuffer_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m6CD53CB46B4065A5ACE36F7FBA7585D630F059CA_gshared (ShaderData_t149ABF5B880D5E69604B9F5A510F02D567464C19* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** ___0_buffer, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_0 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_2 = ___0_buffer;
		int32_t L_3 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m57103F03EBD40F07DF6E2875A446620B8C1FEB75(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_5, L_3, L_4, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_5);
		goto IL_0031;
	}

IL_0013:
	{
		int32_t L_6 = ___1_size;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_7 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_8 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_7);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_8, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_10 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_10);
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_12 = ___0_buffer;
		int32_t L_13 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Marshal_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m57103F03EBD40F07DF6E2875A446620B8C1FEB75(il2cpp_rgctx_method(method->rgctx_data, 0));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_15 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_15, L_13, L_14, NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_15);
	}

IL_0031:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233** L_16 = ___0_buffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_17 = *((ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233**)L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5* ShapeFactory_Instantiate_TisRuntimeObject_m9B17BB83B083E88BCA4D4541DE2B94B7126A938A_gshared (int32_t ___0_pivotType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ProBuilderMesh_t399C8104C9E88190F91D6D0FC0EA2F7E7FDDF8F5* L_2;
		L_2 = ShapeFactory_Instantiate_m1CCC4FB7BB33256B8E8EF952F87361CD60D86024(L_1, (int32_t)0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SideChannelManager_GetSideChannel_TisRuntimeObject_mD0AE23C0CEECA11B38C144E157648125595753A5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m1953F22F27A0142CB3AD1C85DE93EFE382D4CA40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m852138E0E87B4155E5552A8E04C15FA3F0187AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAE6ED860C85D209F30D618BEA4BFDD76B35BA058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D00798DA88A674D293CCBE90C17BC10763B3237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m1D63999C67AACBD7BEA4F24655ABEE9722E5625B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_il2cpp_TypeInfo_var);
		Dictionary_2_t5146A8BA711F477B2267466A484378C1C8AFD22F* L_0 = ((SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_StaticFields*)il2cpp_codegen_static_fields_for(SideChannelManager_t8252D66C8EE968F94AFB634DE947F759D97DC899_il2cpp_TypeInfo_var))->___s_RegisteredChannels;
		NullCheck(L_0);
		ValueCollection_tB07563C8FF7E9DFF7536032D9835FC6C0FC22646* L_1;
		L_1 = Dictionary_2_get_Values_m1953F22F27A0142CB3AD1C85DE93EFE382D4CA40(L_0, Dictionary_2_get_Values_m1953F22F27A0142CB3AD1C85DE93EFE382D4CA40_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t5983465CF0E2A91D162680E51902E26C19E5DE48 L_2;
		L_2 = ValueCollection_GetEnumerator_m1D63999C67AACBD7BEA4F24655ABEE9722E5625B(L_1, ValueCollection_GetEnumerator_m1D63999C67AACBD7BEA4F24655ABEE9722E5625B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				Enumerator_Dispose_m852138E0E87B4155E5552A8E04C15FA3F0187AEE((&V_0), Enumerator_Dispose_m852138E0E87B4155E5552A8E04C15FA3F0187AEE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_0012_1:
			{
				SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* L_3;
				L_3 = Enumerator_get_Current_m4D00798DA88A674D293CCBE90C17BC10763B3237_inline((&V_0), Enumerator_get_Current_m4D00798DA88A674D293CCBE90C17BC10763B3237_RuntimeMethod_var);
				V_1 = L_3;
				SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* L_4 = V_1;
				NullCheck((RuntimeObject*)L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
				bool L_8;
				L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
				if (!L_8)
				{
					goto IL_003a_1;
				}
			}
			{
				SideChannel_tE3CCF7D6E82DF5F7E2D582844D96B3A4F8BC5027* L_9 = V_1;
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_005d;
			}

IL_003a_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_mAE6ED860C85D209F30D618BEA4BFDD76B35BA058((&V_0), Enumerator_MoveNext_mAE6ED860C85D209F30D618BEA4BFDD76B35BA058_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0053;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_005d:
	{
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 Sign_InferPartial_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E5C3D99E813B615EDEDA4EC3DF77527870541D6_gshared (Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1;
		L_1 = PartialTensorElement_1_Sign_mE06AC5C28ED68B6497988A72BDBD86D205EFCEFD(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 Sign_InferPartial_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD24BE61A5330CAE02D14CCD7BF35E1C263DCD4B2_gshared (Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F* __this, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1;
		L_1 = PartialTensorElement_1_Sign_m8B397EDAF69D7CC970B7E5047EA39CD43746E8C7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sign_InferPartial_TisIl2CppFullySharedGenericStruct_m82FC2180618E6CE307016A8209B295F4F7FBB99A_gshared (Sign_tE78039D54AD0E71E2D163B7B73495EC55AFD957F* __this, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_PartialTensorElement_1_t75372C27313E45FF1DDA1A026AA99BE3A3720758 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t75372C27313E45FF1DDA1A026AA99BE3A3720758);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t75372C27313E45FF1DDA1A026AA99BE3A3720758);
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t75372C27313E45FF1DDA1A026AA99BE3A3720758);
		InvokerActionInvoker2< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_PartialTensorElement_1_t75372C27313E45FF1DDA1A026AA99BE3A3720758);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* ___2_p, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* L_0 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* L_5 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* L_8 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E* L_13 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisIl2CppFullySharedGenericAny_mE8196D95B3DCDACF05F0AED3BF3269DD82F0533A_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7* ___2_p, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
	memset(V_0, 0, SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
	{
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7* L_0 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7* L_5 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7* L_8 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_12, SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_12);
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7* L_13 = ___2_p;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		il2cpp_codegen_memcpy(L_16, V_0, SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_t8C8AAF734E263950E9C1ACD02F6E3D2BAED5A105);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* ___2_p, const RuntimeMethod* method) 
{
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* L_0 = ___2_p;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* L_5 = ___2_p;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* L_8 = ___2_p;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_12);
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E* L_13 = ___2_p;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* ___2_p, const RuntimeMethod* method) 
{
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* L_0 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = L_0->___data;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* L_5 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = L_5->___data;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* L_8 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = L_8->___data;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B* L_13 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = L_13->___data;
		int32_t L_15 = ___1_b;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisIl2CppFullySharedGenericAny_mE258B030C3CFBE4323C3A7CCA9A4CF07A5F18F70_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = ((Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticFields*)il2cpp_codegen_static_fields_for(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var))->___s_InsertionSortSampler;
		ProfilingScope__ctor_m4B73587A2295443A73B64DDD3D484D8EAECC0D65((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_0), NULL);
				return;
			}
		});
		try
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_data;
			NullCheck(L_2);
			Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_3 = ___1_compare;
			il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
			((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_data;
		int32_t L_7 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_14 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___0_data;
		int32_t L_22 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisIl2CppFullySharedGenericAny_m1B6505ED6D8B2FBAD8F4F57A9743CE2C048DC536_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_15 = L_4;
	const Il2CppFullySharedGenericAny L_23 = L_4;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
	memset(V_1, 0, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_data;
		int32_t L_7 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1)))), L_11, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1)))), (void*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_14 = ___3_compare;
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		NullCheck(L_14);
		int32_t L_20;
		L_20 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_19: *(void**)L_19));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_data;
		int32_t L_22 = V_2;
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1)))), L_23, SizeOf_T_tCB73ADBBA52B31681DC8EB365C3E51FBAD6ACD94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1)))), (void*)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_6 = ___0_data;
		int32_t L_7 = V_2;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_14 = ___3_compare;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_15 = V_1;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_21 = ___0_data;
		int32_t L_22 = V_2;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_data;
		int32_t L_7 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_14 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___0_data;
		int32_t L_22 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_23);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7E1DBF188BBECF1D7E896CE444FD5743CDE01D4D_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_16 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = L_16.___data;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_21 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = L_21.___data;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_30 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = L_30.___data;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_35 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = L_35.___data;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6901AA984E3BEF71A55D3950C185B3CF9D948C5E(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass4_0_1_t7F80AF2C2CFE9611C1B30ED696866BE33DD43A5E L_43 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_44 = L_43.___data;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_m3F8CD2A0BC4162C3536552BA95F0645E45E8F9D0_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___4_compare, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
	const Il2CppFullySharedGenericAny L_20 = L_6;
	const Il2CppFullySharedGenericAny L_34 = L_6;
	const Il2CppFullySharedGenericAny L_47 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
	const Il2CppFullySharedGenericAny L_25 = L_11;
	const Il2CppFullySharedGenericAny L_39 = L_11;
	U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		NullCheck(L_1);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = L_16.___data;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_21 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = L_21.___data;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		il2cpp_codegen_memcpy(L_25, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		NullCheck(L_15);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_30 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = L_30.___data;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		il2cpp_codegen_memcpy(L_34, (L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = L_35.___data;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		NullCheck(L_29);
		int32_t L_40;
		L_40 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_39: *(void**)L_39));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass4_0_1_t3A57CA40D75D8310E897ADCF344FB5CE60FF0AC7 L_43 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = L_43.___data;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		il2cpp_codegen_memcpy(L_47, (L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_47, SizeOf_T_t8FA288281E1B0630618759A2F0B76A9F59204FBF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___4_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_2 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_7 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_16 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_17 = L_16.___data;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_21 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_22 = L_21.___data;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_30 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_31 = L_30.___data;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_35 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_36 = L_35.___data;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0EE1A6B1673ECB120D2A50EDE7568BC60F4914EE(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass4_0_1_t016B1F2FE10093B5FA7FDA772A35B26AFC4BB46E L_43 = V_0;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_44 = L_43.___data;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_data;
		(&V_0)->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data), (void*)L_0);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = L_2.___data;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = L_7.___data;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0033:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_16 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = L_16.___data;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_21 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = L_21.___data;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_005e:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_30 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = L_30.___data;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_35 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = L_35.___data;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_U3CMedian3PivotU3Eg__SwapU7C4_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m4C1C38A190E94C62C7B125813DA26EBB072D97E7(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0089:
	{
		U3CU3Ec__DisplayClass4_0_1_t26B165FBF4E446BE6DADF9626A6C864B3CAF0A6B L_43 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_44 = L_43.___data;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7E1DBF188BBECF1D7E896CE444FD5743CDE01D4D(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_39);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_mBE2DD41B3F545F7F7293E85CA1A51A16CC8AC07E_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	const Il2CppFullySharedGenericAny L_24 = L_16;
	const Il2CppFullySharedGenericAny L_39 = L_16;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	memset(V_2, 0, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	memset(V_3, 0, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_19 = ___3_compare;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		il2cpp_codegen_memcpy(L_24, V_2, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		NullCheck(L_19);
		int32_t L_25;
		L_25 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_23: *(void**)L_23), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_24: *(void**)L_24));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		NullCheck(L_33);
		il2cpp_codegen_memcpy((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), L_39, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), (void*)L_39);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		il2cpp_codegen_memcpy(L_43, V_3, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		NullCheck(L_40);
		il2cpp_codegen_memcpy((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)), L_43, SizeOf_T_tFF190CD93476945337815E36ED53F7BD87B17E6A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)), (void*)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_9;
		L_9 = Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_11 = ___3_compare;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_19 = ___3_compare;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_39);
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_39);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_43);
		goto IL_001c;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m05A9EDED93F2302BD3A5003A96EED8356C840577_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = ((Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticFields*)il2cpp_codegen_static_fields_for(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var))->___s_QuickSortSampler;
		ProfilingScope__ctor_m4B73587A2295443A73B64DDD3D484D8EAECC0D65((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_0), NULL);
				return;
			}
		});
		try
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_data;
			NullCheck(L_2);
			Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_3 = ___1_compare;
			il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
			((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0017:
	{
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint8_t>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0023:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m213E903344F3B4D1701E9D345DCF8736522E8FDA_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0023:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisRuntimeObject_m8CEF3230212BF9C06A24CA2F4CC0BB07115B87A2_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0023:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisIl2CppFullySharedGenericAny_m3546D009CA11855C2817B07F2A1C4A012CB2755A_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0023:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_BinarySearch_TisIl2CppFullySharedGenericAny_TisRuntimeObject_m461E0A2FC27F817B3C5DCCFB986ADD2889CFA8BA_gshared (ReadOnlySpan_1_tB8EAC4CD2FAEF89749778E7AAF4D2A1A48724639 ___0_span, RuntimeObject* ___1_comparable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___1_comparable;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m5A5074EB7648DFF4FA6A8E08CE03E9A08B6E0602((int32_t)4, NULL);
	}

IL_0011:
	{
		ReadOnlySpan_1_tB8EAC4CD2FAEF89749778E7AAF4D2A1A48724639 L_1 = ___0_span;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tB8EAC4CD2FAEF89749778E7AAF4D2A1A48724639, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = ((  int32_t (*) (ReadOnlySpan_1_tB8EAC4CD2FAEF89749778E7AAF4D2A1A48724639*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_4 = ___1_comparable;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Il2CppFullySharedGenericAny*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_BinarySearch_TisIl2CppFullySharedGenericAny_TisRuntimeObject_m28C06FCA640E0794EB893A6061E9057AECA32F17_gshared (Il2CppFullySharedGenericAny* ___0_spanStart, int32_t ___1_length, RuntimeObject* ___2_comparable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF17F5A6DC2276CE0875B8CE8265D1B1A5E4F77FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF17F5A6DC2276CE0875B8CE8265D1B1A5E4F77FC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0047;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		Il2CppFullySharedGenericAny* L_3 = ___0_spanStart;
		int32_t L_4 = V_2;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_tF17F5A6DC2276CE0875B8CE8265D1B1A5E4F77FC);
		NullCheck((RuntimeObject*)(___2_comparable));
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)(___2_comparable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6));
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_9 = V_2;
		return L_9;
	}

IL_0033:
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0047;
	}

IL_0043:
	{
		int32_t L_12 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0047:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_15 = V_0;
		return ((~L_15));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB7230A2405DE6D0305CE57B15598937A95C9382_gshared (uint8_t* ___0_dst, int32_t ___1_dstLength, uint8_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		uint8_t* L_0 = ___2_src;
		uint8_t* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		uint8_t* L_5 = ___0_dst;
		uint8_t* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		uint8_t* L_10 = ___2_src;
		uint8_t* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_005b;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_0081;
	}

IL_0055:
	{
		G_B7_0 = 1;
		goto IL_0081;
	}

IL_005b:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_0080;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B7_0 = 1;
	}

IL_0081:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00ff;
		}
	}
	{
		uint8_t* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		uint8_t* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00f8;
	}

IL_00b3:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00ca;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = (-1);
	}

IL_00cb:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00f8:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_00b3;
		}
	}
	{
		return;
	}

IL_00ff:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_011f;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_012e;
	}

IL_011f:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_012e:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_013d;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_013e;
	}

IL_013d:
	{
		G_B22_0 = 1;
	}

IL_013e:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_0150;
	}

IL_014f:
	{
		G_B25_0 = 0;
	}

IL_0150:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_027b;
	}

IL_015a:
	{
		uint8_t* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		uint8_t* L_69;
		L_69 = il2cpp_unsafe_add<uint8_t,int32_t>(L_67, L_68);
		uint8_t* L_70 = ___2_src;
		int32_t L_71 = V_11;
		uint8_t* L_72;
		L_72 = il2cpp_unsafe_add<uint8_t,int32_t>(L_70, L_71);
		uint8_t L_73 = (*(uint8_t*)L_72);
		*(uint8_t*)L_69 = L_73;
		uint8_t* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		uint8_t* L_77;
		L_77 = il2cpp_unsafe_add<uint8_t,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		uint8_t* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		uint8_t L_82 = (*(uint8_t*)L_81);
		*(uint8_t*)L_77 = L_82;
		uint8_t* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		uint8_t* L_86;
		L_86 = il2cpp_unsafe_add<uint8_t,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		uint8_t* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		uint8_t* L_90;
		L_90 = il2cpp_unsafe_add<uint8_t,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		uint8_t L_91 = (*(uint8_t*)L_90);
		*(uint8_t*)L_86 = L_91;
		uint8_t* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		uint8_t* L_95;
		L_95 = il2cpp_unsafe_add<uint8_t,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		uint8_t* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		uint8_t* L_99;
		L_99 = il2cpp_unsafe_add<uint8_t,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		uint8_t L_100 = (*(uint8_t*)L_99);
		*(uint8_t*)L_95 = L_100;
		uint8_t* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		uint8_t* L_104;
		L_104 = il2cpp_unsafe_add<uint8_t,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		uint8_t* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		uint8_t* L_108;
		L_108 = il2cpp_unsafe_add<uint8_t,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		uint8_t L_109 = (*(uint8_t*)L_108);
		*(uint8_t*)L_104 = L_109;
		uint8_t* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		uint8_t* L_113;
		L_113 = il2cpp_unsafe_add<uint8_t,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		uint8_t* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		uint8_t* L_117;
		L_117 = il2cpp_unsafe_add<uint8_t,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		uint8_t L_118 = (*(uint8_t*)L_117);
		*(uint8_t*)L_113 = L_118;
		uint8_t* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		uint8_t* L_122;
		L_122 = il2cpp_unsafe_add<uint8_t,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		uint8_t* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		uint8_t* L_126;
		L_126 = il2cpp_unsafe_add<uint8_t,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		uint8_t L_127 = (*(uint8_t*)L_126);
		*(uint8_t*)L_122 = L_127;
		uint8_t* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		uint8_t* L_131;
		L_131 = il2cpp_unsafe_add<uint8_t,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		uint8_t* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		uint8_t* L_135;
		L_135 = il2cpp_unsafe_add<uint8_t,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		uint8_t L_136 = (*(uint8_t*)L_135);
		*(uint8_t*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_027b:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_034e;
		}
	}
	{
		uint8_t* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		uint8_t* L_146;
		L_146 = il2cpp_unsafe_add<uint8_t,int32_t>(L_144, L_145);
		uint8_t* L_147 = ___2_src;
		int32_t L_148 = V_11;
		uint8_t* L_149;
		L_149 = il2cpp_unsafe_add<uint8_t,int32_t>(L_147, L_148);
		uint8_t L_150 = (*(uint8_t*)L_149);
		*(uint8_t*)L_146 = L_150;
		uint8_t* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		uint8_t* L_154;
		L_154 = il2cpp_unsafe_add<uint8_t,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		uint8_t* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		uint8_t* L_158;
		L_158 = il2cpp_unsafe_add<uint8_t,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		uint8_t L_159 = (*(uint8_t*)L_158);
		*(uint8_t*)L_154 = L_159;
		uint8_t* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		uint8_t* L_163;
		L_163 = il2cpp_unsafe_add<uint8_t,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		uint8_t* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		uint8_t* L_167;
		L_167 = il2cpp_unsafe_add<uint8_t,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		uint8_t L_168 = (*(uint8_t*)L_167);
		*(uint8_t*)L_163 = L_168;
		uint8_t* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		uint8_t* L_172;
		L_172 = il2cpp_unsafe_add<uint8_t,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		uint8_t* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		uint8_t* L_176;
		L_176 = il2cpp_unsafe_add<uint8_t,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		uint8_t L_177 = (*(uint8_t*)L_176);
		*(uint8_t*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_034e;
	}

IL_0327:
	{
		uint8_t* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		uint8_t* L_183;
		L_183 = il2cpp_unsafe_add<uint8_t,int32_t>(L_181, L_182);
		uint8_t* L_184 = ___2_src;
		int32_t L_185 = V_11;
		uint8_t* L_186;
		L_186 = il2cpp_unsafe_add<uint8_t,int32_t>(L_184, L_185);
		uint8_t L_187 = (*(uint8_t*)L_186);
		*(uint8_t*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_034e:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_0327;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1DA3981A0546569FEE251A05E7BF23858C11824B_gshared (Il2CppChar* ___0_dst, int32_t ___1_dstLength, Il2CppChar* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		Il2CppChar* L_0 = ___2_src;
		Il2CppChar* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		Il2CppChar* L_5 = ___0_dst;
		Il2CppChar* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		Il2CppChar* L_10 = ___2_src;
		Il2CppChar* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_005b;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_0081;
	}

IL_0055:
	{
		G_B7_0 = 1;
		goto IL_0081;
	}

IL_005b:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_0080;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B7_0 = 1;
	}

IL_0081:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00ff;
		}
	}
	{
		Il2CppChar* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		Il2CppChar* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00f8;
	}

IL_00b3:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00ca;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = (-1);
	}

IL_00cb:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00f8:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_00b3;
		}
	}
	{
		return;
	}

IL_00ff:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_011f;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_012e;
	}

IL_011f:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_012e:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_013d;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_013e;
	}

IL_013d:
	{
		G_B22_0 = 1;
	}

IL_013e:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_0150;
	}

IL_014f:
	{
		G_B25_0 = 0;
	}

IL_0150:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_027b;
	}

IL_015a:
	{
		Il2CppChar* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		Il2CppChar* L_69;
		L_69 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_67, L_68);
		Il2CppChar* L_70 = ___2_src;
		int32_t L_71 = V_11;
		Il2CppChar* L_72;
		L_72 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_70, L_71);
		Il2CppChar L_73 = (*(Il2CppChar*)L_72);
		*(Il2CppChar*)L_69 = L_73;
		Il2CppChar* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		Il2CppChar* L_77;
		L_77 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		Il2CppChar* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		*(Il2CppChar*)L_77 = L_82;
		Il2CppChar* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		Il2CppChar* L_86;
		L_86 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		Il2CppChar* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		Il2CppChar L_91 = (*(Il2CppChar*)L_90);
		*(Il2CppChar*)L_86 = L_91;
		Il2CppChar* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		Il2CppChar* L_95;
		L_95 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		Il2CppChar* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		Il2CppChar L_100 = (*(Il2CppChar*)L_99);
		*(Il2CppChar*)L_95 = L_100;
		Il2CppChar* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		Il2CppChar* L_104;
		L_104 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		Il2CppChar* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		Il2CppChar* L_108;
		L_108 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		Il2CppChar L_109 = (*(Il2CppChar*)L_108);
		*(Il2CppChar*)L_104 = L_109;
		Il2CppChar* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		Il2CppChar* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		Il2CppChar* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		Il2CppChar L_118 = (*(Il2CppChar*)L_117);
		*(Il2CppChar*)L_113 = L_118;
		Il2CppChar* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		Il2CppChar* L_122;
		L_122 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		Il2CppChar* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		Il2CppChar* L_126;
		L_126 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		Il2CppChar L_127 = (*(Il2CppChar*)L_126);
		*(Il2CppChar*)L_122 = L_127;
		Il2CppChar* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		Il2CppChar* L_131;
		L_131 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		Il2CppChar* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		Il2CppChar* L_135;
		L_135 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		Il2CppChar L_136 = (*(Il2CppChar*)L_135);
		*(Il2CppChar*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_027b:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_034e;
		}
	}
	{
		Il2CppChar* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		Il2CppChar* L_146;
		L_146 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_144, L_145);
		Il2CppChar* L_147 = ___2_src;
		int32_t L_148 = V_11;
		Il2CppChar* L_149;
		L_149 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_147, L_148);
		Il2CppChar L_150 = (*(Il2CppChar*)L_149);
		*(Il2CppChar*)L_146 = L_150;
		Il2CppChar* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		Il2CppChar* L_154;
		L_154 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		Il2CppChar* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		Il2CppChar* L_158;
		L_158 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		Il2CppChar L_159 = (*(Il2CppChar*)L_158);
		*(Il2CppChar*)L_154 = L_159;
		Il2CppChar* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		Il2CppChar* L_163;
		L_163 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		Il2CppChar* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		Il2CppChar* L_167;
		L_167 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		Il2CppChar L_168 = (*(Il2CppChar*)L_167);
		*(Il2CppChar*)L_163 = L_168;
		Il2CppChar* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		Il2CppChar* L_172;
		L_172 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		Il2CppChar* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		Il2CppChar* L_176;
		L_176 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		Il2CppChar L_177 = (*(Il2CppChar*)L_176);
		*(Il2CppChar*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_034e;
	}

IL_0327:
	{
		Il2CppChar* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		Il2CppChar* L_183;
		L_183 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_181, L_182);
		Il2CppChar* L_184 = ___2_src;
		int32_t L_185 = V_11;
		Il2CppChar* L_186;
		L_186 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_184, L_185);
		Il2CppChar L_187 = (*(Il2CppChar*)L_186);
		*(Il2CppChar*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_034e:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_0327;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisRuntimeObject_mB81636FB43A309DFB451C84886ED09A253526715_gshared (RuntimeObject** ___0_dst, int32_t ___1_dstLength, RuntimeObject** ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		RuntimeObject** L_0 = ___2_src;
		RuntimeObject** L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		RuntimeObject** L_5 = ___0_dst;
		RuntimeObject** L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		RuntimeObject** L_8;
		L_8 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		RuntimeObject** L_10 = ___2_src;
		RuntimeObject** L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_005b;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_0081;
	}

IL_0055:
	{
		G_B7_0 = 1;
		goto IL_0081;
	}

IL_005b:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_0080;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B7_0 = 1;
	}

IL_0081:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00ff;
		}
	}
	{
		RuntimeObject** L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		RuntimeObject** L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00f8;
	}

IL_00b3:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00ca;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = (-1);
	}

IL_00cb:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00f8:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_00b3;
		}
	}
	{
		return;
	}

IL_00ff:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_011f;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_012e;
	}

IL_011f:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_012e:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_013d;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_013e;
	}

IL_013d:
	{
		G_B22_0 = 1;
	}

IL_013e:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_0150;
	}

IL_014f:
	{
		G_B25_0 = 0;
	}

IL_0150:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_027b;
	}

IL_015a:
	{
		RuntimeObject** L_67 = ___0_dst;
		int32_t L_68 = V_11;
		RuntimeObject** L_69;
		L_69 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_67, L_68);
		RuntimeObject** L_70 = ___2_src;
		int32_t L_71 = V_11;
		RuntimeObject** L_72;
		L_72 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_70, L_71);
		RuntimeObject* L_73 = (*(RuntimeObject**)L_72);
		*(RuntimeObject**)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_69, (void*)L_73);
		RuntimeObject** L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		RuntimeObject** L_77;
		L_77 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		RuntimeObject** L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		RuntimeObject** L_81;
		L_81 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		*(RuntimeObject**)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_77, (void*)L_82);
		RuntimeObject** L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		RuntimeObject** L_86;
		L_86 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		RuntimeObject** L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		RuntimeObject** L_90;
		L_90 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		RuntimeObject* L_91 = (*(RuntimeObject**)L_90);
		*(RuntimeObject**)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_86, (void*)L_91);
		RuntimeObject** L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		RuntimeObject** L_95;
		L_95 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		RuntimeObject** L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		RuntimeObject** L_99;
		L_99 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		RuntimeObject* L_100 = (*(RuntimeObject**)L_99);
		*(RuntimeObject**)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_95, (void*)L_100);
		RuntimeObject** L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		RuntimeObject** L_104;
		L_104 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		RuntimeObject** L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		RuntimeObject** L_108;
		L_108 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		RuntimeObject* L_109 = (*(RuntimeObject**)L_108);
		*(RuntimeObject**)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_104, (void*)L_109);
		RuntimeObject** L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		RuntimeObject** L_113;
		L_113 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		RuntimeObject** L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		RuntimeObject** L_117;
		L_117 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		RuntimeObject* L_118 = (*(RuntimeObject**)L_117);
		*(RuntimeObject**)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_118);
		RuntimeObject** L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		RuntimeObject** L_122;
		L_122 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		RuntimeObject** L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		RuntimeObject** L_126;
		L_126 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		RuntimeObject* L_127 = (*(RuntimeObject**)L_126);
		*(RuntimeObject**)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_122, (void*)L_127);
		RuntimeObject** L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		RuntimeObject** L_131;
		L_131 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		RuntimeObject** L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		RuntimeObject** L_135;
		L_135 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		RuntimeObject* L_136 = (*(RuntimeObject**)L_135);
		*(RuntimeObject**)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_131, (void*)L_136);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_027b:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_034e;
		}
	}
	{
		RuntimeObject** L_144 = ___0_dst;
		int32_t L_145 = V_11;
		RuntimeObject** L_146;
		L_146 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_144, L_145);
		RuntimeObject** L_147 = ___2_src;
		int32_t L_148 = V_11;
		RuntimeObject** L_149;
		L_149 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_147, L_148);
		RuntimeObject* L_150 = (*(RuntimeObject**)L_149);
		*(RuntimeObject**)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_146, (void*)L_150);
		RuntimeObject** L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		RuntimeObject** L_154;
		L_154 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		RuntimeObject** L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		RuntimeObject** L_158;
		L_158 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		RuntimeObject* L_159 = (*(RuntimeObject**)L_158);
		*(RuntimeObject**)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_154, (void*)L_159);
		RuntimeObject** L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		RuntimeObject** L_163;
		L_163 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		RuntimeObject** L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		RuntimeObject** L_167;
		L_167 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		RuntimeObject* L_168 = (*(RuntimeObject**)L_167);
		*(RuntimeObject**)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_163, (void*)L_168);
		RuntimeObject** L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		RuntimeObject** L_172;
		L_172 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		RuntimeObject** L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		RuntimeObject** L_176;
		L_176 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		RuntimeObject* L_177 = (*(RuntimeObject**)L_176);
		*(RuntimeObject**)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_172, (void*)L_177);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_034e;
	}

IL_0327:
	{
		RuntimeObject** L_181 = ___0_dst;
		int32_t L_182 = V_11;
		RuntimeObject** L_183;
		L_183 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_181, L_182);
		RuntimeObject** L_184 = ___2_src;
		int32_t L_185 = V_11;
		RuntimeObject** L_186;
		L_186 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_184, L_185);
		RuntimeObject* L_187 = (*(RuntimeObject**)L_186);
		*(RuntimeObject**)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_183, (void*)L_187);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_034e:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_0327;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisIl2CppFullySharedGenericAny_m9DC0401C4BE374E046445F649BD71AD275562FD6_gshared (Il2CppFullySharedGenericAny* ___0_dst, int32_t ___1_dstLength, Il2CppFullySharedGenericAny* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_73 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_150 = L_73;
	const Il2CppFullySharedGenericAny L_187 = L_73;
	const Il2CppFullySharedGenericAny L_82 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_159 = L_82;
	const Il2CppFullySharedGenericAny L_91 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_168 = L_91;
	const Il2CppFullySharedGenericAny L_100 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_177 = L_100;
	const Il2CppFullySharedGenericAny L_109 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_118 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_127 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	const Il2CppFullySharedGenericAny L_136 = alloca(SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_src;
		Il2CppFullySharedGenericAny* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___0_dst;
		Il2CppFullySharedGenericAny* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_9;
		L_9 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_9;
		Il2CppFullySharedGenericAny* L_10 = ___2_src;
		Il2CppFullySharedGenericAny* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_005b;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_0081;
	}

IL_0055:
	{
		G_B7_0 = 1;
		goto IL_0081;
	}

IL_005b:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_0080;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B7_0 = 1;
	}

IL_0081:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_31;
		L_31 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00ff;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		Il2CppFullySharedGenericAny* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00f8;
	}

IL_00b3:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00ca;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = (-1);
	}

IL_00cb:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00f8:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_00b3;
		}
	}
	{
		return;
	}

IL_00ff:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_011f;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_012e;
	}

IL_011f:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_012e:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_013d;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_013e;
	}

IL_013d:
	{
		G_B22_0 = 1;
	}

IL_013e:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_0150;
	}

IL_014f:
	{
		G_B25_0 = 0;
	}

IL_0150:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_027b;
	}

IL_015a:
	{
		Il2CppFullySharedGenericAny* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		Il2CppFullySharedGenericAny* L_69;
		L_69 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_67, L_68, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_70 = ___2_src;
		int32_t L_71 = V_11;
		Il2CppFullySharedGenericAny* L_72;
		L_72 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_70, L_71, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_73, L_72, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_69, L_73, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_69, (void*)L_73);
		Il2CppFullySharedGenericAny* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		Il2CppFullySharedGenericAny* L_77;
		L_77 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		Il2CppFullySharedGenericAny* L_81;
		L_81 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_82, L_81, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_77, L_82, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_77, (void*)L_82);
		Il2CppFullySharedGenericAny* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		Il2CppFullySharedGenericAny* L_86;
		L_86 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		Il2CppFullySharedGenericAny* L_90;
		L_90 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_91, L_90, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_86, L_91, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_86, (void*)L_91);
		Il2CppFullySharedGenericAny* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		Il2CppFullySharedGenericAny* L_95;
		L_95 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		Il2CppFullySharedGenericAny* L_99;
		L_99 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_95, L_100, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_95, (void*)L_100);
		Il2CppFullySharedGenericAny* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		Il2CppFullySharedGenericAny* L_104;
		L_104 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		Il2CppFullySharedGenericAny* L_108;
		L_108 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_104, L_109, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_104, (void*)L_109);
		Il2CppFullySharedGenericAny* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		Il2CppFullySharedGenericAny* L_113;
		L_113 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_113, L_118, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_113, (void*)L_118);
		Il2CppFullySharedGenericAny* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		Il2CppFullySharedGenericAny* L_122;
		L_122 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		Il2CppFullySharedGenericAny* L_126;
		L_126 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_127, L_126, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_122, L_127, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_122, (void*)L_127);
		Il2CppFullySharedGenericAny* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		Il2CppFullySharedGenericAny* L_131;
		L_131 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		Il2CppFullySharedGenericAny* L_135;
		L_135 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_136, L_135, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_131, L_136, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_131, (void*)L_136);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_027b:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_034e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		Il2CppFullySharedGenericAny* L_146;
		L_146 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_144, L_145, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_147 = ___2_src;
		int32_t L_148 = V_11;
		Il2CppFullySharedGenericAny* L_149;
		L_149 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_147, L_148, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_150, L_149, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_146, L_150, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_146, (void*)L_150);
		Il2CppFullySharedGenericAny* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		Il2CppFullySharedGenericAny* L_154;
		L_154 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		Il2CppFullySharedGenericAny* L_158;
		L_158 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_159, L_158, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_154, L_159, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_154, (void*)L_159);
		Il2CppFullySharedGenericAny* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		Il2CppFullySharedGenericAny* L_163;
		L_163 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		Il2CppFullySharedGenericAny* L_167;
		L_167 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_168, L_167, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_163, L_168, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_163, (void*)L_168);
		Il2CppFullySharedGenericAny* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		Il2CppFullySharedGenericAny* L_172;
		L_172 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		Il2CppFullySharedGenericAny* L_176;
		L_176 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_177, L_176, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_172, L_177, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_172, (void*)L_177);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_034e;
	}

IL_0327:
	{
		Il2CppFullySharedGenericAny* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		Il2CppFullySharedGenericAny* L_183;
		L_183 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_181, L_182, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_184 = ___2_src;
		int32_t L_185 = V_11;
		Il2CppFullySharedGenericAny* L_186;
		L_186 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_184, L_185, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_187, L_186, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_183, L_187, SizeOf_T_t1D694203B5475E6FADD8CDDE79B2722C913B2D00);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_183, (void*)L_187);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_034e:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_0327;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A8B49A9E5DC01A92ACCA73A9DE3AF7FB134F49C_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3);
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_020e;
		}
	}
	{
		uint8_t* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9);
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_0216;
		}
	}
	{
		uint8_t* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15);
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0224;
		}
	}
	{
		uint8_t* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21);
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0232;
		}
	}
	{
		uint8_t* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27);
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0240;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33);
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_024e;
		}
	}
	{
		uint8_t* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39);
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_025c;
		}
	}
	{
		uint8_t* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45);
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_026a;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55);
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_020e;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61);
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_0216;
		}
	}
	{
		uint8_t* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67);
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0224;
		}
	}
	{
		uint8_t* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73);
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0232;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_0208;
	}

IL_01dd:
	{
		uint8_t* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80);
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_020e;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_0208:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01dd;
		}
	}
	{
		return (-1);
	}

IL_020e:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_0216:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0224:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0232:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0240:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_024e:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_025c:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_026a:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2BC07E825ED0955A169AC86FBE4ED3174E2F4565_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_020e;
		}
	}
	{
		Il2CppChar* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_0216;
		}
	}
	{
		Il2CppChar* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0224;
		}
	}
	{
		Il2CppChar* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21);
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0232;
		}
	}
	{
		Il2CppChar* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27);
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0240;
		}
	}
	{
		Il2CppChar* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33);
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_024e;
		}
	}
	{
		Il2CppChar* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_025c;
		}
	}
	{
		Il2CppChar* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_026a;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55);
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_020e;
		}
	}
	{
		Il2CppChar* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61);
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_0216;
		}
	}
	{
		Il2CppChar* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67);
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0224;
		}
	}
	{
		Il2CppChar* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73);
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0232;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_0208;
	}

IL_01dd:
	{
		Il2CppChar* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80);
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_020e;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_0208:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01dd;
		}
	}
	{
		return (-1);
	}

IL_020e:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_0216:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0224:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0232:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0240:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_024e:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_025c:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_026a:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		RuntimeObject** L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_5);
		if (L_6)
		{
			goto IL_020e;
		}
	}
	{
		RuntimeObject** L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_7, L_9);
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_11);
		if (L_12)
		{
			goto IL_0216;
		}
	}
	{
		RuntimeObject** L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_13, L_15);
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_17);
		if (L_18)
		{
			goto IL_0224;
		}
	}
	{
		RuntimeObject** L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		RuntimeObject** L_22;
		L_22 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_19, L_21);
		RuntimeObject* L_23 = (*(RuntimeObject**)L_22);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_23);
		if (L_24)
		{
			goto IL_0232;
		}
	}
	{
		RuntimeObject** L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_25, L_27);
		RuntimeObject* L_29 = (*(RuntimeObject**)L_28);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_29);
		if (L_30)
		{
			goto IL_0240;
		}
	}
	{
		RuntimeObject** L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		RuntimeObject** L_34;
		L_34 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_31, L_33);
		RuntimeObject* L_35 = (*(RuntimeObject**)L_34);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_35);
		if (L_36)
		{
			goto IL_024e;
		}
	}
	{
		RuntimeObject** L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		RuntimeObject** L_40;
		L_40 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_37, L_39);
		RuntimeObject* L_41 = (*(RuntimeObject**)L_40);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_41);
		if (L_42)
		{
			goto IL_025c;
		}
	}
	{
		RuntimeObject** L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_43, L_45);
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_47);
		if (L_48)
		{
			goto IL_026a;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		RuntimeObject** L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_54, L_55);
		RuntimeObject* L_57 = (*(RuntimeObject**)L_56);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_58;
		L_58 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_57);
		if (L_58)
		{
			goto IL_020e;
		}
	}
	{
		RuntimeObject** L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		RuntimeObject** L_62;
		L_62 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_59, L_61);
		RuntimeObject* L_63 = (*(RuntimeObject**)L_62);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_64;
		L_64 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_63);
		if (L_64)
		{
			goto IL_0216;
		}
	}
	{
		RuntimeObject** L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		RuntimeObject** L_68;
		L_68 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_65, L_67);
		RuntimeObject* L_69 = (*(RuntimeObject**)L_68);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_70;
		L_70 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_69);
		if (L_70)
		{
			goto IL_0224;
		}
	}
	{
		RuntimeObject** L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		RuntimeObject** L_74;
		L_74 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_71, L_73);
		RuntimeObject* L_75 = (*(RuntimeObject**)L_74);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_76;
		L_76 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_75);
		if (L_76)
		{
			goto IL_0232;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_0208;
	}

IL_01dd:
	{
		RuntimeObject** L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		RuntimeObject** L_81;
		L_81 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_79, L_80);
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_83;
		L_83 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_82);
		if (L_83)
		{
			goto IL_020e;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_0208:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01dd;
		}
	}
	{
		return (-1);
	}

IL_020e:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_0216:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0224:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0232:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0240:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_024e:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_025c:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_026a:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF9F7522BEA0392CFC7EFDFD5B859C3458D3D1D99_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Il2CppChar* L_1 = ___2_value;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		V_0 = L_2;
		Il2CppChar* L_3 = ___2_value;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, 1);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001d:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_10, L_11);
		Il2CppChar L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2BC07E825ED0955A169AC86FBE4ED3174E2F4565(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Il2CppChar* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		Il2CppChar* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)));
		Il2CppChar* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0544208FEC6D736DCE1ACFF471BEAC07A10E9880(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0061:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001d;
	}

IL_0067:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisRuntimeObject_m01A6A4D70DD8D9A52331AAFB98C288A9E52D0242_gshared (RuntimeObject** ___0_searchSpace, int32_t ___1_searchSpaceLength, RuntimeObject** ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	RuntimeObject** V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		RuntimeObject** L_1 = ___2_value;
		RuntimeObject* L_2 = (*(RuntimeObject**)L_1);
		V_0 = L_2;
		RuntimeObject** L_3 = ___2_value;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_3, 1);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001d:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject** L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		RuntimeObject** L_12;
		L_12 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_10, L_11);
		RuntimeObject* L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		RuntimeObject** L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		RuntimeObject** L_21;
		L_21 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)));
		RuntimeObject** L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = SpanHelpers_SequenceEqual_TisRuntimeObject_m2E01D43E1B0ED8962FF5621FE8A40D569CF041C4(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0061:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001d;
	}

IL_0067:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisRuntimeObject_m872244EB63F1D1A8FD363987E6D467963AA5C64D_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value0, RuntimeObject* ___2_value1, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_01b1;
	}

IL_0007:
	{
		RuntimeObject** L_0 = ___0_searchSpace;
		int32_t L_1 = V_0;
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_0, L_1);
		RuntimeObject* L_3 = (*(RuntimeObject**)L_2);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_4);
		if (L_5)
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_6);
		if (L_7)
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject** L_8 = ___0_searchSpace;
		int32_t L_9 = V_0;
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)));
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		V_1 = L_11;
		RuntimeObject* L_12 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_13;
		L_13 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_12);
		if (L_13)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject* L_14 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_14);
		if (L_15)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject** L_16 = ___0_searchSpace;
		int32_t L_17 = V_0;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_16, ((int32_t)il2cpp_codegen_add(L_17, 2)));
		RuntimeObject* L_19 = (*(RuntimeObject**)L_18);
		V_1 = L_19;
		RuntimeObject* L_20 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_20);
		if (L_21)
		{
			goto IL_02e1;
		}
	}
	{
		RuntimeObject* L_22 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_23;
		L_23 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_22);
		if (L_23)
		{
			goto IL_02e1;
		}
	}
	{
		RuntimeObject** L_24 = ___0_searchSpace;
		int32_t L_25 = V_0;
		RuntimeObject** L_26;
		L_26 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_24, ((int32_t)il2cpp_codegen_add(L_25, 3)));
		RuntimeObject* L_27 = (*(RuntimeObject**)L_26);
		V_1 = L_27;
		RuntimeObject* L_28 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_29;
		L_29 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_28);
		if (L_29)
		{
			goto IL_02e5;
		}
	}
	{
		RuntimeObject* L_30 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_31;
		L_31 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_30);
		if (L_31)
		{
			goto IL_02e5;
		}
	}
	{
		RuntimeObject** L_32 = ___0_searchSpace;
		int32_t L_33 = V_0;
		RuntimeObject** L_34;
		L_34 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_32, ((int32_t)il2cpp_codegen_add(L_33, 4)));
		RuntimeObject* L_35 = (*(RuntimeObject**)L_34);
		V_1 = L_35;
		RuntimeObject* L_36 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_37;
		L_37 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_36);
		if (L_37)
		{
			goto IL_02e9;
		}
	}
	{
		RuntimeObject* L_38 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_38);
		if (L_39)
		{
			goto IL_02e9;
		}
	}
	{
		RuntimeObject** L_40 = ___0_searchSpace;
		int32_t L_41 = V_0;
		RuntimeObject** L_42;
		L_42 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_40, ((int32_t)il2cpp_codegen_add(L_41, 5)));
		RuntimeObject* L_43 = (*(RuntimeObject**)L_42);
		V_1 = L_43;
		RuntimeObject* L_44 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_45;
		L_45 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_44);
		if (L_45)
		{
			goto IL_02ed;
		}
	}
	{
		RuntimeObject* L_46 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_47;
		L_47 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_46);
		if (L_47)
		{
			goto IL_02ed;
		}
	}
	{
		RuntimeObject** L_48 = ___0_searchSpace;
		int32_t L_49 = V_0;
		RuntimeObject** L_50;
		L_50 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_48, ((int32_t)il2cpp_codegen_add(L_49, 6)));
		RuntimeObject* L_51 = (*(RuntimeObject**)L_50);
		V_1 = L_51;
		RuntimeObject* L_52 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_53;
		L_53 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_52);
		if (L_53)
		{
			goto IL_02f1;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_55;
		L_55 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_54);
		if (L_55)
		{
			goto IL_02f1;
		}
	}
	{
		RuntimeObject** L_56 = ___0_searchSpace;
		int32_t L_57 = V_0;
		RuntimeObject** L_58;
		L_58 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_56, ((int32_t)il2cpp_codegen_add(L_57, 7)));
		RuntimeObject* L_59 = (*(RuntimeObject**)L_58);
		V_1 = L_59;
		RuntimeObject* L_60 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_61;
		L_61 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_60);
		if (L_61)
		{
			goto IL_02f5;
		}
	}
	{
		RuntimeObject* L_62 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_63;
		L_63 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_62);
		if (L_63)
		{
			goto IL_02f5;
		}
	}
	{
		int32_t L_64 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_64, 8));
	}

IL_01b1:
	{
		int32_t L_65 = ___3_length;
		int32_t L_66 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_65, L_66))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_67 = ___3_length;
		int32_t L_68 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_67, L_68))) < ((int32_t)4)))
		{
			goto IL_02d5;
		}
	}
	{
		RuntimeObject** L_69 = ___0_searchSpace;
		int32_t L_70 = V_0;
		RuntimeObject** L_71;
		L_71 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_69, L_70);
		RuntimeObject* L_72 = (*(RuntimeObject**)L_71);
		V_1 = L_72;
		RuntimeObject* L_73 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_74;
		L_74 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_73);
		if (L_74)
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject* L_75 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_76;
		L_76 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_75);
		if (L_76)
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject** L_77 = ___0_searchSpace;
		int32_t L_78 = V_0;
		RuntimeObject** L_79;
		L_79 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_77, ((int32_t)il2cpp_codegen_add(L_78, 1)));
		RuntimeObject* L_80 = (*(RuntimeObject**)L_79);
		V_1 = L_80;
		RuntimeObject* L_81 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_82;
		L_82 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_81);
		if (L_82)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject* L_83 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_84;
		L_84 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_83);
		if (L_84)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject** L_85 = ___0_searchSpace;
		int32_t L_86 = V_0;
		RuntimeObject** L_87;
		L_87 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_85, ((int32_t)il2cpp_codegen_add(L_86, 2)));
		RuntimeObject* L_88 = (*(RuntimeObject**)L_87);
		V_1 = L_88;
		RuntimeObject* L_89 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_90;
		L_90 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_89);
		if (L_90)
		{
			goto IL_02e1;
		}
	}
	{
		RuntimeObject* L_91 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_92;
		L_92 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_91);
		if (L_92)
		{
			goto IL_02e1;
		}
	}
	{
		RuntimeObject** L_93 = ___0_searchSpace;
		int32_t L_94 = V_0;
		RuntimeObject** L_95;
		L_95 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_93, ((int32_t)il2cpp_codegen_add(L_94, 3)));
		RuntimeObject* L_96 = (*(RuntimeObject**)L_95);
		V_1 = L_96;
		RuntimeObject* L_97 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_98;
		L_98 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_97);
		if (L_98)
		{
			goto IL_02e5;
		}
	}
	{
		RuntimeObject* L_99 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_100;
		L_100 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_99);
		if (L_100)
		{
			goto IL_02e5;
		}
	}
	{
		int32_t L_101 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_101, 4));
		goto IL_02d5;
	}

IL_029e:
	{
		RuntimeObject** L_102 = ___0_searchSpace;
		int32_t L_103 = V_0;
		RuntimeObject** L_104;
		L_104 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_102, L_103);
		RuntimeObject* L_105 = (*(RuntimeObject**)L_104);
		V_1 = L_105;
		RuntimeObject* L_106 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_107;
		L_107 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_106);
		if (L_107)
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject* L_108 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_109;
		L_109 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_108);
		if (L_109)
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_110 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_02d5:
	{
		int32_t L_111 = V_0;
		int32_t L_112 = ___3_length;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_029e;
		}
	}
	{
		return (-1);
	}

IL_02db:
	{
		int32_t L_113 = V_0;
		return L_113;
	}

IL_02dd:
	{
		int32_t L_114 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02e1:
	{
		int32_t L_115 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_115, 2));
	}

IL_02e5:
	{
		int32_t L_116 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_116, 3));
	}

IL_02e9:
	{
		int32_t L_117 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_117, 4));
	}

IL_02ed:
	{
		int32_t L_118 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_118, 5));
	}

IL_02f1:
	{
		int32_t L_119 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_119, 6));
	}

IL_02f5:
	{
		int32_t L_120 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_120, 7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisRuntimeObject_m581EBEDA428348EFCAD49EC98392EE08EDCA2481_gshared (RuntimeObject** ___0_searchSpace, int32_t ___1_searchSpaceLength, RuntimeObject** ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_003b;
	}

IL_0011:
	{
		RuntimeObject** L_1 = ___0_searchSpace;
		RuntimeObject** L_2 = ___2_value;
		int32_t L_3 = V_1;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = SpanHelpers_IndexOf_TisRuntimeObject_mC0CBB1FD83BF7519522B18216A69DB8426CABEDA(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003f;
		}
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003b:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0011;
		}
	}

IL_003f:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisRuntimeObject_m93398F5FD9A3772E9499A06A86A1C51D3FB40559_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value0, RuntimeObject* ___2_value1, RuntimeObject* ___3_value2, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0249;
	}

IL_0007:
	{
		RuntimeObject** L_0 = ___0_searchSpace;
		int32_t L_1 = V_0;
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_0, L_1);
		RuntimeObject* L_3 = (*(RuntimeObject**)L_2);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_4);
		if (L_5)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_6);
		if (L_7)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_8);
		if (L_9)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject** L_10 = ___0_searchSpace;
		int32_t L_11 = V_0;
		RuntimeObject** L_12;
		L_12 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)));
		RuntimeObject* L_13 = (*(RuntimeObject**)L_12);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_14);
		if (L_15)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_17;
		L_17 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_16);
		if (L_17)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_18 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_19;
		L_19 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_18);
		if (L_19)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject** L_20 = ___0_searchSpace;
		int32_t L_21 = V_0;
		RuntimeObject** L_22;
		L_22 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)));
		RuntimeObject* L_23 = (*(RuntimeObject**)L_22);
		V_1 = L_23;
		RuntimeObject* L_24 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_24);
		if (L_25)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_27;
		L_27 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_26);
		if (L_27)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject* L_28 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_29;
		L_29 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_28);
		if (L_29)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject** L_30 = ___0_searchSpace;
		int32_t L_31 = V_0;
		RuntimeObject** L_32;
		L_32 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_30, ((int32_t)il2cpp_codegen_add(L_31, 3)));
		RuntimeObject* L_33 = (*(RuntimeObject**)L_32);
		V_1 = L_33;
		RuntimeObject* L_34 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_34);
		if (L_35)
		{
			goto IL_03df;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_37;
		L_37 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_36);
		if (L_37)
		{
			goto IL_03df;
		}
	}
	{
		RuntimeObject* L_38 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_38);
		if (L_39)
		{
			goto IL_03df;
		}
	}
	{
		RuntimeObject** L_40 = ___0_searchSpace;
		int32_t L_41 = V_0;
		RuntimeObject** L_42;
		L_42 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_40, ((int32_t)il2cpp_codegen_add(L_41, 4)));
		RuntimeObject* L_43 = (*(RuntimeObject**)L_42);
		V_1 = L_43;
		RuntimeObject* L_44 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_45;
		L_45 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_44);
		if (L_45)
		{
			goto IL_03e3;
		}
	}
	{
		RuntimeObject* L_46 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_47;
		L_47 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_46);
		if (L_47)
		{
			goto IL_03e3;
		}
	}
	{
		RuntimeObject* L_48 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_49;
		L_49 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_48);
		if (L_49)
		{
			goto IL_03e3;
		}
	}
	{
		RuntimeObject** L_50 = ___0_searchSpace;
		int32_t L_51 = V_0;
		RuntimeObject** L_52;
		L_52 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_50, ((int32_t)il2cpp_codegen_add(L_51, 5)));
		RuntimeObject* L_53 = (*(RuntimeObject**)L_52);
		V_1 = L_53;
		RuntimeObject* L_54 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_55;
		L_55 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_54);
		if (L_55)
		{
			goto IL_03e7;
		}
	}
	{
		RuntimeObject* L_56 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_57;
		L_57 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_56);
		if (L_57)
		{
			goto IL_03e7;
		}
	}
	{
		RuntimeObject* L_58 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_59;
		L_59 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_58);
		if (L_59)
		{
			goto IL_03e7;
		}
	}
	{
		RuntimeObject** L_60 = ___0_searchSpace;
		int32_t L_61 = V_0;
		RuntimeObject** L_62;
		L_62 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_60, ((int32_t)il2cpp_codegen_add(L_61, 6)));
		RuntimeObject* L_63 = (*(RuntimeObject**)L_62);
		V_1 = L_63;
		RuntimeObject* L_64 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_65;
		L_65 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_64);
		if (L_65)
		{
			goto IL_03eb;
		}
	}
	{
		RuntimeObject* L_66 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_67;
		L_67 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_66);
		if (L_67)
		{
			goto IL_03eb;
		}
	}
	{
		RuntimeObject* L_68 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_69;
		L_69 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_68);
		if (L_69)
		{
			goto IL_03eb;
		}
	}
	{
		RuntimeObject** L_70 = ___0_searchSpace;
		int32_t L_71 = V_0;
		RuntimeObject** L_72;
		L_72 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_70, ((int32_t)il2cpp_codegen_add(L_71, 7)));
		RuntimeObject* L_73 = (*(RuntimeObject**)L_72);
		V_1 = L_73;
		RuntimeObject* L_74 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_75;
		L_75 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_74);
		if (L_75)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_76 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_77;
		L_77 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_76);
		if (L_77)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_79;
		L_79 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_78);
		if (L_79)
		{
			goto IL_03ef;
		}
	}
	{
		int32_t L_80 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_80, 8));
	}

IL_0249:
	{
		int32_t L_81 = ___4_length;
		int32_t L_82 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_81, L_82))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_83 = ___4_length;
		int32_t L_84 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84))) < ((int32_t)4)))
		{
			goto IL_03ce;
		}
	}
	{
		RuntimeObject** L_85 = ___0_searchSpace;
		int32_t L_86 = V_0;
		RuntimeObject** L_87;
		L_87 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_85, L_86);
		RuntimeObject* L_88 = (*(RuntimeObject**)L_87);
		V_1 = L_88;
		RuntimeObject* L_89 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_90;
		L_90 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_89);
		if (L_90)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_91 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_92;
		L_92 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_91);
		if (L_92)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_93 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_94;
		L_94 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_93);
		if (L_94)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject** L_95 = ___0_searchSpace;
		int32_t L_96 = V_0;
		RuntimeObject** L_97;
		L_97 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_95, ((int32_t)il2cpp_codegen_add(L_96, 1)));
		RuntimeObject* L_98 = (*(RuntimeObject**)L_97);
		V_1 = L_98;
		RuntimeObject* L_99 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_100;
		L_100 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_99);
		if (L_100)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_101 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_102;
		L_102 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_101);
		if (L_102)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_103 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_104;
		L_104 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_103);
		if (L_104)
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject** L_105 = ___0_searchSpace;
		int32_t L_106 = V_0;
		RuntimeObject** L_107;
		L_107 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, 2)));
		RuntimeObject* L_108 = (*(RuntimeObject**)L_107);
		V_1 = L_108;
		RuntimeObject* L_109 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_110;
		L_110 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_109);
		if (L_110)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject* L_111 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_112;
		L_112 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_111);
		if (L_112)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject* L_113 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_114;
		L_114 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_113);
		if (L_114)
		{
			goto IL_03db;
		}
	}
	{
		RuntimeObject** L_115 = ___0_searchSpace;
		int32_t L_116 = V_0;
		RuntimeObject** L_117;
		L_117 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_115, ((int32_t)il2cpp_codegen_add(L_116, 3)));
		RuntimeObject* L_118 = (*(RuntimeObject**)L_117);
		V_1 = L_118;
		RuntimeObject* L_119 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_120;
		L_120 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_119);
		if (L_120)
		{
			goto IL_03df;
		}
	}
	{
		RuntimeObject* L_121 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_122;
		L_122 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_121);
		if (L_122)
		{
			goto IL_03df;
		}
	}
	{
		RuntimeObject* L_123 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_124;
		L_124 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_123);
		if (L_124)
		{
			goto IL_03df;
		}
	}
	{
		int32_t L_125 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_125, 4));
		goto IL_03ce;
	}

IL_0384:
	{
		RuntimeObject** L_126 = ___0_searchSpace;
		int32_t L_127 = V_0;
		RuntimeObject** L_128;
		L_128 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_126, L_127);
		RuntimeObject* L_129 = (*(RuntimeObject**)L_128);
		V_1 = L_129;
		RuntimeObject* L_130 = V_1;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_131;
		L_131 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_130);
		if (L_131)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_132 = V_1;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_133;
		L_133 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_132);
		if (L_133)
		{
			goto IL_03d5;
		}
	}
	{
		RuntimeObject* L_134 = V_1;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_135;
		L_135 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_134);
		if (L_135)
		{
			goto IL_03d5;
		}
	}
	{
		int32_t L_136 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_03ce:
	{
		int32_t L_137 = V_0;
		int32_t L_138 = ___4_length;
		if ((((int32_t)L_137) < ((int32_t)L_138)))
		{
			goto IL_0384;
		}
	}
	{
		return (-1);
	}

IL_03d5:
	{
		int32_t L_139 = V_0;
		return L_139;
	}

IL_03d7:
	{
		int32_t L_140 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_03db:
	{
		int32_t L_141 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_141, 2));
	}

IL_03df:
	{
		int32_t L_142 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_142, 3));
	}

IL_03e3:
	{
		int32_t L_143 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_143, 4));
	}

IL_03e7:
	{
		int32_t L_144 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_144, 5));
	}

IL_03eb:
	{
		int32_t L_145 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_145, 6));
	}

IL_03ef:
	{
		int32_t L_146 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_146, 7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFB5E6C2E4926DC7480D7A6170057234C54F99FD1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tE89C0FD9589148E4B5AFFF945FB28B5605532C8C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m209CE78F754A172F8BA71A8FF186E9E813F78320_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t6C7D72A9CEA467E2E90AA2C0F8CF56FCE1865E29_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08B1C306F10150A622F2FC85332E67CE429F8B9F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tC2AFFE3D4CC02A099202ECBBC2C952EF436E37A8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m985C87050975D5EED504952EEAB630C398C79C1F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t919D5AD02389F4CF8EDBD0588B40755C956DD6B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFA9BEA03B09A60029AF6D55A88F73A4F8E8608B8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58AC13A7554EFD66189B0D4208BB97C8C9FBB951_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tAF927B394876C551F431F00CCDFFE200EE5C97EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m45EEE25D16DF0AD6B40C62E28C2BD80DD9B7E03A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t762F814E3C63230AD062DC265FFF481F8911BA31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_mDFB2DE60B7025F14C3180698642B3F8F86513ADE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tEBDF0CC18C3AD47E7841EA83B6189A1C0722D516_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0108;
	}

IL_0005:
	{
		int32_t L_0 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_0, 8));
		RuntimeObject** L_1 = ___0_searchSpace;
		int32_t L_2 = ___2_length;
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_1, ((int32_t)il2cpp_codegen_add(L_2, 7)));
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_4);
		if (L_5)
		{
			goto IL_01e1;
		}
	}
	{
		RuntimeObject** L_6 = ___0_searchSpace;
		int32_t L_7 = ___2_length;
		RuntimeObject** L_8;
		L_8 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_6, ((int32_t)il2cpp_codegen_add(L_7, 6)));
		RuntimeObject* L_9 = (*(RuntimeObject**)L_8);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_9);
		if (L_10)
		{
			goto IL_01dd;
		}
	}
	{
		RuntimeObject** L_11 = ___0_searchSpace;
		int32_t L_12 = ___2_length;
		RuntimeObject** L_13;
		L_13 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_11, ((int32_t)il2cpp_codegen_add(L_12, 5)));
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_14);
		if (L_15)
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject** L_16 = ___0_searchSpace;
		int32_t L_17 = ___2_length;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)));
		RuntimeObject* L_19 = (*(RuntimeObject**)L_18);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_20;
		L_20 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_19);
		if (L_20)
		{
			goto IL_01d5;
		}
	}
	{
		RuntimeObject** L_21 = ___0_searchSpace;
		int32_t L_22 = ___2_length;
		RuntimeObject** L_23;
		L_23 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_21, ((int32_t)il2cpp_codegen_add(L_22, 3)));
		RuntimeObject* L_24 = (*(RuntimeObject**)L_23);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_24);
		if (L_25)
		{
			goto IL_01d1;
		}
	}
	{
		RuntimeObject** L_26 = ___0_searchSpace;
		int32_t L_27 = ___2_length;
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)));
		RuntimeObject* L_29 = (*(RuntimeObject**)L_28);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_29);
		if (L_30)
		{
			goto IL_01cd;
		}
	}
	{
		RuntimeObject** L_31 = ___0_searchSpace;
		int32_t L_32 = ___2_length;
		RuntimeObject** L_33;
		L_33 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)));
		RuntimeObject* L_34 = (*(RuntimeObject**)L_33);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_34);
		if (L_35)
		{
			goto IL_01c9;
		}
	}
	{
		RuntimeObject** L_36 = ___0_searchSpace;
		int32_t L_37 = ___2_length;
		RuntimeObject** L_38;
		L_38 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_36, L_37);
		RuntimeObject* L_39 = (*(RuntimeObject**)L_38);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_40;
		L_40 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_39);
		if (L_40)
		{
			goto IL_01c7;
		}
	}

IL_0108:
	{
		int32_t L_41 = ___2_length;
		if ((((int32_t)L_41) >= ((int32_t)8)))
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_42 = ___2_length;
		if ((((int32_t)L_42) < ((int32_t)4)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_43 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_43, 4));
		RuntimeObject** L_44 = ___0_searchSpace;
		int32_t L_45 = ___2_length;
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_44, ((int32_t)il2cpp_codegen_add(L_45, 3)));
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_47);
		if (L_48)
		{
			goto IL_01d1;
		}
	}
	{
		RuntimeObject** L_49 = ___0_searchSpace;
		int32_t L_50 = ___2_length;
		RuntimeObject** L_51;
		L_51 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_49, ((int32_t)il2cpp_codegen_add(L_50, 2)));
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_53;
		L_53 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_52);
		if (L_53)
		{
			goto IL_01cd;
		}
	}
	{
		RuntimeObject** L_54 = ___0_searchSpace;
		int32_t L_55 = ___2_length;
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)));
		RuntimeObject* L_57 = (*(RuntimeObject**)L_56);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_58;
		L_58 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_57);
		if (L_58)
		{
			goto IL_01c9;
		}
	}
	{
		RuntimeObject** L_59 = ___0_searchSpace;
		int32_t L_60 = ___2_length;
		RuntimeObject** L_61;
		L_61 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_59, L_60);
		RuntimeObject* L_62 = (*(RuntimeObject**)L_61);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_63;
		L_63 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_62);
		if (!L_63)
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_01c7;
	}

IL_019e:
	{
		int32_t L_64 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		RuntimeObject** L_65 = ___0_searchSpace;
		int32_t L_66 = ___2_length;
		RuntimeObject** L_67;
		L_67 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_65, L_66);
		RuntimeObject* L_68 = (*(RuntimeObject**)L_67);
		NullCheck((RuntimeObject*)(___1_value));
		bool L_69;
		L_69 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value), L_68);
		if (L_69)
		{
			goto IL_01c7;
		}
	}

IL_01c1:
	{
		int32_t L_70 = ___2_length;
		if ((((int32_t)L_70) > ((int32_t)0)))
		{
			goto IL_019e;
		}
	}
	{
		return (-1);
	}

IL_01c7:
	{
		int32_t L_71 = ___2_length;
		return L_71;
	}

IL_01c9:
	{
		int32_t L_72 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_01cd:
	{
		int32_t L_73 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_73, 2));
	}

IL_01d1:
	{
		int32_t L_74 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_74, 3));
	}

IL_01d5:
	{
		int32_t L_75 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_75, 4));
	}

IL_01d9:
	{
		int32_t L_76 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_76, 5));
	}

IL_01dd:
	{
		int32_t L_77 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_77, 6));
	}

IL_01e1:
	{
		int32_t L_78 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_78, 7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOf_TisRuntimeObject_mE4520D30A961F1F76AA9B87E31BFEA539D0709A4_gshared (RuntimeObject** ___0_searchSpace, int32_t ___1_searchSpaceLength, RuntimeObject** ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	RuntimeObject** V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		RuntimeObject** L_1 = ___2_value;
		RuntimeObject* L_2 = (*(RuntimeObject**)L_1);
		V_0 = L_2;
		RuntimeObject** L_3 = ___2_value;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_3, 1);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001d:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject** L_10 = ___0_searchSpace;
		RuntimeObject* L_11 = V_0;
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2(L_10, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_13;
		int32_t L_14 = V_5;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject** L_15 = ___0_searchSpace;
		int32_t L_16 = V_5;
		RuntimeObject** L_17;
		L_17 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_15, ((int32_t)il2cpp_codegen_add(L_16, 1)));
		RuntimeObject** L_18 = V_1;
		int32_t L_19 = V_2;
		bool L_20;
		L_20 = SpanHelpers_SequenceEqual_TisRuntimeObject_m2E01D43E1B0ED8962FF5621FE8A40D569CF041C4(L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_21 = V_5;
		return L_21;
	}

IL_0058:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_subtract(L_23, L_24))));
		goto IL_001d;
	}

IL_0062:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOfAny_TisRuntimeObject_m22A3AB5C6E8E4B8AFAF037E443075D84787E25D5_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value0, RuntimeObject* ___2_value1, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		goto IL_01b0;
	}

IL_0005:
	{
		int32_t L_0 = ___3_length;
		___3_length = ((int32_t)il2cpp_codegen_subtract(L_0, 8));
		RuntimeObject** L_1 = ___0_searchSpace;
		int32_t L_2 = ___3_length;
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_1, ((int32_t)il2cpp_codegen_add(L_2, 7)));
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_5);
		if (L_6)
		{
			goto IL_02f2;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_7);
		if (L_8)
		{
			goto IL_02f2;
		}
	}
	{
		RuntimeObject** L_9 = ___0_searchSpace;
		int32_t L_10 = ___3_length;
		RuntimeObject** L_11;
		L_11 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_9, ((int32_t)il2cpp_codegen_add(L_10, 6)));
		RuntimeObject* L_12 = (*(RuntimeObject**)L_11);
		V_0 = L_12;
		RuntimeObject* L_13 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_13);
		if (L_14)
		{
			goto IL_02ee;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_15);
		if (L_16)
		{
			goto IL_02ee;
		}
	}
	{
		RuntimeObject** L_17 = ___0_searchSpace;
		int32_t L_18 = ___3_length;
		RuntimeObject** L_19;
		L_19 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		V_0 = L_20;
		RuntimeObject* L_21 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_21);
		if (L_22)
		{
			goto IL_02ea;
		}
	}
	{
		RuntimeObject* L_23 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_23);
		if (L_24)
		{
			goto IL_02ea;
		}
	}
	{
		RuntimeObject** L_25 = ___0_searchSpace;
		int32_t L_26 = ___3_length;
		RuntimeObject** L_27;
		L_27 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_25, ((int32_t)il2cpp_codegen_add(L_26, 4)));
		RuntimeObject* L_28 = (*(RuntimeObject**)L_27);
		V_0 = L_28;
		RuntimeObject* L_29 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_29);
		if (L_30)
		{
			goto IL_02e6;
		}
	}
	{
		RuntimeObject* L_31 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_31);
		if (L_32)
		{
			goto IL_02e6;
		}
	}
	{
		RuntimeObject** L_33 = ___0_searchSpace;
		int32_t L_34 = ___3_length;
		RuntimeObject** L_35;
		L_35 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_33, ((int32_t)il2cpp_codegen_add(L_34, 3)));
		RuntimeObject* L_36 = (*(RuntimeObject**)L_35);
		V_0 = L_36;
		RuntimeObject* L_37 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_38;
		L_38 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_37);
		if (L_38)
		{
			goto IL_02e2;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_40;
		L_40 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_39);
		if (L_40)
		{
			goto IL_02e2;
		}
	}
	{
		RuntimeObject** L_41 = ___0_searchSpace;
		int32_t L_42 = ___3_length;
		RuntimeObject** L_43;
		L_43 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_41, ((int32_t)il2cpp_codegen_add(L_42, 2)));
		RuntimeObject* L_44 = (*(RuntimeObject**)L_43);
		V_0 = L_44;
		RuntimeObject* L_45 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_46;
		L_46 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_45);
		if (L_46)
		{
			goto IL_02de;
		}
	}
	{
		RuntimeObject* L_47 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_47);
		if (L_48)
		{
			goto IL_02de;
		}
	}
	{
		RuntimeObject** L_49 = ___0_searchSpace;
		int32_t L_50 = ___3_length;
		RuntimeObject** L_51;
		L_51 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_49, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_0 = L_52;
		RuntimeObject* L_53 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_54;
		L_54 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_53);
		if (L_54)
		{
			goto IL_02da;
		}
	}
	{
		RuntimeObject* L_55 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_56;
		L_56 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_55);
		if (L_56)
		{
			goto IL_02da;
		}
	}
	{
		RuntimeObject** L_57 = ___0_searchSpace;
		int32_t L_58 = ___3_length;
		RuntimeObject** L_59;
		L_59 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_57, L_58);
		RuntimeObject* L_60 = (*(RuntimeObject**)L_59);
		V_0 = L_60;
		RuntimeObject* L_61 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_62;
		L_62 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_61);
		if (L_62)
		{
			goto IL_02d8;
		}
	}
	{
		RuntimeObject* L_63 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_64;
		L_64 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_63);
		if (L_64)
		{
			goto IL_02d8;
		}
	}

IL_01b0:
	{
		int32_t L_65 = ___3_length;
		if ((((int32_t)L_65) >= ((int32_t)8)))
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_66 = ___3_length;
		if ((((int32_t)L_66) < ((int32_t)4)))
		{
			goto IL_02d2;
		}
	}
	{
		int32_t L_67 = ___3_length;
		___3_length = ((int32_t)il2cpp_codegen_subtract(L_67, 4));
		RuntimeObject** L_68 = ___0_searchSpace;
		int32_t L_69 = ___3_length;
		RuntimeObject** L_70;
		L_70 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_68, ((int32_t)il2cpp_codegen_add(L_69, 3)));
		RuntimeObject* L_71 = (*(RuntimeObject**)L_70);
		V_0 = L_71;
		RuntimeObject* L_72 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_73;
		L_73 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_72);
		if (L_73)
		{
			goto IL_02e2;
		}
	}
	{
		RuntimeObject* L_74 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_75;
		L_75 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_74);
		if (L_75)
		{
			goto IL_02e2;
		}
	}
	{
		RuntimeObject** L_76 = ___0_searchSpace;
		int32_t L_77 = ___3_length;
		RuntimeObject** L_78;
		L_78 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_76, ((int32_t)il2cpp_codegen_add(L_77, 2)));
		RuntimeObject* L_79 = (*(RuntimeObject**)L_78);
		V_0 = L_79;
		RuntimeObject* L_80 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_81;
		L_81 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_80);
		if (L_81)
		{
			goto IL_02de;
		}
	}
	{
		RuntimeObject* L_82 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_83;
		L_83 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_82);
		if (L_83)
		{
			goto IL_02de;
		}
	}
	{
		RuntimeObject** L_84 = ___0_searchSpace;
		int32_t L_85 = ___3_length;
		RuntimeObject** L_86;
		L_86 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_84, ((int32_t)il2cpp_codegen_add(L_85, 1)));
		RuntimeObject* L_87 = (*(RuntimeObject**)L_86);
		V_0 = L_87;
		RuntimeObject* L_88 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_89;
		L_89 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_88);
		if (L_89)
		{
			goto IL_02da;
		}
	}
	{
		RuntimeObject* L_90 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_91;
		L_91 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_90);
		if (L_91)
		{
			goto IL_02da;
		}
	}
	{
		RuntimeObject** L_92 = ___0_searchSpace;
		int32_t L_93 = ___3_length;
		RuntimeObject** L_94;
		L_94 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_92, L_93);
		RuntimeObject* L_95 = (*(RuntimeObject**)L_94);
		V_0 = L_95;
		RuntimeObject* L_96 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_97;
		L_97 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_96);
		if (L_97)
		{
			goto IL_02d8;
		}
	}
	{
		RuntimeObject* L_98 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_99;
		L_99 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_98);
		if (!L_99)
		{
			goto IL_02d2;
		}
	}
	{
		goto IL_02d8;
	}

IL_029a:
	{
		int32_t L_100 = ___3_length;
		___3_length = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		RuntimeObject** L_101 = ___0_searchSpace;
		int32_t L_102 = ___3_length;
		RuntimeObject** L_103;
		L_103 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_101, L_102);
		RuntimeObject* L_104 = (*(RuntimeObject**)L_103);
		V_0 = L_104;
		RuntimeObject* L_105 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_106;
		L_106 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_105);
		if (L_106)
		{
			goto IL_02d8;
		}
	}
	{
		RuntimeObject* L_107 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_108;
		L_108 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_107);
		if (L_108)
		{
			goto IL_02d8;
		}
	}

IL_02d2:
	{
		int32_t L_109 = ___3_length;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		return (-1);
	}

IL_02d8:
	{
		int32_t L_110 = ___3_length;
		return L_110;
	}

IL_02da:
	{
		int32_t L_111 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_02de:
	{
		int32_t L_112 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_02e2:
	{
		int32_t L_113 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_113, 3));
	}

IL_02e6:
	{
		int32_t L_114 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_114, 4));
	}

IL_02ea:
	{
		int32_t L_115 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_115, 5));
	}

IL_02ee:
	{
		int32_t L_116 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_116, 6));
	}

IL_02f2:
	{
		int32_t L_117 = ___3_length;
		return ((int32_t)il2cpp_codegen_add(L_117, 7));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOfAny_TisRuntimeObject_mEDFCFCBEABA883C7E42B2C3C4D81D6F59FEE0EC8_gshared (RuntimeObject** ___0_searchSpace, int32_t ___1_searchSpaceLength, RuntimeObject** ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0032;
	}

IL_0011:
	{
		RuntimeObject** L_1 = ___0_searchSpace;
		RuntimeObject** L_2 = ___2_value;
		int32_t L_3 = V_1;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = SpanHelpers_LastIndexOf_TisRuntimeObject_mB34CEB15E00ACEA5B782EF94A0A8C504068B7AB2(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___3_valueLength;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOfAny_TisRuntimeObject_m9B983E1E29C95585661210457645553E75CB06FC_gshared (RuntimeObject** ___0_searchSpace, RuntimeObject* ___1_value0, RuntimeObject* ___2_value1, RuntimeObject* ___3_value2, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0251;
	}

IL_0005:
	{
		int32_t L_0 = ___4_length;
		___4_length = ((int32_t)il2cpp_codegen_subtract(L_0, 8));
		RuntimeObject** L_1 = ___0_searchSpace;
		int32_t L_2 = ___4_length;
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_1, ((int32_t)il2cpp_codegen_add(L_2, 7)));
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_5);
		if (L_6)
		{
			goto IL_0403;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_7);
		if (L_8)
		{
			goto IL_0403;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_9);
		if (L_10)
		{
			goto IL_0403;
		}
	}
	{
		RuntimeObject** L_11 = ___0_searchSpace;
		int32_t L_12 = ___4_length;
		RuntimeObject** L_13;
		L_13 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_11, ((int32_t)il2cpp_codegen_add(L_12, 6)));
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_15);
		if (L_16)
		{
			goto IL_03fe;
		}
	}
	{
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_17);
		if (L_18)
		{
			goto IL_03fe;
		}
	}
	{
		RuntimeObject* L_19 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_20;
		L_20 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_19);
		if (L_20)
		{
			goto IL_03fe;
		}
	}
	{
		RuntimeObject** L_21 = ___0_searchSpace;
		int32_t L_22 = ___4_length;
		RuntimeObject** L_23;
		L_23 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_21, ((int32_t)il2cpp_codegen_add(L_22, 5)));
		RuntimeObject* L_24 = (*(RuntimeObject**)L_23);
		V_0 = L_24;
		RuntimeObject* L_25 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_26;
		L_26 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_25);
		if (L_26)
		{
			goto IL_03f9;
		}
	}
	{
		RuntimeObject* L_27 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_28;
		L_28 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_27);
		if (L_28)
		{
			goto IL_03f9;
		}
	}
	{
		RuntimeObject* L_29 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_29);
		if (L_30)
		{
			goto IL_03f9;
		}
	}
	{
		RuntimeObject** L_31 = ___0_searchSpace;
		int32_t L_32 = ___4_length;
		RuntimeObject** L_33;
		L_33 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_31, ((int32_t)il2cpp_codegen_add(L_32, 4)));
		RuntimeObject* L_34 = (*(RuntimeObject**)L_33);
		V_0 = L_34;
		RuntimeObject* L_35 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_35);
		if (L_36)
		{
			goto IL_03f4;
		}
	}
	{
		RuntimeObject* L_37 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_38;
		L_38 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_37);
		if (L_38)
		{
			goto IL_03f4;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_40;
		L_40 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_39);
		if (L_40)
		{
			goto IL_03f4;
		}
	}
	{
		RuntimeObject** L_41 = ___0_searchSpace;
		int32_t L_42 = ___4_length;
		RuntimeObject** L_43;
		L_43 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_41, ((int32_t)il2cpp_codegen_add(L_42, 3)));
		RuntimeObject* L_44 = (*(RuntimeObject**)L_43);
		V_0 = L_44;
		RuntimeObject* L_45 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_46;
		L_46 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_45);
		if (L_46)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_47 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_47);
		if (L_48)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_49 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_50;
		L_50 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_49);
		if (L_50)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject** L_51 = ___0_searchSpace;
		int32_t L_52 = ___4_length;
		RuntimeObject** L_53;
		L_53 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_51, ((int32_t)il2cpp_codegen_add(L_52, 2)));
		RuntimeObject* L_54 = (*(RuntimeObject**)L_53);
		V_0 = L_54;
		RuntimeObject* L_55 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_56;
		L_56 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_55);
		if (L_56)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject* L_57 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_58;
		L_58 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_57);
		if (L_58)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject* L_59 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_60;
		L_60 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_59);
		if (L_60)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject** L_61 = ___0_searchSpace;
		int32_t L_62 = ___4_length;
		RuntimeObject** L_63;
		L_63 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_61, ((int32_t)il2cpp_codegen_add(L_62, 1)));
		RuntimeObject* L_64 = (*(RuntimeObject**)L_63);
		V_0 = L_64;
		RuntimeObject* L_65 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_66;
		L_66 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_65);
		if (L_66)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject* L_67 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_68;
		L_68 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_67);
		if (L_68)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject* L_69 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_70;
		L_70 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_69);
		if (L_70)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject** L_71 = ___0_searchSpace;
		int32_t L_72 = ___4_length;
		RuntimeObject** L_73;
		L_73 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_71, L_72);
		RuntimeObject* L_74 = (*(RuntimeObject**)L_73);
		V_0 = L_74;
		RuntimeObject* L_75 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_76;
		L_76 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_75);
		if (L_76)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_77 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_78;
		L_78 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_77);
		if (L_78)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_79 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_80;
		L_80 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_79);
		if (L_80)
		{
			goto IL_03e2;
		}
	}

IL_0251:
	{
		int32_t L_81 = ___4_length;
		if ((((int32_t)L_81) >= ((int32_t)8)))
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_82 = ___4_length;
		if ((((int32_t)L_82) < ((int32_t)4)))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_83 = ___4_length;
		___4_length = ((int32_t)il2cpp_codegen_subtract(L_83, 4));
		RuntimeObject** L_84 = ___0_searchSpace;
		int32_t L_85 = ___4_length;
		RuntimeObject** L_86;
		L_86 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_84, ((int32_t)il2cpp_codegen_add(L_85, 3)));
		RuntimeObject* L_87 = (*(RuntimeObject**)L_86);
		V_0 = L_87;
		RuntimeObject* L_88 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_89;
		L_89 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_88);
		if (L_89)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_90 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_91;
		L_91 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_90);
		if (L_91)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_92 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_93;
		L_93 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_92);
		if (L_93)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject** L_94 = ___0_searchSpace;
		int32_t L_95 = ___4_length;
		RuntimeObject** L_96;
		L_96 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_94, ((int32_t)il2cpp_codegen_add(L_95, 2)));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		V_0 = L_97;
		RuntimeObject* L_98 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_99;
		L_99 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_98);
		if (L_99)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject* L_100 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_101;
		L_101 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_100);
		if (L_101)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject* L_102 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_103;
		L_103 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_102);
		if (L_103)
		{
			goto IL_03ea;
		}
	}
	{
		RuntimeObject** L_104 = ___0_searchSpace;
		int32_t L_105 = ___4_length;
		RuntimeObject** L_106;
		L_106 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_104, ((int32_t)il2cpp_codegen_add(L_105, 1)));
		RuntimeObject* L_107 = (*(RuntimeObject**)L_106);
		V_0 = L_107;
		RuntimeObject* L_108 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_109;
		L_109 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_108);
		if (L_109)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject* L_110 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_111;
		L_111 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_110);
		if (L_111)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject* L_112 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_113;
		L_113 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_112);
		if (L_113)
		{
			goto IL_03e5;
		}
	}
	{
		RuntimeObject** L_114 = ___0_searchSpace;
		int32_t L_115 = ___4_length;
		RuntimeObject** L_116;
		L_116 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_114, L_115);
		RuntimeObject* L_117 = (*(RuntimeObject**)L_116);
		V_0 = L_117;
		RuntimeObject* L_118 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_119;
		L_119 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_118);
		if (L_119)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_120 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_121;
		L_121 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_120);
		if (L_121)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_122 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_123;
		L_123 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_122);
		if (!L_123)
		{
			goto IL_03db;
		}
	}
	{
		goto IL_03e2;
	}

IL_038e:
	{
		int32_t L_124 = ___4_length;
		___4_length = ((int32_t)il2cpp_codegen_subtract(L_124, 1));
		RuntimeObject** L_125 = ___0_searchSpace;
		int32_t L_126 = ___4_length;
		RuntimeObject** L_127;
		L_127 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_125, L_126);
		RuntimeObject* L_128 = (*(RuntimeObject**)L_127);
		V_0 = L_128;
		RuntimeObject* L_129 = V_0;
		NullCheck((RuntimeObject*)(___1_value0));
		bool L_130;
		L_130 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___1_value0), L_129);
		if (L_130)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_131 = V_0;
		NullCheck((RuntimeObject*)(___2_value1));
		bool L_132;
		L_132 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___2_value1), L_131);
		if (L_132)
		{
			goto IL_03e2;
		}
	}
	{
		RuntimeObject* L_133 = V_0;
		NullCheck((RuntimeObject*)(___3_value2));
		bool L_134;
		L_134 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)(___3_value2), L_133);
		if (L_134)
		{
			goto IL_03e2;
		}
	}

IL_03db:
	{
		int32_t L_135 = ___4_length;
		if ((((int32_t)L_135) > ((int32_t)0)))
		{
			goto IL_038e;
		}
	}
	{
		return (-1);
	}

IL_03e2:
	{
		int32_t L_136 = ___4_length;
		return L_136;
	}

IL_03e5:
	{
		int32_t L_137 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_03ea:
	{
		int32_t L_138 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_138, 2));
	}

IL_03ef:
	{
		int32_t L_139 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_139, 3));
	}

IL_03f4:
	{
		int32_t L_140 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_140, 4));
	}

IL_03f9:
	{
		int32_t L_141 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_141, 5));
	}

IL_03fe:
	{
		int32_t L_142 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_142, 6));
	}

IL_0403:
	{
		int32_t L_143 = ___4_length;
		return ((int32_t)il2cpp_codegen_add(L_143, 7));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ScriptableRendererData_get_rendererFeatures_m1DF4156F6E0733E01D096AE7A3C43EC6C9D2DD45_inline (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* L_0 = __this->___m_RendererFeatures;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* ServiceDescriptor_get_Proto_m8BB29E43724945E3D54B1929EE112CFF8BC4EF0C_inline (ServiceDescriptor_tDD4F15CF597272EA95C9E26033D823C02F7D69B2* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* L_0 = __this->___proto;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* ServiceDescriptorProto_get_Options_mD64A84716C82BE13B86789E4F10A1D9457358ACB_inline (ServiceDescriptorProto_tD777A60E3F706EB502597597C6180723A8DBF96A* __this, const RuntimeMethod* method) 
{
	{
		ServiceOptions_tD1923467ECC7F5FE0A927CAD3EA758B0A1ED2B1B* L_0 = __this->___options_;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m68E9780C0686610F7BE2482913C555859949065E_inline (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* EqualityComparer_1_get_Default_m443E9898400D9449F778EDBAC97856DA9A0057C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* V_0 = NULL;
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_0 = ((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEC9E7D42057D720BD5C432BEBEAF047B1E459907(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* EqualityComparer_1_get_Default_mD4D0DAA6C001B196E67BE8C2300C1FDF200642DB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* V_0 = NULL;
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_0 = ((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB6F7C63A873735C1C9DCC17393C8844B9F014DC1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* EqualityComparer_1_get_Default_m12957893371F53A4F73458D49D4685CCC34C5C16_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* V_0 = NULL;
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_0 = ((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m779CEAAA847760E44B83AED6B8E7A854F40754FF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_arg1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1242A8B9CB2F8EF97E9D368E70A1BA8213B2EEAD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFB5E6C2E4926DC7480D7A6170057234C54F99FD1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBB699D63D73D6FF03EA2EC7156BC399DFCCDCEAE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tE89C0FD9589148E4B5AFFF945FB28B5605532C8C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m849512D04BC226CC8CC53702BAC0F2A3A3E0A69B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFA9BEA03B09A60029AF6D55A88F73A4F8E8608B8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
