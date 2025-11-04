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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
struct Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6;
struct Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A;
struct Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA;
struct Assembly_t;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct Exception_t;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPinnable_tC70876C2D27FC4D6202C6E29E9FBC2A60C4A8BB8;
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct System_Memory215866___BlockReflectionAttribute_t4BAC88A018840A93EB6C81D19CDA27D25136CD85;
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8;
struct Type_t;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
struct CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPinnable_tC70876C2D27FC4D6202C6E29E9FBC2A60C4A8BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____0953DF544832295E4A5B19928F95C351F25DA86A_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____1588174EA926BCCEB6275C029A42C7E3DBA4D523_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____3CDA7449B0586AB873C75C04BB11D4864F5D7392_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____C4C38BC485A320D4B7D737DB85E705077FA38BEF_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____DD3AEFEADB1CD615F3017763F1568179FEE640B0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____E92B39D8233061927D9ACDE54665E68E7535635A_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C879F0EF82DD1ED892B90B4D755D9EA9662C2F2;
IL2CPP_EXTERN_C String_t* _stringLiteral31C5B361BE28C345F3B64B8F0113EFCF495B5393;
IL2CPP_EXTERN_C String_t* _stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral6F95F93366B0AEEDFECE6EF7CD4BA95DB54D9D46;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD2EADD64E465BE6A5B4246CBE023D464455908;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD;
IL2CPP_EXTERN_C String_t* _stringLiteralE90A069E2414DF805413CE853073D5959BC884E9;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormat_m243D2C1CEC715441A558F2BD84017F52E264CFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t4A538FAA06B2F40B82A5A87A39EC58678DB4288A_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069  : public RuntimeObject
{
};
struct Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A  : public RuntimeObject
{
	uint8_t ___Data;
};
struct Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9  : public RuntimeObject
{
	Il2CppChar ___Data;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C  : public RuntimeObject
{
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct BuffersExtensions_tD0545936F9BE56316291DF6A713DF337146EA3D3  : public RuntimeObject
{
};
struct FormattingHelpers_t7BE208521F199D6779B75612B328F5F62E56D821  : public RuntimeObject
{
};
struct HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430  : public RuntimeObject
{
};
struct MemoryMarshal_tA8E08F0448D10934C8A1A903DE20EA8998993785  : public RuntimeObject
{
};
struct NotImplemented_tB141553F31AEB5179DFFDFEE8AD91B55E0466169  : public RuntimeObject
{
};
struct ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D  : public RuntimeObject
{
};
struct ReadOnlySequence_t456FD512A1D1C6A81B8EF3E91603B11B13556789  : public RuntimeObject
{
};
struct SequenceMarshal_t6BFE5B8AF8C055BD30EA78928C514E01AE0BE10D  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1  : public RuntimeObject
{
};
struct Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690  : public RuntimeObject
{
};
struct Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC  : public RuntimeObject
{
};
struct Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1  : public RuntimeObject
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
struct ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430 
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D 
{
	uint32_t ___Flags;
	uint32_t ___High;
	uint32_t ___Low;
	uint32_t ___Mid;
};
struct NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 
{
	void* ____value;
};
struct NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 
{
	int32_t ___Scale;
	bool ___IsNegative;
	uint8_t ____b0;
	uint8_t ____b1;
	uint8_t ____b2;
	uint8_t ____b3;
	uint8_t ____b4;
	uint8_t ____b5;
	uint8_t ____b6;
	uint8_t ____b7;
	uint8_t ____b8;
	uint8_t ____b9;
	uint8_t ____b10;
	uint8_t ____b11;
	uint8_t ____b12;
	uint8_t ____b13;
	uint8_t ____b14;
	uint8_t ____b15;
	uint8_t ____b16;
	uint8_t ____b17;
	uint8_t ____b18;
	uint8_t ____b19;
	uint8_t ____b20;
	uint8_t ____b21;
	uint8_t ____b22;
	uint8_t ____b23;
	uint8_t ____b24;
	uint8_t ____b25;
	uint8_t ____b26;
	uint8_t ____b27;
	uint8_t ____b28;
	uint8_t ____b29;
	uint8_t ____b30;
	uint8_t ____b31;
	uint8_t ____b32;
	uint8_t ____b33;
	uint8_t ____b34;
	uint8_t ____b35;
	uint8_t ____b36;
	uint8_t ____b37;
	uint8_t ____b38;
	uint8_t ____b39;
	uint8_t ____b40;
	uint8_t ____b41;
	uint8_t ____b42;
	uint8_t ____b43;
	uint8_t ____b44;
	uint8_t ____b45;
	uint8_t ____b46;
	uint8_t ____b47;
	uint8_t ____b48;
	uint8_t ____b49;
	uint8_t ____b50;
};
struct NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2_marshaled_pinvoke
{
	int32_t ___Scale;
	int32_t ___IsNegative;
	uint8_t ____b0;
	uint8_t ____b1;
	uint8_t ____b2;
	uint8_t ____b3;
	uint8_t ____b4;
	uint8_t ____b5;
	uint8_t ____b6;
	uint8_t ____b7;
	uint8_t ____b8;
	uint8_t ____b9;
	uint8_t ____b10;
	uint8_t ____b11;
	uint8_t ____b12;
	uint8_t ____b13;
	uint8_t ____b14;
	uint8_t ____b15;
	uint8_t ____b16;
	uint8_t ____b17;
	uint8_t ____b18;
	uint8_t ____b19;
	uint8_t ____b20;
	uint8_t ____b21;
	uint8_t ____b22;
	uint8_t ____b23;
	uint8_t ____b24;
	uint8_t ____b25;
	uint8_t ____b26;
	uint8_t ____b27;
	uint8_t ____b28;
	uint8_t ____b29;
	uint8_t ____b30;
	uint8_t ____b31;
	uint8_t ____b32;
	uint8_t ____b33;
	uint8_t ____b34;
	uint8_t ____b35;
	uint8_t ____b36;
	uint8_t ____b37;
	uint8_t ____b38;
	uint8_t ____b39;
	uint8_t ____b40;
	uint8_t ____b41;
	uint8_t ____b42;
	uint8_t ____b43;
	uint8_t ____b44;
	uint8_t ____b45;
	uint8_t ____b46;
	uint8_t ____b47;
	uint8_t ____b48;
	uint8_t ____b49;
	uint8_t ____b50;
};
struct NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2_marshaled_com
{
	int32_t ___Scale;
	int32_t ___IsNegative;
	uint8_t ____b0;
	uint8_t ____b1;
	uint8_t ____b2;
	uint8_t ____b3;
	uint8_t ____b4;
	uint8_t ____b5;
	uint8_t ____b6;
	uint8_t ____b7;
	uint8_t ____b8;
	uint8_t ____b9;
	uint8_t ____b10;
	uint8_t ____b11;
	uint8_t ____b12;
	uint8_t ____b13;
	uint8_t ____b14;
	uint8_t ____b15;
	uint8_t ____b16;
	uint8_t ____b17;
	uint8_t ____b18;
	uint8_t ____b19;
	uint8_t ____b20;
	uint8_t ____b21;
	uint8_t ____b22;
	uint8_t ____b23;
	uint8_t ____b24;
	uint8_t ____b25;
	uint8_t ____b26;
	uint8_t ____b27;
	uint8_t ____b28;
	uint8_t ____b29;
	uint8_t ____b30;
	uint8_t ____b31;
	uint8_t ____b32;
	uint8_t ____b33;
	uint8_t ____b34;
	uint8_t ____b35;
	uint8_t ____b36;
	uint8_t ____b37;
	uint8_t ____b38;
	uint8_t ____b39;
	uint8_t ____b40;
	uint8_t ____b41;
	uint8_t ____b42;
	uint8_t ____b43;
	uint8_t ____b44;
	uint8_t ____b45;
	uint8_t ____b46;
	uint8_t ____b47;
	uint8_t ____b48;
	uint8_t ____b49;
	uint8_t ____b50;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA 
{
	uint8_t ____format;
	uint8_t ____precision;
};
struct System_Memory215866___BlockReflectionAttribute_t4BAC88A018840A93EB6C81D19CDA27D25136CD85  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct Reg16_tD61ECC335C5DAD8F9188E80CD154CDC5EB282CDC 
{
	union
	{
		struct
		{
		};
		uint8_t Reg16_tD61ECC335C5DAD8F9188E80CD154CDC5EB282CDC__padding[16];
	};
};
struct Reg32_t870C83F8F7CDA853A2D9F5F4AF0CAD2470B3A1EB 
{
	union
	{
		struct
		{
		};
		uint8_t Reg32_t870C83F8F7CDA853A2D9F5F4AF0CAD2470B3A1EB__padding[32];
	};
};
struct Reg64_t0388079EBCD9D6FAD7C9CFEB0EFBA6169D285ECD 
{
	union
	{
		struct
		{
		};
		uint8_t Reg64_t0388079EBCD9D6FAD7C9CFEB0EFBA6169D285ECD__padding[64];
	};
};
struct TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF 
{
	uint32_t ___V1;
	uint32_t ___V2;
	uint32_t ___V3;
	uint32_t ___V4;
	uint32_t ___V5;
	bool ___IsNegative;
	uint32_t ___Separators;
};
struct TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF_marshaled_pinvoke
{
	uint32_t ___V1;
	uint32_t ___V2;
	uint32_t ___V3;
	uint32_t ___V4;
	uint32_t ___V5;
	int32_t ___IsNegative;
	uint32_t ___Separators;
};
struct TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF_marshaled_com
{
	uint32_t ___V1;
	uint32_t ___V2;
	uint32_t ___V3;
	uint32_t ___V4;
	uint32_t ___V5;
	int32_t ___IsNegative;
	uint32_t ___Separators;
};
struct ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2 
{
	SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844 ____sequenceStart;
	SequencePosition_t9D5484E9AB7535D44D6E6431C37D0DE5FF7FF844 ____sequenceEnd;
};
struct ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 
{
	Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 
{
	Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 
{
	Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct DayOfWeek_t726DBD527FF9B9D2A0352FB80C55EE2EBE56783D 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t32F69FC17267C34851B230133D8BAAEDDF1872FA 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct OperationStatus_t24C42E5E8EF45E1C90D4554AE1F8408D571B2901 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	int32_t ___value__;
};
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8  : public RuntimeObject
{
	String_t* ____id;
	String_t* ____displayName;
	String_t* ____standardDisplayName;
	String_t* ____daylightDisplayName;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____baseUtcOffset;
	bool ____supportsDaylightSavingTime;
	AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA* ____adjustmentRules;
};
struct UltimateResourceFallbackLocation_tFA91547D7BF4CEF1101A7C391ECB7B73EE073AB6 
{
	int32_t ___value__;
};
struct HexCasing_t2DB1BA15006AE64EF4BB747F4DBDF292B411BAEB 
{
	uint32_t ___value__;
};
struct DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Guid_t ___Guid;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t ___Guid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte00;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte00_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte01_OffsetPadding[1];
			uint8_t ___Byte01;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte01_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte01_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte02_OffsetPadding[2];
			uint8_t ___Byte02;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte02_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte02_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte03_OffsetPadding[3];
			uint8_t ___Byte03;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte03_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte03_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte04_OffsetPadding[4];
			uint8_t ___Byte04;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte04_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte04_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte05_OffsetPadding[5];
			uint8_t ___Byte05;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte05_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte05_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte06_OffsetPadding[6];
			uint8_t ___Byte06;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte06_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte06_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte07_OffsetPadding[7];
			uint8_t ___Byte07;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte07_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte07_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte08_OffsetPadding[8];
			uint8_t ___Byte08;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte08_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte08_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte09_OffsetPadding[9];
			uint8_t ___Byte09;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte09_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte09_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
	};
};
struct ParseNumberOptions_t7578789E11B343201376889392066ADFA90BCDCC 
{
	int32_t ___value__;
};
struct MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2 
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_pinvoke
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_com
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	String_t* ___BaseNameField;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets;
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets;
	String_t* ___moduleDir;
	Assembly_t* ___MainAssembly;
	Type_t* ____locationInfo;
	Type_t* ____userResourceSet;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture;
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache;
	bool ____ignoreCase;
	bool ___UseManifest;
	bool ___UseSatelliteAssem;
	int32_t ____fallbackLoc;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion;
	bool ____lookedForSatelliteContractVersion;
	Assembly_t* ____callingAssembly;
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly;
	RuntimeObject* ___resourceGroveler;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_decodingMap;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_encodingMap;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5_StaticFields
{
	int32_t ___RandomSeed;
};
struct MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_StaticFields
{
	intptr_t ___StringAdjustment;
};
struct ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_hexLookup;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields
{
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager;
	Type_t* ___U3CResourceTypeU3Ek__BackingField;
};
struct Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_nullUtcOffset;
};
struct Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___DayAbbreviations;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___DayAbbreviationsLowercase;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MonthAbbreviations;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MonthAbbreviationsLowercase;
};
struct Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2_StaticFields
{
	ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2 ___Empty;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_StaticFields
{
	Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* ___lazyHaveRegistry;
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* ___s_utcTimeZone;
	CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF* ___s_cachedData;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateOnly;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateOnly;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxOffset;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinOffset;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	int32_t ___MagicNumber;
	int32_t ___HeaderVersionNumber;
	Type_t* ____minResourceSet;
	String_t* ___ResReaderTypeName;
	String_t* ___ResSetTypeName;
	String_t* ___MscorlibName;
	int32_t ___DEBUG;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202_gshared (ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2* __this, String_t** ___0_text, int32_t* ___1_start, int32_t* ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_gshared_inline (ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_gshared (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_gshared (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_gshared (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10_gshared (double ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50_gshared (float ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058_gshared (bool* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F_gshared (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E_gshared (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, float ___1_positiveInfinity, float ___2_negativeInfinity, float ___3_nan, float* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E_gshared (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, double ___1_positiveInfinity, double ___2_negativeInfinity, double ___3_nan, double* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9_gshared (double* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9_gshared (Guid_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70_gshared (int8_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A_gshared (int16_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE_gshared (int32_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2_gshared (int64_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F_gshared (uint8_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F_gshared (uint16_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962_gshared (uint32_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9_gshared (uint64_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_gshared (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657_gshared (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_gshared_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mA0F5B8C085A0479C02D85A1C69EFEE79B0FB6545 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MutableDecimal_get_IsNegative_mF192B2F74A20398297C2488A6A5B542B3BDE269F (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_IsNegative_mEC3F41233EE8ED80A45BFD920CE142F467BCA80F (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutableDecimal_get_Scale_m477E04D9D0D0A2480E708CC68BCBD9A9FE3D7D50 (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_Scale_m3405948CA9F7AFBC1A0496E7D89D5714D0A261B2 (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* System_Memory215866_SR_get_ResourceType_m787D95C7B54DAA1E85BD2DA4377885513F20CAB4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___0_resourceSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* System_Memory215866_SR_get_ResourceManager_m7F620422403A67AAD1D250876A208CA5C8F7693F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7 (String_t* ___0_separator, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941 (String_t* ___0_resourceKey, String_t* ___1_defaultString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
inline bool ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202 (ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2* __this, String_t** ___0_text, int32_t* ___1_start, int32_t* ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2*, String_t**, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202_gshared)(__this, ___0_text, ___1_start, ___2_length, method);
}
inline RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_inline (ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430*, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mC1188BBD43300FE4D2F09546CE6D1065D610308E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m3C928A4566BFED87926398E98CAD24EF65211A9A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, Il2CppChar ___0_symbol, uint8_t ___1_precision, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_gshared_inline)(__this, method);
}
inline Il2CppChar* ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_CannotParsePrecision_m11AC2CF6AA0DBD783F43378CE53A759E1E56DA35 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_Format_m00960CC909F1C3F084C200FB1044B6DCD2668BC9 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_PrecisionTooLarge_mF062CD2320992EB75E4E7C12CC0D27969BAA392E (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 MemoryExtensions_AsSpan_mC5B28FB7C2B1AA4EB631A5E4CE6BDF204E8F7A3E_inline (String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13 (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m3B844C88270D7C95F7C17C87074C44EEE38564D2 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardFormat_GetHashCode_m82C4B5C733A33B9FB8C692DEB367504C421DC63A (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardFormat_ToString_mC779747506EBE590FCB1B0F2F8813B85F9762E75 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_m412DA9623E1BCE616674CC2D20D75FD046781D01 (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_m368BBDD17335981575583BECF11A9BEE5882F002_inline (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_m65B2630E2796D33A28EEAA5174D81E2CA4975D86 (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_gshared)(___0_span, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_gshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_gshared_inline)(__this, method);
}
inline int32_t Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9*, const RuntimeMethod*))Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_GetMaxDecodedFromUtf8Length_mC9C90E06EFEA9E2D3424860323B986A52C5215D2_inline (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_Decode_mD0BADC72D840626735C4BB3A546F639EA80D4489_inline (uint8_t* ___0_encodedBytes, int8_t* ___1_decodingMap, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline (uint8_t* ___0_destination, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_GetMaxEncodedToUtf8Length_mA3FEA01A2BA01357F6C24DC393BE82A7B8AC77A4_inline (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_Encode_m8428F11B149CF32270FBA512BCA1F1918C1DCBF8_inline (uint8_t* ___0_threeBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadTwo_m28EEF9A183F38CB4D91780D9B286DEE2CB882D5E_inline (uint8_t* ___0_oneByte, uint8_t* ___1_encodingMap, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadOne_m27CD106730D70FA5F926BF3736B598BEF17EC29A_inline (uint8_t* ___0_twoBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
inline uint8_t* Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9*, int32_t, const RuntimeMethod*))Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38_inline (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* ___0_format, Il2CppChar ___1_defaultSymbol, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BinaryPrimitives_TryWriteUInt32BigEndian_mA4F7D1C8C872C15E5D70BAB5A9BF0A0F410B89BD_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32BigEndian_m7FDFF39BEAB2E4FC2C6444DA26F7E48C24620E27_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E (int32_t* ___0_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeR_m9E09016D63D159B7C275A72112637F9FF3C66460 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeL_mCB459C61A21BBD3594889131091D6878DF2A46C9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeO_mBD36789D0606C3D967171204CABB9EAB8F1010D9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeG_m9A396F6F783750955EB1C39B17930C1A709B54F5 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_LessThan_m91C76FBEB38D80680A92A5FACA3A93810349B0FF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0 (TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
inline Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_DayOfWeek_mAC680139BCAA1613FC134454D1AD1B502CB1BB68 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA StandardFormat_op_Implicit_mE2E278605D3C00B919B055D0A930CA62F82F42C6 (Il2CppChar ___0_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_DecimalToNumber_mE803AC96383DB5E417A4BD7B2E428568C750D5BB (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___1_number, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalG_m3B05A8507836B3385647CE9402B2C20C771C481E (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_RoundNumber_m8773F007B12F695FED742326FA32BE841160B5C7 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, int32_t ___1_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalF_m73B3156D35EB841FCC6CA30018913351783EFFC4 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, uint8_t ___3_precision, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalE_m1CC4618BE35A823FFD27130B51EFA36F2F61DED1 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, uint8_t ___3_precision, uint8_t ___4_exponentSymbol, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, const RuntimeMethod*))Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_gshared)(___0_span, method);
}
inline uint8_t* ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberBuffer_get_NumDigits_m744B724DE0EC44CDF06843758627E97D35F067A4 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* __this, const RuntimeMethod* method) ;
inline bool Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10 (double ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method)
{
	return ((  bool (*) (double, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, int32_t*, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA, const RuntimeMethod*))Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10_gshared)(___0_value, ___1_destination, ___2_bytesWritten, ___3_format, method);
}
inline bool Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50 (float ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method)
{
	return ((  bool (*) (float, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, int32_t*, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA, const RuntimeMethod*))Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50_gshared)(___0_value, ___1_destination, ___2_bytesWritten, ___3_format, method);
}
inline Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9*, int32_t, const RuntimeMethod*))Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline (uint8_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline (int64_t ___0_value, uint64_t ___1_mask, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___4_format, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64Default_m09238099AE8A28C305E864397CD33AB689DA8E6A_inline (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64N_m16CF37BBD48178906BE789DD1BC48E8F7E9958B2_inline (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55 (uint64_t ___0_value, uint8_t ___1_precision, bool ___2_useLower, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___3_destination, int32_t* ___4_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE (uint64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, bool ___3_insertNegationSign, int32_t* ___4_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64MultipleDigits_mF251162FB54EDF3E9FB97E2ED59864344ACE2236_inline (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD_inline (int32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64MoreThanNegativeBillionMaxUInt_mC691F7FEB5BF8B540EFC21751212A373CB70024F (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64LessThanNegativeBillionMaxUInt_m5B28C9B6C3CC65F1DC1B4167D368BB2CD6CB71B5 (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447 (uint64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, bool ___3_insertNegationSign, int32_t* ___4_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64Default_m776520CC725D75F55E868C1145C33C6EEB8EE2CC_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_FillWithAsciiZeros_mA075A6357F4D722A800CBFFCB08B7031E1935928_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigitsWithGroupSeparator_m35BCC092BFDFBB35210AB1AC237308658B892E0E_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_mA4308E880C2EE1DDEC136AE3F5CB68D1C86F996F_inline (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56_inline (uint64_t ___0_numerator, uint64_t ___1_denominator, uint64_t* ___2_modulo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDecimalTrailingZeros_m2A1E42DBD23D1826425AD12171016FEE84AC2D35_inline (uint32_t ___0_value, uint32_t* ___1_valueWithoutTrailingZeros, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058 (bool* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (bool*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t ___1_caseFlipXorMask, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___2_dateTimeOffset, int32_t* ___3_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetO_m3282598214BF4BD244499908066A2839169344D4 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_value, int32_t* ___2_bytesConsumed, int32_t* ___3_kind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_LocalDateTime_mFB964C9C4614FDBA220C5811A42666F553C52998 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeG_m2E0CB813A2E77FDFDFB017DBCC7CFF61A15084B7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_value, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___2_valueAsOffset, int32_t* ___3_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetDefault_m98413FF4C170AB72184265AE58F0B2D620638FC3 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___0_hours, int32_t ___1_minutes, int32_t ___2_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_UnaryNegation_mBD0F86C461C2CE1C9EAB62F2E41D28471CDE2493 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffset_mC5779B8BCC5DD7429A828CBBFB3C9E53EA9561F7 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, bool ___1_offsetNegative, int32_t ___2_offsetHours, int32_t ___3_offsetMinutes, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___4_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffsetInterpretingDataAsLocalTime_m8848D70976ED630D9246460AE043316E6940CDE5 (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___7_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_m81DCBFF0B9D7029AD6B8B80EA4CB8846387DFB9A (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, int64_t ___0_ticks, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTime_m149D47B754126E2D8E2C4546093086D60972C04C (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, int32_t ___7_kind, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___8_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_mB1671EA00463E92811C8DEA80797DC89B2FFCA62 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977 (int32_t ___0_year, int32_t ___1_month, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_IsLeapYear_mB422194991B45198BD881EA4790F7AF4F5D6081C (int32_t ___0_year, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___0_ticks, int32_t ___1_kind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffset_m4990FEA5117EA4E854740264F46B9572F825383F (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, bool ___7_offsetNegative, int32_t ___8_offsetHours, int32_t ___9_offsetMinutes, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___10_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeOffset_get_DayOfWeek_m409FBC7A771514D19EA968185A0C5CDED5809B42 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNumber_m82A7C9AE615F919E14AF8D90B39B83FA580DA9F7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___1_number, int32_t* ___2_bytesConsumed, int32_t ___3_options, bool* ___4_textUsedExponentNotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_NumberBufferToDecimal_mD7BAE6BA214F452BA480CC847B4CA1F95CDDFB23 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNormalAsFloatingPoint_mF516D2092ECE98F4E6322880872DDB3DCFC41BA0 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, double* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
inline bool Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, float ___1_positiveInfinity, float ___2_negativeInfinity, float ___3_nan, float* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2, float, float, float, float*, int32_t*, const RuntimeMethod*))Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E_gshared)(___0_source, ___1_positiveInfinity, ___2_negativeInfinity, ___3_nan, ___4_value, ___5_bytesConsumed, method);
}
inline bool Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, double ___1_positiveInfinity, double ___2_negativeInfinity, double ___3_nan, double* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2, double, double, double, double*, int32_t*, const RuntimeMethod*))Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E_gshared)(___0_source, ___1_positiveInfinity, ___2_negativeInfinity, ___3_nan, ___4_value, ___5_bytesConsumed, method);
}
inline bool ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9 (double* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_NumberBufferToDouble_mD2C99C2CB3E0260C87EB1AE640CEAA0A9179FFA3 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, double* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseGuidCore_mD7DD2B390726B623F47AA21A460CA91FF2A6646C (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, bool ___1_ends, Il2CppChar ___2_begin, Il2CppChar ___3_end, Guid_t* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseGuidN_mBD4EAE25D37E1D99CB9E8659CC1393490EEB3DC2 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_text, Guid_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9 (Guid_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (Guid_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9_gshared)(___0_value, ___1_bytesConsumed, method);
}
inline ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___0_a, int16_t ___1_b, int16_t ___2_c, uint8_t ___3_d, uint8_t ___4_e, uint8_t ___5_f, uint8_t ___6_g, uint8_t ___7_h, uint8_t ___8_i, uint8_t ___9_j, uint8_t ___10_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseSByteD_mBE600D3E0F962EB93C306077CF1D58102B41A9FD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseSByteN_mD3CC7E53D9C91845CB6786ABDC1C60366DAC71D8 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteX_mF2530ED3F2B5AAD126BF85B679AAF2816E16B155 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70 (int8_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (int8_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt16D_mCA559D4759834B885308B79D5F098A1D7DE124FA (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt16N_mDEBB6D945FF06290DA9BB72FB8DB89AA5EF123A7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A (int16_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt32D_m218C17C141E4C3717C62F29F483B71697ED8BC13 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt32N_m6C6EBBC84033C7B9CCAEA06F7A30379D7ECD8D3B (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE (int32_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt64D_m2B902B108F0FA27D2199EFD0E41D3441F707C352 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt64N_m01511E988A734FCBA2A5EC18AC7EFB4B8028F11C (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2 (int64_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (int64_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline (int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteD_mA50D3CBD1F74CDC90E6718CBE3140A1A831327FD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteN_m8D5761C9E966102F9D8EF5F8030E18DFC29CDCAD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F (uint8_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (uint8_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16D_mE7D6948D2E014BF3D667D0282FE48A454FD88B48 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16N_mB50A99B4B9DFC2136FBECCBC2016812CAD4934CB (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F (uint16_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32N_m59E7E57141573F6B2FB4F466111DDD2B80DE8BBD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962 (uint32_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (uint32_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64D_mE2E097A0AA674B5D253D1DA6D46BC07B5D551673 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64N_m03150E6C4F9361804EC28F9C186B15529035FAE2 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9 (uint64_t* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9_gshared)(___0_value, ___1_bytesConsumed, method);
}
inline void ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_gshared)(__this, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanFraction_m5CA125B01A19BCDC74F943FB48E5E63D0DB566DF (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0 (bool ___0_isNegative, uint32_t ___1_days, uint32_t ___2_hours, uint32_t ___3_minutes, uint32_t ___4_seconds, uint32_t ___5_fraction, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___6_timeSpan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpanSplitter_TrySplitTimeSpan_m0ADBF4B50B31C20BE72F901F2ECADD849819D348 (TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF* __this, ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, bool ___1_periodUsedToSeparateDay, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanC_mF6D38C9EA9901545C1E9C3FAA9966062FA3DD89B (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanBigG_mEAB5CE04CFF207362FB78A254175619FF69061CE (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanLittleG_m79D4CB8BE9826E7A87EA00AE96893F18A4155CBC (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) ;
inline bool ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, int32_t* ___1_bytesConsumed, const RuntimeMethod* method)
{
	return ((  bool (*) (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657_gshared)(___0_value, ___1_bytesConsumed, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2*, Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m60D796333562244238C92F8A3A1AF60ED7B79197_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
inline bool MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, uint32_t*, const RuntimeMethod*))MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_gshared_inline)(___0_destination, ___1_value, method);
}
inline void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9, uint32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m3D87C6B3C6E1BA89A01764BA6896A2F6A042AFFC (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_gshared_inline)(___0_start, ___1_index, method);
}
inline void Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9*, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A*, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline void ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2*, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_gshared_inline)(__this, ___0_pinnable, ___1_byteOffset, ___2_length, method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m77DBF5B76E9CF9718757F3563925DD2C21EAEDB7 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->____value = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1*>(__this + _offset);
	NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mA0F5B8C085A0479C02D85A1C69EFEE79B0FB6545 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		__this->____value = (void*)((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mA0F5B8C085A0479C02D85A1C69EFEE79B0FB6545_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1*>(__this + _offset);
	NUInt__ctor_mA0F5B8C085A0479C02D85A1C69EFEE79B0FB6545(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 NUInt_op_Implicit_mA59B58A8816AA16D2DC16ECF536352075B086AC5 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NUInt_op_Implicit_m1AC4D417FEAFA8CB2D1BFEE2210C2A3309CE5947 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 ___0_value, const RuntimeMethod* method) 
{
	{
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_0 = ___0_value;
		void* L_1 = L_0.____value;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 NUInt_op_Explicit_m0F86D7FB75E48857795AC7CE8280A5E089F3BE38 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m28D349F055F0C26EB4A786A84D12F057F444B102 (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 ___0_value, const RuntimeMethod* method) 
{
	{
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_0 = ___0_value;
		void* L_1 = L_0.____value;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 NUInt_op_Multiply_m719AF109E45A2DAEE3750B2F3275F9C64789C15B (NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 ___0_left, NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 ___1_right, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_1 = ___0_left;
		void* L_2 = L_1.____value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_3 = ___1_right;
		void* L_4 = L_3.____value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_mA0F5B8C085A0479C02D85A1C69EFEE79B0FB6545((&L_5), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)(intptr_t)L_2), ((int64_t)(uint64_t)(intptr_t)L_4))), NULL);
		return L_5;
	}

IL_0021:
	{
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_6 = ___0_left;
		void* L_7 = L_6.____value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_8 = ___1_right;
		void* L_9 = L_8.____value;
		NUInt_tADF8D5CE2CF70F2F5BB5E442FC25BAA5396CFFD1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_mDBF0342640A6319019D60F805026354C79A54FB5((&L_10), ((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)(intptr_t)L_7), ((int32_t)(uint32_t)(intptr_t)L_9))), NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* NotImplemented_get_ByDesign_m9DE125F31B036FE798EE677342472EE43BBA924F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* NotImplemented_ByDesignWithMessage_mD533F46800F8A38D2F8E59C73755E510AB7AC1BE (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_1 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* NotImplemented_ActiveIssue_m0934C1668B1746B0C508E02F0EC79C00E38D3263 (String_t* ___0_issue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MutableDecimal_get_IsNegative_mF192B2F74A20398297C2488A6A5B542B3BDE269F (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Flags;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool MutableDecimal_get_IsNegative_mF192B2F74A20398297C2488A6A5B542B3BDE269F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D*>(__this + _offset);
	bool _returnValue;
	_returnValue = MutableDecimal_get_IsNegative_mF192B2F74A20398297C2488A6A5B542B3BDE269F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_IsNegative_mEC3F41233EE8ED80A45BFD920CE142F467BCA80F (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	uint32_t G_B2_0 = 0;
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* G_B2_1 = NULL;
	uint32_t G_B1_0 = 0;
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* G_B3_2 = NULL;
	{
		uint32_t L_0 = __this->___Flags;
		bool L_1 = ___0_value;
		if (L_1)
		{
			G_B2_0 = ((uint32_t)(((int32_t)((int32_t)L_0&((int32_t)2147483647LL)))));
			G_B2_1 = __this;
			goto IL_0019;
		}
		G_B1_0 = ((uint32_t)(((int32_t)((int32_t)L_0&((int32_t)2147483647LL)))));
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_0019:
	{
		G_B3_0 = ((int32_t)-2147483648LL);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		G_B3_2->___Flags = ((int32_t)((int32_t)G_B3_1|G_B3_0));
		return;
	}
}
IL2CPP_EXTERN_C  void MutableDecimal_set_IsNegative_mEC3F41233EE8ED80A45BFD920CE142F467BCA80F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D*>(__this + _offset);
	MutableDecimal_set_IsNegative_mEC3F41233EE8ED80A45BFD920CE142F467BCA80F(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutableDecimal_get_Scale_m477E04D9D0D0A2480E708CC68BCBD9A9FE3D7D50 (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Flags;
		return ((int32_t)(uint8_t)((int32_t)((uint32_t)L_0>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C  int32_t MutableDecimal_get_Scale_m477E04D9D0D0A2480E708CC68BCBD9A9FE3D7D50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MutableDecimal_get_Scale_m477E04D9D0D0A2480E708CC68BCBD9A9FE3D7D50(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_Scale_m3405948CA9F7AFBC1A0496E7D89D5714D0A261B2 (MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Flags;
		int32_t L_1 = ___0_value;
		__this->___Flags = ((int32_t)(((int32_t)((int32_t)L_0&((int32_t)-16711681)))|((int32_t)(L_1<<((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C  void MutableDecimal_set_Scale_m3405948CA9F7AFBC1A0496E7D89D5714D0A261B2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MutableDecimal_t2355C80538C5BDDFFF91239126A3EDED0CB49E8D*>(__this + _offset);
	MutableDecimal_set_Scale_m3405948CA9F7AFBC1A0496E7D89D5714D0A261B2(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* System_Memory215866_SR_get_ResourceManager_m7F620422403A67AAD1D250876A208CA5C8F7693F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___s_resourceManager;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001c;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = System_Memory215866_SR_get_ResourceType_m787D95C7B54DAA1E85BD2DA4377885513F20CAB4_inline(NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_3 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_3, L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = L_3;
		((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___s_resourceManager = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___s_resourceManager), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001c:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941 (String_t* ___0_resourceKey, String_t* ___1_defaultString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (String_t*)NULL;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = System_Memory215866_SR_get_ResourceManager_m7F620422403A67AAD1D250876A208CA5C8F7693F(NULL);
		String_t* L_1 = ___0_resourceKey;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_3 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_4 = ___1_defaultString;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___0_resourceKey;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_5, L_6, 4, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_8 = ___1_defaultString;
		return L_8;
	}

IL_002e:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_Format_mD2E9E5AFBDC857B3A23BE9C098A5CE1AEF79BE63 (String_t* ___0_resourceFormat, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB(NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = ___0_resourceFormat;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		String_t* L_4;
		L_4 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		String_t* L_6 = ___0_resourceFormat;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___1_args;
		String_t* L_8;
		L_8 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_6, L_7, NULL);
		return L_8;
	}

IL_002a:
	{
		String_t* L_9 = ___0_resourceFormat;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_Format_m00960CC909F1C3F084C200FB1044B6DCD2668BC9 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_resourceFormat;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_p1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___0_resourceFormat;
		RuntimeObject* L_8 = ___1_p1;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_Format_m4EAC11109008C1F914BD7E134CF098B71ABD913B (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB(NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_resourceFormat;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_p1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___2_p2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		return L_8;
	}

IL_0027:
	{
		String_t* L_9 = ___0_resourceFormat;
		RuntimeObject* L_10 = ___1_p1;
		RuntimeObject* L_11 = ___2_p2;
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_9, L_10, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_Format_m3A36AEEB73A44018013D980B2C2B0A594C02A4F1 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, RuntimeObject* ___3_p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = System_Memory215866_SR_UsingResourceKeys_mFF4375C2358FA751A9AE943B9E63C34B43321AAB(NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_resourceFormat;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_p1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___2_p2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___3_p3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, NULL);
		return L_10;
	}

IL_002b:
	{
		String_t* L_11 = ___0_resourceFormat;
		RuntimeObject* L_12 = ___1_p1;
		RuntimeObject* L_13 = ___2_p2;
		RuntimeObject* L_14 = ___3_p3;
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* System_Memory215866_SR_get_ResourceType_m787D95C7B54DAA1E85BD2DA4377885513F20CAB4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_NotSupported_CannotCallEqualsOnSpan_m489AC44EBA8704E9B850BDEF9895682203B764DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_NotSupported_CannotCallGetHashCodeOnSpan_m287D83F9C96DA96264DED8A7A118AE869674A93D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_InvalidTypeWithPointersNotSupported_m1831376A71497EBD841826BDCA75DD5EB8503556 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_DestinationTooShort_m105DAC00C96257D7F1A5CCA6EEFB54826E525457 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_MemoryDisposed_mA26E8B2741709C77AA1C42E858678FC8DBE4C2E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C879F0EF82DD1ED892B90B4D755D9EA9662C2F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral2C879F0EF82DD1ED892B90B4D755D9EA9662C2F2, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_OutstandingReferences_m85DBCB5E59EE8E32A496EAA1FB06450C47D5C077 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD2EADD64E465BE6A5B4246CBE023D464455908);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteralBBD2EADD64E465BE6A5B4246CBE023D464455908, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_BadFormatSpecifier_mDC0F6676973E73EC19C670BBEAD2D855C84AB2C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_CannotParsePrecision_m11AC2CF6AA0DBD783F43378CE53A759E1E56DA35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C5B361BE28C345F3B64B8F0113EFCF495B5393);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral31C5B361BE28C345F3B64B8F0113EFCF495B5393, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_PrecisionTooLarge_mF062CD2320992EB75E4E7C12CC0D27969BAA392E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_Argument_OverlapAlignmentMismatch_mA7A1F8E5188A73CD0362E0E1AA6BB204BD3ACBB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90A069E2414DF805413CE853073D5959BC884E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteralE90A069E2414DF805413CE853073D5959BC884E9, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_EndPositionNotReached_mF2D0615149FB2E71DBF604412B904CB15C641426 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* System_Memory215866_SR_get_UnexpectedSegmentType_mFE420DCCEA31829F06AB90DCDC480FF9281590A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F95F93366B0AEEDFECE6EF7CD4BA95DB54D9D46);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = System_Memory215866_SR_GetResourceString_mB71B22CFFF7E933C9F6104D0E2B0092183417941(_stringLiteral6F95F93366B0AEEDFECE6EF7CD4BA95DB54D9D46, (String_t*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void System_Memory215866_SR__cctor_m8D6F6B04D575994FE79C3B026DA5E0117BAFF5F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t4A538FAA06B2F40B82A5A87A39EC58678DB4288A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SR_t4A538FAA06B2F40B82A5A87A39EC58678DB4288A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m86DBDB0E4E2340B8C4CB9BF44A9AD40084EEF549 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___0_h1;
		V_0 = ((int32_t)(((int32_t)(L_0<<5))|((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___0_h1;
		int32_t L_4 = ___1_h2;
		return ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, L_3))^L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_m1D0A8DD6AC07B709F0A7E739CBBC76A0027034D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&V_0), NULL);
		((HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t0122272DA4C8A4510A1A4395C501ACF4311282D5_il2cpp_TypeInfo_var))->___RandomSeed = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void System_Memory215866___BlockReflectionAttribute__ctor_mE8B4AA78413C42995A0148394A274CBBDBAA0D75 (System_Memory215866___BlockReflectionAttribute_t4BAC88A018840A93EB6C81D19CDA27D25136CD85* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetString_mC497AD575DD3FBCEA25B928E7C35E8FB32CFE505 (ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2 ___0_sequence, String_t** ___1_text, int32_t* ___2_start, int32_t* ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___1_text;
		int32_t* L_1 = ___2_start;
		int32_t* L_2 = ___3_length;
		il2cpp_codegen_runtime_class_init_inline(ReadOnlySequence_1_t35E844DAFD7734119221882B3C8AD401473A57B2_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202((&___0_sequence), L_0, L_1, L_2, ReadOnlySequence_1_TryGetString_m24E3A07FA068BB0C2722EF16CF16259EB5CA1202_RuntimeMethod_var);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetString_m451466FA1537281B35D58912F22DF4FD5A1D5148 (ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430 ___0_memory, String_t** ___1_text, int32_t* ___2_start, int32_t* ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_inline((&___0_memory), (&V_0), (&V_1), ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_RuntimeMethod_var);
		String_t* L_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, il2cpp_defaults.string_class));
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t** L_2 = ___1_text;
		String_t* L_3 = V_2;
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		int32_t* L_4 = ___2_start;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		int32_t* L_6 = ___3_length;
		int32_t L_7 = V_1;
		*((int32_t*)L_6) = (int32_t)L_7;
		return (bool)1;
	}

IL_0022:
	{
		String_t** L_8 = ___1_text;
		*((RuntimeObject**)L_8) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)NULL);
		int32_t* L_9 = ___2_start;
		*((int32_t*)L_9) = (int32_t)0;
		int32_t* L_10 = ___3_length;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_SegmentToSequenceStart_mA24F0F82ADB02814FFCBDE8F303003852AEE4D07 (int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		return ((int32_t)(L_0|0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_SegmentToSequenceEnd_m7E270316D7381D6C63DD140D5E96239F0282CDAD (int32_t ___0_endIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_endIndex;
		return ((int32_t)(L_0|0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceStart_m40C3749A60A09CCBB785C2E394F35EF70A21A951 (int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		return ((int32_t)(L_0|0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceEnd_m1AAC82A5B0016B0A195A0A626F6EBF7DFBC740C0 (int32_t ___0_endIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_endIndex;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_MemoryManagerToSequenceStart_m13AC5C296B02C22B9862F23DA4B6FDBDF0B7A152 (int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_MemoryManagerToSequenceEnd_mE9B4B8FF104795A8050D5D534EE70E95C622D153 (int32_t ___0_endIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_endIndex;
		return ((int32_t)(L_0|0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_StringToSequenceStart_mA51B508E2F35E55C7E8006BE919B380F5FAFDDD4 (int32_t ___0_startIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_startIndex;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_StringToSequenceEnd_mDC35356A0163DCF14231B5169338E6510B4E7D13 (int32_t ___0_endIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_endIndex;
		return ((int32_t)(L_0|((int32_t)-2147483648LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____format;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppChar StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____precision;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____precision;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____format;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_1 = __this->____precision;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, Il2CppChar ___0_symbol, uint8_t ___1_precision, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___1_precision;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		uint8_t L_1 = ___1_precision;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mC1188BBD43300FE4D2F09546CE6D1065D610308E(NULL);
	}

IL_0018:
	{
		Il2CppChar L_2 = ___0_symbol;
		Il2CppChar L_3 = ___0_symbol;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(uint8_t)L_3))))
		{
			goto IL_0025;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m3C928A4566BFED87926398E98CAD24EF65211A9A(NULL);
	}

IL_0025:
	{
		Il2CppChar L_4 = ___0_symbol;
		__this->____format = (uint8_t)((int32_t)(uint8_t)L_4);
		uint8_t L_5 = ___1_precision;
		__this->____precision = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___0_symbol, uint8_t ___1_precision, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA(_thisAdjusted, ___0_symbol, ___1_precision, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA StandardFormat_op_Implicit_mE2E278605D3C00B919B055D0A930CA62F82F42C6 (Il2CppChar ___0_symbol, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_symbol;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_1;
		memset((&L_1), 0, sizeof(L_1));
		StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA((&L_1), L_0, (uint8_t)((int32_t)255), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13 (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_inline((&___0_format), ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA));
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_1 = V_0;
		return L_1;
	}

IL_0016:
	{
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_inline((&___0_format), 0, ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_RuntimeMethod_var);
		int32_t L_3 = *((uint16_t*)L_2);
		V_1 = L_3;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_inline((&___0_format), ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		V_2 = (uint8_t)((int32_t)255);
		goto IL_00ac;
	}

IL_0038:
	{
		V_3 = 0;
		V_4 = 1;
		goto IL_009e;
	}

IL_0042:
	{
		int32_t L_5 = V_4;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_inline((&___0_format), L_5, ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)48)));
		uint32_t L_8 = V_5;
		if ((!(((uint32_t)L_8) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = System_Memory215866_SR_get_Argument_CannotParsePrecision_m11AC2CF6AA0DBD783F43378CE53A759E1E56DA35(NULL);
		uint8_t L_10 = ((uint8_t)((int32_t)99));
		RuntimeObject* L_11 = Box(il2cpp_defaults.byte_class, &L_10);
		String_t* L_12;
		L_12 = System_Memory215866_SR_Format_m00960CC909F1C3F084C200FB1044B6DCD2668BC9(L_9, L_11, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_13 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13_RuntimeMethod_var)));
	}

IL_0071:
	{
		uint32_t L_14 = V_3;
		uint32_t L_15 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)10))), (int32_t)L_15));
		uint32_t L_16 = V_3;
		if ((!(((uint32_t)L_16) > ((uint32_t)((int32_t)99)))))
		{
			goto IL_0098;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_17;
		L_17 = System_Memory215866_SR_get_Argument_PrecisionTooLarge_mF062CD2320992EB75E4E7C12CC0D27969BAA392E(NULL);
		uint8_t L_18 = ((uint8_t)((int32_t)99));
		RuntimeObject* L_19 = Box(il2cpp_defaults.byte_class, &L_18);
		String_t* L_20;
		L_20 = System_Memory215866_SR_Format_m00960CC909F1C3F084C200FB1044B6DCD2668BC9(L_17, L_19, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_21 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13_RuntimeMethod_var)));
	}

IL_0098:
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009e:
	{
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_inline((&___0_format), ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_25 = V_3;
		V_2 = (uint8_t)((int32_t)(uint8_t)L_25);
	}

IL_00ac:
	{
		Il2CppChar L_26 = V_1;
		uint8_t L_27 = V_2;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_28;
		memset((&L_28), 0, sizeof(L_28));
		StandardFormat__ctor_m2DB4E7289DE342A2A5436C338701FFD4706DE1AA((&L_28), L_26, L_27, NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA StandardFormat_Parse_mED017A21BB9A0907E0020A96B57E1446610D8F80 (String_t* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_format;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 L_2;
		L_2 = MemoryExtensions_AsSpan_mC5B28FB7C2B1AA4EB631A5E4CE6BDF204E8F7A3E_inline(L_1, NULL);
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3;
		L_3 = StandardFormat_Parse_m0F0B9A0FFA3CC2F75904C16923B410A8B99C8F13(L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA));
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m3B844C88270D7C95F7C17C87074C44EEE38564D2 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		RuntimeObject* L_1 = L_0;
		V_0 = L_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((*(StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*)UnBox(L_2, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA_il2cpp_TypeInfo_var)));
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = V_1;
		bool L_4;
		L_4 = StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_Equals_m3B844C88270D7C95F7C17C87074C44EEE38564D2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_Equals_m3B844C88270D7C95F7C17C87074C44EEE38564D2(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardFormat_GetHashCode_m82C4B5C733A33B9FB8C692DEB367504C421DC63A (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->____format;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_0), NULL);
		uint8_t L_2 = __this->____precision;
		V_0 = L_2;
		int32_t L_3;
		L_3 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_0), NULL);
		return ((int32_t)(L_1^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t StandardFormat_GetHashCode_m82C4B5C733A33B9FB8C692DEB367504C421DC63A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StandardFormat_GetHashCode_m82C4B5C733A33B9FB8C692DEB367504C421DC63A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___0_other, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____format;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_1 = ___0_other;
		uint8_t L_2 = L_1.____format;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		uint8_t L_3 = __this->____precision;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_4 = ___0_other;
		uint8_t L_5 = L_4.____precision;
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293_AdjustorThunk (RuntimeObject* __this, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___0_other, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardFormat_ToString_mC779747506EBE590FCB1B0F2F8813B85F9762E75 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	uint8_t V_3 = 0x0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		V_0 = (Il2CppChar*)(L_1);
		V_1 = 0;
		Il2CppChar L_2;
		L_2 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline(__this, NULL);
		V_2 = L_2;
		Il2CppChar L_3 = V_2;
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Il2CppChar L_7 = V_2;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2))))) = (int16_t)L_7;
		uint8_t L_8;
		L_8 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline(__this, NULL);
		V_3 = L_8;
		uint8_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)255))))
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_10 = V_3;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)100))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		uint8_t L_14 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)(((int32_t)((int32_t)L_14/((int32_t)100)))%((int32_t)10))))));
		uint8_t L_15 = V_3;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15%((int32_t)100))));
	}

IL_0056:
	{
		uint8_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)10))))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppChar* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint8_t L_20 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)(((int32_t)((int32_t)L_20/((int32_t)10)))%((int32_t)10))))));
		uint8_t L_21 = V_3;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_21%((int32_t)10))));
	}

IL_007a:
	{
		Il2CppChar* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint8_t L_25 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_25)));
	}

IL_008a:
	{
		Il2CppChar* L_26 = V_0;
		int32_t L_27 = V_1;
		String_t* L_28;
		L_28 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, L_26, 0, L_27, NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C  String_t* StandardFormat_ToString_mC779747506EBE590FCB1B0F2F8813B85F9762E75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StandardFormat_ToString_mC779747506EBE590FCB1B0F2F8813B85F9762E75(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_op_Equality_m120E75067E75FE01437EDE3ACB7AD8E6B7006818 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___0_left, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___1_right, const RuntimeMethod* method) 
{
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_0 = ___1_right;
		bool L_1;
		L_1 = StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293((&___0_left), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_op_Inequality_mABA6EEDE73BEA7FCC11FC1F2C51C60095314A918 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___0_left, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___1_right, const RuntimeMethod* method) 
{
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_0 = ___1_right;
		bool L_1;
		L_1 = StandardFormat_Equals_m5F751266CA14441B150193510053685A263FD293((&___0_left), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_pinvoke(const MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2& unmarshaled, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____pinnableException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnableException, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_pinvoke_back(const MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_pinvoke& marshaled, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____pinnableException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnableException, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_pinvoke_cleanup(MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_com(const MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2& unmarshaled, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____pinnableException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnableException, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_com_back(const MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_com& marshaled, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____pinnableException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_____pinnable_FieldInfo_var, MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnableException, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshal_com_cleanup(MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_m412DA9623E1BCE616674CC2D20D75FD046781D01 (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_pointer;
		__this->____pointer = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = ___1_handle;
		__this->____handle = L_1;
		RuntimeObject* L_2 = ___2_pinnable;
		__this->____pinnable = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle__ctor_m412DA9623E1BCE616674CC2D20D75FD046781D01_AdjustorThunk (RuntimeObject* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method)
{
	MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2*>(__this + _offset);
	MemoryHandle__ctor_m412DA9623E1BCE616674CC2D20D75FD046781D01(_thisAdjusted, ___0_pointer, ___1_handle, ___2_pinnable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_m368BBDD17335981575583BECF11A9BEE5882F002 (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____pointer;
		return L_0;
	}
}
IL2CPP_EXTERN_C  void* MemoryHandle_get_Pointer_m368BBDD17335981575583BECF11A9BEE5882F002_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2*>(__this + _offset);
	void* _returnValue;
	_returnValue = MemoryHandle_get_Pointer_m368BBDD17335981575583BECF11A9BEE5882F002_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_m65B2630E2796D33A28EEAA5174D81E2CA4975D86 (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnable_tC70876C2D27FC4D6202C6E29E9FBC2A60C4A8BB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____handle);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____handle);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
	}

IL_001b:
	{
		RuntimeObject* L_3 = __this->____pinnable;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_4 = __this->____pinnable;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(1, IPinnable_tC70876C2D27FC4D6202C6E29E9FBC2A60C4A8BB8_il2cpp_TypeInfo_var, L_4);
		__this->____pinnable = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)(RuntimeObject*)NULL);
	}

IL_0038:
	{
		__this->____pointer = (void*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle_Dispose_m65B2630E2796D33A28EEAA5174D81E2CA4975D86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2*>(__this + _offset);
	MemoryHandle_Dispose_m65B2630E2796D33A28EEAA5174D81E2CA4975D86(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_DecodeFromUtf8_mF0A9FB9D13AF9C7732F60430BC83157790C8B497 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_utf8, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_bytes, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B4_0 = 0;
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_utf8;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_RuntimeMethod_var);
		V_0 = L_1;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_bytes;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_utf8), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		V_2 = ((int32_t)(L_4&((int32_t)-4)));
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_bytes), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_3 = L_5;
		V_4 = 0;
		V_5 = 0;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_utf8), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0225;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_decodingMap;
		NullCheck(L_7);
		V_6 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		bool L_8 = ___4_isFinalBlock;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_004e;
	}

IL_004d:
	{
		G_B4_0 = 4;
	}

IL_004e:
	{
		V_7 = G_B4_0;
		V_8 = 0;
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Base64_GetMaxDecodedFromUtf8Length_mC9C90E06EFEA9E2D3424860323B986A52C5215D2_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		goto IL_00aa;
	}

IL_006a:
	{
		int32_t L_14 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_14/3)), 4));
		goto IL_00aa;
	}

IL_0076:
	{
		uint8_t* L_15 = V_0;
		int32_t L_16 = V_4;
		uint8_t* L_17;
		L_17 = il2cpp_unsafe_add<uint8_t,int32_t>(L_15, L_16);
		int8_t* L_18 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Base64_Decode_mD0BADC72D840626735C4BB3A546F639EA80D4489_inline(L_17, L_18, NULL);
		V_9 = L_19;
		int32_t L_20 = V_9;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0258;
		}
	}
	{
		uint8_t* L_21 = V_1;
		int32_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add<uint8_t,int32_t>(L_21, L_22);
		int32_t L_24 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline(L_23, L_24, NULL);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 3));
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 4));
	}

IL_00aa:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_8;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_29 = V_8;
		int32_t L_30 = V_2;
		int32_t L_31 = V_7;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_30, L_31))))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_32 = V_4;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00cf;
		}
	}
	{
		bool L_34 = ___4_isFinalBlock;
		if (!L_34)
		{
			goto IL_024e;
		}
	}
	{
		goto IL_0258;
	}

IL_00cf:
	{
		uint8_t* L_35 = V_0;
		int32_t L_36 = V_2;
		uint8_t* L_37;
		L_37 = il2cpp_unsafe_add<uint8_t,int32_t>(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, 4)));
		int32_t L_38 = *((uint8_t*)L_37);
		V_10 = L_38;
		uint8_t* L_39 = V_0;
		int32_t L_40 = V_2;
		uint8_t* L_41;
		L_41 = il2cpp_unsafe_add<uint8_t,int32_t>(L_39, ((int32_t)il2cpp_codegen_subtract(L_40, 3)));
		int32_t L_42 = *((uint8_t*)L_41);
		V_11 = L_42;
		uint8_t* L_43 = V_0;
		int32_t L_44 = V_2;
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,int32_t>(L_43, ((int32_t)il2cpp_codegen_subtract(L_44, 2)));
		int32_t L_46 = *((uint8_t*)L_45);
		V_12 = L_46;
		uint8_t* L_47 = V_0;
		int32_t L_48 = V_2;
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,int32_t>(L_47, ((int32_t)il2cpp_codegen_subtract(L_48, 1)));
		int32_t L_50 = *((uint8_t*)L_49);
		V_13 = L_50;
		int8_t* L_51 = V_6;
		int32_t L_52 = V_10;
		int8_t* L_53;
		L_53 = il2cpp_unsafe_add<int8_t,int32_t>(L_51, L_52);
		int32_t L_54 = *((int8_t*)L_53);
		V_10 = L_54;
		int8_t* L_55 = V_6;
		int32_t L_56 = V_11;
		int8_t* L_57;
		L_57 = il2cpp_unsafe_add<int8_t,int32_t>(L_55, L_56);
		int32_t L_58 = *((int8_t*)L_57);
		V_11 = L_58;
		int32_t L_59 = V_10;
		V_10 = ((int32_t)(L_59<<((int32_t)18)));
		int32_t L_60 = V_11;
		V_11 = ((int32_t)(L_60<<((int32_t)12)));
		int32_t L_61 = V_10;
		int32_t L_62 = V_11;
		V_10 = ((int32_t)(L_61|L_62));
		int32_t L_63 = V_13;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)61))))
		{
			goto IL_018d;
		}
	}
	{
		int8_t* L_64 = V_6;
		int32_t L_65 = V_12;
		int8_t* L_66;
		L_66 = il2cpp_unsafe_add<int8_t,int32_t>(L_64, L_65);
		int32_t L_67 = *((int8_t*)L_66);
		V_12 = L_67;
		int8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int8_t* L_70;
		L_70 = il2cpp_unsafe_add<int8_t,int32_t>(L_68, L_69);
		int32_t L_71 = *((int8_t*)L_70);
		V_13 = L_71;
		int32_t L_72 = V_12;
		V_12 = ((int32_t)(L_72<<6));
		int32_t L_73 = V_10;
		int32_t L_74 = V_13;
		V_10 = ((int32_t)(L_73|L_74));
		int32_t L_75 = V_10;
		int32_t L_76 = V_12;
		V_10 = ((int32_t)(L_75|L_76));
		int32_t L_77 = V_10;
		if ((((int32_t)L_77) < ((int32_t)0)))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_78 = V_5;
		int32_t L_79 = V_3;
		if ((((int32_t)L_78) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_79, 3)))))
		{
			goto IL_022f;
		}
	}
	{
		uint8_t* L_80 = V_1;
		int32_t L_81 = V_5;
		uint8_t* L_82;
		L_82 = il2cpp_unsafe_add<uint8_t,int32_t>(L_80, L_81);
		int32_t L_83 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline(L_82, L_83, NULL);
		int32_t L_84 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_84, 3));
		goto IL_0212;
	}

IL_018d:
	{
		int32_t L_85 = V_12;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)61))))
		{
			goto IL_01eb;
		}
	}
	{
		int8_t* L_86 = V_6;
		int32_t L_87 = V_12;
		int8_t* L_88;
		L_88 = il2cpp_unsafe_add<int8_t,int32_t>(L_86, L_87);
		int32_t L_89 = *((int8_t*)L_88);
		V_12 = L_89;
		int32_t L_90 = V_12;
		V_12 = ((int32_t)(L_90<<6));
		int32_t L_91 = V_10;
		int32_t L_92 = V_12;
		V_10 = ((int32_t)(L_91|L_92));
		int32_t L_93 = V_10;
		if ((((int32_t)L_93) < ((int32_t)0)))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_94 = V_5;
		int32_t L_95 = V_3;
		if ((((int32_t)L_94) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_95, 2)))))
		{
			goto IL_022f;
		}
	}
	{
		uint8_t* L_96 = V_1;
		int32_t L_97 = V_5;
		uint8_t* L_98;
		L_98 = il2cpp_unsafe_add<uint8_t,int32_t>(L_96, L_97);
		int32_t L_99 = V_10;
		*((int8_t*)L_98) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_99>>((int32_t)16))));
		uint8_t* L_100 = V_1;
		int32_t L_101 = V_5;
		uint8_t* L_102;
		L_102 = il2cpp_unsafe_add<uint8_t,int32_t>(L_100, ((int32_t)il2cpp_codegen_add(L_101, 1)));
		int32_t L_103 = V_10;
		*((int8_t*)L_102) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_103>>8)));
		int32_t L_104 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_104, 2));
		goto IL_0212;
	}

IL_01eb:
	{
		int32_t L_105 = V_10;
		if ((((int32_t)L_105) < ((int32_t)0)))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_106 = V_5;
		int32_t L_107 = V_3;
		if ((((int32_t)L_106) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_107, 1)))))
		{
			goto IL_022f;
		}
	}
	{
		uint8_t* L_108 = V_1;
		int32_t L_109 = V_5;
		uint8_t* L_110;
		L_110 = il2cpp_unsafe_add<uint8_t,int32_t>(L_108, L_109);
		int32_t L_111 = V_10;
		*((int8_t*)L_110) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_111>>((int32_t)16))));
		int32_t L_112 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0212:
	{
		int32_t L_113 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_113, 4));
		int32_t L_114 = V_2;
		int32_t L_115;
		L_115 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_utf8), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_115))))
		{
			goto IL_0258;
		}
	}

IL_0225:
	{
		int32_t* L_116 = ___2_bytesConsumed;
		int32_t L_117 = V_4;
		*((int32_t*)L_116) = (int32_t)L_117;
		int32_t* L_118 = ___3_bytesWritten;
		int32_t L_119 = V_5;
		*((int32_t*)L_118) = (int32_t)L_119;
		return (int32_t)(0);
	}

IL_022f:
	{
		int32_t L_120 = V_2;
		int32_t L_121;
		L_121 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_utf8), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		bool L_122 = ___4_isFinalBlock;
		if (((int32_t)(((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_122)))
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_123 = ___2_bytesConsumed;
		int32_t L_124 = V_4;
		*((int32_t*)L_123) = (int32_t)L_124;
		int32_t* L_125 = ___3_bytesWritten;
		int32_t L_126 = V_5;
		*((int32_t*)L_125) = (int32_t)L_126;
		return (int32_t)(1);
	}

IL_024e:
	{
		int32_t* L_127 = ___2_bytesConsumed;
		int32_t L_128 = V_4;
		*((int32_t*)L_127) = (int32_t)L_128;
		int32_t* L_129 = ___3_bytesWritten;
		int32_t L_130 = V_5;
		*((int32_t*)L_129) = (int32_t)L_130;
		return (int32_t)(2);
	}

IL_0258:
	{
		int32_t* L_131 = ___2_bytesConsumed;
		int32_t L_132 = V_4;
		*((int32_t*)L_131) = (int32_t)L_132;
		int32_t* L_133 = ___3_bytesWritten;
		int32_t L_134 = V_5;
		*((int32_t*)L_133) = (int32_t)L_134;
		return (int32_t)(3);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_GetMaxDecodedFromUtf8Length_mC9C90E06EFEA9E2D3424860323B986A52C5215D2 (int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E(0, NULL);
	}

IL_000d:
	{
		int32_t L_1 = ___0_length;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_1>>2)), 3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_DecodeFromUtf8InPlace_mC87416153F9E08DA4B487780138D50231ECB1160 (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_buffer, int32_t* ___1_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(L_2>>2)), 4))))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0185;
		}
	}
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4 = ___0_buffer;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		V_3 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_decodingMap;
		NullCheck(L_6);
		V_4 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		goto IL_0064;
	}

IL_0036:
	{
		uint8_t* L_7 = V_3;
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_add<uint8_t,int32_t>(L_7, L_8);
		int8_t* L_10 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Base64_Decode_mD0BADC72D840626735C4BB3A546F639EA80D4489_inline(L_9, L_10, NULL);
		V_5 = L_11;
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_2;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, L_14);
		int32_t L_16 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline(L_15, L_16, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 4));
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 4)))))
		{
			goto IL_0036;
		}
	}
	{
		uint8_t* L_21 = V_3;
		int32_t L_22 = V_0;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add<uint8_t,int32_t>(L_21, ((int32_t)il2cpp_codegen_subtract(L_22, 4)));
		int32_t L_24 = *((uint8_t*)L_23);
		V_6 = L_24;
		uint8_t* L_25 = V_3;
		int32_t L_26 = V_0;
		uint8_t* L_27;
		L_27 = il2cpp_unsafe_add<uint8_t,int32_t>(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 3)));
		int32_t L_28 = *((uint8_t*)L_27);
		V_7 = L_28;
		uint8_t* L_29 = V_3;
		int32_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = il2cpp_unsafe_add<uint8_t,int32_t>(L_29, ((int32_t)il2cpp_codegen_subtract(L_30, 2)));
		int32_t L_32 = *((uint8_t*)L_31);
		V_8 = L_32;
		uint8_t* L_33 = V_3;
		int32_t L_34 = V_0;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_add<uint8_t,int32_t>(L_33, ((int32_t)il2cpp_codegen_subtract(L_34, 1)));
		int32_t L_36 = *((uint8_t*)L_35);
		V_9 = L_36;
		int8_t* L_37 = V_4;
		int32_t L_38 = V_6;
		int8_t* L_39;
		L_39 = il2cpp_unsafe_add<int8_t,int32_t>(L_37, L_38);
		int32_t L_40 = *((int8_t*)L_39);
		V_6 = L_40;
		int8_t* L_41 = V_4;
		int32_t L_42 = V_7;
		int8_t* L_43;
		L_43 = il2cpp_unsafe_add<int8_t,int32_t>(L_41, L_42);
		int32_t L_44 = *((int8_t*)L_43);
		V_7 = L_44;
		int32_t L_45 = V_6;
		V_6 = ((int32_t)(L_45<<((int32_t)18)));
		int32_t L_46 = V_7;
		V_7 = ((int32_t)(L_46<<((int32_t)12)));
		int32_t L_47 = V_6;
		int32_t L_48 = V_7;
		V_6 = ((int32_t)(L_47|L_48));
		int32_t L_49 = V_9;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)61))))
		{
			goto IL_011b;
		}
	}
	{
		int8_t* L_50 = V_4;
		int32_t L_51 = V_8;
		int8_t* L_52;
		L_52 = il2cpp_unsafe_add<int8_t,int32_t>(L_50, L_51);
		int32_t L_53 = *((int8_t*)L_52);
		V_8 = L_53;
		int8_t* L_54 = V_4;
		int32_t L_55 = V_9;
		int8_t* L_56;
		L_56 = il2cpp_unsafe_add<int8_t,int32_t>(L_54, L_55);
		int32_t L_57 = *((int8_t*)L_56);
		V_9 = L_57;
		int32_t L_58 = V_8;
		V_8 = ((int32_t)(L_58<<6));
		int32_t L_59 = V_6;
		int32_t L_60 = V_9;
		V_6 = ((int32_t)(L_59|L_60));
		int32_t L_61 = V_6;
		int32_t L_62 = V_8;
		V_6 = ((int32_t)(L_61|L_62));
		int32_t L_63 = V_6;
		if ((((int32_t)L_63) < ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		uint8_t* L_64 = V_3;
		int32_t L_65 = V_2;
		uint8_t* L_66;
		L_66 = il2cpp_unsafe_add<uint8_t,int32_t>(L_64, L_65);
		int32_t L_67 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline(L_66, L_67, NULL);
		int32_t L_68 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_68, 3));
		goto IL_0185;
	}

IL_011b:
	{
		int32_t L_69 = V_8;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)61))))
		{
			goto IL_016b;
		}
	}
	{
		int8_t* L_70 = V_4;
		int32_t L_71 = V_8;
		int8_t* L_72;
		L_72 = il2cpp_unsafe_add<int8_t,int32_t>(L_70, L_71);
		int32_t L_73 = *((int8_t*)L_72);
		V_8 = L_73;
		int32_t L_74 = V_8;
		V_8 = ((int32_t)(L_74<<6));
		int32_t L_75 = V_6;
		int32_t L_76 = V_8;
		V_6 = ((int32_t)(L_75|L_76));
		int32_t L_77 = V_6;
		if ((((int32_t)L_77) < ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		uint8_t* L_78 = V_3;
		int32_t L_79 = V_2;
		uint8_t* L_80;
		L_80 = il2cpp_unsafe_add<uint8_t,int32_t>(L_78, L_79);
		int32_t L_81 = V_6;
		*((int8_t*)L_80) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_81>>((int32_t)16))));
		uint8_t* L_82 = V_3;
		int32_t L_83 = V_2;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add<uint8_t,int32_t>(L_82, ((int32_t)il2cpp_codegen_add(L_83, 1)));
		int32_t L_85 = V_6;
		*((int8_t*)L_84) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_85>>8)));
		int32_t L_86 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_86, 2));
		goto IL_0185;
	}

IL_016b:
	{
		int32_t L_87 = V_6;
		if ((((int32_t)L_87) < ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		uint8_t* L_88 = V_3;
		int32_t L_89 = V_2;
		uint8_t* L_90;
		L_90 = il2cpp_unsafe_add<uint8_t,int32_t>(L_88, L_89);
		int32_t L_91 = V_6;
		*((int8_t*)L_90) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_91>>((int32_t)16))));
		int32_t L_92 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0185:
	{
		int32_t* L_93 = ___1_bytesWritten;
		int32_t L_94 = V_2;
		*((int32_t*)L_93) = (int32_t)L_94;
		return (int32_t)(0);
	}

IL_018a:
	{
		int32_t* L_95 = ___1_bytesWritten;
		int32_t L_96 = V_2;
		*((int32_t*)L_95) = (int32_t)L_96;
		return (int32_t)(3);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_Decode_mD0BADC72D840626735C4BB3A546F639EA80D4489 (uint8_t* ___0_encodedBytes, int8_t* ___1_decodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint8_t* L_0 = ___0_encodedBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_encodedBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint8_t* L_5 = ___0_encodedBytes;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = *((uint8_t*)L_6);
		V_2 = L_7;
		uint8_t* L_8 = ___0_encodedBytes;
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_add<uint8_t,int32_t>(L_8, 3);
		int32_t L_10 = *((uint8_t*)L_9);
		V_3 = L_10;
		int8_t* L_11 = ___1_decodingMap;
		int32_t L_12 = V_0;
		int8_t* L_13;
		L_13 = il2cpp_unsafe_add<int8_t,int32_t>(L_11, L_12);
		int32_t L_14 = *((int8_t*)L_13);
		V_0 = L_14;
		int8_t* L_15 = ___1_decodingMap;
		int32_t L_16 = V_1;
		int8_t* L_17;
		L_17 = il2cpp_unsafe_add<int8_t,int32_t>(L_15, L_16);
		int32_t L_18 = *((int8_t*)L_17);
		V_1 = L_18;
		int8_t* L_19 = ___1_decodingMap;
		int32_t L_20 = V_2;
		int8_t* L_21;
		L_21 = il2cpp_unsafe_add<int8_t,int32_t>(L_19, L_20);
		int32_t L_22 = *((int8_t*)L_21);
		V_2 = L_22;
		int8_t* L_23 = ___1_decodingMap;
		int32_t L_24 = V_3;
		int8_t* L_25;
		L_25 = il2cpp_unsafe_add<int8_t,int32_t>(L_23, L_24);
		int32_t L_26 = *((int8_t*)L_25);
		V_3 = L_26;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)(L_27<<((int32_t)18)));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)(L_28<<((int32_t)12)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)(L_29<<6));
		int32_t L_30 = V_0;
		int32_t L_31 = V_3;
		V_0 = ((int32_t)(L_30|L_31));
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		V_1 = ((int32_t)(L_32|L_33));
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		V_0 = ((int32_t)(L_34|L_35));
		int32_t L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A (uint8_t* ___0_destination, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		int32_t L_1 = ___1_value;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_1>>((int32_t)16))));
		uint8_t* L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = ___1_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4>>8)));
		uint8_t* L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = ___1_value;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_EncodeToUtf8_m582070283927F1790D78BD02E96E173525882B66 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_bytes, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_utf8, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, bool ___4_isFinalBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t* V_8 = NULL;
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_bytes;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m673684623A702FAE8269A2C040796E1A0FB0C465_RuntimeMethod_var);
		V_0 = L_1;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_utf8;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_bytes), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		V_2 = L_4;
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_utf8), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_3 = L_5;
		V_4 = 0;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)1610612733))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Base64_GetMaxEncodedToUtf8Length_mA3FEA01A2BA01357F6C24DC393BE82A7B8AC77A4_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_10 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 2));
		goto IL_004b;
	}

IL_0042:
	{
		int32_t L_11 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_11>>2)), 3)), 2));
	}

IL_004b:
	{
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_encodingMap;
		NullCheck(L_12);
		V_8 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		goto IL_0092;
	}

IL_0066:
	{
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, L_14);
		uint8_t* L_16 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Base64_Encode_m8428F11B149CF32270FBA512BCA1F1918C1DCBF8_inline(L_15, L_16, NULL);
		V_7 = L_17;
		uint8_t* L_18 = V_1;
		int32_t L_19 = V_6;
		uint8_t* L_20;
		L_20 = il2cpp_unsafe_add<uint8_t,int32_t>(L_18, L_19);
		int32_t L_21 = V_7;
		il2cpp_unsafe_write_unaligned(L_20, L_21);
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_22, 4));
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 3));
	}

IL_0092:
	{
		int32_t L_24 = V_5;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_27, 2))))))
		{
			goto IL_012e;
		}
	}
	{
		bool L_28 = ___4_isFinalBlock;
		if (!L_28)
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1))))))
		{
			goto IL_00e4;
		}
	}
	{
		uint8_t* L_31 = V_0;
		int32_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add<uint8_t,int32_t>(L_31, L_32);
		uint8_t* L_34 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Base64_EncodeAndPadTwo_m28EEF9A183F38CB4D91780D9B286DEE2CB882D5E_inline(L_33, L_34, NULL);
		V_7 = L_35;
		uint8_t* L_36 = V_1;
		int32_t L_37 = V_6;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add<uint8_t,int32_t>(L_36, L_37);
		int32_t L_39 = V_7;
		il2cpp_unsafe_write_unaligned(L_38, L_39);
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_40, 4));
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_011a;
	}

IL_00e4:
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_2;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_43, 2))))))
		{
			goto IL_011a;
		}
	}
	{
		uint8_t* L_44 = V_0;
		int32_t L_45 = V_5;
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,int32_t>(L_44, L_45);
		uint8_t* L_47 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_48;
		L_48 = Base64_EncodeAndPadOne_m27CD106730D70FA5F926BF3736B598BEF17EC29A_inline(L_46, L_47, NULL);
		V_7 = L_48;
		uint8_t* L_49 = V_1;
		int32_t L_50 = V_6;
		uint8_t* L_51;
		L_51 = il2cpp_unsafe_add<uint8_t,int32_t>(L_49, L_50);
		int32_t L_52 = V_7;
		il2cpp_unsafe_write_unaligned(L_51, L_52);
		int32_t L_53 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 4));
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 2));
	}

IL_011a:
	{
		int32_t* L_55 = ___2_bytesConsumed;
		int32_t L_56 = V_5;
		*((int32_t*)L_55) = (int32_t)L_56;
		int32_t* L_57 = ___3_bytesWritten;
		int32_t L_58 = V_6;
		*((int32_t*)L_57) = (int32_t)L_58;
		return (int32_t)(0);
	}

IL_0124:
	{
		int32_t* L_59 = ___2_bytesConsumed;
		int32_t L_60 = V_5;
		*((int32_t*)L_59) = (int32_t)L_60;
		int32_t* L_61 = ___3_bytesWritten;
		int32_t L_62 = V_6;
		*((int32_t*)L_61) = (int32_t)L_62;
		return (int32_t)(2);
	}

IL_012e:
	{
		int32_t* L_63 = ___2_bytesConsumed;
		int32_t L_64 = V_5;
		*((int32_t*)L_63) = (int32_t)L_64;
		int32_t* L_65 = ___3_bytesWritten;
		int32_t L_66 = V_6;
		*((int32_t*)L_65) = (int32_t)L_66;
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_GetMaxEncodedToUtf8Length_mA3FEA01A2BA01357F6C24DC393BE82A7B8AC77A4 (int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_length;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)1610612733)))))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E(0, NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_length;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 2))/3)), 4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_EncodeToUtf8InPlace_mE7AA28AF21433D2EF2D0DDD4F880603CA35421EB (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_buffer, int32_t ___1_dataLength, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	{
		int32_t L_0 = ___1_dataLength;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Base64_GetMaxEncodedToUtf8Length_mA3FEA01A2BA01357F6C24DC393BE82A7B8AC77A4_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_4 = ___1_dataLength;
		int32_t L_5 = ___1_dataLength;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_5/3)), 3))));
		int32_t L_6 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 4));
		int32_t L_7 = ___1_dataLength;
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		V_4 = 0;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_encodingMap;
		NullCheck(L_9);
		V_5 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_10 = ___0_buffer;
		uint8_t* L_11;
		L_11 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_10, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		V_6 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0072;
		}
	}
	{
		uint8_t* L_14 = V_6;
		int32_t L_15 = V_3;
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,int32_t>(L_14, L_15);
		uint8_t* L_17 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Base64_EncodeAndPadTwo_m28EEF9A183F38CB4D91780D9B286DEE2CB882D5E_inline(L_16, L_17, NULL);
		V_4 = L_18;
		uint8_t* L_19 = V_6;
		int32_t L_20 = V_2;
		uint8_t* L_21;
		L_21 = il2cpp_unsafe_add<uint8_t,int32_t>(L_19, L_20);
		int32_t L_22 = V_4;
		il2cpp_unsafe_write_unaligned(L_21, L_22);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 4));
		goto IL_0096;
	}

IL_0072:
	{
		uint8_t* L_24 = V_6;
		int32_t L_25 = V_3;
		uint8_t* L_26;
		L_26 = il2cpp_unsafe_add<uint8_t,int32_t>(L_24, L_25);
		uint8_t* L_27 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Base64_EncodeAndPadOne_m27CD106730D70FA5F926BF3736B598BEF17EC29A_inline(L_26, L_27, NULL);
		V_4 = L_28;
		uint8_t* L_29 = V_6;
		int32_t L_30 = V_2;
		uint8_t* L_31;
		L_31 = il2cpp_unsafe_add<uint8_t,int32_t>(L_29, L_30);
		int32_t L_32 = V_4;
		il2cpp_unsafe_write_unaligned(L_31, L_32);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_33, 4));
	}

IL_0096:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_34, 3));
		goto IL_00c7;
	}

IL_009f:
	{
		uint8_t* L_35 = V_6;
		int32_t L_36 = V_3;
		uint8_t* L_37;
		L_37 = il2cpp_unsafe_add<uint8_t,int32_t>(L_35, L_36);
		uint8_t* L_38 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Base64_Encode_m8428F11B149CF32270FBA512BCA1F1918C1DCBF8_inline(L_37, L_38, NULL);
		V_4 = L_39;
		uint8_t* L_40 = V_6;
		int32_t L_41 = V_2;
		uint8_t* L_42;
		L_42 = il2cpp_unsafe_add<uint8_t,int32_t>(L_40, L_41);
		int32_t L_43 = V_4;
		il2cpp_unsafe_write_unaligned(L_42, L_43);
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_44, 4));
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_45, 3));
	}

IL_00c7:
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		int32_t* L_47 = ___2_bytesWritten;
		int32_t L_48 = V_0;
		*((int32_t*)L_47) = (int32_t)L_48;
		return (int32_t)(0);
	}

IL_00d0:
	{
		int32_t* L_49 = ___2_bytesWritten;
		*((int32_t*)L_49) = (int32_t)0;
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_Encode_m8428F11B149CF32270FBA512BCA1F1918C1DCBF8 (uint8_t* ___0_threeBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint8_t* L_0 = ___0_threeBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___0_threeBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		uint8_t* L_5 = ___0_threeBytes;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = *((uint8_t*)L_6);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1<<((int32_t)16)))|((int32_t)(L_4<<8))))|L_7));
		uint8_t* L_8 = ___1_encodingMap;
		int32_t L_9 = V_0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,int32_t>(L_8, ((int32_t)(L_9>>((int32_t)18))));
		int32_t L_11 = *((uint8_t*)L_10);
		V_1 = L_11;
		uint8_t* L_12 = ___1_encodingMap;
		int32_t L_13 = V_0;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, ((int32_t)(((int32_t)(L_13>>((int32_t)12)))&((int32_t)63))));
		int32_t L_15 = *((uint8_t*)L_14);
		V_2 = L_15;
		uint8_t* L_16 = ___1_encodingMap;
		int32_t L_17 = V_0;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, ((int32_t)(((int32_t)(L_17>>6))&((int32_t)63))));
		int32_t L_19 = *((uint8_t*)L_18);
		V_3 = L_19;
		uint8_t* L_20 = ___1_encodingMap;
		int32_t L_21 = V_0;
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,int32_t>(L_20, ((int32_t)(L_21&((int32_t)63))));
		int32_t L_23 = *((uint8_t*)L_22);
		V_4 = L_23;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		return ((int32_t)(((int32_t)(((int32_t)(L_24|((int32_t)(L_25<<8))))|((int32_t)(L_26<<((int32_t)16)))))|((int32_t)(L_27<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadOne_m27CD106730D70FA5F926BF3736B598BEF17EC29A (uint8_t* ___0_twoBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint8_t* L_0 = ___0_twoBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___0_twoBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_0 = ((int32_t)(((int32_t)(L_1<<((int32_t)16)))|((int32_t)(L_4<<8))));
		uint8_t* L_5 = ___1_encodingMap;
		int32_t L_6 = V_0;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, ((int32_t)(L_6>>((int32_t)18))));
		int32_t L_8 = *((uint8_t*)L_7);
		V_1 = L_8;
		uint8_t* L_9 = ___1_encodingMap;
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add<uint8_t,int32_t>(L_9, ((int32_t)(((int32_t)(L_10>>((int32_t)12)))&((int32_t)63))));
		int32_t L_12 = *((uint8_t*)L_11);
		V_2 = L_12;
		uint8_t* L_13 = ___1_encodingMap;
		int32_t L_14 = V_0;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, ((int32_t)(((int32_t)(L_14>>6))&((int32_t)63))));
		int32_t L_16 = *((uint8_t*)L_15);
		V_3 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		return ((int32_t)(((int32_t)(((int32_t)(L_17|((int32_t)(L_18<<8))))|((int32_t)(L_19<<((int32_t)16)))))|((int32_t)1023410176)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadTwo_m28EEF9A183F38CB4D91780D9B286DEE2CB882D5E (uint8_t* ___0_oneByte, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = ___0_oneByte;
		int32_t L_1 = *((uint8_t*)L_0);
		V_0 = ((int32_t)(L_1<<8));
		uint8_t* L_2 = ___1_encodingMap;
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, ((int32_t)(L_3>>((int32_t)10))));
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = L_5;
		uint8_t* L_6 = ___1_encodingMap;
		int32_t L_7 = V_0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, ((int32_t)(((int32_t)(L_7>>4))&((int32_t)63))));
		int32_t L_9 = *((uint8_t*)L_8);
		V_2 = L_9;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		return ((int32_t)(((int32_t)(((int32_t)(L_10|((int32_t)(L_11<<8))))|((int32_t)3997696)))|((int32_t)1023410176)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base64__cctor_mA09BE7BAA38CB55D15E9FD82B8D25CA84E28750B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____0953DF544832295E4A5B19928F95C351F25DA86A_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____1588174EA926BCCEB6275C029A42C7E3DBA4D523_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____1588174EA926BCCEB6275C029A42C7E3DBA4D523_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_decodingMap = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_decodingMap), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____0953DF544832295E4A5B19928F95C351F25DA86A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_encodingMap = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_StaticFields*)il2cpp_codegen_static_fields_for(Base64_tE3AB4F444B5BDC2C3FFBE17D5A24CCE50E263B0C_il2cpp_TypeInfo_var))->___s_encodingMap), (void*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8Constants__cctor_m46A4C0167B1C21B346BD5DECC4B59B41CCF4ECDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___MinValue;
		((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5 (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* ___0_format, Il2CppChar ___1_defaultSymbol, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* L_0 = ___0_format;
		Il2CppChar L_1;
		L_1 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline(L_0, NULL);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* L_3 = ___0_format;
		uint8_t L_4;
		L_4 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = ___1_defaultSymbol;
		V_0 = L_5;
	}

IL_001a:
	{
		Il2CppChar L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_FillWithAsciiZeros_mA075A6357F4D722A800CBFFCB08B7031E1935928 (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		uint8_t* L_1;
		L_1 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___0_buffer), L_0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_1) = (int8_t)((int32_t)48);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D (uint8_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0031;
	}

IL_000f:
	{
		uint64_t L_1 = ___0_value;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_1));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_5 = V_1;
		uint64_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, ((int64_t)((int32_t)10)))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_10 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_10)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigitsWithGroupSeparator_m35BCC092BFDFBB35210AB1AC237308658B892E0E (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0054;
	}

IL_0011:
	{
		uint64_t L_1 = ___0_value;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_1));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		int32_t L_3 = V_1;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_5 = V_2;
		uint64_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, ((int64_t)((int32_t)10)))))));
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		V_1 = L_9;
		uint8_t* L_10;
		L_10 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_9, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_10) = (int8_t)((int32_t)44);
		V_0 = 0;
		goto IL_0050;
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0050:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0054:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_15 = ___0_value;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_15)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_002e;
	}

IL_000f:
	{
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_1));
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_5 = V_1;
		uint32_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)10))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_10)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8 (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_0));
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_2 = ___2_startingIndex;
		uint8_t* L_3;
		L_3 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_2, 3)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___0_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))))));
		uint32_t L_6 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_6));
		uint32_t L_7 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_8, 2)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_0;
		uint32_t L_11 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)10))))));
		uint32_t L_12 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_12));
		uint32_t L_13 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_13/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_14 = ___2_startingIndex;
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_14, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_16 = V_0;
		uint32_t L_17 = ___0_value;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)10))))));
		int32_t L_18 = ___2_startingIndex;
		uint8_t* L_19;
		L_19 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_18, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_20 = ___0_value;
		*((int8_t*)L_19) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_20)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_0));
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_2 = ___2_startingIndex;
		uint8_t* L_3;
		L_3 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_2, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___0_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))))));
		int32_t L_6 = ___2_startingIndex;
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_6, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_8 = ___0_value;
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_8)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56 (uint64_t ___0_numerator, uint64_t ___1_denominator, uint64_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___0_numerator;
		uint64_t L_1 = ___1_denominator;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)L_1));
		uint64_t* L_2 = ___2_modulo;
		uint64_t L_3 = ___0_numerator;
		uint64_t L_4 = V_0;
		uint64_t L_5 = ___1_denominator;
		*((int64_t*)L_2) = (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, ((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)L_5))));
		uint64_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38 (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_numerator;
		uint32_t L_1 = ___1_denominator;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_0/(uint32_t)(int32_t)L_1));
		uint32_t* L_2 = ___2_modulo;
		uint32_t L_3 = ___0_numerator;
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___1_denominator;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))));
		uint32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDecimalTrailingZeros_m2A1E42DBD23D1826425AD12171016FEE84AC2D35 (uint32_t ___0_value, uint32_t* ___1_valueWithoutTrailingZeros, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0022;
		}
	}

IL_0008:
	{
		uint32_t L_1 = ___0_value;
		uint32_t L_2;
		L_2 = FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38_inline(L_1, ((int32_t)10), (&V_1), NULL);
		V_2 = L_2;
		uint32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_4 = V_2;
		___0_value = L_4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0008;
	}

IL_0022:
	{
		uint32_t* L_6 = ___1_valueWithoutTrailingZeros;
		uint32_t L_7 = ___0_value;
		*((int32_t*)L_6) = (int32_t)L_7;
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)10000000))))))
		{
			goto IL_0047;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		if ((!(((uint64_t)L_1) >= ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_0034;
		}
	}
	{
		uint64_t L_2 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)100000000000000LL))));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)14)));
		goto IL_004a;
	}

IL_0034:
	{
		uint64_t L_4 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int32_t)10000000)))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		goto IL_004a;
	}

IL_0047:
	{
		uint64_t L_6 = ___0_value;
		V_1 = ((int32_t)(uint32_t)L_6);
	}

IL_004a:
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_00b7;
	}

IL_0063:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		goto IL_00b7;
	}

IL_0077:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		goto IL_00b7;
	}

IL_008b:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)100000)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_00b7;
	}

IL_009f:
	{
		uint32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)1000000)))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 5));
		goto IL_00b7;
	}

IL_00b3:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 6));
	}

IL_00b7:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD (uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000)))))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000)));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_001a:
	{
		uint32_t L_3 = ___0_value;
		if ((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_4 = ___0_value;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_005f;
	}

IL_0033:
	{
		uint32_t L_6 = ___0_value;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		goto IL_005f;
	}

IL_0047:
	{
		uint32_t L_8 = ___0_value;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		goto IL_005f;
	}

IL_005b:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
	}

IL_005f:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_mA4308E880C2EE1DDEC136AE3F5CB68D1C86F996F (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 8));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_2>>((int32_t)32)));
	}

IL_0014:
	{
		uint64_t L_3 = ___0_value;
		if ((!(((uint64_t)L_3) > ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		uint64_t L_5 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_5>>((int32_t)16)));
	}

IL_002a:
	{
		uint64_t L_6 = ___0_value;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		uint64_t L_8 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_8>>8));
	}

IL_003f:
	{
		uint64_t L_9 = ___0_value;
		if ((!(((uint64_t)L_9) > ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m1EE6EE475064FA063DA735ACC071087E65BCA839 (bool ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline((&___3_format), ((int32_t)71), NULL);
		V_0 = L_0;
		bool L_1 = ___0_value;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_002d;
		}
	}
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_3 = ___1_destination;
		bool L_4;
		L_4 = BinaryPrimitives_TryWriteUInt32BigEndian_mA4F7D1C8C872C15E5D70BAB5A9BF0A0F410B89BD_inline(L_3, ((int32_t)1416787301), NULL);
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_009f;
	}

IL_002d:
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_00a4;
		}
	}
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_6 = ___1_destination;
		bool L_7;
		L_7 = BinaryPrimitives_TryWriteUInt32BigEndian_mA4F7D1C8C872C15E5D70BAB5A9BF0A0F410B89BD_inline(L_6, ((int32_t)1953658213), NULL);
		if (!L_7)
		{
			goto IL_009f;
		}
	}

IL_0045:
	{
		int32_t* L_8 = ___2_bytesWritten;
		*((int32_t*)L_8) = (int32_t)4;
		return (bool)1;
	}

IL_004a:
	{
		Il2CppChar L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_10;
		L_10 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)4) < ((uint32_t)L_10))))
		{
			goto IL_009f;
		}
	}
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_11 = ___1_destination;
		BinaryPrimitives_WriteUInt32BigEndian_m7FDFF39BEAB2E4FC2C6444DA26F7E48C24620E27_inline(L_11, ((int32_t)1180789875), NULL);
		goto IL_008f;
	}

IL_006f:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_13;
		L_13 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)4) < ((uint32_t)L_13))))
		{
			goto IL_009f;
		}
	}
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		BinaryPrimitives_WriteUInt32BigEndian_m7FDFF39BEAB2E4FC2C6444DA26F7E48C24620E27_inline(L_14, ((int32_t)1717660787), NULL);
	}

IL_008f:
	{
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_15) = (int8_t)((int32_t)101);
		int32_t* L_16 = ___2_bytesWritten;
		*((int32_t*)L_16) = (int32_t)5;
		return (bool)1;
	}

IL_009f:
	{
		int32_t* L_17 = ___2_bytesWritten;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}

IL_00a4:
	{
		int32_t* L_18 = ___2_bytesWritten;
		bool L_19;
		L_19 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_18, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m7E2600DAA18555918AF0E669BD4F600FC688B788 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		V_0 = L_0;
		Il2CppChar L_1;
		L_1 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___3_format), NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___3_format), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		V_1 = ((int32_t)71);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&___0_value), NULL);
		V_0 = L_3;
	}

IL_0025:
	{
		Il2CppChar L_4 = V_1;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)79)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)71))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)79))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_009b;
	}

IL_0042:
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)82))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)108))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_009b;
	}

IL_0057:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_10 = ___1_destination;
		int32_t* L_11 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Utf8Formatter_TryFormatDateTimeR_m9E09016D63D159B7C275A72112637F9FF3C66460(L_9, L_10, L_11, NULL);
		return L_12;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13;
		L_13 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		int32_t* L_15 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormatDateTimeL_mCB459C61A21BBD3594889131091D6878DF2A46C9(L_13, L_14, L_15, NULL);
		return L_16;
	}

IL_0075:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&___0_value), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_18;
		L_18 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_19 = ___1_destination;
		int32_t* L_20 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Utf8Formatter_TryFormatDateTimeO_mBD36789D0606C3D967171204CABB9EAB8F1010D9(L_17, L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22;
		L_22 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&___0_value), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_23 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24 = ___1_destination;
		int32_t* L_25 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8Formatter_TryFormatDateTimeG_m9A396F6F783750955EB1C39B17930C1A709B54F5(L_22, L_23, L_24, L_25, NULL);
		return L_26;
	}

IL_009b:
	{
		int32_t* L_27 = ___2_bytesWritten;
		bool L_28;
		L_28 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_27, NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m9DA029A79E6D509C8E8AD5558378B503701ECB14 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline((&___3_format), ((int32_t)71), NULL);
		V_0 = L_0;
		Il2CppChar L_1 = V_0;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)79)))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)71))))
		{
			goto IL_005c;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)79))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_0027:
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_003c;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_006a;
	}

IL_003c:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_7 = ___1_destination;
		int32_t* L_8 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Formatter_TryFormatDateTimeR_m9E09016D63D159B7C275A72112637F9FF3C66460(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0045:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_11 = ___1_destination;
		int32_t* L_12 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Utf8Formatter_TryFormatDateTimeL_mCB459C61A21BBD3594889131091D6878DF2A46C9(L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004e:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_15 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_16 = ___1_destination;
		int32_t* L_17 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Utf8Formatter_TryFormatDateTimeO_mBD36789D0606C3D967171204CABB9EAB8F1010D9(L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}

IL_005c:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_20 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_21 = ___1_destination;
		int32_t* L_22 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Formatter_TryFormatDateTimeG_m9A396F6F783750955EB1C39B17930C1A709B54F5(L_19, L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_006a:
	{
		int32_t* L_24 = ___2_bytesWritten;
		bool L_25;
		L_25 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_24, NULL);
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeG_m9A396F6F783750955EB1C39B17930C1A709B54F5 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint8_t V_3 = 0x0;
	{
		V_0 = ((int32_t)19);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___1_offset;
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 7));
	}

IL_0017:
	{
		int32_t L_4;
		L_4 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___2_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_6 = ___3_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0029:
	{
		int32_t* L_7 = ___3_bytesWritten;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)L_8;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)18), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = (uint8_t)L_10;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_11, L_12, 0, NULL);
		uint8_t* L_13;
		L_13 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 2, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_13) = (int8_t)((int32_t)47);
		int32_t L_14;
		L_14 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_15 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_14, L_15, 3, NULL);
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 5, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_16) = (int8_t)((int32_t)47);
		int32_t L_17;
		L_17 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_18 = ___2_destination;
		FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline(L_17, L_18, 6, NULL);
		uint8_t* L_19;
		L_19 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)10), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_19) = (int8_t)((int32_t)32);
		int32_t L_20;
		L_20 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_21 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_20, L_21, ((int32_t)11), NULL);
		uint8_t* L_22;
		L_22 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)13), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_22) = (int8_t)((int32_t)58);
		int32_t L_23;
		L_23 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_23, L_24, ((int32_t)14), NULL);
		uint8_t* L_25;
		L_25 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)16), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_25) = (int8_t)((int32_t)58);
		int32_t L_26;
		L_26 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_26, L_27, ((int32_t)17), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_28 = ___1_offset;
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0147;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_31 = ___1_offset;
		il2cpp_codegen_initobj((&V_2), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = TimeSpan_op_LessThan_m91C76FBEB38D80680A92A5FACA3A93810349B0FF(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_0103;
		}
	}
	{
		V_3 = (uint8_t)((int32_t)45);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_34;
		L_34 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___1_offset), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_35;
		L_35 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(((-L_34)), NULL);
		___1_offset = L_35;
		goto IL_0106;
	}

IL_0103:
	{
		V_3 = (uint8_t)((int32_t)43);
	}

IL_0106:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&___1_offset), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_37 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_36, L_37, ((int32_t)24), NULL);
		uint8_t* L_38;
		L_38 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)23), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_38) = (int8_t)((int32_t)58);
		int32_t L_39;
		L_39 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&___1_offset), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_40 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_39, L_40, ((int32_t)21), NULL);
		uint8_t* L_41;
		L_41 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)20), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_42 = V_3;
		*((int8_t*)L_41) = (int8_t)L_42;
		uint8_t* L_43;
		L_43 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)19), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_43) = (int8_t)((int32_t)32);
	}

IL_0147:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeO_mBD36789D0606C3D967171204CABB9EAB8F1010D9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t V_4 = 0x0;
	{
		V_0 = ((int32_t)27);
		V_1 = 2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___1_offset;
		il2cpp_codegen_runtime_class_init_inline(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Constants_t1B932FE10C187E9DD34B1DE1B1F9B00E8575F690_il2cpp_TypeInfo_var))->___s_nullUtcOffset;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___0_value), NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_5;
		L_5 = TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = ___0_value;
		NullCheck(L_5);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0(L_5, L_6, NULL);
		___1_offset = L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 6));
		goto IL_004e;
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_004e;
	}

IL_004a:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 6));
	}

IL_004e:
	{
		int32_t L_12;
		L_12 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___2_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_14 = ___3_bytesWritten;
		*((int32_t*)L_14) = (int32_t)0;
		return (bool)0;
	}

IL_0060:
	{
		int32_t* L_15 = ___3_bytesWritten;
		int32_t L_16 = V_0;
		*((int32_t*)L_15) = (int32_t)L_16;
		uint8_t* L_17;
		L_17 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)26), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		V_2 = (uint8_t)L_18;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_20 = ___2_destination;
		FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline(L_19, L_20, 0, NULL);
		uint8_t* L_21;
		L_21 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_21) = (int8_t)((int32_t)45);
		int32_t L_22;
		L_22 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_23 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_22, L_23, 5, NULL);
		uint8_t* L_24;
		L_24 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 7, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_24) = (int8_t)((int32_t)45);
		int32_t L_25;
		L_25 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_26 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_25, L_26, 8, NULL);
		uint8_t* L_27;
		L_27 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)10), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_27) = (int8_t)((int32_t)84);
		int32_t L_28;
		L_28 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_29 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_28, L_29, ((int32_t)11), NULL);
		uint8_t* L_30;
		L_30 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)13), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_30) = (int8_t)((int32_t)58);
		int32_t L_31;
		L_31 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_32 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_31, L_32, ((int32_t)14), NULL);
		uint8_t* L_33;
		L_33 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)16), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_33) = (int8_t)((int32_t)58);
		int32_t L_34;
		L_34 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_35 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_34, L_35, ((int32_t)17), NULL);
		uint8_t* L_36;
		L_36 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)19), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_36) = (int8_t)((int32_t)46);
		int64_t L_37;
		L_37 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_38;
		L_38 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___2_destination), ((int32_t)20), 7, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_37%(uint64_t)(int64_t)((int64_t)((int32_t)10000000))))), L_38, NULL);
		int32_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_019b;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_40 = ___1_offset;
		il2cpp_codegen_initobj((&V_3), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = TimeSpan_op_LessThan_m91C76FBEB38D80680A92A5FACA3A93810349B0FF(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_015c;
		}
	}
	{
		V_4 = (uint8_t)((int32_t)45);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_43;
		L_43 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___1_offset), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_44;
		L_44 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(((-L_43)), NULL);
		___1_offset = L_44;
		goto IL_0160;
	}

IL_015c:
	{
		V_4 = (uint8_t)((int32_t)43);
	}

IL_0160:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&___1_offset), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_46 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_45, L_46, ((int32_t)31), NULL);
		uint8_t* L_47;
		L_47 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)30), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_47) = (int8_t)((int32_t)58);
		int32_t L_48;
		L_48 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&___1_offset), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_49 = ___2_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_48, L_49, ((int32_t)28), NULL);
		uint8_t* L_50;
		L_50 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)27), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_51 = V_4;
		*((int8_t*)L_50) = (int8_t)L_51;
		goto IL_01ae;
	}

IL_019b:
	{
		int32_t L_52 = V_1;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_01ae;
		}
	}
	{
		uint8_t* L_53;
		L_53 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)27), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_53) = (int8_t)((int32_t)90);
	}

IL_01ae:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeR_m9E09016D63D159B7C275A72112637F9FF3C66460 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)((int32_t)28)) >= ((uint32_t)L_0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_1 = ___2_bytesWritten;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviations;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = DateTime_get_DayOfWeek_mAC680139BCAA1613FC134454D1AD1B502CB1BB68((&___0_value), NULL);
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((uint32_t)L_8>>8));
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 1, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_0;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)L_10);
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)((uint32_t)L_11>>8));
		uint8_t* L_12;
		L_12 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 2, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_13 = V_0;
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)L_13);
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_15) = (int8_t)((int32_t)32);
		int32_t L_16;
		L_16 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_16, L_17, 5, NULL);
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 7, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviations;
		int32_t L_20;
		L_20 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___0_value), NULL);
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		uint8_t* L_23;
		L_23 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_24 = V_1;
		*((int8_t*)L_23) = (int8_t)((int32_t)(uint8_t)L_24);
		uint32_t L_25 = V_1;
		V_1 = ((int32_t)((uint32_t)L_25>>8));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)9), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_27 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)L_27);
		uint32_t L_28 = V_1;
		V_1 = ((int32_t)((uint32_t)L_28>>8));
		uint8_t* L_29;
		L_29 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)10), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_30 = V_1;
		*((int8_t*)L_29) = (int8_t)((int32_t)(uint8_t)L_30);
		uint8_t* L_31;
		L_31 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)11), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_31) = (int8_t)((int32_t)32);
		int32_t L_32;
		L_32 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_33 = ___1_destination;
		FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline(L_32, L_33, ((int32_t)12), NULL);
		uint8_t* L_34;
		L_34 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)16), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_34) = (int8_t)((int32_t)32);
		int32_t L_35;
		L_35 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_36 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_35, L_36, ((int32_t)17), NULL);
		uint8_t* L_37;
		L_37 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)19), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_37) = (int8_t)((int32_t)58);
		int32_t L_38;
		L_38 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_39 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_38, L_39, ((int32_t)20), NULL);
		uint8_t* L_40;
		L_40 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)22), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_40) = (int8_t)((int32_t)58);
		int32_t L_41;
		L_41 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_42 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_41, L_42, ((int32_t)23), NULL);
		uint8_t* L_43;
		L_43 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)25), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_43) = (int8_t)((int32_t)32);
		uint8_t* L_44;
		L_44 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)26), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_44) = (int8_t)((int32_t)71);
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)27), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_45) = (int8_t)((int32_t)77);
		uint8_t* L_46;
		L_46 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)28), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_46) = (int8_t)((int32_t)84);
		int32_t* L_47 = ___2_bytesWritten;
		*((int32_t*)L_47) = (int32_t)((int32_t)29);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDateTimeL_mCB459C61A21BBD3594889131091D6878DF2A46C9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)((int32_t)28)) >= ((uint32_t)L_0))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_1 = ___2_bytesWritten;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviationsLowercase;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = DateTime_get_DayOfWeek_mAC680139BCAA1613FC134454D1AD1B502CB1BB68((&___0_value), NULL);
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_7 = V_0;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((uint32_t)L_8>>8));
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 1, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_0;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)L_10);
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)((uint32_t)L_11>>8));
		uint8_t* L_12;
		L_12 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 2, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_13 = V_0;
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)L_13);
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_15) = (int8_t)((int32_t)32);
		int32_t L_16;
		L_16 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_16, L_17, 5, NULL);
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 7, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviationsLowercase;
		int32_t L_20;
		L_20 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&___0_value), NULL);
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		uint8_t* L_23;
		L_23 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_24 = V_1;
		*((int8_t*)L_23) = (int8_t)((int32_t)(uint8_t)L_24);
		uint32_t L_25 = V_1;
		V_1 = ((int32_t)((uint32_t)L_25>>8));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)9), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_27 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)L_27);
		uint32_t L_28 = V_1;
		V_1 = ((int32_t)((uint32_t)L_28>>8));
		uint8_t* L_29;
		L_29 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)10), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_30 = V_1;
		*((int8_t*)L_29) = (int8_t)((int32_t)(uint8_t)L_30);
		uint8_t* L_31;
		L_31 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)11), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_31) = (int8_t)((int32_t)32);
		int32_t L_32;
		L_32 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_33 = ___1_destination;
		FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline(L_32, L_33, ((int32_t)12), NULL);
		uint8_t* L_34;
		L_34 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)16), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_34) = (int8_t)((int32_t)32);
		int32_t L_35;
		L_35 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_36 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_35, L_36, ((int32_t)17), NULL);
		uint8_t* L_37;
		L_37 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)19), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_37) = (int8_t)((int32_t)58);
		int32_t L_38;
		L_38 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_39 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_38, L_39, ((int32_t)20), NULL);
		uint8_t* L_40;
		L_40 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)22), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_40) = (int8_t)((int32_t)58);
		int32_t L_41;
		L_41 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&___0_value), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_42 = ___1_destination;
		FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline(L_41, L_42, ((int32_t)23), NULL);
		uint8_t* L_43;
		L_43 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)25), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_43) = (int8_t)((int32_t)32);
		uint8_t* L_44;
		L_44 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)26), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_44) = (int8_t)((int32_t)103);
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)27), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_45) = (int8_t)((int32_t)109);
		uint8_t* L_46;
		L_46 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)28), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_46) = (int8_t)((int32_t)116);
		int32_t* L_47 = ___2_bytesWritten;
		*((int32_t*)L_47) = (int32_t)((int32_t)29);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m243D2C1CEC715441A558F2BD84017F52E264CFA9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t V_5 = 0x0;
	NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	uint8_t V_7 = 0x0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___3_format), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_1;
		L_1 = StandardFormat_op_Implicit_mE2E278605D3C00B919B055D0A930CA62F82F42C6(((int32_t)71), NULL);
		___3_format = L_1;
	}

IL_0015:
	{
		Il2CppChar L_2;
		L_2 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___3_format), NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)69))))
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_004c;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)101))))
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_013e;
	}

IL_004c:
	{
		uint8_t L_5;
		L_5 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)255))))
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7(NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_7 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormat_m243D2C1CEC715441A558F2BD84017F52E264CFA9_RuntimeMethod_var)));
	}

IL_0068:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mE803AC96383DB5E417A4BD7B2E428568C750D5BB(L_8, (&V_1), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_9;
		L_9 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D((&V_1), NULL);
		V_2 = L_9;
		uint8_t* L_10;
		L_10 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&V_2), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_11 = *((uint8_t*)L_10);
		if (L_11)
		{
			goto IL_0096;
		}
	}
	{
		(&V_1)->___IsNegative = (bool)0;
	}

IL_0096:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12 = ___1_destination;
		int32_t* L_13 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Formatter_TryFormatDecimalG_m3B05A8507836B3385647CE9402B2C20C771C481E((&V_1), L_12, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		return L_15;
	}

IL_00a2:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_16 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mE803AC96383DB5E417A4BD7B2E428568C750D5BB(L_16, (&V_4), NULL);
		uint8_t L_17;
		L_17 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)255))))
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_18;
		L_18 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		G_B13_0 = ((int32_t)(L_18));
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B13_0 = 2;
	}

IL_00d0:
	{
		V_5 = (uint8_t)G_B13_0;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 L_19 = V_4;
		int32_t L_20 = L_19.___Scale;
		uint8_t L_21 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		Number_RoundNumber_m8773F007B12F695FED742326FA32BE841160B5C7((&V_4), ((int32_t)il2cpp_codegen_add(L_20, (int32_t)L_21)), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22 = ___1_destination;
		int32_t* L_23 = ___2_bytesWritten;
		uint8_t L_24 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Formatter_TryFormatDecimalF_m73B3156D35EB841FCC6CA30018913351783EFFC4((&V_4), L_22, L_23, L_24, NULL);
		return L_25;
	}

IL_00ef:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_26 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mE803AC96383DB5E417A4BD7B2E428568C750D5BB(L_26, (&V_6), NULL);
		uint8_t L_27;
		L_27 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)255))))
		{
			goto IL_011c;
		}
	}
	{
		uint8_t L_28;
		L_28 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		G_B17_0 = ((int32_t)(L_28));
		goto IL_011d;
	}

IL_011c:
	{
		G_B17_0 = 6;
	}

IL_011d:
	{
		V_7 = (uint8_t)G_B17_0;
		uint8_t L_29 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		Number_RoundNumber_m8773F007B12F695FED742326FA32BE841160B5C7((&V_6), ((int32_t)il2cpp_codegen_add((int32_t)L_29, 1)), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_30 = ___1_destination;
		int32_t* L_31 = ___2_bytesWritten;
		uint8_t L_32 = V_7;
		Il2CppChar L_33;
		L_33 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___3_format), NULL);
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatDecimalE_m1CC4618BE35A823FFD27130B51EFA36F2F61DED1((&V_6), L_30, L_31, L_32, (uint8_t)((int32_t)(uint8_t)L_33), NULL);
		return L_34;
	}

IL_013e:
	{
		int32_t* L_35 = ___2_bytesWritten;
		bool L_36;
		L_36 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_35, NULL);
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalE_m1CC4618BE35A823FFD27130B51EFA36F2F61DED1 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, uint8_t ___3_precision, uint8_t ___4_exponentSymbol, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_0 = ___0_number;
		int32_t L_1 = L_0->___Scale;
		V_0 = L_1;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_2 = ___0_number;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_3;
		L_3 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D(L_2, NULL);
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_4;
		L_4 = Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B(L_3, Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_5 = ___0_number;
		bool L_6 = L_5->___IsNegative;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		uint8_t L_7 = ___3_precision;
		if (!L_7)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_add(G_B3_0, 1));
			goto IL_0035;
		}
		G_B4_0 = ((int32_t)il2cpp_codegen_add(G_B3_0, 1));
	}
	{
		uint8_t L_8 = ___3_precision;
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0)), 2)), 3));
		int32_t L_9;
		L_9 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_11 = ___2_bytesWritten;
		*((int32_t*)L_11) = (int32_t)0;
		return (bool)0;
	}

IL_004e:
	{
		V_3 = 0;
		V_4 = 0;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_12 = ___0_number;
		bool L_13 = L_12->___IsNegative;
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_15, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_16) = (int8_t)((int32_t)45);
	}

IL_006d:
	{
		int32_t L_17 = V_4;
		uint8_t* L_18;
		L_18 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_17, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_19 = *((uint8_t*)L_18);
		V_5 = (uint8_t)L_19;
		uint8_t L_20 = V_5;
		if (L_20)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint8_t* L_23;
		L_23 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_22, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_23) = (int8_t)((int32_t)48);
		V_6 = 0;
		goto IL_00b1;
	}

IL_0097:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_25, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_27 = V_5;
		*((int8_t*)L_26) = (int8_t)L_27;
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_00b1:
	{
		uint8_t L_30 = ___3_precision;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		uint8_t* L_33;
		L_33 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_32, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_33) = (int8_t)((int32_t)46);
		V_7 = 0;
		goto IL_0120;
	}

IL_00cf:
	{
		int32_t L_34 = V_4;
		uint8_t* L_35;
		L_35 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_34, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_36 = *((uint8_t*)L_35);
		V_8 = (uint8_t)L_36;
		uint8_t L_37 = V_8;
		if (L_37)
		{
			goto IL_0105;
		}
	}
	{
		goto IL_00f6;
	}

IL_00e7:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint8_t* L_40;
		L_40 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_39, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_40) = (int8_t)((int32_t)48);
	}

IL_00f6:
	{
		int32_t L_41 = V_7;
		int32_t L_42 = L_41;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		uint8_t L_43 = ___3_precision;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_0125;
	}

IL_0105:
	{
		int32_t L_44 = V_3;
		int32_t L_45 = L_44;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint8_t* L_46;
		L_46 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_45, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_47 = V_8;
		*((int8_t*)L_46) = (int8_t)L_47;
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0120:
	{
		int32_t L_50 = V_7;
		uint8_t L_51 = ___3_precision;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00cf;
		}
	}

IL_0125:
	{
		int32_t L_52 = V_3;
		int32_t L_53 = L_52;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		uint8_t* L_54;
		L_54 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_53, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_55 = ___4_exponentSymbol;
		*((int8_t*)L_54) = (int8_t)L_55;
		int32_t L_56 = V_6;
		if ((((int32_t)L_56) < ((int32_t)0)))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_57 = V_3;
		int32_t L_58 = L_57;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		uint8_t* L_59;
		L_59 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_58, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_59) = (int8_t)((int32_t)43);
		goto IL_0164;
	}

IL_0150:
	{
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, 1));
		uint8_t* L_62;
		L_62 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_61, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_62) = (int8_t)((int32_t)45);
		int32_t L_63 = V_6;
		V_6 = ((-L_63));
	}

IL_0164:
	{
		int32_t L_64 = V_3;
		int32_t L_65 = L_64;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		uint8_t* L_66;
		L_66 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_65, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_66) = (int8_t)((int32_t)48);
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		V_3 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		uint8_t* L_69;
		L_69 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_68, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_70 = V_6;
		*((int8_t*)L_69) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_70/((int32_t)10))), ((int32_t)48))));
		int32_t L_71 = V_3;
		int32_t L_72 = L_71;
		V_3 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		uint8_t* L_73;
		L_73 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_72, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_74 = V_6;
		*((int8_t*)L_73) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_74%((int32_t)10))), ((int32_t)48))));
		int32_t* L_75 = ___2_bytesWritten;
		int32_t L_76 = V_2;
		*((int32_t*)L_75) = (int32_t)L_76;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalF_m73B3156D35EB841FCC6CA30018913351783EFFC4 (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, uint8_t ___3_precision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint8_t V_11 = 0x0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_0 = ___0_number;
		int32_t L_1 = L_0->___Scale;
		V_0 = L_1;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_2 = ___0_number;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_3;
		L_3 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D(L_2, NULL);
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_4;
		L_4 = Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B(L_3, Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_5 = ___0_number;
		bool L_6 = L_5->___IsNegative;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
		G_B4_0 = G_B3_0;
	}
	{
		int32_t L_8 = V_0;
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0033:
	{
		uint8_t L_9 = ___3_precision;
		if (!L_9)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0));
			goto IL_0042;
		}
		G_B7_0 = ((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0));
	}
	{
		uint8_t L_10 = ___3_precision;
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		G_B9_1 = G_B7_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0043:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B9_1, G_B9_0));
		int32_t L_11;
		L_11 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t* L_13 = ___2_bytesWritten;
		*((int32_t*)L_13) = (int32_t)0;
		return (bool)0;
	}

IL_0057:
	{
		V_3 = 0;
		V_4 = 0;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_14 = ___0_number;
		bool L_15 = L_14->___IsNegative;
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_17, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)45);
	}

IL_0078:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_20 = V_4;
		int32_t L_21 = L_20;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint8_t* L_22;
		L_22 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_21, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_22) = (int8_t)((int32_t)48);
		goto IL_00ef;
	}

IL_0095:
	{
		int32_t L_23 = V_3;
		uint8_t* L_24;
		L_24 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_23, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_25 = *((uint8_t*)L_24);
		V_5 = (uint8_t)L_25;
		uint8_t L_26 = V_5;
		if (L_26)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		V_7 = 0;
		goto IL_00cb;
	}

IL_00b4:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = L_29;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint8_t* L_31;
		L_31 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_30, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_31) = (int8_t)((int32_t)48);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00cb:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = V_6;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00ef;
	}

IL_00d6:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = L_35;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		uint8_t* L_37;
		L_37 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_36, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_38 = V_5;
		*((int8_t*)L_37) = (int8_t)L_38;
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00eb:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0095;
		}
	}

IL_00ef:
	{
		uint8_t L_42 = ___3_precision;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_44, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_45) = (int8_t)((int32_t)46);
		V_8 = 0;
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_019e;
		}
	}
	{
		uint8_t L_47 = ___3_precision;
		int32_t L_48 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_47, ((-L_48)), NULL);
		V_9 = L_49;
		V_10 = 0;
		goto IL_013a;
	}

IL_0123:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = L_50;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		uint8_t* L_52;
		L_52 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_51, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_52) = (int8_t)((int32_t)48);
		int32_t L_53 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_013a:
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_9;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_56 = V_8;
		int32_t L_57 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		goto IL_019e;
	}

IL_014c:
	{
		int32_t L_58 = V_3;
		uint8_t* L_59;
		L_59 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_58, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_60 = *((uint8_t*)L_59);
		V_11 = (uint8_t)L_60;
		uint8_t L_61 = V_11;
		if (L_61)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_0174;
	}

IL_0163:
	{
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		V_4 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		uint8_t* L_64;
		L_64 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_63, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_64) = (int8_t)((int32_t)48);
	}

IL_0174:
	{
		int32_t L_65 = V_8;
		int32_t L_66 = L_65;
		V_8 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		uint8_t L_67 = ___3_precision;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0163;
		}
	}
	{
		goto IL_01a3;
	}

IL_0183:
	{
		int32_t L_68 = V_4;
		int32_t L_69 = L_68;
		V_4 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		uint8_t* L_70;
		L_70 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_69, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_71 = V_11;
		*((int8_t*)L_70) = (int8_t)L_71;
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_019e:
	{
		int32_t L_74 = V_8;
		uint8_t L_75 = ___3_precision;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_014c;
		}
	}

IL_01a3:
	{
		int32_t* L_76 = ___2_bytesWritten;
		int32_t L_77 = V_2;
		*((int32_t*)L_76) = (int32_t)L_77;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalG_m3B05A8507836B3385647CE9402B2C20C771C481E (NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___0_number, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B6_0 = 0;
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_0 = ___0_number;
		int32_t L_1 = L_0->___Scale;
		V_0 = L_1;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_2 = ___0_number;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_3;
		L_3 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D(L_2, NULL);
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_4;
		L_4 = Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B(L_3, Span_1_op_Implicit_mDA6C6D72ACE0BAE9DBC5980F0C4431995194F50B_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_5 = ___0_number;
		int32_t L_6;
		L_6 = NumberBuffer_get_NumDigits_m744B724DE0EC44CDF06843758627E97D35F067A4(L_5, NULL);
		V_2 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_10 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_12 = V_4;
		int32_t L_13 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_add(1, ((-L_13))))));
		goto IL_004f;
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_15 = V_0;
		G_B6_0 = L_15;
		goto IL_004d;
	}

IL_004c:
	{
		G_B6_0 = 1;
	}

IL_004d:
	{
		V_4 = G_B6_0;
	}

IL_004f:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_16 = ___0_number;
		bool L_17 = L_16->___IsNegative;
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		int32_t L_19;
		L_19 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t* L_21 = ___2_bytesWritten;
		*((int32_t*)L_21) = (int32_t)0;
		return (bool)0;
	}

IL_0073:
	{
		V_5 = 0;
		V_6 = 0;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_22 = ___0_number;
		bool L_23 = L_22->___IsNegative;
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_25, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_26) = (int8_t)((int32_t)45);
	}

IL_0095:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint8_t* L_30;
		L_30 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_29, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_30) = (int8_t)((int32_t)48);
		goto IL_0111;
	}

IL_00b2:
	{
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_31, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_33 = *((uint8_t*)L_32);
		V_7 = (uint8_t)L_33;
		uint8_t L_34 = V_7;
		if (L_34)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
		V_9 = 0;
		goto IL_00ea;
	}

IL_00d3:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = L_37;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		uint8_t* L_39;
		L_39 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_38, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_39) = (int8_t)((int32_t)48);
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ea:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_0111;
	}

IL_00f5:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = L_43;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_44, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_46 = V_7;
		*((int8_t*)L_45) = (int8_t)L_46;
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010c:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_0;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00b2;
		}
	}

IL_0111:
	{
		bool L_50 = V_3;
		if (!L_50)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		uint8_t* L_53;
		L_53 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_52, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_53) = (int8_t)((int32_t)46);
		int32_t L_54 = V_0;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_55 = V_0;
		V_10 = ((-L_55));
		V_11 = 0;
		goto IL_0152;
	}

IL_013b:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = L_56;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		uint8_t* L_58;
		L_58 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_57, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_58) = (int8_t)((int32_t)48);
		int32_t L_59 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0152:
	{
		int32_t L_60 = V_11;
		int32_t L_61 = V_10;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_016e;
	}

IL_015d:
	{
		int32_t L_62 = V_6;
		int32_t L_63 = L_62;
		V_6 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		uint8_t* L_64;
		L_64 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_63, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint8_t L_65 = V_12;
		*((int8_t*)L_64) = (int8_t)L_65;
	}

IL_016e:
	{
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		uint8_t* L_68;
		L_68 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&V_1), L_67, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_69 = *((uint8_t*)L_68);
		int32_t L_70 = L_69;
		V_12 = (uint8_t)L_70;
		if (L_70)
		{
			goto IL_015d;
		}
	}

IL_0182:
	{
		int32_t* L_71 = ___2_bytesWritten;
		int32_t L_72 = V_4;
		*((int32_t*)L_71) = (int32_t)L_72;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m4C6AE4991C2F45AFC11CD291BA909E6A39AF17C4 (double ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10(L_0, L_1, L_2, L_3, Utf8Formatter_TryFormatFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6D141298F18ACE18D9B109B61DD418FE7B8BBE10_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m548E5368528F613E64C5552676501479F1BB310B (float ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50(L_0, L_1, L_2, L_3, Utf8Formatter_TryFormatFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0ACD678BFEB54EB92023C229A6F8962EC7C6EC50_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m440D85A38D45F80E8C5F13AC096BC0A9C88EC92C (Guid_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline((&___3_format), ((int32_t)68), NULL);
		V_0 = L_0;
		Il2CppChar L_1 = V_0;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)66))))
		{
			goto IL_0047;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0065;
	}

IL_0027:
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)78))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)80))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0065;
	}

IL_003c:
	{
		V_1 = ((int32_t)-2147483612);
		goto IL_006c;
	}

IL_0047:
	{
		V_1 = ((int32_t)-2139260122);
		goto IL_006c;
	}

IL_0052:
	{
		V_1 = ((int32_t)-2144786394);
		goto IL_006c;
	}

IL_005d:
	{
		V_1 = ((int32_t)32);
		goto IL_006c;
	}

IL_0065:
	{
		int32_t* L_6 = ___2_bytesWritten;
		bool L_7;
		L_7 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_6, NULL);
		return L_7;
	}

IL_006c:
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)((int32_t)(uint8_t)L_8)) <= ((int32_t)L_9)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_10 = ___2_bytesWritten;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}

IL_007f:
	{
		int32_t* L_11 = ___2_bytesWritten;
		int32_t L_12 = V_1;
		*((int32_t*)L_11) = (int32_t)((int32_t)(uint8_t)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)(L_13>>8));
		int32_t L_14 = V_1;
		if (!((int32_t)(uint8_t)L_14))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_16 = V_1;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)L_16);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17;
		L_17 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 1, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_17;
	}

IL_00a3:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)(L_18>>8));
		il2cpp_codegen_initobj((&V_2), sizeof(DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7));
		Guid_t L_19 = ___0_value;
		(&V_2)->___Guid = L_19;
		uint8_t* L_20;
		L_20 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_21 = *((uint8_t*)L_20);
		V_3 = (uint8_t)L_21;
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_22 = V_2;
		uint8_t L_23 = L_22.___Byte03;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_23, L_24, 0, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_25 = V_2;
		uint8_t L_26 = L_25.___Byte02;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_26, L_27, 2, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_28 = V_2;
		uint8_t L_29 = L_28.___Byte01;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_30 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_29, L_30, 4, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_31 = V_2;
		uint8_t L_32 = L_31.___Byte00;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_33 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_32, L_33, 6, ((int32_t)8224), NULL);
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_012b;
		}
	}
	{
		uint8_t* L_35;
		L_35 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_35) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_36;
		L_36 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), ((int32_t)9), Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_36;
		goto IL_0135;
	}

IL_012b:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_37;
		L_37 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 8, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_37;
	}

IL_0135:
	{
		uint8_t* L_38;
		L_38 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_39 = *((uint8_t*)L_38);
		V_4 = (uint8_t)L_39;
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_40 = V_2;
		uint8_t L_41 = L_40.___Byte05;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_42 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_41, L_42, 0, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_43 = V_2;
		uint8_t L_44 = L_43.___Byte04;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_45 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_44, L_45, 2, ((int32_t)8224), NULL);
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_0185;
		}
	}
	{
		uint8_t* L_47;
		L_47 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_47) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_48;
		L_48 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 5, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_48;
		goto IL_018f;
	}

IL_0185:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_49;
		L_49 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 4, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_49;
	}

IL_018f:
	{
		uint8_t* L_50;
		L_50 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_51 = *((uint8_t*)L_50);
		V_5 = (uint8_t)L_51;
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_52 = V_2;
		uint8_t L_53 = L_52.___Byte07;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_54 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_53, L_54, 0, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_55 = V_2;
		uint8_t L_56 = L_55.___Byte06;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_57 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_56, L_57, 2, ((int32_t)8224), NULL);
		int32_t L_58 = V_1;
		if ((((int32_t)L_58) >= ((int32_t)0)))
		{
			goto IL_01df;
		}
	}
	{
		uint8_t* L_59;
		L_59 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_59) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_60;
		L_60 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 5, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_60;
		goto IL_01e9;
	}

IL_01df:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_61;
		L_61 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 4, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_61;
	}

IL_01e9:
	{
		uint8_t* L_62;
		L_62 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_63 = *((uint8_t*)L_62);
		V_6 = (uint8_t)L_63;
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_64 = V_2;
		uint8_t L_65 = L_64.___Byte08;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_66 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_65, L_66, 0, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_67 = V_2;
		uint8_t L_68 = L_67.___Byte09;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_69 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_68, L_69, 2, ((int32_t)8224), NULL);
		int32_t L_70 = V_1;
		if ((((int32_t)L_70) >= ((int32_t)0)))
		{
			goto IL_0239;
		}
	}
	{
		uint8_t* L_71;
		L_71 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 4, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_71) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_72;
		L_72 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 5, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_72;
		goto IL_0243;
	}

IL_0239:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_73;
		L_73 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___1_destination), 4, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___1_destination = L_73;
	}

IL_0243:
	{
		uint8_t* L_74;
		L_74 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)11), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_75 = *((uint8_t*)L_74);
		V_7 = (uint8_t)L_75;
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_76 = V_2;
		uint8_t L_77 = L_76.___Byte10;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_78 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_77, L_78, 0, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_79 = V_2;
		uint8_t L_80 = L_79.___Byte11;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_81 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_80, L_81, 2, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_82 = V_2;
		uint8_t L_83 = L_82.___Byte12;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_84 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_83, L_84, 4, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_85 = V_2;
		uint8_t L_86 = L_85.___Byte13;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_87 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_86, L_87, 6, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_88 = V_2;
		uint8_t L_89 = L_88.___Byte14;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_90 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_89, L_90, 8, ((int32_t)8224), NULL);
		DecomposedGuid_tBC58DF1EA50A75DECB68A6C8BD06B242A188FBB7 L_91 = V_2;
		uint8_t L_92 = L_91.___Byte15;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_93 = ___1_destination;
		FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline(L_92, L_93, ((int32_t)10), ((int32_t)8224), NULL);
		int32_t L_94 = V_1;
		if (!((int32_t)(uint8_t)L_94))
		{
			goto IL_02cf;
		}
	}
	{
		uint8_t* L_95;
		L_95 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), ((int32_t)12), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_96 = V_1;
		*((int8_t*)L_95) = (int8_t)((int32_t)(uint8_t)L_96);
	}

IL_02cf:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mE38CA320E8B4095A13DFB0F824856ADB3E9AF9B4 (uint8_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline(((int64_t)(uint64_t)((uint32_t)L_0)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m7639ACF6E80EA78B8271CE10949299AE2ED29925 (int8_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline(((int64_t)L_0), ((int64_t)((int32_t)255)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mAA946059F42DE0D7BA5B157AE8B0DBFFB2C322B3 (uint16_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline(((int64_t)(uint64_t)((uint32_t)L_0)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m7668DBB41D942DBEC06ADA3F80A6F9EF89FE0FF9 (int16_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline(((int64_t)L_0), ((int64_t)((int32_t)65535)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mD57408B9CE9664A26C14F8DD0E083EECC7082672 (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline(((int64_t)(uint64_t)((uint32_t)L_0)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mC79B730D833C4379363A2908B3BE3CCC2B04E3F4 (int32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline(((int64_t)L_0), ((int64_t)(uint64_t)((uint32_t)(-1))), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m6459D31AE67525EA8CCE1694B8C2BDC20FC37572 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m2C658DB3365E5931F216177C9056FC1452E476BD (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_1 = ___1_destination;
		int32_t* L_2 = ___2_bytesWritten;
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline(L_0, ((int64_t)(-1)), L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051 (int64_t ___0_value, uint64_t ___1_mask, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___4_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___4_format), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___2_destination;
		int32_t* L_3 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64Default_m09238099AE8A28C305E864397CD33AB689DA8E6A_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		Il2CppChar L_5;
		L_5 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___4_format), NULL);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)68))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)71))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f6;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)78))))
		{
			goto IL_00c0;
		}
	}
	{
		Il2CppChar L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)88))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_00f6;
	}

IL_0057:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)103)))))
		{
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)100))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)103))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f6;
	}

IL_0074:
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_00c0;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)120))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00f6;
	}

IL_0089:
	{
		bool L_17;
		L_17 = StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68((&___4_format), NULL);
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7(NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_19 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_RuntimeMethod_var)));
	}

IL_00a0:
	{
		int64_t L_20 = ___0_value;
		uint8_t L_21;
		L_21 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22 = ___2_destination;
		int32_t* L_23 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline(L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}

IL_00b0:
	{
		int64_t L_25 = ___0_value;
		uint8_t L_26;
		L_26 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___2_destination;
		int32_t* L_28 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline(L_25, L_26, L_27, L_28, NULL);
		return L_29;
	}

IL_00c0:
	{
		int64_t L_30 = ___0_value;
		uint8_t L_31;
		L_31 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_32 = ___2_destination;
		int32_t* L_33 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatInt64N_m16CF37BBD48178906BE789DD1BC48E8F7E9958B2_inline(L_30, L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_00d0:
	{
		int64_t L_35 = ___0_value;
		uint64_t L_36 = ___1_mask;
		uint8_t L_37;
		L_37 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_38 = ___2_destination;
		int32_t* L_39 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(((int64_t)(L_35&(int64_t)L_36)), L_37, (bool)1, L_38, L_39, NULL);
		return L_40;
	}

IL_00e3:
	{
		int64_t L_41 = ___0_value;
		uint64_t L_42 = ___1_mask;
		uint8_t L_43;
		L_43 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_44 = ___2_destination;
		int32_t* L_45 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(((int64_t)(L_41&(int64_t)L_42)), L_43, (bool)0, L_44, L_45, NULL);
		return L_46;
	}

IL_00f6:
	{
		int32_t* L_47 = ___3_bytesWritten;
		bool L_48;
		L_48 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_47, NULL);
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500 (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = (bool)1;
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
	}

IL_0010:
	{
		int64_t L_2 = ___0_value;
		uint8_t L_3 = ___1_precision;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4 = ___2_destination;
		bool L_5 = V_0;
		int32_t* L_6 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64Default_m09238099AE8A28C305E864397CD33AB689DA8E6A (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)((int32_t)10))))))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(((int32_t)(uint32_t)L_1), L_2, L_3, NULL);
		return L_4;
	}

IL_0013:
	{
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_6 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_7 = ___1_destination;
		int32_t* L_8 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Formatter_TryFormatInt64MultipleDigits_mF251162FB54EDF3E9FB97E2ED59864344ACE2236_inline(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		int64_t L_10 = ___0_value;
		if ((((int64_t)L_10) > ((int64_t)((int64_t)((int32_t)2147483647LL)))))
		{
			goto IL_0049;
		}
	}
	{
		int64_t L_11 = ___0_value;
		if ((((int64_t)L_11) < ((int64_t)((int64_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0049;
		}
	}
	{
		int64_t L_12 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_13 = ___1_destination;
		int32_t* L_14 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD_inline(((int32_t)L_12), L_13, L_14, NULL);
		return L_15;
	}

IL_0049:
	{
		int64_t L_16 = ___0_value;
		if ((((int64_t)L_16) > ((int64_t)((int64_t)4294967295000000000LL))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_17 = ___0_value;
		if ((((int64_t)L_17) < ((int64_t)((int64_t)-4294967295000000000LL))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_18 = ___0_value;
		if ((((int64_t)L_18) < ((int64_t)((int64_t)0))))
		{
			goto IL_0078;
		}
	}
	{
		int64_t L_19 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_20 = ___1_destination;
		int32_t* L_21 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633(L_19, L_20, L_21, NULL);
		return L_22;
	}

IL_0078:
	{
		int64_t L_23 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24 = ___1_destination;
		int32_t* L_25 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8Formatter_TryFormatInt64MoreThanNegativeBillionMaxUInt_mC691F7FEB5BF8B540EFC21751212A373CB70024F(((-L_23)), L_24, L_25, NULL);
		return L_26;
	}

IL_0082:
	{
		int64_t L_27 = ___0_value;
		if ((((int64_t)L_27) < ((int64_t)((int64_t)0))))
		{
			goto IL_0093;
		}
	}
	{
		int64_t L_28 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_29 = ___1_destination;
		int32_t* L_30 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12(L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_0093:
	{
		int64_t L_32 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_33 = ___1_destination;
		int32_t* L_34 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Utf8Formatter_TryFormatInt64LessThanNegativeBillionMaxUInt_m5B28C9B6C3CC65F1DC1B4167D368BB2CD6CB71B5(((-L_32)), L_33, L_34, NULL);
		return L_35;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt32Default_mEE70DB332B5BBB617A994175A0935D72F31C0215 (int32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0011:
	{
		int32_t L_5 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_6 = ___1_destination;
		int32_t* L_7 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD_inline(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD (int32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_1 = ___0_value;
		___0_value = ((-L_1));
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_6 = ___2_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0024:
	{
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_7) = (int8_t)((int32_t)45);
		int32_t* L_8 = ___2_bytesWritten;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = ___0_value;
		int32_t L_11 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12;
		L_12 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_11, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_10, L_12, NULL);
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_13 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		int32_t* L_15 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline(L_13, L_14, L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64MultipleDigits_mF251162FB54EDF3E9FB97E2ED59864344ACE2236 (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
		int64_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_6 = ___2_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0025:
	{
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_7) = (int8_t)((int32_t)45);
		int32_t* L_8 = ___2_bytesWritten;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_10 = ___0_value;
		int32_t L_11 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12;
		L_12 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_11, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline(L_10, L_12, NULL);
		return (bool)1;
	}

IL_0046:
	{
		int64_t L_13 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		int32_t* L_15 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline(L_13, L_14, L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64MoreThanNegativeBillionMaxUInt_mC691F7FEB5BF8B540EFC21751212A373CB70024F (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___0_value;
		V_0 = ((int32_t)(uint32_t)((int64_t)(L_0/((int64_t)((int32_t)1000000000)))));
		int64_t L_1 = ___0_value;
		uint32_t L_2 = V_0;
		V_1 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract(L_1, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)1000000000))))))));
		uint32_t L_3 = V_0;
		int32_t L_4;
		L_4 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)9)));
		int32_t L_6 = V_3;
		int32_t L_7;
		L_7 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_8 = ___2_bytesWritten;
		*((int32_t*)L_8) = (int32_t)0;
		return (bool)0;
	}

IL_0034:
	{
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_9) = (int8_t)((int32_t)45);
		int32_t* L_10 = ___2_bytesWritten;
		int32_t L_11 = V_3;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		uint32_t L_12 = V_0;
		int32_t L_13 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14;
		L_14 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_13, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_12, L_14, NULL);
		uint32_t L_15 = V_1;
		int32_t L_16 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17;
		L_17 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), ((int32_t)il2cpp_codegen_add(L_16, 1)), ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_15, L_17, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64LessThanNegativeBillionMaxUInt_m5B28C9B6C3CC65F1DC1B4167D368BB2CD6CB71B5 (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int64_t L_0 = ___0_value;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000))));
		int64_t L_1 = ___0_value;
		uint64_t L_2 = V_0;
		V_1 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract(L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)((int32_t)1000000000)))))));
		uint64_t L_3 = V_0;
		V_2 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_3/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000)))));
		uint64_t L_4 = V_0;
		uint32_t L_5 = V_2;
		V_3 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1000000000))))))));
		uint32_t L_6 = V_2;
		int32_t L_7;
		L_7 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_6, NULL);
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)18)));
		int32_t L_9 = V_5;
		int32_t L_10;
		L_10 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t* L_11 = ___2_bytesWritten;
		*((int32_t*)L_11) = (int32_t)0;
		return (bool)0;
	}

IL_004d:
	{
		uint8_t* L_12;
		L_12 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_12) = (int8_t)((int32_t)45);
		int32_t* L_13 = ___2_bytesWritten;
		int32_t L_14 = V_5;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
		uint32_t L_15 = V_2;
		int32_t L_16 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17;
		L_17 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_16, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_15, L_17, NULL);
		uint32_t L_18 = V_3;
		int32_t L_19 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_20;
		L_20 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), ((int32_t)il2cpp_codegen_add(L_19, 1)), ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_18, L_20, NULL);
		uint32_t L_21 = V_1;
		int32_t L_22 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_23;
		L_23 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)9))), ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_21, L_23, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64N_m16CF37BBD48178906BE789DD1BC48E8F7E9958B2 (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = (bool)1;
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
	}

IL_0010:
	{
		int64_t L_2 = ___0_value;
		uint8_t L_3 = ___1_precision;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4 = ___2_destination;
		bool L_5 = V_0;
		int32_t* L_6 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___3_format), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64Default_m776520CC725D75F55E868C1145C33C6EEB8EE2CC_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		Il2CppChar L_5;
		L_5 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___3_format), NULL);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)68))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)71))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f5;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)78))))
		{
			goto IL_00c2;
		}
	}
	{
		Il2CppChar L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)88))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00f5;
	}

IL_0057:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)103)))))
		{
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)100))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)103))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f5;
	}

IL_0074:
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_00c2;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)120))))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00f5;
	}

IL_0089:
	{
		bool L_17;
		L_17 = StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68((&___3_format), NULL);
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7(NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_19 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_RuntimeMethod_var)));
	}

IL_00a0:
	{
		uint64_t L_20 = ___0_value;
		uint8_t L_21;
		L_21 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22 = ___1_destination;
		int32_t* L_23 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_20, L_21, L_22, (bool)0, L_23, NULL);
		return L_24;
	}

IL_00b1:
	{
		uint64_t L_25 = ___0_value;
		uint8_t L_26;
		L_26 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___1_destination;
		int32_t* L_28 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_25, L_26, L_27, (bool)0, L_28, NULL);
		return L_29;
	}

IL_00c2:
	{
		uint64_t L_30 = ___0_value;
		uint8_t L_31;
		L_31 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_32 = ___1_destination;
		int32_t* L_33 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447(L_30, L_31, L_32, (bool)0, L_33, NULL);
		return L_34;
	}

IL_00d3:
	{
		uint64_t L_35 = ___0_value;
		uint8_t L_36;
		L_36 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_37 = ___1_destination;
		int32_t* L_38 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(L_35, L_36, (bool)1, L_37, L_38, NULL);
		return L_39;
	}

IL_00e4:
	{
		uint64_t L_40 = ___0_value;
		uint8_t L_41;
		L_41 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_42 = ___1_destination;
		int32_t* L_43 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(L_40, L_41, (bool)0, L_42, L_43, NULL);
		return L_44;
	}

IL_00f5:
	{
		int32_t* L_45 = ___2_bytesWritten;
		bool L_46;
		L_46 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_45, NULL);
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE (uint64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, bool ___3_insertNegationSign, int32_t* ___4_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = ___1_precision;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		uint8_t L_3 = ___1_precision;
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(G_B3_0, L_4));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		V_1 = 0;
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		bool L_8 = ___3_insertNegationSign;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		int32_t L_11;
		L_11 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___2_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t* L_12 = ___4_bytesWritten;
		*((int32_t*)L_12) = (int32_t)0;
		return (bool)0;
	}

IL_0046:
	{
		int32_t* L_13 = ___4_bytesWritten;
		int32_t L_14 = V_2;
		*((int32_t*)L_13) = (int32_t)L_14;
		bool L_15 = ___3_insertNegationSign;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_16) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17;
		L_17 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___2_destination), 1, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___2_destination = L_17;
	}

IL_0065:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_1;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_20;
		L_20 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___2_destination), 0, L_19, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_FillWithAsciiZeros_mA075A6357F4D722A800CBFFCB08B7031E1935928_inline(L_20, NULL);
	}

IL_007a:
	{
		uint64_t L_21 = ___0_value;
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24;
		L_24 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___2_destination), L_22, L_23, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline(L_21, L_24, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64Default_m776520CC725D75F55E868C1145C33C6EEB8EE2CC (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)((int32_t)10))))))
		{
			goto IL_0013;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(((int32_t)(uint32_t)L_1), L_2, L_3, NULL);
		return L_4;
	}

IL_0013:
	{
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_0027;
		}
	}
	{
		uint64_t L_6 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_7 = ___1_destination;
		int32_t* L_8 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		uint64_t L_10 = ___0_value;
		if ((!(((uint64_t)L_10) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0039;
		}
	}
	{
		uint64_t L_11 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12 = ___1_destination;
		int32_t* L_13 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline(((int32_t)(uint32_t)L_11), L_12, L_13, NULL);
		return L_14;
	}

IL_0039:
	{
		uint64_t L_15 = ___0_value;
		if ((!(((uint64_t)L_15) <= ((uint64_t)((int64_t)4294967295000000000LL)))))
		{
			goto IL_0051;
		}
	}
	{
		uint64_t L_16 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17 = ___1_destination;
		int32_t* L_18 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0051:
	{
		uint64_t L_20 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_21 = ___1_destination;
		int32_t* L_22 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12(L_20, L_21, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32Default_m95B09CF614B722C307F5D4631CBD7F583F0E9FD8 (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0011:
	{
		uint32_t L_5 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_6 = ___1_destination;
		int32_t* L_7 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___2_bytesWritten;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0011:
	{
		uint8_t* L_2;
		L_2 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_3 = ___0_value;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_3)));
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_5 = ___2_bytesWritten;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		uint32_t L_7 = ___0_value;
		int32_t L_8 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_9;
		L_9 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_8, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_7, L_9, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64SingleDigit_m7DB784B97F9AB173FF88EFCE0F48CFF6D4122CE8 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___2_bytesWritten;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0011:
	{
		uint8_t* L_2;
		L_2 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_3 = ___0_value;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_3)));
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_5 = ___2_bytesWritten;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		uint64_t L_7 = ___0_value;
		int32_t L_8 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_9;
		L_9 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_8, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline(L_7, L_9, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint64_t L_0 = ___0_value;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000)))));
		uint64_t L_1 = ___0_value;
		uint32_t L_2 = V_0;
		V_1 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)1000000000))))))));
		uint32_t L_3 = V_0;
		int32_t L_4;
		L_4 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)9)));
		int32_t L_6 = V_3;
		int32_t L_7;
		L_7 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_8 = ___2_bytesWritten;
		*((int32_t*)L_8) = (int32_t)0;
		return (bool)0;
	}

IL_0034:
	{
		int32_t* L_9 = ___2_bytesWritten;
		int32_t L_10 = V_3;
		*((int32_t*)L_9) = (int32_t)L_10;
		uint32_t L_11 = V_0;
		int32_t L_12 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_13;
		L_13 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_12, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_11, L_13, NULL);
		uint32_t L_14 = V_1;
		int32_t L_15 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_16;
		L_16 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_15, ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_14, L_16, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12 (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint64_t L_0 = ___0_value;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000))));
		uint64_t L_1 = ___0_value;
		uint64_t L_2 = V_0;
		V_1 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)((int32_t)1000000000)))))));
		uint64_t L_3 = V_0;
		V_2 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_3/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000)))));
		uint64_t L_4 = V_0;
		uint32_t L_5 = V_2;
		V_3 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1000000000))))))));
		uint32_t L_6 = V_2;
		int32_t L_7;
		L_7 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_6, NULL);
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)18)));
		int32_t L_9 = V_5;
		int32_t L_10;
		L_10 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t* L_11 = ___2_bytesWritten;
		*((int32_t*)L_11) = (int32_t)0;
		return (bool)0;
	}

IL_004d:
	{
		int32_t* L_12 = ___2_bytesWritten;
		int32_t L_13 = V_5;
		*((int32_t*)L_12) = (int32_t)L_13;
		uint32_t L_14 = V_2;
		int32_t L_15 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_16;
		L_16 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_15, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_14, L_16, NULL);
		uint32_t L_17 = V_3;
		int32_t L_18 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_19;
		L_19 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_18, ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_17, L_19, NULL);
		uint32_t L_20 = V_1;
		int32_t L_21 = V_4;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22;
		L_22 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)9))), ((int32_t)9), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_20, L_22, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447 (uint64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, bool ___3_insertNegationSign, int32_t* ___4_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, 1))/3));
		uint8_t L_3 = ___1_precision;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)255))))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_4 = ___1_precision;
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 2;
	}

IL_001f:
	{
		V_2 = G_B3_0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1))));
	}

IL_0031:
	{
		bool L_10 = ___3_insertNegationSign;
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		int32_t L_12 = V_3;
		int32_t L_13;
		L_13 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___2_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_14 = ___4_bytesWritten;
		*((int32_t*)L_14) = (int32_t)0;
		return (bool)0;
	}

IL_004e:
	{
		int32_t* L_15 = ___4_bytesWritten;
		int32_t L_16 = V_3;
		*((int32_t*)L_15) = (int32_t)L_16;
		bool L_17 = ___3_insertNegationSign;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)45);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_19;
		L_19 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&___2_destination), 1, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		___2_destination = L_19;
	}

IL_006d:
	{
		uint64_t L_20 = ___0_value;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_23;
		L_23 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___2_destination), 0, ((int32_t)il2cpp_codegen_add(L_21, L_22)), Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigitsWithGroupSeparator_m35BCC092BFDFBB35210AB1AC237308658B892E0E_inline(L_20, L_23, NULL);
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		uint8_t* L_27;
		L_27 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___2_destination), ((int32_t)il2cpp_codegen_add(L_25, L_26)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_27) = (int8_t)((int32_t)46);
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_31;
		L_31 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___2_destination), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), 1)), L_30, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_FillWithAsciiZeros_mA075A6357F4D722A800CBFFCB08B7031E1935928_inline(L_31, NULL);
	}

IL_00a4:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55 (uint64_t ___0_value, uint8_t ___1_precision, bool ___2_useLower, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___3_destination, int32_t* ___4_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B8_0 = NULL;
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountHexDigits_mA4308E880C2EE1DDEC136AE3F5CB68D1C86F996F_inline(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = ___1_precision;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)255))))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_3 = ___1_precision;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_3, L_4, NULL);
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		int32_t L_7;
		L_7 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___3_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t* L_9 = ___4_bytesWritten;
		*((int32_t*)L_9) = (int32_t)0;
		return (bool)0;
	}

IL_0033:
	{
		int32_t* L_10 = ___4_bytesWritten;
		int32_t L_11 = V_1;
		*((int32_t*)L_10) = (int32_t)L_11;
		bool L_12 = ___2_useLower;
		if (L_12)
		{
			goto IL_0047;
		}
	}
	{
		G_B8_0 = _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
		goto IL_004c;
	}

IL_0047:
	{
		G_B8_0 = _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
	}

IL_004c:
	{
		V_2 = G_B8_0;
		goto IL_006c;
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___3_destination), L_13, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		String_t* L_15 = V_2;
		uint64_t L_16 = ___0_value;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, ((int32_t)(((int32_t)L_16)&((int32_t)15))), NULL);
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)L_17);
		uint64_t L_18 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_18>>4));
	}

IL_006c:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_1 = L_20;
		int32_t L_21;
		L_21 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___3_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)L_20) >= ((uint32_t)L_21))))
		{
			goto IL_0052;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mAF5A96211B4732CC4DB71BF01B4C2C9675613BD3 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	uint8_t* G_B44_0 = NULL;
	uint8_t* G_B43_0 = NULL;
	int32_t G_B45_0 = 0;
	uint8_t* G_B45_1 = NULL;
	{
		Il2CppChar L_0;
		L_0 = FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline((&___3_format), ((int32_t)99), NULL);
		V_0 = L_0;
		Il2CppChar L_1 = V_0;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)84)))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)71))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)84))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0047;
	}

IL_0027:
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)99))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)103))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0047;
		}
	}

IL_003f:
	{
		V_0 = ((int32_t)99);
		goto IL_004e;
	}

IL_0047:
	{
		int32_t* L_7 = ___2_bytesWritten;
		bool L_8;
		L_8 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_7, NULL);
		return L_8;
	}

IL_004e:
	{
		V_1 = 8;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___0_value), NULL);
		V_2 = L_9;
		int64_t L_10 = V_2;
		if ((((int64_t)L_10) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0081;
		}
	}
	{
		int64_t L_11 = V_2;
		V_2 = ((-L_11));
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0081;
		}
	}
	{
		V_3 = ((int32_t)4775808);
		V_4 = ((int64_t)922337203685LL);
		goto IL_00a0;
	}

IL_0081:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___0_value), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_14;
		L_14 = il2cpp_codegen_abs(L_13);
		uint64_t L_15;
		L_15 = FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56_inline(L_14, ((int64_t)((int32_t)10000000)), (&V_5), NULL);
		V_4 = L_15;
		uint64_t L_16 = V_5;
		V_3 = ((int32_t)(uint32_t)L_16);
	}

IL_00a0:
	{
		V_6 = 0;
		Il2CppChar L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)99)))))
		{
			goto IL_00b9;
		}
	}
	{
		uint32_t L_18 = V_3;
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		V_6 = 7;
		goto IL_00db;
	}

IL_00b9:
	{
		Il2CppChar L_19 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_00c9;
		}
	}
	{
		V_6 = 7;
		goto IL_00db;
	}

IL_00c9:
	{
		uint32_t L_20 = V_3;
		if (!L_20)
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_21 = V_3;
		int32_t L_22;
		L_22 = FormattingHelpers_CountDecimalTrailingZeros_m2A1E42DBD23D1826425AD12171016FEE84AC2D35_inline(L_21, (&V_3), NULL);
		V_6 = ((int32_t)il2cpp_codegen_subtract(7, L_22));
	}

IL_00db:
	{
		int32_t L_23 = V_6;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_24 = V_1;
		int32_t L_25 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1))));
	}

IL_00e9:
	{
		V_7 = ((int64_t)0);
		V_8 = ((int64_t)0);
		uint64_t L_26 = V_4;
		if ((!(((uint64_t)L_26) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_0108;
		}
	}
	{
		uint64_t L_27 = V_4;
		uint64_t L_28;
		L_28 = FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56_inline(L_27, ((int64_t)((int32_t)60)), (&V_8), NULL);
		V_7 = L_28;
	}

IL_0108:
	{
		V_9 = ((int64_t)0);
		V_10 = ((int64_t)0);
		uint64_t L_29 = V_7;
		if ((!(((uint64_t)L_29) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_0127;
		}
	}
	{
		uint64_t L_30 = V_7;
		uint64_t L_31;
		L_31 = FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56_inline(L_30, ((int64_t)((int32_t)60)), (&V_10), NULL);
		V_9 = L_31;
	}

IL_0127:
	{
		V_11 = 0;
		V_12 = 0;
		uint64_t L_32 = V_9;
		if ((!(((uint64_t)L_32) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_0144;
		}
	}
	{
		uint64_t L_33 = V_9;
		uint32_t L_34;
		L_34 = FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38_inline(((int32_t)(uint32_t)L_33), ((int32_t)24), (&V_12), NULL);
		V_11 = L_34;
	}

IL_0144:
	{
		V_13 = 2;
		uint32_t L_35 = V_12;
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_0162;
		}
	}
	{
		Il2CppChar L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)103)))))
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_0162:
	{
		V_14 = 0;
		uint32_t L_39 = V_11;
		if (L_39)
		{
			goto IL_0180;
		}
	}
	{
		Il2CppChar L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		V_14 = 1;
		goto IL_0190;
	}

IL_0180:
	{
		uint32_t L_42 = V_11;
		int32_t L_43;
		L_43 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_42, NULL);
		V_14 = L_43;
		int32_t L_44 = V_1;
		int32_t L_45 = V_14;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_add(L_45, 1))));
	}

IL_0190:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_46;
		L_46 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___0_value), NULL);
		if ((((int64_t)L_46) >= ((int64_t)((int64_t)0))))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_01a2:
	{
		int32_t L_48;
		L_48 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		int32_t L_49 = V_1;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t* L_50 = ___2_bytesWritten;
		*((int32_t*)L_50) = (int32_t)0;
		return (bool)0;
	}

IL_01b4:
	{
		int32_t* L_51 = ___2_bytesWritten;
		int32_t L_52 = V_1;
		*((int32_t*)L_51) = (int32_t)L_52;
		V_15 = 0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int64_t L_53;
		L_53 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___0_value), NULL);
		if ((((int64_t)L_53) >= ((int64_t)((int64_t)0))))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_54 = V_15;
		int32_t L_55 = L_54;
		V_15 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		uint8_t* L_56;
		L_56 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_55, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_56) = (int8_t)((int32_t)45);
	}

IL_01d9:
	{
		int32_t L_57 = V_14;
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_021a;
		}
	}
	{
		uint32_t L_58 = V_11;
		int32_t L_59 = V_15;
		int32_t L_60 = V_14;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_61;
		L_61 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_59, L_60, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_58, L_61, NULL);
		int32_t L_62 = V_15;
		int32_t L_63 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
		int32_t L_64 = V_15;
		int32_t L_65 = L_64;
		V_15 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		uint8_t* L_66;
		L_66 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_65, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		Il2CppChar L_67 = V_0;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)99))))
		{
			G_B44_0 = L_66;
			goto IL_0217;
		}
		G_B43_0 = L_66;
	}
	{
		G_B45_0 = ((int32_t)58);
		G_B45_1 = G_B43_0;
		goto IL_0219;
	}

IL_0217:
	{
		G_B45_0 = ((int32_t)46);
		G_B45_1 = G_B44_0;
	}

IL_0219:
	{
		*((int8_t*)G_B45_1) = (int8_t)G_B45_0;
	}

IL_021a:
	{
		uint32_t L_68 = V_12;
		int32_t L_69 = V_15;
		int32_t L_70 = V_13;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_71;
		L_71 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_69, L_70, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_68, L_71, NULL);
		int32_t L_72 = V_15;
		int32_t L_73 = V_13;
		V_15 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
		int32_t L_74 = V_15;
		int32_t L_75 = L_74;
		V_15 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		uint8_t* L_76;
		L_76 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_75, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_76) = (int8_t)((int32_t)58);
		uint64_t L_77 = V_10;
		int32_t L_78 = V_15;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_79;
		L_79 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_78, 2, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(((int32_t)(uint32_t)L_77), L_79, NULL);
		int32_t L_80 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int32_t L_81 = V_15;
		int32_t L_82 = L_81;
		V_15 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		uint8_t* L_83;
		L_83 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_82, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_83) = (int8_t)((int32_t)58);
		uint64_t L_84 = V_8;
		int32_t L_85 = V_15;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_86;
		L_86 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_85, 2, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(((int32_t)(uint32_t)L_84), L_86, NULL);
		int32_t L_87 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_87, 2));
		int32_t L_88 = V_6;
		if ((((int32_t)L_88) <= ((int32_t)0)))
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_89 = V_15;
		int32_t L_90 = L_89;
		V_15 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		uint8_t* L_91;
		L_91 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), L_90, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_91) = (int8_t)((int32_t)46);
		uint32_t L_92 = V_3;
		int32_t L_93 = V_15;
		int32_t L_94 = V_6;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_95;
		L_95 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), L_93, L_94, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_92, L_95, NULL);
		int32_t L_96 = V_15;
		int32_t L_97 = V_6;
		V_15 = ((int32_t)il2cpp_codegen_add(L_96, L_97));
	}

IL_02b6:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8Formatter__cctor_m42295CF9CCF0A53BB460624CDAEC210DF8204F58 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____C4C38BC485A320D4B7D737DB85E705077FA38BEF_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviations = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviations), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviationsLowercase = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___DayAbbreviationsLowercase), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____C4C38BC485A320D4B7D737DB85E705077FA38BEF_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviations = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviations), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviationsLowercase = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var))->___MonthAbbreviationsLowercase), (void*)L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904 (int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_i;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)48)))) <= ((uint32_t)((int32_t)9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserHelpers__cctor_m3FBD28ED6ABDFA9BE33B6DA1CE659CD5A8AD5AAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____3CDA7449B0586AB873C75C04BB11D4864F5D7392_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____3CDA7449B0586AB873C75C04BB11D4864F5D7392_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mA797C5FEA59A334EA49DE48E58BF8D91496EA294 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, bool* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)71))))
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)108))))
		{
			goto IL_001e;
		}
	}
	{
		bool* L_3 = ___1_value;
		int32_t* L_4 = ___2_bytesConsumed;
		bool L_5;
		L_5 = ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058(L_3, L_4, ThrowHelper_TryParseThrowFormatException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m072B09BB2157DB0F8CD49B0CEF52D42F9CD9F058_RuntimeMethod_var);
		return L_5;
	}

IL_001e:
	{
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)4)))
		{
			goto IL_0168;
		}
	}
	{
		uint8_t* L_7;
		L_7 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_8 = *((uint8_t*)L_7);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)84))))
		{
			goto IL_004b;
		}
	}
	{
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_00b3;
		}
	}

IL_004b:
	{
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)82))))
		{
			goto IL_006b;
		}
	}
	{
		uint8_t* L_13;
		L_13 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_14 = *((uint8_t*)L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_00b3;
		}
	}

IL_006b:
	{
		uint8_t* L_15;
		L_15 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_16 = *((uint8_t*)L_15);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)85))))
		{
			goto IL_008b;
		}
	}
	{
		uint8_t* L_17;
		L_17 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00b3;
		}
	}

IL_008b:
	{
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_00ab;
		}
	}
	{
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_00b3;
		}
	}

IL_00ab:
	{
		int32_t* L_23 = ___2_bytesConsumed;
		*((int32_t*)L_23) = (int32_t)4;
		bool* L_24 = ___1_value;
		*((int8_t*)L_24) = (int8_t)1;
		return (bool)1;
	}

IL_00b3:
	{
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)5)))
		{
			goto IL_0168;
		}
	}
	{
		uint8_t* L_26;
		L_26 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_27 = *((uint8_t*)L_26);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)70))))
		{
			goto IL_00e0;
		}
	}
	{
		uint8_t* L_28;
		L_28 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_29 = *((uint8_t*)L_28);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0168;
		}
	}

IL_00e0:
	{
		uint8_t* L_30;
		L_30 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_31 = *((uint8_t*)L_30);
		if ((((int32_t)L_31) == ((int32_t)((int32_t)65))))
		{
			goto IL_0100;
		}
	}
	{
		uint8_t* L_32;
		L_32 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_33 = *((uint8_t*)L_32);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0168;
		}
	}

IL_0100:
	{
		uint8_t* L_34;
		L_34 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_35 = *((uint8_t*)L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)76))))
		{
			goto IL_0120;
		}
	}
	{
		uint8_t* L_36;
		L_36 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_37 = *((uint8_t*)L_36);
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0168;
		}
	}

IL_0120:
	{
		uint8_t* L_38;
		L_38 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_39 = *((uint8_t*)L_38);
		if ((((int32_t)L_39) == ((int32_t)((int32_t)83))))
		{
			goto IL_0140;
		}
	}
	{
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0168;
		}
	}

IL_0140:
	{
		uint8_t* L_42;
		L_42 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_43 = *((uint8_t*)L_42);
		if ((((int32_t)L_43) == ((int32_t)((int32_t)69))))
		{
			goto IL_0160;
		}
	}
	{
		uint8_t* L_44;
		L_44 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_45 = *((uint8_t*)L_44);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0168;
		}
	}

IL_0160:
	{
		int32_t* L_46 = ___2_bytesConsumed;
		*((int32_t*)L_46) = (int32_t)5;
		bool* L_47 = ___1_value;
		*((int8_t*)L_47) = (int8_t)0;
		return (bool)1;
	}

IL_0168:
	{
		int32_t* L_48 = ___2_bytesConsumed;
		*((int32_t*)L_48) = (int32_t)0;
		bool* L_49 = ___1_value;
		*((int8_t*)L_49) = (int8_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mF5B04F4B4792189EFD5CC7A3EEA898C8DF589112 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if (!L_1)
		{
			goto IL_00e4;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)71))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00ef;
	}

IL_001b:
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)79))))
		{
			goto IL_0087;
		}
	}
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00ef;
	}

IL_0038:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_6 = ___0_source;
		int32_t* L_7 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645(L_6, 0, (&V_0), L_7, NULL);
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_9 = ___1_value;
		il2cpp_codegen_initobj(L_9, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0050:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11;
		L_11 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_0), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_10 = L_11;
		return (bool)1;
	}

IL_005f:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		int32_t* L_13 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645(L_12, ((int32_t)32), (&V_1), L_13, NULL);
		if (L_14)
		{
			goto IL_0078;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0078:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_16 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_1), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_16 = L_17;
		return (bool)1;
	}

IL_0087:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_18 = ___0_source;
		int32_t* L_19 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Utf8Parser_TryParseDateTimeOffsetO_m3282598214BF4BD244499908066A2839169344D4(L_18, (&V_2), L_19, (&V_3), NULL);
		if (L_20)
		{
			goto IL_00a3;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = ___1_value;
		il2cpp_codegen_initobj(L_21, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		int32_t* L_22 = ___2_bytesConsumed;
		*((int32_t*)L_22) = (int32_t)0;
		return (bool)0;
	}

IL_00a3:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00d5;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_25 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_26;
		L_26 = DateTimeOffset_get_LocalDateTime_mFB964C9C4614FDBA220C5811A42666F553C52998((&V_2), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_25 = L_26;
		goto IL_00e2;
	}

IL_00c3:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&V_2), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_27 = L_28;
		goto IL_00e2;
	}

IL_00d5:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_29 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30;
		L_30 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&V_2), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_29 = L_30;
	}

IL_00e2:
	{
		return (bool)1;
	}

IL_00e4:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_31 = ___0_source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_32 = ___1_value;
		int32_t* L_33 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Parser_TryParseDateTimeG_m2E0CB813A2E77FDFDFB017DBCC7CFF61A15084B7(L_31, L_32, (&V_4), L_33, NULL);
		return L_34;
	}

IL_00ef:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = ___1_value;
		int32_t* L_36 = ___2_bytesConsumed;
		bool L_37;
		L_37 = ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC(L_35, L_36, ThrowHelper_TryParseThrowFormatException_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB15B203B6074EE5ED16BC7EB400C43CE0A266FDC_RuntimeMethod_var);
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m972D2FD2259709D17E2AA7B45C8F7F86831D04F5 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)71))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_006c;
	}

IL_001b:
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)79))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_006c;
	}

IL_0038:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_6 = ___0_source;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_7 = ___1_value;
		int32_t* L_8 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645(L_6, 0, L_7, L_8, NULL);
		return L_9;
	}

IL_0042:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_10 = ___0_source;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_11 = ___1_value;
		int32_t* L_12 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645(L_10, ((int32_t)32), L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_14 = ___0_source;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_15 = ___1_value;
		int32_t* L_16 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Utf8Parser_TryParseDateTimeOffsetO_m3282598214BF4BD244499908066A2839169344D4(L_14, L_15, L_16, (&V_0), NULL);
		return L_17;
	}

IL_0058:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_18 = ___0_source;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_19 = ___1_value;
		int32_t* L_20 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Utf8Parser_TryParseDateTimeOffsetDefault_m98413FF4C170AB72184265AE58F0B2D620638FC3(L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_0061:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_22 = ___0_source;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_23 = ___1_value;
		int32_t* L_24 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Parser_TryParseDateTimeG_m2E0CB813A2E77FDFDFB017DBCC7CFF61A15084B7(L_22, (&V_1), L_23, L_24, NULL);
		return L_25;
	}

IL_006c:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_26 = ___1_value;
		int32_t* L_27 = ___2_bytesConsumed;
		bool L_28;
		L_28 = ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F(L_26, L_27, ThrowHelper_TryParseThrowFormatException_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mE86F04141EF284A5208E6E433AA37AAC189EE77F_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetDefault_m98413FF4C170AB72184265AE58F0B2D620638FC3 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)26))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_001a:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_3 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Parser_TryParseDateTimeG_m2E0CB813A2E77FDFDFB017DBCC7CFF61A15084B7(L_3, (&V_0), (&V_1), (&V_2), NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_5 = ___2_bytesConsumed;
		*((int32_t*)L_5) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6 = ___1_value;
		il2cpp_codegen_initobj(L_6, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0037:
	{
		uint8_t* L_7;
		L_7 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)19), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_8 = *((uint8_t*)L_7);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t* L_9 = ___2_bytesConsumed;
		*((int32_t*)L_9) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_10 = ___1_value;
		il2cpp_codegen_initobj(L_10, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0054:
	{
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)20), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_3 = (uint8_t)L_12;
		uint8_t L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)43))))
		{
			goto IL_007b;
		}
	}
	{
		uint8_t L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)45))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t* L_15 = ___2_bytesConsumed;
		*((int32_t*)L_15) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_16 = ___1_value;
		il2cpp_codegen_initobj(L_16, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_007b:
	{
		uint8_t* L_17;
		L_17 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)21), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)48)));
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)22), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)48)));
		uint32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_00b7;
		}
	}

IL_00ab:
	{
		int32_t* L_23 = ___2_bytesConsumed;
		*((int32_t*)L_23) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_24 = ___1_value;
		il2cpp_codegen_initobj(L_24, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_00b7:
	{
		uint32_t L_25 = V_4;
		uint32_t L_26 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)10))), (int32_t)L_26));
		uint8_t* L_27;
		L_27 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)23), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_28 = *((uint8_t*)L_27);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)58))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t* L_29 = ___2_bytesConsumed;
		*((int32_t*)L_29) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_30 = ___1_value;
		il2cpp_codegen_initobj(L_30, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_00de:
	{
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)24), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)48)));
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)25), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_34, ((int32_t)48)));
		uint32_t L_35 = V_7;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_010e;
		}
	}
	{
		uint32_t L_36 = V_8;
		if ((!(((uint32_t)L_36) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_011a;
		}
	}

IL_010e:
	{
		int32_t* L_37 = ___2_bytesConsumed;
		*((int32_t*)L_37) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_38 = ___1_value;
		il2cpp_codegen_initobj(L_38, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_011a:
	{
		uint32_t L_39 = V_7;
		uint32_t L_40 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)10))), (int32_t)L_40));
		int32_t L_41 = V_6;
		int32_t L_42 = V_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&V_10), L_41, L_42, 0, NULL);
		uint8_t L_43 = V_3;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0141;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_44 = V_10;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_45;
		L_45 = TimeSpan_op_UnaryNegation_mBD0F86C461C2CE1C9EAB62F2E41D28471CDE2493(L_44, NULL);
		V_10 = L_45;
	}

IL_0141:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = V_0;
		uint8_t L_47 = V_3;
		int32_t L_48 = V_6;
		int32_t L_49 = V_9;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_50 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Utf8Parser_TryCreateDateTimeOffset_mC5779B8BCC5DD7429A828CBBFB3C9E53EA9561F7(L_46, (bool)((((int32_t)L_47) == ((int32_t)((int32_t)45)))? 1 : 0), L_48, L_49, L_50, NULL);
		if (L_51)
		{
			goto IL_0162;
		}
	}
	{
		int32_t* L_52 = ___2_bytesConsumed;
		*((int32_t*)L_52) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0162:
	{
		int32_t* L_54 = ___2_bytesConsumed;
		*((int32_t*)L_54) = (int32_t)((int32_t)26);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeG_m2E0CB813A2E77FDFDFB017DBCC7CFF61A15084B7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_value, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___2_valueAsOffset, int32_t* ___3_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)19))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t* L_1 = ___3_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_3, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0021:
	{
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)48)));
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)48)));
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_005e;
		}
	}

IL_004b:
	{
		int32_t* L_10 = ___3_bytesConsumed;
		*((int32_t*)L_10) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_12 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_12, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_005e:
	{
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)10))), (int32_t)L_14));
		uint8_t* L_15;
		L_15 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_16 = *((uint8_t*)L_15);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)47))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t* L_17 = ___3_bytesConsumed;
		*((int32_t*)L_17) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18 = ___1_value;
		il2cpp_codegen_initobj(L_18, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_19 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_19, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0088:
	{
		uint8_t* L_20;
		L_20 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_21 = *((uint8_t*)L_20);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48)));
		uint8_t* L_22;
		L_22 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_23 = *((uint8_t*)L_22);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)48)));
		uint32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_00c7;
		}
	}

IL_00b4:
	{
		int32_t* L_26 = ___3_bytesConsumed;
		*((int32_t*)L_26) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_27 = ___1_value;
		il2cpp_codegen_initobj(L_27, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_28 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_28, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_00c7:
	{
		uint32_t L_29 = V_3;
		uint32_t L_30 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)10))), (int32_t)L_30));
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 5, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)47))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t* L_33 = ___3_bytesConsumed;
		*((int32_t*)L_33) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_34 = ___1_value;
		il2cpp_codegen_initobj(L_34, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_35 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_35, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_00f3:
	{
		uint8_t* L_36;
		L_36 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 6, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_37 = *((uint8_t*)L_36);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_37, ((int32_t)48)));
		uint8_t* L_38;
		L_38 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 7, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_39 = *((uint8_t*)L_38);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_39, ((int32_t)48)));
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_41, ((int32_t)48)));
		uint8_t* L_42;
		L_42 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)9), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_43 = *((uint8_t*)L_42);
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_43, ((int32_t)48)));
		uint32_t L_44 = V_6;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_45 = V_7;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_46 = V_8;
		if ((!(((uint32_t)L_46) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_47 = V_9;
		if ((!(((uint32_t)L_47) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0163;
		}
	}

IL_0150:
	{
		int32_t* L_48 = ___3_bytesConsumed;
		*((int32_t*)L_48) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_49 = ___1_value;
		il2cpp_codegen_initobj(L_49, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_50 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_50, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0163:
	{
		uint32_t L_51 = V_6;
		uint32_t L_52 = V_7;
		uint32_t L_53 = V_8;
		uint32_t L_54 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, ((int32_t)1000))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_52, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_53, ((int32_t)10))))), (int32_t)L_54));
		uint8_t* L_55;
		L_55 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)10), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_56 = *((uint8_t*)L_55);
		if ((((int32_t)L_56) == ((int32_t)((int32_t)32))))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t* L_57 = ___3_bytesConsumed;
		*((int32_t*)L_57) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_58 = ___1_value;
		il2cpp_codegen_initobj(L_58, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_59 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_59, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_01a0:
	{
		uint8_t* L_60;
		L_60 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)11), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_61 = *((uint8_t*)L_60);
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)48)));
		uint8_t* L_62;
		L_62 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)12), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_63 = *((uint8_t*)L_62);
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)48)));
		uint32_t L_64 = V_11;
		if ((!(((uint32_t)L_64) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_01d0;
		}
	}
	{
		uint32_t L_65 = V_12;
		if ((!(((uint32_t)L_65) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_01e3;
		}
	}

IL_01d0:
	{
		int32_t* L_66 = ___3_bytesConsumed;
		*((int32_t*)L_66) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_67 = ___1_value;
		il2cpp_codegen_initobj(L_67, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_68 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_68, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_01e3:
	{
		uint32_t L_69 = V_11;
		uint32_t L_70 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)10))), (int32_t)L_70));
		uint8_t* L_71;
		L_71 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)13), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_72 = *((uint8_t*)L_71);
		if ((((int32_t)L_72) == ((int32_t)((int32_t)58))))
		{
			goto IL_0211;
		}
	}
	{
		int32_t* L_73 = ___3_bytesConsumed;
		*((int32_t*)L_73) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_74 = ___1_value;
		il2cpp_codegen_initobj(L_74, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_75 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_75, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0211:
	{
		uint8_t* L_76;
		L_76 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)14), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_77 = *((uint8_t*)L_76);
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_77, ((int32_t)48)));
		uint8_t* L_78;
		L_78 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)15), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_79 = *((uint8_t*)L_78);
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_79, ((int32_t)48)));
		uint32_t L_80 = V_14;
		if ((!(((uint32_t)L_80) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0241;
		}
	}
	{
		uint32_t L_81 = V_15;
		if ((!(((uint32_t)L_81) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0254;
		}
	}

IL_0241:
	{
		int32_t* L_82 = ___3_bytesConsumed;
		*((int32_t*)L_82) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_83 = ___1_value;
		il2cpp_codegen_initobj(L_83, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_84 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_84, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0254:
	{
		uint32_t L_85 = V_14;
		uint32_t L_86 = V_15;
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_85, ((int32_t)10))), (int32_t)L_86));
		uint8_t* L_87;
		L_87 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)16), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_88 = *((uint8_t*)L_87);
		if ((((int32_t)L_88) == ((int32_t)((int32_t)58))))
		{
			goto IL_0282;
		}
	}
	{
		int32_t* L_89 = ___3_bytesConsumed;
		*((int32_t*)L_89) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_90 = ___1_value;
		il2cpp_codegen_initobj(L_90, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_91 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_91, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0282:
	{
		uint8_t* L_92;
		L_92 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)17), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_93 = *((uint8_t*)L_92);
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_93, ((int32_t)48)));
		uint8_t* L_94;
		L_94 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)18), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_95 = *((uint8_t*)L_94);
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_95, ((int32_t)48)));
		uint32_t L_96 = V_17;
		if ((!(((uint32_t)L_96) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_02b2;
		}
	}
	{
		uint32_t L_97 = V_18;
		if ((!(((uint32_t)L_97) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_02c5;
		}
	}

IL_02b2:
	{
		int32_t* L_98 = ___3_bytesConsumed;
		*((int32_t*)L_98) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_99 = ___1_value;
		il2cpp_codegen_initobj(L_99, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_100 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_100, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_02c5:
	{
		uint32_t L_101 = V_17;
		uint32_t L_102 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_101, ((int32_t)10))), (int32_t)L_102));
		int32_t L_103 = V_10;
		int32_t L_104 = V_2;
		int32_t L_105 = V_5;
		int32_t L_106 = V_13;
		int32_t L_107 = V_16;
		int32_t L_108 = V_19;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_109 = ___2_valueAsOffset;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = Utf8Parser_TryCreateDateTimeOffsetInterpretingDataAsLocalTime_m8848D70976ED630D9246460AE043316E6940CDE5(L_103, L_104, L_105, L_106, L_107, L_108, 0, L_109, NULL);
		if (L_110)
		{
			goto IL_02f9;
		}
	}
	{
		int32_t* L_111 = ___3_bytesConsumed;
		*((int32_t*)L_111) = (int32_t)0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_112 = ___1_value;
		il2cpp_codegen_initobj(L_112, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_113 = ___2_valueAsOffset;
		il2cpp_codegen_initobj(L_113, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_02f9:
	{
		int32_t* L_114 = ___3_bytesConsumed;
		*((int32_t*)L_114) = (int32_t)((int32_t)19);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_115 = ___1_value;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_116 = ___2_valueAsOffset;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_117;
		L_117 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324(L_116, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_115 = L_117;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffset_mC5779B8BCC5DD7429A828CBBFB3C9E53EA9561F7 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, bool ___1_offsetNegative, int32_t ___2_offsetHours, int32_t ___3_offsetMinutes, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___4_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___2_offsetHours;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)14)))))
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_1 = ___4_value;
		il2cpp_codegen_initobj(L_1, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_2 = ___3_offsetMinutes;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)59)))))
		{
			goto IL_0024;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3 = ___4_value;
		il2cpp_codegen_initobj(L_3, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_4 = ___2_offsetHours;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = ___3_offsetMinutes;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6 = ___4_value;
		il2cpp_codegen_initobj(L_6, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_003c:
	{
		int32_t L_7 = ___2_offsetHours;
		int32_t L_8 = ___3_offsetMinutes;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)((int32_t)3600)))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_8), ((int64_t)((int32_t)60)))))), ((int64_t)((int32_t)10000000))));
		bool L_9 = ___1_offsetNegative;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_10 = V_0;
		V_0 = ((-L_10));
	}

IL_005d:
	{
	}
	try
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_11 = ___4_value;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_12;
		L_12 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&___0_dateTime), NULL);
		int64_t L_13 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14;
		memset((&L_14), 0, sizeof(L_14));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_14), L_13, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		DateTimeOffset__ctor_m81DCBFF0B9D7029AD6B8B80EA4CB8846387DFB9A((&L_15), L_12, L_14, NULL);
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_11 = L_15;
		goto IL_008c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = ((ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*));;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_17 = ___4_value;
		il2cpp_codegen_initobj(L_17, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_008e;
	}

IL_008c:
	{
		return (bool)1;
	}

IL_008e:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffset_m4990FEA5117EA4E854740264F46B9572F825383F (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, bool ___7_offsetNegative, int32_t ___8_offsetHours, int32_t ___9_offsetMinutes, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___10_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_year;
		int32_t L_1 = ___1_month;
		int32_t L_2 = ___2_day;
		int32_t L_3 = ___3_hour;
		int32_t L_4 = ___4_minute;
		int32_t L_5 = ___5_second;
		int32_t L_6 = ___6_fraction;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Parser_TryCreateDateTime_m149D47B754126E2D8E2C4546093086D60972C04C(L_0, L_1, L_2, L_3, L_4, L_5, L_6, 0, (&V_0), NULL);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_8 = ___10_value;
		il2cpp_codegen_initobj(L_8, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0021:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = V_0;
		bool L_10 = ___7_offsetNegative;
		int32_t L_11 = ___8_offsetHours;
		int32_t L_12 = ___9_offsetMinutes;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_13 = ___10_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Parser_TryCreateDateTimeOffset_mC5779B8BCC5DD7429A828CBBFB3C9E53EA9561F7(L_9, L_10, L_11, L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_15 = ___10_value;
		il2cpp_codegen_initobj(L_15, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_003e:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTimeOffsetInterpretingDataAsLocalTime_m8848D70976ED630D9246460AE043316E6940CDE5 (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___7_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___0_year;
		int32_t L_1 = ___1_month;
		int32_t L_2 = ___2_day;
		int32_t L_3 = ___3_hour;
		int32_t L_4 = ___4_minute;
		int32_t L_5 = ___5_second;
		int32_t L_6 = ___6_fraction;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Parser_TryCreateDateTime_m149D47B754126E2D8E2C4546093086D60972C04C(L_0, L_1, L_2, L_3, L_4, L_5, L_6, 2, (&V_0), NULL);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_8 = ___7_value;
		il2cpp_codegen_initobj(L_8, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0021:
	{
	}
	try
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_9 = ___7_value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10 = V_0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_11;
		memset((&L_11), 0, sizeof(L_11));
		DateTimeOffset__ctor_mB1671EA00463E92811C8DEA80797DC89B2FFCA62((&L_11), L_10, NULL);
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_9 = L_11;
		goto IL_0044;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = ((ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*));;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_13 = ___7_value;
		il2cpp_codegen_initobj(L_13, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0046;
	}

IL_0044:
	{
		return (bool)1;
	}

IL_0046:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateDateTime_m149D47B754126E2D8E2C4546093086D60972C04C (int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_fraction, int32_t ___7_kind, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___8_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B16_0 = NULL;
	{
		int32_t L_0 = ___0_year;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = ___8_value;
		il2cpp_codegen_initobj(L_1, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_2 = ___1_month;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))) >= ((uint32_t)((int32_t)12)))))
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3 = ___8_value;
		il2cpp_codegen_initobj(L_3, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_4 = ___2_day;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) >= ((uint32_t)((int32_t)28)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = ___0_year;
		int32_t L_8 = ___1_month;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977(L_7, L_8, NULL);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_6))) < ((int64_t)((int64_t)L_9))))
		{
			goto IL_0049;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = ___8_value;
		il2cpp_codegen_initobj(L_10, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0049:
	{
		int32_t L_11 = ___3_hour;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)23)))))
		{
			goto IL_005b;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_12 = ___8_value;
		il2cpp_codegen_initobj(L_12, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_13 = ___4_minute;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)59)))))
		{
			goto IL_006e;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_14 = ___8_value;
		il2cpp_codegen_initobj(L_14, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_006e:
	{
		int32_t L_15 = ___5_second;
		if ((!(((uint32_t)L_15) > ((uint32_t)((int32_t)59)))))
		{
			goto IL_0081;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_16 = ___8_value;
		il2cpp_codegen_initobj(L_16, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		return (bool)0;
	}

IL_0081:
	{
		int32_t L_17 = ___0_year;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = DateTime_IsLeapYear_mB422194991B45198BD881EA4790F7AF4F5D6081C(L_17, NULL);
		if (L_18)
		{
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth365;
		G_B16_0 = L_19;
		goto IL_009b;
	}

IL_0096:
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth366;
		G_B16_0 = L_20;
	}

IL_009b:
	{
		V_1 = G_B16_0;
		int32_t L_21 = ___0_year;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		int32_t L_22 = V_2;
		int32_t L_23 = V_2;
		int32_t L_24 = V_2;
		int32_t L_25 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		int32_t L_27 = ___1_month;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___2_day;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_22, ((int32_t)365))), ((int32_t)(L_23/4)))), ((int32_t)(L_24/((int32_t)100))))), ((int32_t)(L_25/((int32_t)400))))), L_29)), L_30)), 1));
		int32_t L_31 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_31), ((int64_t)864000000000LL)));
		int32_t L_32 = ___3_hour;
		int32_t L_33 = ___4_minute;
		int32_t L_34 = ___5_second;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, ((int32_t)3600))), ((int32_t)il2cpp_codegen_multiply(L_33, ((int32_t)60))))), L_34));
		int64_t L_35 = V_4;
		int32_t L_36 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_36), ((int64_t)((int32_t)10000000))))));
		int64_t L_37 = V_4;
		int32_t L_38 = ___6_fraction;
		V_4 = ((int64_t)il2cpp_codegen_add(L_37, ((int64_t)L_38)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_39 = ___8_value;
		int64_t L_40 = V_4;
		int32_t L_41 = ___7_kind;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42;
		memset((&L_42), 0, sizeof(L_42));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_42), L_40, L_41, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_39 = L_42;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetO_m3282598214BF4BD244499908066A2839169344D4 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_value, int32_t* ___2_bytesConsumed, int32_t* ___3_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	int32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	int32_t V_27 = 0;
	uint8_t V_28 = 0x0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	int32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t G_B45_0 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)27))))
		{
			goto IL_001d;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_2 = ___2_bytesConsumed;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___3_kind;
		*((int32_t*)L_3) = (int32_t)0;
		return (bool)0;
	}

IL_001d:
	{
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)48)));
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)48)));
		uint8_t* L_8;
		L_8 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_9 = *((uint8_t*)L_8);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)48)));
		uint8_t* L_10;
		L_10 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_11 = *((uint8_t*)L_10);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)48)));
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0071;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0071;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0071;
		}
	}
	{
		uint32_t L_15 = V_3;
		if ((!(((uint32_t)L_15) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0080;
		}
	}

IL_0071:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_16 = ___1_value;
		il2cpp_codegen_initobj(L_16, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_17 = ___2_bytesConsumed;
		*((int32_t*)L_17) = (int32_t)0;
		int32_t* L_18 = ___3_kind;
		*((int32_t*)L_18) = (int32_t)0;
		return (bool)0;
	}

IL_0080:
	{
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1000))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)10))))), (int32_t)L_22));
		uint8_t* L_23;
		L_23 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_24 = *((uint8_t*)L_23);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)45))))
		{
			goto IL_00b4;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_25 = ___1_value;
		il2cpp_codegen_initobj(L_25, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_26 = ___2_bytesConsumed;
		*((int32_t*)L_26) = (int32_t)0;
		int32_t* L_27 = ___3_kind;
		*((int32_t*)L_27) = (int32_t)0;
		return (bool)0;
	}

IL_00b4:
	{
		uint8_t* L_28;
		L_28 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 5, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_29 = *((uint8_t*)L_28);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)48)));
		uint8_t* L_30;
		L_30 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 6, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_31 = *((uint8_t*)L_30);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)48)));
		uint32_t L_32 = V_5;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e2;
		}
	}
	{
		uint32_t L_33 = V_6;
		if ((!(((uint32_t)L_33) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_00f1;
		}
	}

IL_00e2:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_34 = ___1_value;
		il2cpp_codegen_initobj(L_34, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_35 = ___2_bytesConsumed;
		*((int32_t*)L_35) = (int32_t)0;
		int32_t* L_36 = ___3_kind;
		*((int32_t*)L_36) = (int32_t)0;
		return (bool)0;
	}

IL_00f1:
	{
		uint32_t L_37 = V_5;
		uint32_t L_38 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)10))), (int32_t)L_38));
		uint8_t* L_39;
		L_39 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 7, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_40 = *((uint8_t*)L_39);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)45))))
		{
			goto IL_011a;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_41 = ___1_value;
		il2cpp_codegen_initobj(L_41, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_42 = ___2_bytesConsumed;
		*((int32_t*)L_42) = (int32_t)0;
		int32_t* L_43 = ___3_kind;
		*((int32_t*)L_43) = (int32_t)0;
		return (bool)0;
	}

IL_011a:
	{
		uint8_t* L_44;
		L_44 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_45 = *((uint8_t*)L_44);
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)48)));
		uint8_t* L_46;
		L_46 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)9), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_47 = *((uint8_t*)L_46);
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)48)));
		uint32_t L_48 = V_8;
		if ((!(((uint32_t)L_48) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_49 = V_9;
		if ((!(((uint32_t)L_49) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0158;
		}
	}

IL_0149:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_50 = ___1_value;
		il2cpp_codegen_initobj(L_50, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_51 = ___2_bytesConsumed;
		*((int32_t*)L_51) = (int32_t)0;
		int32_t* L_52 = ___3_kind;
		*((int32_t*)L_52) = (int32_t)0;
		return (bool)0;
	}

IL_0158:
	{
		uint32_t L_53 = V_8;
		uint32_t L_54 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_53, ((int32_t)10))), (int32_t)L_54));
		uint8_t* L_55;
		L_55 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)10), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_56 = *((uint8_t*)L_55);
		if ((((int32_t)L_56) == ((int32_t)((int32_t)84))))
		{
			goto IL_0182;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_57 = ___1_value;
		il2cpp_codegen_initobj(L_57, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_58 = ___2_bytesConsumed;
		*((int32_t*)L_58) = (int32_t)0;
		int32_t* L_59 = ___3_kind;
		*((int32_t*)L_59) = (int32_t)0;
		return (bool)0;
	}

IL_0182:
	{
		uint8_t* L_60;
		L_60 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)11), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_61 = *((uint8_t*)L_60);
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)48)));
		uint8_t* L_62;
		L_62 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)12), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_63 = *((uint8_t*)L_62);
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)48)));
		uint32_t L_64 = V_11;
		if ((!(((uint32_t)L_64) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_01b2;
		}
	}
	{
		uint32_t L_65 = V_12;
		if ((!(((uint32_t)L_65) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_01c1;
		}
	}

IL_01b2:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_66 = ___1_value;
		il2cpp_codegen_initobj(L_66, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_67 = ___2_bytesConsumed;
		*((int32_t*)L_67) = (int32_t)0;
		int32_t* L_68 = ___3_kind;
		*((int32_t*)L_68) = (int32_t)0;
		return (bool)0;
	}

IL_01c1:
	{
		uint32_t L_69 = V_11;
		uint32_t L_70 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)10))), (int32_t)L_70));
		uint8_t* L_71;
		L_71 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)13), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_72 = *((uint8_t*)L_71);
		if ((((int32_t)L_72) == ((int32_t)((int32_t)58))))
		{
			goto IL_01eb;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_73 = ___1_value;
		il2cpp_codegen_initobj(L_73, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_74 = ___2_bytesConsumed;
		*((int32_t*)L_74) = (int32_t)0;
		int32_t* L_75 = ___3_kind;
		*((int32_t*)L_75) = (int32_t)0;
		return (bool)0;
	}

IL_01eb:
	{
		uint8_t* L_76;
		L_76 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)14), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_77 = *((uint8_t*)L_76);
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_77, ((int32_t)48)));
		uint8_t* L_78;
		L_78 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)15), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_79 = *((uint8_t*)L_78);
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_79, ((int32_t)48)));
		uint32_t L_80 = V_14;
		if ((!(((uint32_t)L_80) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_021b;
		}
	}
	{
		uint32_t L_81 = V_15;
		if ((!(((uint32_t)L_81) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_022a;
		}
	}

IL_021b:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_82 = ___1_value;
		il2cpp_codegen_initobj(L_82, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_83 = ___2_bytesConsumed;
		*((int32_t*)L_83) = (int32_t)0;
		int32_t* L_84 = ___3_kind;
		*((int32_t*)L_84) = (int32_t)0;
		return (bool)0;
	}

IL_022a:
	{
		uint32_t L_85 = V_14;
		uint32_t L_86 = V_15;
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_85, ((int32_t)10))), (int32_t)L_86));
		uint8_t* L_87;
		L_87 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)16), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_88 = *((uint8_t*)L_87);
		if ((((int32_t)L_88) == ((int32_t)((int32_t)58))))
		{
			goto IL_0254;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_89 = ___1_value;
		il2cpp_codegen_initobj(L_89, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_90 = ___2_bytesConsumed;
		*((int32_t*)L_90) = (int32_t)0;
		int32_t* L_91 = ___3_kind;
		*((int32_t*)L_91) = (int32_t)0;
		return (bool)0;
	}

IL_0254:
	{
		uint8_t* L_92;
		L_92 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)17), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_93 = *((uint8_t*)L_92);
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_93, ((int32_t)48)));
		uint8_t* L_94;
		L_94 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)18), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_95 = *((uint8_t*)L_94);
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_95, ((int32_t)48)));
		uint32_t L_96 = V_17;
		if ((!(((uint32_t)L_96) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0284;
		}
	}
	{
		uint32_t L_97 = V_18;
		if ((!(((uint32_t)L_97) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0293;
		}
	}

IL_0284:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_98 = ___1_value;
		il2cpp_codegen_initobj(L_98, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_99 = ___2_bytesConsumed;
		*((int32_t*)L_99) = (int32_t)0;
		int32_t* L_100 = ___3_kind;
		*((int32_t*)L_100) = (int32_t)0;
		return (bool)0;
	}

IL_0293:
	{
		uint32_t L_101 = V_17;
		uint32_t L_102 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_101, ((int32_t)10))), (int32_t)L_102));
		uint8_t* L_103;
		L_103 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)19), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_104 = *((uint8_t*)L_103);
		if ((((int32_t)L_104) == ((int32_t)((int32_t)46))))
		{
			goto IL_02bd;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_105 = ___1_value;
		il2cpp_codegen_initobj(L_105, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_106 = ___2_bytesConsumed;
		*((int32_t*)L_106) = (int32_t)0;
		int32_t* L_107 = ___3_kind;
		*((int32_t*)L_107) = (int32_t)0;
		return (bool)0;
	}

IL_02bd:
	{
		uint8_t* L_108;
		L_108 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)20), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_109 = *((uint8_t*)L_108);
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_109, ((int32_t)48)));
		uint8_t* L_110;
		L_110 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)21), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_111 = *((uint8_t*)L_110);
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_111, ((int32_t)48)));
		uint8_t* L_112;
		L_112 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)22), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_113 = *((uint8_t*)L_112);
		V_22 = ((int32_t)il2cpp_codegen_subtract(L_113, ((int32_t)48)));
		uint8_t* L_114;
		L_114 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)23), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_115 = *((uint8_t*)L_114);
		V_23 = ((int32_t)il2cpp_codegen_subtract(L_115, ((int32_t)48)));
		uint8_t* L_116;
		L_116 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)24), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_117 = *((uint8_t*)L_116);
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_117, ((int32_t)48)));
		uint8_t* L_118;
		L_118 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)25), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_119 = *((uint8_t*)L_118);
		V_25 = ((int32_t)il2cpp_codegen_subtract(L_119, ((int32_t)48)));
		uint8_t* L_120;
		L_120 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)26), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_121 = *((uint8_t*)L_120);
		V_26 = ((int32_t)il2cpp_codegen_subtract(L_121, ((int32_t)48)));
		uint32_t L_122 = V_20;
		if ((!(((uint32_t)L_122) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_123 = V_21;
		if ((!(((uint32_t)L_123) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_124 = V_22;
		if ((!(((uint32_t)L_124) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_125 = V_23;
		if ((!(((uint32_t)L_125) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_126 = V_24;
		if ((!(((uint32_t)L_126) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_127 = V_25;
		if ((!(((uint32_t)L_127) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0365;
		}
	}
	{
		uint32_t L_128 = V_26;
		if ((!(((uint32_t)L_128) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0374;
		}
	}

IL_0365:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_129 = ___1_value;
		il2cpp_codegen_initobj(L_129, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_130 = ___2_bytesConsumed;
		*((int32_t*)L_130) = (int32_t)0;
		int32_t* L_131 = ___3_kind;
		*((int32_t*)L_131) = (int32_t)0;
		return (bool)0;
	}

IL_0374:
	{
		uint32_t L_132 = V_20;
		uint32_t L_133 = V_21;
		uint32_t L_134 = V_22;
		uint32_t L_135 = V_23;
		uint32_t L_136 = V_24;
		uint32_t L_137 = V_25;
		uint32_t L_138 = V_26;
		V_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_132, ((int32_t)1000000))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_133, ((int32_t)100000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_134, ((int32_t)10000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_135, ((int32_t)1000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_136, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_137, ((int32_t)10))))), (int32_t)L_138));
		int32_t L_139;
		L_139 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_139) <= ((int32_t)((int32_t)27))))
		{
			goto IL_03c5;
		}
	}
	{
		uint8_t* L_140;
		L_140 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)27), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_141 = *((uint8_t*)L_140);
		G_B45_0 = L_141;
		goto IL_03c6;
	}

IL_03c5:
	{
		G_B45_0 = 0;
	}

IL_03c6:
	{
		V_28 = (uint8_t)G_B45_0;
		uint8_t L_142 = V_28;
		if ((((int32_t)L_142) == ((int32_t)((int32_t)90))))
		{
			goto IL_0414;
		}
	}
	{
		uint8_t L_143 = V_28;
		if ((((int32_t)L_143) == ((int32_t)((int32_t)43))))
		{
			goto IL_0414;
		}
	}
	{
		uint8_t L_144 = V_28;
		if ((((int32_t)L_144) == ((int32_t)((int32_t)45))))
		{
			goto IL_0414;
		}
	}
	{
		int32_t L_145 = V_4;
		int32_t L_146 = V_7;
		int32_t L_147 = V_10;
		int32_t L_148 = V_13;
		int32_t L_149 = V_16;
		int32_t L_150 = V_19;
		int32_t L_151 = V_27;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_152 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_153;
		L_153 = Utf8Parser_TryCreateDateTimeOffsetInterpretingDataAsLocalTime_m8848D70976ED630D9246460AE043316E6940CDE5(L_145, L_146, L_147, L_148, L_149, L_150, L_151, L_152, NULL);
		if (L_153)
		{
			goto IL_040b;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_154 = ___1_value;
		il2cpp_codegen_initobj(L_154, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_155 = ___2_bytesConsumed;
		*((int32_t*)L_155) = (int32_t)0;
		int32_t* L_156 = ___3_kind;
		*((int32_t*)L_156) = (int32_t)0;
		return (bool)0;
	}

IL_040b:
	{
		int32_t* L_157 = ___2_bytesConsumed;
		*((int32_t*)L_157) = (int32_t)((int32_t)27);
		int32_t* L_158 = ___3_kind;
		*((int32_t*)L_158) = (int32_t)0;
		return (bool)1;
	}

IL_0414:
	{
		uint8_t L_159 = V_28;
		if ((!(((uint32_t)L_159) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0451;
		}
	}
	{
		int32_t L_160 = V_4;
		int32_t L_161 = V_7;
		int32_t L_162 = V_10;
		int32_t L_163 = V_13;
		int32_t L_164 = V_16;
		int32_t L_165 = V_19;
		int32_t L_166 = V_27;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_167 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_168;
		L_168 = Utf8Parser_TryCreateDateTimeOffset_m4990FEA5117EA4E854740264F46B9572F825383F(L_160, L_161, L_162, L_163, L_164, L_165, L_166, (bool)0, 0, 0, L_167, NULL);
		if (L_168)
		{
			goto IL_0448;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_169 = ___1_value;
		il2cpp_codegen_initobj(L_169, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_170 = ___2_bytesConsumed;
		*((int32_t*)L_170) = (int32_t)0;
		int32_t* L_171 = ___3_kind;
		*((int32_t*)L_171) = (int32_t)0;
		return (bool)0;
	}

IL_0448:
	{
		int32_t* L_172 = ___2_bytesConsumed;
		*((int32_t*)L_172) = (int32_t)((int32_t)28);
		int32_t* L_173 = ___3_kind;
		*((int32_t*)L_173) = (int32_t)1;
		return (bool)1;
	}

IL_0451:
	{
		int32_t L_174;
		L_174 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_174) >= ((int32_t)((int32_t)33))))
		{
			goto IL_046e;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_175 = ___1_value;
		il2cpp_codegen_initobj(L_175, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_176 = ___2_bytesConsumed;
		*((int32_t*)L_176) = (int32_t)0;
		int32_t* L_177 = ___3_kind;
		*((int32_t*)L_177) = (int32_t)0;
		return (bool)0;
	}

IL_046e:
	{
		uint8_t* L_178;
		L_178 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)28), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_179 = *((uint8_t*)L_178);
		V_29 = ((int32_t)il2cpp_codegen_subtract(L_179, ((int32_t)48)));
		uint8_t* L_180;
		L_180 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)29), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_181 = *((uint8_t*)L_180);
		V_30 = ((int32_t)il2cpp_codegen_subtract(L_181, ((int32_t)48)));
		uint32_t L_182 = V_29;
		if ((!(((uint32_t)L_182) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_049e;
		}
	}
	{
		uint32_t L_183 = V_30;
		if ((!(((uint32_t)L_183) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_04ad;
		}
	}

IL_049e:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_184 = ___1_value;
		il2cpp_codegen_initobj(L_184, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_185 = ___2_bytesConsumed;
		*((int32_t*)L_185) = (int32_t)0;
		int32_t* L_186 = ___3_kind;
		*((int32_t*)L_186) = (int32_t)0;
		return (bool)0;
	}

IL_04ad:
	{
		uint32_t L_187 = V_29;
		uint32_t L_188 = V_30;
		V_31 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_187, ((int32_t)10))), (int32_t)L_188));
		uint8_t* L_189;
		L_189 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)30), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_190 = *((uint8_t*)L_189);
		if ((((int32_t)L_190) == ((int32_t)((int32_t)58))))
		{
			goto IL_04d7;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_191 = ___1_value;
		il2cpp_codegen_initobj(L_191, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_192 = ___2_bytesConsumed;
		*((int32_t*)L_192) = (int32_t)0;
		int32_t* L_193 = ___3_kind;
		*((int32_t*)L_193) = (int32_t)0;
		return (bool)0;
	}

IL_04d7:
	{
		uint8_t* L_194;
		L_194 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)31), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_195 = *((uint8_t*)L_194);
		V_32 = ((int32_t)il2cpp_codegen_subtract(L_195, ((int32_t)48)));
		uint8_t* L_196;
		L_196 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)32), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_197 = *((uint8_t*)L_196);
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_197, ((int32_t)48)));
		uint32_t L_198 = V_32;
		if ((!(((uint32_t)L_198) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0507;
		}
	}
	{
		uint32_t L_199 = V_33;
		if ((!(((uint32_t)L_199) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0516;
		}
	}

IL_0507:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_200 = ___1_value;
		il2cpp_codegen_initobj(L_200, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_201 = ___2_bytesConsumed;
		*((int32_t*)L_201) = (int32_t)0;
		int32_t* L_202 = ___3_kind;
		*((int32_t*)L_202) = (int32_t)0;
		return (bool)0;
	}

IL_0516:
	{
		uint32_t L_203 = V_32;
		uint32_t L_204 = V_33;
		V_34 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_203, ((int32_t)10))), (int32_t)L_204));
		int32_t L_205 = V_4;
		int32_t L_206 = V_7;
		int32_t L_207 = V_10;
		int32_t L_208 = V_13;
		int32_t L_209 = V_16;
		int32_t L_210 = V_19;
		int32_t L_211 = V_27;
		uint8_t L_212 = V_28;
		int32_t L_213 = V_31;
		int32_t L_214 = V_34;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_215 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_216;
		L_216 = Utf8Parser_TryCreateDateTimeOffset_m4990FEA5117EA4E854740264F46B9572F825383F(L_205, L_206, L_207, L_208, L_209, L_210, L_211, (bool)((((int32_t)L_212) == ((int32_t)((int32_t)45)))? 1 : 0), L_213, L_214, L_215, NULL);
		if (L_216)
		{
			goto IL_0552;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_217 = ___1_value;
		il2cpp_codegen_initobj(L_217, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		int32_t* L_218 = ___2_bytesConsumed;
		*((int32_t*)L_218) = (int32_t)0;
		int32_t* L_219 = ___3_kind;
		*((int32_t*)L_219) = (int32_t)0;
		return (bool)0;
	}

IL_0552:
	{
		int32_t* L_220 = ___2_bytesConsumed;
		*((int32_t*)L_220) = (int32_t)((int32_t)33);
		int32_t* L_221 = ___3_kind;
		*((int32_t*)L_221) = (int32_t)2;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseDateTimeOffsetR_m7F6BF54ADACF59F415D6AE019C438D09202D7645 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t ___1_caseFlipXorMask, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___2_dateTimeOffset, int32_t* ___3_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	int32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	int32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	int32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	int32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)29))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_1 = ___3_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_2 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_2, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_001a:
	{
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		uint32_t L_5 = ___1_caseFlipXorMask;
		V_0 = ((int32_t)(L_4^(int32_t)L_5));
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		V_1 = L_7;
		uint8_t* L_8;
		L_8 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 2, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_9 = *((uint8_t*)L_8);
		V_2 = L_9;
		uint8_t* L_10;
		L_10 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 3, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_11 = *((uint8_t*)L_10);
		V_3 = L_11;
		uint32_t L_12 = V_0;
		uint32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		uint32_t L_15 = V_3;
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)24)))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_14<<8))))|(int32_t)L_15));
		uint32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1398895660)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1181903148))))
		{
			goto IL_00f8;
		}
	}
	{
		uint32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1299148332))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1398895660))))
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0108;
	}

IL_008a:
	{
		uint32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1416131884)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1400204844))))
		{
			goto IL_00d0;
		}
	}
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1416131884))))
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_0108;
	}

IL_00b3:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1416979756))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)1466262572))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_0108;
	}

IL_00d0:
	{
		V_5 = 0;
		goto IL_0114;
	}

IL_00d8:
	{
		V_5 = 1;
		goto IL_0114;
	}

IL_00e0:
	{
		V_5 = 2;
		goto IL_0114;
	}

IL_00e8:
	{
		V_5 = 3;
		goto IL_0114;
	}

IL_00f0:
	{
		V_5 = 4;
		goto IL_0114;
	}

IL_00f8:
	{
		V_5 = 5;
		goto IL_0114;
	}

IL_0100:
	{
		V_5 = 6;
		goto IL_0114;
	}

IL_0108:
	{
		int32_t* L_25 = ___3_bytesConsumed;
		*((int32_t*)L_25) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_26 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_26, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0114:
	{
		uint8_t* L_27;
		L_27 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_28 = *((uint8_t*)L_27);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)32))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t* L_29 = ___3_bytesConsumed;
		*((int32_t*)L_29) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_30 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_30, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0130:
	{
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 5, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)48)));
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 6, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_34, ((int32_t)48)));
		uint32_t L_35 = V_6;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_015e;
		}
	}
	{
		uint32_t L_36 = V_7;
		if ((!(((uint32_t)L_36) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_016a;
		}
	}

IL_015e:
	{
		int32_t* L_37 = ___3_bytesConsumed;
		*((int32_t*)L_37) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_38 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_38, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_016a:
	{
		uint32_t L_39 = V_6;
		uint32_t L_40 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)10))), (int32_t)L_40));
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 7, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		if ((((int32_t)L_42) == ((int32_t)((int32_t)32))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t* L_43 = ___3_bytesConsumed;
		*((int32_t*)L_43) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_44 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_44, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0190:
	{
		uint8_t* L_45;
		L_45 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_46 = *((uint8_t*)L_45);
		uint32_t L_47 = ___1_caseFlipXorMask;
		V_9 = ((int32_t)(L_46^(int32_t)L_47));
		uint8_t* L_48;
		L_48 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)9), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_49 = *((uint8_t*)L_48);
		V_10 = L_49;
		uint8_t* L_50;
		L_50 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)10), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_51 = *((uint8_t*)L_50);
		V_11 = L_51;
		uint8_t* L_52;
		L_52 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)11), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_53 = *((uint8_t*)L_52);
		V_12 = L_53;
		uint32_t L_54 = V_9;
		uint32_t L_55 = V_10;
		uint32_t L_56 = V_11;
		uint32_t L_57 = V_12;
		V_13 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_54<<((int32_t)24)))|((int32_t)((int32_t)L_55<<((int32_t)16)))))|((int32_t)((int32_t)L_56<<8))))|(int32_t)L_57));
		uint32_t L_58 = V_13;
		if ((!(((uint32_t)L_58) <= ((uint32_t)((int32_t)1249209376)))))
		{
			goto IL_0240;
		}
	}
	{
		uint32_t L_59 = V_13;
		if ((!(((uint32_t)L_59) <= ((uint32_t)((int32_t)1147495200)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_60 = V_13;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)1097888288))))
		{
			goto IL_02b6;
		}
	}
	{
		uint32_t L_61 = V_13;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)1098213152))))
		{
			goto IL_02d6;
		}
	}
	{
		uint32_t L_62 = V_13;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)1147495200))))
		{
			goto IL_02f9;
		}
	}
	{
		goto IL_0302;
	}

IL_0217:
	{
		uint32_t L_63 = V_13;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)1181049376))))
		{
			goto IL_02a6;
		}
	}
	{
		uint32_t L_64 = V_13;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)1247899168))))
		{
			goto IL_029e;
		}
	}
	{
		uint32_t L_65 = V_13;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)1249209376))))
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_0302;
	}

IL_0240:
	{
		uint32_t L_66 = V_13;
		if ((!(((uint32_t)L_66) <= ((uint32_t)((int32_t)1298233632)))))
		{
			goto IL_0275;
		}
	}
	{
		uint32_t L_67 = V_13;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)1249209888))))
		{
			goto IL_02c6;
		}
	}
	{
		uint32_t L_68 = V_13;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)1298231840))))
		{
			goto IL_02ae;
		}
	}
	{
		uint32_t L_69 = V_13;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)1298233632))))
		{
			goto IL_02be;
		}
	}
	{
		goto IL_0302;
	}

IL_0275:
	{
		uint32_t L_70 = V_13;
		if ((((int32_t)L_70) == ((int32_t)((int32_t)1315927584))))
		{
			goto IL_02f0;
		}
	}
	{
		uint32_t L_71 = V_13;
		if ((((int32_t)L_71) == ((int32_t)((int32_t)1331917856))))
		{
			goto IL_02e7;
		}
	}
	{
		uint32_t L_72 = V_13;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)1399156768))))
		{
			goto IL_02de;
		}
	}
	{
		goto IL_0302;
	}

IL_029e:
	{
		V_14 = 1;
		goto IL_030e;
	}

IL_02a6:
	{
		V_14 = 2;
		goto IL_030e;
	}

IL_02ae:
	{
		V_14 = 3;
		goto IL_030e;
	}

IL_02b6:
	{
		V_14 = 4;
		goto IL_030e;
	}

IL_02be:
	{
		V_14 = 5;
		goto IL_030e;
	}

IL_02c6:
	{
		V_14 = 6;
		goto IL_030e;
	}

IL_02ce:
	{
		V_14 = 7;
		goto IL_030e;
	}

IL_02d6:
	{
		V_14 = 8;
		goto IL_030e;
	}

IL_02de:
	{
		V_14 = ((int32_t)9);
		goto IL_030e;
	}

IL_02e7:
	{
		V_14 = ((int32_t)10);
		goto IL_030e;
	}

IL_02f0:
	{
		V_14 = ((int32_t)11);
		goto IL_030e;
	}

IL_02f9:
	{
		V_14 = ((int32_t)12);
		goto IL_030e;
	}

IL_0302:
	{
		int32_t* L_73 = ___3_bytesConsumed;
		*((int32_t*)L_73) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_74 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_74, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_030e:
	{
		uint8_t* L_75;
		L_75 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)12), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_76 = *((uint8_t*)L_75);
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_76, ((int32_t)48)));
		uint8_t* L_77;
		L_77 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)13), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_78 = *((uint8_t*)L_77);
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_78, ((int32_t)48)));
		uint8_t* L_79;
		L_79 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)14), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_80 = *((uint8_t*)L_79);
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_80, ((int32_t)48)));
		uint8_t* L_81;
		L_81 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)15), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_82 = *((uint8_t*)L_81);
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_82, ((int32_t)48)));
		uint32_t L_83 = V_15;
		if ((!(((uint32_t)L_83) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_036e;
		}
	}
	{
		uint32_t L_84 = V_16;
		if ((!(((uint32_t)L_84) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_036e;
		}
	}
	{
		uint32_t L_85 = V_17;
		if ((!(((uint32_t)L_85) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_036e;
		}
	}
	{
		uint32_t L_86 = V_18;
		if ((!(((uint32_t)L_86) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_037a;
		}
	}

IL_036e:
	{
		int32_t* L_87 = ___3_bytesConsumed;
		*((int32_t*)L_87) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_88 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_88, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_037a:
	{
		uint32_t L_89 = V_15;
		uint32_t L_90 = V_16;
		uint32_t L_91 = V_17;
		uint32_t L_92 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_89, ((int32_t)1000))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_90, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_91, ((int32_t)10))))), (int32_t)L_92));
		uint8_t* L_93;
		L_93 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)16), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_94 = *((uint8_t*)L_93);
		if ((((int32_t)L_94) == ((int32_t)((int32_t)32))))
		{
			goto IL_03b0;
		}
	}
	{
		int32_t* L_95 = ___3_bytesConsumed;
		*((int32_t*)L_95) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_96 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_96, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_03b0:
	{
		uint8_t* L_97;
		L_97 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)17), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_98 = *((uint8_t*)L_97);
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_98, ((int32_t)48)));
		uint8_t* L_99;
		L_99 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)18), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_100 = *((uint8_t*)L_99);
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_100, ((int32_t)48)));
		uint32_t L_101 = V_20;
		if ((!(((uint32_t)L_101) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_03e0;
		}
	}
	{
		uint32_t L_102 = V_21;
		if ((!(((uint32_t)L_102) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_03ec;
		}
	}

IL_03e0:
	{
		int32_t* L_103 = ___3_bytesConsumed;
		*((int32_t*)L_103) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_104 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_104, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_03ec:
	{
		uint32_t L_105 = V_20;
		uint32_t L_106 = V_21;
		V_22 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)10))), (int32_t)L_106));
		uint8_t* L_107;
		L_107 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)19), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_108 = *((uint8_t*)L_107);
		if ((((int32_t)L_108) == ((int32_t)((int32_t)58))))
		{
			goto IL_0413;
		}
	}
	{
		int32_t* L_109 = ___3_bytesConsumed;
		*((int32_t*)L_109) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_110 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_110, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0413:
	{
		uint8_t* L_111;
		L_111 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)20), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_112 = *((uint8_t*)L_111);
		V_23 = ((int32_t)il2cpp_codegen_subtract(L_112, ((int32_t)48)));
		uint8_t* L_113;
		L_113 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)21), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_114 = *((uint8_t*)L_113);
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_114, ((int32_t)48)));
		uint32_t L_115 = V_23;
		if ((!(((uint32_t)L_115) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0443;
		}
	}
	{
		uint32_t L_116 = V_24;
		if ((!(((uint32_t)L_116) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_044f;
		}
	}

IL_0443:
	{
		int32_t* L_117 = ___3_bytesConsumed;
		*((int32_t*)L_117) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_118 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_118, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_044f:
	{
		uint32_t L_119 = V_23;
		uint32_t L_120 = V_24;
		V_25 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_119, ((int32_t)10))), (int32_t)L_120));
		uint8_t* L_121;
		L_121 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)22), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_122 = *((uint8_t*)L_121);
		if ((((int32_t)L_122) == ((int32_t)((int32_t)58))))
		{
			goto IL_0476;
		}
	}
	{
		int32_t* L_123 = ___3_bytesConsumed;
		*((int32_t*)L_123) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_124 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_124, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0476:
	{
		uint8_t* L_125;
		L_125 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)23), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_126 = *((uint8_t*)L_125);
		V_26 = ((int32_t)il2cpp_codegen_subtract(L_126, ((int32_t)48)));
		uint8_t* L_127;
		L_127 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)24), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_128 = *((uint8_t*)L_127);
		V_27 = ((int32_t)il2cpp_codegen_subtract(L_128, ((int32_t)48)));
		uint32_t L_129 = V_26;
		if ((!(((uint32_t)L_129) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_04a6;
		}
	}
	{
		uint32_t L_130 = V_27;
		if ((!(((uint32_t)L_130) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_04b2;
		}
	}

IL_04a6:
	{
		int32_t* L_131 = ___3_bytesConsumed;
		*((int32_t*)L_131) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_132 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_132, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_04b2:
	{
		uint32_t L_133 = V_26;
		uint32_t L_134 = V_27;
		V_28 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_133, ((int32_t)10))), (int32_t)L_134));
		uint8_t* L_135;
		L_135 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)25), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_136 = *((uint8_t*)L_135);
		V_29 = L_136;
		uint8_t* L_137;
		L_137 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)26), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_138 = *((uint8_t*)L_137);
		uint32_t L_139 = ___1_caseFlipXorMask;
		V_30 = ((int32_t)(L_138^(int32_t)L_139));
		uint8_t* L_140;
		L_140 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)27), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_141 = *((uint8_t*)L_140);
		uint32_t L_142 = ___1_caseFlipXorMask;
		V_31 = ((int32_t)(L_141^(int32_t)L_142));
		uint8_t* L_143;
		L_143 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), ((int32_t)28), ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_144 = *((uint8_t*)L_143);
		uint32_t L_145 = ___1_caseFlipXorMask;
		V_32 = ((int32_t)(L_144^(int32_t)L_145));
		uint32_t L_146 = V_29;
		uint32_t L_147 = V_30;
		uint32_t L_148 = V_31;
		uint32_t L_149 = V_32;
		V_33 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_146<<((int32_t)24)))|((int32_t)((int32_t)L_147<<((int32_t)16)))))|((int32_t)((int32_t)L_148<<8))))|(int32_t)L_149));
		uint32_t L_150 = V_33;
		if ((((int32_t)L_150) == ((int32_t)((int32_t)541543764))))
		{
			goto IL_051f;
		}
	}
	{
		int32_t* L_151 = ___3_bytesConsumed;
		*((int32_t*)L_151) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_152 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_152, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_051f:
	{
		int32_t L_153 = V_19;
		int32_t L_154 = V_14;
		int32_t L_155 = V_8;
		int32_t L_156 = V_22;
		int32_t L_157 = V_25;
		int32_t L_158 = V_28;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_159 = ___2_dateTimeOffset;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_160;
		L_160 = Utf8Parser_TryCreateDateTimeOffset_m4990FEA5117EA4E854740264F46B9572F825383F(L_153, L_154, L_155, L_156, L_157, L_158, 0, (bool)0, 0, 0, L_159, NULL);
		if (L_160)
		{
			goto IL_0546;
		}
	}
	{
		int32_t* L_161 = ___3_bytesConsumed;
		*((int32_t*)L_161) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_162 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_162, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_0546:
	{
		int32_t L_163 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_164 = ___2_dateTimeOffset;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		int32_t L_165;
		L_165 = DateTimeOffset_get_DayOfWeek_m409FBC7A771514D19EA968185A0C5CDED5809B42(L_164, NULL);
		if ((((int32_t)L_163) == ((int32_t)L_165)))
		{
			goto IL_055f;
		}
	}
	{
		int32_t* L_166 = ___3_bytesConsumed;
		*((int32_t*)L_166) = (int32_t)0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_167 = ___2_dateTimeOffset;
		il2cpp_codegen_initobj(L_167, sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		return (bool)0;
	}

IL_055f:
	{
		int32_t* L_168 = ___3_bytesConsumed;
		*((int32_t*)L_168) = (int32_t)((int32_t)29);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m0816809443C7886FEB8448C116261DC5C53E0456 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)69))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0035;
			}
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)101))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0035:
	{
		V_0 = 1;
		goto IL_004b;
	}

IL_003c:
	{
		V_0 = 0;
		goto IL_004b;
	}

IL_0043:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = ___1_value;
		int32_t* L_4 = ___2_bytesConsumed;
		bool L_5;
		L_5 = ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B(L_3, L_4, ThrowHelper_TryParseThrowFormatException_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m6E37BB4616ED5B76A2CB04C9488ECC05E9E4D28B_RuntimeMethod_var);
		return L_5;
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2));
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_6 = ___0_source;
		int32_t* L_7 = ___2_bytesConsumed;
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseNumber_m82A7C9AE615F919E14AF8D90B39B83FA580DA9F7(L_6, (&V_1), L_7, L_8, (&V_2), NULL);
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_10 = ___1_value;
		il2cpp_codegen_initobj(L_10, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		return (bool)0;
	}

IL_006d:
	{
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		Il2CppChar L_12 = ___3_standardFormat;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)69))))
		{
			goto IL_0083;
		}
	}
	{
		Il2CppChar L_13 = ___3_standardFormat;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_008f;
		}
	}

IL_0083:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_14 = ___1_value;
		il2cpp_codegen_initobj(L_14, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		int32_t* L_15 = ___2_bytesConsumed;
		*((int32_t*)L_15) = (int32_t)0;
		return (bool)0;
	}

IL_008f:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_16;
		L_16 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D((&V_1), NULL);
		V_3 = L_16;
		uint8_t* L_17;
		L_17 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&V_3), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		if (L_18)
		{
			goto IL_00b8;
		}
	}
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 L_19 = V_1;
		int32_t L_20 = L_19.___Scale;
		if (L_20)
		{
			goto IL_00b8;
		}
	}
	{
		(&V_1)->___IsNegative = (bool)0;
	}

IL_00b8:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_21 = ___1_value;
		il2cpp_codegen_initobj(L_21, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_22 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Number_NumberBufferToDecimal_mD7BAE6BA214F452BA480CC847B4CA1F95CDDFB23((&V_1), L_22, NULL);
		if (L_23)
		{
			goto IL_00d8;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_24 = ___1_value;
		il2cpp_codegen_initobj(L_24, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		int32_t* L_25 = ___2_bytesConsumed;
		*((int32_t*)L_25) = (int32_t)0;
		return (bool)0;
	}

IL_00d8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mC3DF5526F78B708DCE7CE323279136F3F4686D70 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, float* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_source;
		int32_t* L_1 = ___2_bytesConsumed;
		Il2CppChar L_2 = ___3_standardFormat;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Utf8Parser_TryParseNormalAsFloatingPoint_mF516D2092ECE98F4E6322880872DDB3DCFC41BA0(L_0, (&V_0), L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		float* L_4 = ___1_value;
		double L_5 = V_0;
		*((float*)L_4) = (float)((float)L_5);
		float* L_6 = ___1_value;
		float L_7 = *((float*)L_6);
		bool L_8;
		L_8 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		float* L_9 = ___1_value;
		*((float*)L_9) = (float)(0.0f);
		int32_t* L_10 = ___2_bytesConsumed;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}

IL_002b:
	{
		return (bool)1;
	}

IL_002d:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_11 = ___0_source;
		float* L_12 = ___1_value;
		int32_t* L_13 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E(L_11, (std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::quiet_NaN()), L_12, L_13, Utf8Parser_TryParseAsSpecialFloatingPoint_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9DAA4B9AE162FAADC3C5F1DA179928163B65B68E_RuntimeMethod_var);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m8C167FBCDE6F6CB8082C2563D14BD0FF1FD257FD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, double* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_source;
		double* L_1 = ___1_value;
		int32_t* L_2 = ___2_bytesConsumed;
		Il2CppChar L_3 = ___3_standardFormat;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Parser_TryParseNormalAsFloatingPoint_mF516D2092ECE98F4E6322880872DDB3DCFC41BA0(L_0, L_1, L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_5 = ___0_source;
		double* L_6 = ___1_value;
		int32_t* L_7 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E(L_5, (std::numeric_limits<double>::infinity()), (-std::numeric_limits<double>::infinity()), (std::numeric_limits<double>::quiet_NaN()), L_6, L_7, Utf8Parser_TryParseAsSpecialFloatingPoint_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4C4330FBC4198B5963A86A859E808A91BC9B844E_RuntimeMethod_var);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNormalAsFloatingPoint_mF516D2092ECE98F4E6322880872DDB3DCFC41BA0 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, double* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)69))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0035;
			}
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)101))))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0035:
	{
		V_0 = 1;
		goto IL_004b;
	}

IL_003c:
	{
		V_0 = 0;
		goto IL_004b;
	}

IL_0043:
	{
		double* L_3 = ___1_value;
		int32_t* L_4 = ___2_bytesConsumed;
		bool L_5;
		L_5 = ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9(L_3, L_4, ThrowHelper_TryParseThrowFormatException_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE8D8C637CD938911568D369886905FF2553FD8E9_RuntimeMethod_var);
		return L_5;
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2));
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_6 = ___0_source;
		int32_t* L_7 = ___2_bytesConsumed;
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseNumber_m82A7C9AE615F919E14AF8D90B39B83FA580DA9F7(L_6, (&V_1), L_7, L_8, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		double* L_10 = ___1_value;
		*((double*)L_10) = (double)(0.0);
		return (bool)0;
	}

IL_0071:
	{
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0097;
		}
	}
	{
		Il2CppChar L_12 = ___3_standardFormat;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)69))))
		{
			goto IL_0087;
		}
	}
	{
		Il2CppChar L_13 = ___3_standardFormat;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0097;
		}
	}

IL_0087:
	{
		double* L_14 = ___1_value;
		*((double*)L_14) = (double)(0.0);
		int32_t* L_15 = ___2_bytesConsumed;
		*((int32_t*)L_15) = (int32_t)0;
		return (bool)0;
	}

IL_0097:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_16;
		L_16 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D((&V_1), NULL);
		V_3 = L_16;
		uint8_t* L_17;
		L_17 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&V_3), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		if (L_18)
		{
			goto IL_00b5;
		}
	}
	{
		(&V_1)->___IsNegative = (bool)0;
	}

IL_00b5:
	{
		double* L_19 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Number_t64FC32F5D6CE94326B28E3F43EC97982AFA28039_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Number_NumberBufferToDouble_mD2C99C2CB3E0260C87EB1AE640CEAA0A9179FFA3((&V_1), L_19, NULL);
		if (L_20)
		{
			goto IL_00d2;
		}
	}
	{
		double* L_21 = ___1_value;
		*((double*)L_21) = (double)(0.0);
		int32_t* L_22 = ___2_bytesConsumed;
		*((int32_t*)L_22) = (int32_t)0;
		return (bool)0;
	}

IL_00d2:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mF178D4798D28ACFCA550E673D11E4C466F0CDECB (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, Guid_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)66)))))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)66))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_006b;
	}

IL_001b:
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)78))))
		{
			goto IL_0062;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)80))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_006b;
	}

IL_0038:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_6 = ___0_source;
		Guid_t* L_7 = ___1_value;
		int32_t* L_8 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseGuidCore_mD7DD2B390726B623F47AA21A460CA91FF2A6646C(L_6, (bool)0, ((int32_t)32), ((int32_t)32), L_7, L_8, NULL);
		return L_9;
	}

IL_0046:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_10 = ___0_source;
		Guid_t* L_11 = ___1_value;
		int32_t* L_12 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Utf8Parser_TryParseGuidCore_mD7DD2B390726B623F47AA21A460CA91FF2A6646C(L_10, (bool)1, ((int32_t)123), ((int32_t)125), L_11, L_12, NULL);
		return L_13;
	}

IL_0054:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_14 = ___0_source;
		Guid_t* L_15 = ___1_value;
		int32_t* L_16 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Utf8Parser_TryParseGuidCore_mD7DD2B390726B623F47AA21A460CA91FF2A6646C(L_14, (bool)1, ((int32_t)40), ((int32_t)41), L_15, L_16, NULL);
		return L_17;
	}

IL_0062:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_18 = ___0_source;
		Guid_t* L_19 = ___1_value;
		int32_t* L_20 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Utf8Parser_TryParseGuidN_mBD4EAE25D37E1D99CB9E8659CC1393490EEB3DC2(L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_006b:
	{
		Guid_t* L_22 = ___1_value;
		int32_t* L_23 = ___2_bytesConsumed;
		bool L_24;
		L_24 = ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9(L_22, L_23, ThrowHelper_TryParseThrowFormatException_TisGuid_t_m42C7656D550585EAF78DC9477ED531AC8AB124A9_RuntimeMethod_var);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseGuidN_mBD4EAE25D37E1D99CB9E8659CC1393490EEB3DC2 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_text, Guid_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	uint16_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_text), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001a;
		}
	}
	{
		Guid_t* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(Guid_t));
		int32_t* L_2 = ___2_bytesConsumed;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_001a:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_3;
		L_3 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_text), 0, 8, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE(L_3, (&V_0), (&V_1), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)8)))
		{
			goto IL_0044;
		}
	}

IL_0038:
	{
		Guid_t* L_6 = ___1_value;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		int32_t* L_7 = ___2_bytesConsumed;
		*((int32_t*)L_7) = (int32_t)0;
		return (bool)0;
	}

IL_0044:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_8;
		L_8 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_text), 8, 4, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_8, (&V_2), (&V_1), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)4)))
		{
			goto IL_006e;
		}
	}

IL_0062:
	{
		Guid_t* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Guid_t));
		int32_t* L_12 = ___2_bytesConsumed;
		*((int32_t*)L_12) = (int32_t)0;
		return (bool)0;
	}

IL_006e:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_13;
		L_13 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_text), ((int32_t)12), 4, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_13, (&V_3), (&V_1), NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0099;
		}
	}

IL_008d:
	{
		Guid_t* L_16 = ___1_value;
		il2cpp_codegen_initobj(L_16, sizeof(Guid_t));
		int32_t* L_17 = ___2_bytesConsumed;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}

IL_0099:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_18;
		L_18 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_text), ((int32_t)16), 4, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_18, (&V_4), (&V_1), NULL);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)4)))
		{
			goto IL_00c4;
		}
	}

IL_00b8:
	{
		Guid_t* L_21 = ___1_value;
		il2cpp_codegen_initobj(L_21, sizeof(Guid_t));
		int32_t* L_22 = ___2_bytesConsumed;
		*((int32_t*)L_22) = (int32_t)0;
		return (bool)0;
	}

IL_00c4:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_23;
		L_23 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_text), ((int32_t)20), ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133(L_23, (&V_5), (&V_1), NULL);
		if (!L_24)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)12))))
		{
			goto IL_00ef;
		}
	}

IL_00e3:
	{
		Guid_t* L_26 = ___1_value;
		il2cpp_codegen_initobj(L_26, sizeof(Guid_t));
		int32_t* L_27 = ___2_bytesConsumed;
		*((int32_t*)L_27) = (int32_t)0;
		return (bool)0;
	}

IL_00ef:
	{
		int32_t* L_28 = ___2_bytesConsumed;
		*((int32_t*)L_28) = (int32_t)((int32_t)32);
		Guid_t* L_29 = ___1_value;
		uint32_t L_30 = V_0;
		uint16_t L_31 = V_2;
		uint16_t L_32 = V_3;
		uint16_t L_33 = V_4;
		uint16_t L_34 = V_4;
		uint64_t L_35 = V_5;
		uint64_t L_36 = V_5;
		uint64_t L_37 = V_5;
		uint64_t L_38 = V_5;
		uint64_t L_39 = V_5;
		uint64_t L_40 = V_5;
		Guid_t L_41;
		memset((&L_41), 0, sizeof(L_41));
		Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130((&L_41), L_30, ((int16_t)L_31), ((int16_t)L_32), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_33>>8))), (uint8_t)((int32_t)(uint8_t)L_34), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_35>>((int32_t)40)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_36>>((int32_t)32)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_37>>((int32_t)24)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_38>>((int32_t)16)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_39>>8))), (uint8_t)((int32_t)(uint8_t)L_40), NULL);
		*(Guid_t*)L_29 = L_41;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseGuidCore_mD7DD2B390726B623F47AA21A460CA91FF2A6646C (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, bool ___1_ends, Il2CppChar ___2_begin, Il2CppChar ___3_end, Guid_t* ___4_value, int32_t* ___5_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	uint16_t V_4 = 0;
	uint16_t V_5 = 0;
	uint64_t V_6 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		bool L_0 = ___1_ends;
		if (L_0)
		{
			G_B2_0 = ((int32_t)36);
			goto IL_000e;
		}
		G_B1_0 = ((int32_t)36);
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002c;
		}
	}
	{
		Guid_t* L_3 = ___4_value;
		il2cpp_codegen_initobj(L_3, sizeof(Guid_t));
		int32_t* L_4 = ___5_bytesConsumed;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_002c:
	{
		bool L_5 = ___1_ends;
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		Il2CppChar L_8 = ___2_begin;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_004f;
		}
	}
	{
		Guid_t* L_9 = ___4_value;
		il2cpp_codegen_initobj(L_9, sizeof(Guid_t));
		int32_t* L_10 = ___5_bytesConsumed;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
	}

IL_004f:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_11;
		L_11 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), 1, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		___0_source = L_11;
	}

IL_0059:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE(L_12, (&V_1), (&V_2), NULL);
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		Guid_t* L_14 = ___4_value;
		il2cpp_codegen_initobj(L_14, sizeof(Guid_t));
		int32_t* L_15 = ___5_bytesConsumed;
		*((int32_t*)L_15) = (int32_t)0;
		return (bool)0;
	}

IL_0076:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		Guid_t* L_17 = ___4_value;
		il2cpp_codegen_initobj(L_17, sizeof(Guid_t));
		int32_t* L_18 = ___5_bytesConsumed;
		*((int32_t*)L_18) = (int32_t)0;
		return (bool)0;
	}

IL_008b:
	{
		int32_t L_19 = V_2;
		uint8_t* L_20;
		L_20 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_19, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_21 = *((uint8_t*)L_20);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)45))))
		{
			goto IL_00a9;
		}
	}
	{
		Guid_t* L_22 = ___4_value;
		il2cpp_codegen_initobj(L_22, sizeof(Guid_t));
		int32_t* L_23 = ___5_bytesConsumed;
		*((int32_t*)L_23) = (int32_t)0;
		return (bool)0;
	}

IL_00a9:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_24;
		L_24 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), ((int32_t)9), ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		___0_source = L_24;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_25 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_25, (&V_3), (&V_2), NULL);
		if (L_26)
		{
			goto IL_00d1;
		}
	}
	{
		Guid_t* L_27 = ___4_value;
		il2cpp_codegen_initobj(L_27, sizeof(Guid_t));
		int32_t* L_28 = ___5_bytesConsumed;
		*((int32_t*)L_28) = (int32_t)0;
		return (bool)0;
	}

IL_00d1:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)4)))
		{
			goto IL_00e6;
		}
	}
	{
		Guid_t* L_30 = ___4_value;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
		int32_t* L_31 = ___5_bytesConsumed;
		*((int32_t*)L_31) = (int32_t)0;
		return (bool)0;
	}

IL_00e6:
	{
		int32_t L_32 = V_2;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_32, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)45))))
		{
			goto IL_0104;
		}
	}
	{
		Guid_t* L_35 = ___4_value;
		il2cpp_codegen_initobj(L_35, sizeof(Guid_t));
		int32_t* L_36 = ___5_bytesConsumed;
		*((int32_t*)L_36) = (int32_t)0;
		return (bool)0;
	}

IL_0104:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_37;
		L_37 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), 5, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		___0_source = L_37;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_38 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_38, (&V_4), (&V_2), NULL);
		if (L_39)
		{
			goto IL_012b;
		}
	}
	{
		Guid_t* L_40 = ___4_value;
		il2cpp_codegen_initobj(L_40, sizeof(Guid_t));
		int32_t* L_41 = ___5_bytesConsumed;
		*((int32_t*)L_41) = (int32_t)0;
		return (bool)0;
	}

IL_012b:
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)4)))
		{
			goto IL_0140;
		}
	}
	{
		Guid_t* L_43 = ___4_value;
		il2cpp_codegen_initobj(L_43, sizeof(Guid_t));
		int32_t* L_44 = ___5_bytesConsumed;
		*((int32_t*)L_44) = (int32_t)0;
		return (bool)0;
	}

IL_0140:
	{
		int32_t L_45 = V_2;
		uint8_t* L_46;
		L_46 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_45, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_47 = *((uint8_t*)L_46);
		if ((((int32_t)L_47) == ((int32_t)((int32_t)45))))
		{
			goto IL_015e;
		}
	}
	{
		Guid_t* L_48 = ___4_value;
		il2cpp_codegen_initobj(L_48, sizeof(Guid_t));
		int32_t* L_49 = ___5_bytesConsumed;
		*((int32_t*)L_49) = (int32_t)0;
		return (bool)0;
	}

IL_015e:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_50;
		L_50 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), 5, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		___0_source = L_50;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_51 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_51, (&V_5), (&V_2), NULL);
		if (L_52)
		{
			goto IL_0185;
		}
	}
	{
		Guid_t* L_53 = ___4_value;
		il2cpp_codegen_initobj(L_53, sizeof(Guid_t));
		int32_t* L_54 = ___5_bytesConsumed;
		*((int32_t*)L_54) = (int32_t)0;
		return (bool)0;
	}

IL_0185:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_019a;
		}
	}
	{
		Guid_t* L_56 = ___4_value;
		il2cpp_codegen_initobj(L_56, sizeof(Guid_t));
		int32_t* L_57 = ___5_bytesConsumed;
		*((int32_t*)L_57) = (int32_t)0;
		return (bool)0;
	}

IL_019a:
	{
		int32_t L_58 = V_2;
		uint8_t* L_59;
		L_59 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_58, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_60 = *((uint8_t*)L_59);
		if ((((int32_t)L_60) == ((int32_t)((int32_t)45))))
		{
			goto IL_01b8;
		}
	}
	{
		Guid_t* L_61 = ___4_value;
		il2cpp_codegen_initobj(L_61, sizeof(Guid_t));
		int32_t* L_62 = ___5_bytesConsumed;
		*((int32_t*)L_62) = (int32_t)0;
		return (bool)0;
	}

IL_01b8:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_63;
		L_63 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), 5, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		___0_source = L_63;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_64 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133(L_64, (&V_6), (&V_2), NULL);
		if (L_65)
		{
			goto IL_01df;
		}
	}
	{
		Guid_t* L_66 = ___4_value;
		il2cpp_codegen_initobj(L_66, sizeof(Guid_t));
		int32_t* L_67 = ___5_bytesConsumed;
		*((int32_t*)L_67) = (int32_t)0;
		return (bool)0;
	}

IL_01df:
	{
		int32_t L_68 = V_2;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)12))))
		{
			goto IL_01f5;
		}
	}
	{
		Guid_t* L_69 = ___4_value;
		il2cpp_codegen_initobj(L_69, sizeof(Guid_t));
		int32_t* L_70 = ___5_bytesConsumed;
		*((int32_t*)L_70) = (int32_t)0;
		return (bool)0;
	}

IL_01f5:
	{
		bool L_71 = ___1_ends;
		if (!L_71)
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_72 = V_2;
		uint8_t* L_73;
		L_73 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_72, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_74 = *((uint8_t*)L_73);
		Il2CppChar L_75 = ___3_end;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_0218;
		}
	}
	{
		Guid_t* L_76 = ___4_value;
		il2cpp_codegen_initobj(L_76, sizeof(Guid_t));
		int32_t* L_77 = ___5_bytesConsumed;
		*((int32_t*)L_77) = (int32_t)0;
		return (bool)0;
	}

IL_0218:
	{
		int32_t* L_78 = ___5_bytesConsumed;
		int32_t L_79 = V_0;
		*((int32_t*)L_78) = (int32_t)L_79;
		Guid_t* L_80 = ___4_value;
		uint32_t L_81 = V_1;
		uint16_t L_82 = V_3;
		uint16_t L_83 = V_4;
		uint16_t L_84 = V_5;
		uint16_t L_85 = V_5;
		uint64_t L_86 = V_6;
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_6;
		uint64_t L_89 = V_6;
		uint64_t L_90 = V_6;
		uint64_t L_91 = V_6;
		Guid_t L_92;
		memset((&L_92), 0, sizeof(L_92));
		Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130((&L_92), L_81, ((int16_t)L_82), ((int16_t)L_83), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_84>>8))), (uint8_t)((int32_t)(uint8_t)L_85), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_86>>((int32_t)40)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_87>>((int32_t)32)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_88>>((int32_t)24)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_89>>((int32_t)16)))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_90>>8))), (uint8_t)((int32_t)(uint8_t)L_91), NULL);
		*(Guid_t*)L_80 = L_92;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m417F5E616BF1423CC3EC7999EDC0DA8158744327 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int8_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0095;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0095;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		int8_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseSByteD_mBE600D3E0F962EB93C306077CF1D58102B41A9FD(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		int8_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseSByteN_mD3CC7E53D9C91845CB6786ABDC1C60366DAC71D8(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		int8_t* L_20 = ___1_value;
		*((int8_t*)L_20) = (int8_t)0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_21 = ___0_source;
		int8_t* L_22 = ___1_value;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_as_ref<uint8_t>(L_22);
		int32_t* L_24 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Parser_TryParseByteX_mF2530ED3F2B5AAD126BF85B679AAF2816E16B155(L_21, L_23, L_24, NULL);
		return L_25;
	}

IL_0095:
	{
		int8_t* L_26 = ___1_value;
		int32_t* L_27 = ___2_bytesConsumed;
		bool L_28;
		L_28 = ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70(L_26, L_27, ThrowHelper_TryParseThrowFormatException_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m849EDAE16EA48E11F9E44DCC9B1D3EDC2CFCFD70_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m14B11E9127644A8D1BBC833DA609B8B7EE9C15B2 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int16_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0095;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0095;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		int16_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseInt16D_mCA559D4759834B885308B79D5F098A1D7DE124FA(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		int16_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseInt16N_mDEBB6D945FF06290DA9BB72FB8DB89AA5EF123A7(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		int16_t* L_20 = ___1_value;
		*((int16_t*)L_20) = (int16_t)0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_21 = ___0_source;
		int16_t* L_22 = ___1_value;
		uint16_t* L_23;
		L_23 = il2cpp_unsafe_as_ref<uint16_t>(L_22);
		int32_t* L_24 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_21, L_23, L_24, NULL);
		return L_25;
	}

IL_0095:
	{
		int16_t* L_26 = ___1_value;
		int32_t* L_27 = ___2_bytesConsumed;
		bool L_28;
		L_28 = ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A(L_26, L_27, ThrowHelper_TryParseThrowFormatException_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBFB4DE17BFD660114F2AA08CB5AA41E225BB8A_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mC577E73F38D99A1F4E03877CCB6B668671ECF9A3 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int32_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0095;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0095;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0095;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		int32_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseInt32D_m218C17C141E4C3717C62F29F483B71697ED8BC13(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		int32_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseInt32N_m6C6EBBC84033C7B9CCAEA06F7A30379D7ECD8D3B(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		int32_t* L_20 = ___1_value;
		*((int32_t*)L_20) = (int32_t)0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_21 = ___0_source;
		int32_t* L_22 = ___1_value;
		uint32_t* L_23;
		L_23 = il2cpp_unsafe_as_ref<uint32_t>(L_22);
		int32_t* L_24 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE(L_21, L_23, L_24, NULL);
		return L_25;
	}

IL_0095:
	{
		int32_t* L_26 = ___1_value;
		int32_t* L_27 = ___2_bytesConsumed;
		bool L_28;
		L_28 = ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE(L_26, L_27, ThrowHelper_TryParseThrowFormatException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m30683E5B891EC1186B50CA0E8EB505EF58CEEEDE_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_mA6EAEAF4003018EF2A5A9F82C187733429820FC6 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int64_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0096;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0096;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0096;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0096;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		int64_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseInt64D_m2B902B108F0FA27D2199EFD0E41D3441F707C352(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		int64_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseInt64N_m01511E988A734FCBA2A5EC18AC7EFB4B8028F11C(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		int64_t* L_20 = ___1_value;
		*((int64_t*)L_20) = (int64_t)((int64_t)0);
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_21 = ___0_source;
		int64_t* L_22 = ___1_value;
		uint64_t* L_23;
		L_23 = il2cpp_unsafe_as_ref<uint64_t>(L_22);
		int32_t* L_24 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133(L_21, L_23, L_24, NULL);
		return L_25;
	}

IL_0096:
	{
		int64_t* L_26 = ___1_value;
		int32_t* L_27 = ___2_bytesConsumed;
		bool L_28;
		L_28 = ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2(L_26, L_27, ThrowHelper_TryParseThrowFormatException_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD8281B6FEDA015200900F20AA7E47FF55FF468A2_RuntimeMethod_var);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseSByteD_mBE600D3E0F962EB93C306077CF1D58102B41A9FD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0144;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		V_3 = 0;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00a8;
		}
	}

IL_007d:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_22) < ((uint32_t)L_23))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_24 = V_1;
		uint8_t* L_25;
		L_25 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_24, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_26 = *((uint8_t*)L_25);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_28, NULL);
		if (!L_29)
		{
			goto IL_014c;
		}
	}

IL_00a8:
	{
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)48)));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_32) < ((uint32_t)L_33))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_34 = V_1;
		uint8_t* L_35;
		L_35 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_34, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_36 = *((uint8_t*)L_35);
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_40)), L_41)), ((int32_t)48)));
		int32_t L_42 = V_1;
		int32_t L_43;
		L_43 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_42) < ((uint32_t)L_43))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_44 = V_1;
		uint8_t* L_45;
		L_45 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_44, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_46 = *((uint8_t*)L_45);
		V_2 = L_46;
		int32_t L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_47, NULL);
		if (!L_48)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)10))), L_51)), ((int32_t)48)));
		int32_t L_52 = V_3;
		int32_t L_53 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_52))) > ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)127)), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_53)), 1))/2))))))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_54) < ((uint32_t)L_55))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_56 = V_1;
		uint8_t* L_57;
		L_57 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_56, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_58 = *((uint8_t*)L_57);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_58, NULL);
		if (!L_59)
		{
			goto IL_014c;
		}
	}

IL_0144:
	{
		int32_t* L_60 = ___2_bytesConsumed;
		*((int32_t*)L_60) = (int32_t)0;
		int8_t* L_61 = ___1_value;
		*((int8_t*)L_61) = (int8_t)0;
		return (bool)0;
	}

IL_014c:
	{
		int32_t* L_62 = ___2_bytesConsumed;
		int32_t L_63 = V_1;
		*((int32_t*)L_62) = (int32_t)L_63;
		int8_t* L_64 = ___1_value;
		int32_t L_65 = V_3;
		int32_t L_66 = V_0;
		*((int8_t*)L_64) = (int8_t)((int8_t)((int32_t)il2cpp_codegen_multiply(L_65, L_66)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt16D_mCA559D4759834B885308B79D5F098A1D7DE124FA (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_01a7;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		V_3 = 0;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00a8;
		}
	}

IL_007d:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_22) < ((uint32_t)L_23))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_24 = V_1;
		uint8_t* L_25;
		L_25 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_24, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_26 = *((uint8_t*)L_25);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_28, NULL);
		if (!L_29)
		{
			goto IL_01af;
		}
	}

IL_00a8:
	{
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)48)));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_32) < ((uint32_t)L_33))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_34 = V_1;
		uint8_t* L_35;
		L_35 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_34, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_36 = *((uint8_t*)L_35);
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_40)), L_41)), ((int32_t)48)));
		int32_t L_42 = V_1;
		int32_t L_43;
		L_43 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_42) < ((uint32_t)L_43))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_44 = V_1;
		uint8_t* L_45;
		L_45 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_44, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_46 = *((uint8_t*)L_45);
		V_2 = L_46;
		int32_t L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_47, NULL);
		if (!L_48)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_50)), L_51)), ((int32_t)48)));
		int32_t L_52 = V_1;
		int32_t L_53;
		L_53 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_52) < ((uint32_t)L_53))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_54 = V_1;
		uint8_t* L_55;
		L_55 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_54, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_56 = *((uint8_t*)L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_57, NULL);
		if (!L_58)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_3;
		int32_t L_61 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_60)), L_61)), ((int32_t)48)));
		int32_t L_62 = V_1;
		int32_t L_63;
		L_63 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_62) < ((uint32_t)L_63))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_64 = V_1;
		uint8_t* L_65;
		L_65 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_64, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_66 = *((uint8_t*)L_65);
		V_2 = L_66;
		int32_t L_67 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_67, NULL);
		if (!L_68)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_69 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_70 = V_3;
		int32_t L_71 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_70, ((int32_t)10))), L_71)), ((int32_t)48)));
		int32_t L_72 = V_3;
		int32_t L_73 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_72))) > ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)32767)), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_73)), 1))/2))))))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_74 = V_1;
		int32_t L_75;
		L_75 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_74) < ((uint32_t)L_75))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_76 = V_1;
		uint8_t* L_77;
		L_77 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_76, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_78 = *((uint8_t*)L_77);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_78, NULL);
		if (!L_79)
		{
			goto IL_01af;
		}
	}

IL_01a7:
	{
		int32_t* L_80 = ___2_bytesConsumed;
		*((int32_t*)L_80) = (int32_t)0;
		int16_t* L_81 = ___1_value;
		*((int16_t*)L_81) = (int16_t)0;
		return (bool)0;
	}

IL_01af:
	{
		int32_t* L_82 = ___2_bytesConsumed;
		int32_t L_83 = V_1;
		*((int32_t*)L_82) = (int32_t)L_83;
		int16_t* L_84 = ___1_value;
		int32_t L_85 = V_3;
		int32_t L_86 = V_0;
		*((int16_t*)L_84) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply(L_85, L_86)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt32D_m218C17C141E4C3717C62F29F483B71697ED8BC13 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_02a2;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		V_3 = 0;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00a8;
		}
	}

IL_007d:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_22) < ((uint32_t)L_23))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_24 = V_1;
		uint8_t* L_25;
		L_25 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_24, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_26 = *((uint8_t*)L_25);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_28, NULL);
		if (!L_29)
		{
			goto IL_02aa;
		}
	}

IL_00a8:
	{
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)48)));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_32) < ((uint32_t)L_33))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_34 = V_1;
		uint8_t* L_35;
		L_35 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_34, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_36 = *((uint8_t*)L_35);
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_40)), L_41)), ((int32_t)48)));
		int32_t L_42 = V_1;
		int32_t L_43;
		L_43 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_42) < ((uint32_t)L_43))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_44 = V_1;
		uint8_t* L_45;
		L_45 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_44, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_46 = *((uint8_t*)L_45);
		V_2 = L_46;
		int32_t L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_47, NULL);
		if (!L_48)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_50)), L_51)), ((int32_t)48)));
		int32_t L_52 = V_1;
		int32_t L_53;
		L_53 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_52) < ((uint32_t)L_53))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_54 = V_1;
		uint8_t* L_55;
		L_55 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_54, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_56 = *((uint8_t*)L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_57, NULL);
		if (!L_58)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_3;
		int32_t L_61 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_60)), L_61)), ((int32_t)48)));
		int32_t L_62 = V_1;
		int32_t L_63;
		L_63 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_62) < ((uint32_t)L_63))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_64 = V_1;
		uint8_t* L_65;
		L_65 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_64, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_66 = *((uint8_t*)L_65);
		V_2 = L_66;
		int32_t L_67 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_67, NULL);
		if (!L_68)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_69 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_70 = V_3;
		int32_t L_71 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_70)), L_71)), ((int32_t)48)));
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_72) < ((uint32_t)L_73))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_74 = V_1;
		uint8_t* L_75;
		L_75 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_74, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_76 = *((uint8_t*)L_75);
		V_2 = L_76;
		int32_t L_77 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		int32_t L_80 = V_3;
		int32_t L_81 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_80)), L_81)), ((int32_t)48)));
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_82) < ((uint32_t)L_83))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_84 = V_1;
		uint8_t* L_85;
		L_85 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_84, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_86 = *((uint8_t*)L_85);
		V_2 = L_86;
		int32_t L_87 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_87, NULL);
		if (!L_88)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_89 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_3;
		int32_t L_91 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_90)), L_91)), ((int32_t)48)));
		int32_t L_92 = V_1;
		int32_t L_93;
		L_93 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_92) < ((uint32_t)L_93))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_94 = V_1;
		uint8_t* L_95;
		L_95 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_94, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_96 = *((uint8_t*)L_95);
		V_2 = L_96;
		int32_t L_97 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_97, NULL);
		if (!L_98)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_99 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_3;
		int32_t L_101 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_100)), L_101)), ((int32_t)48)));
		int32_t L_102 = V_1;
		int32_t L_103;
		L_103 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_102) < ((uint32_t)L_103))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_104 = V_1;
		uint8_t* L_105;
		L_105 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_104, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_106 = *((uint8_t*)L_105);
		V_2 = L_106;
		int32_t L_107 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_107, NULL);
		if (!L_108)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		int32_t L_110 = V_3;
		int32_t L_111 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_110)), L_111)), ((int32_t)48)));
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_112) < ((uint32_t)L_113))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_114 = V_1;
		uint8_t* L_115;
		L_115 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_114, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_116 = *((uint8_t*)L_115);
		V_2 = L_116;
		int32_t L_117 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_118;
		L_118 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_117, NULL);
		if (!L_118)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_119 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		int32_t L_120 = V_3;
		if ((((int32_t)L_120) > ((int32_t)((int32_t)214748364))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_121 = V_3;
		int32_t L_122 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_121, ((int32_t)10))), L_122)), ((int32_t)48)));
		int32_t L_123 = V_3;
		int32_t L_124 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_123))) > ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)2147483647LL)), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_124)), 1))/2))))))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_125 = V_1;
		int32_t L_126;
		L_126 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_125) < ((uint32_t)L_126))))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_127 = V_1;
		uint8_t* L_128;
		L_128 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_127, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_129 = *((uint8_t*)L_128);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_130;
		L_130 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_129, NULL);
		if (!L_130)
		{
			goto IL_02aa;
		}
	}

IL_02a2:
	{
		int32_t* L_131 = ___2_bytesConsumed;
		*((int32_t*)L_131) = (int32_t)0;
		int32_t* L_132 = ___1_value;
		*((int32_t*)L_132) = (int32_t)0;
		return (bool)0;
	}

IL_02aa:
	{
		int32_t* L_133 = ___2_bytesConsumed;
		int32_t L_134 = V_1;
		*((int32_t*)L_133) = (int32_t)L_134;
		int32_t* L_135 = ___1_value;
		int32_t L_136 = V_3;
		int32_t L_137 = V_0;
		*((int32_t*)L_135) = (int32_t)((int32_t)il2cpp_codegen_multiply(L_136, L_137));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt64D_m2B902B108F0FA27D2199EFD0E41D3441F707C352 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	int32_t V_9 = 0;
	int64_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B34_0 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		int64_t* L_2 = ___1_value;
		*((int64_t*)L_2) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0016:
	{
		V_0 = 0;
		V_1 = 1;
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0044;
		}
	}
	{
		V_0 = 1;
		V_1 = (-1);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_7 = ___2_bytesConsumed;
		*((int32_t*)L_7) = (int32_t)0;
		int64_t* L_8 = ___1_value;
		*((int64_t*)L_8) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0044:
	{
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 1;
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_13 = ___2_bytesConsumed;
		*((int32_t*)L_13) = (int32_t)0;
		int64_t* L_14 = ___1_value;
		*((int64_t*)L_14) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_006c:
	{
		int32_t L_15 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)19), L_15));
		int32_t L_16 = V_0;
		uint8_t* L_17;
		L_17 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_16, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		V_3 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)48))));
		int64_t L_19 = V_3;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)0))))
		{
			goto IL_0090;
		}
	}
	{
		int64_t L_20 = V_3;
		if ((((int64_t)L_20) <= ((int64_t)((int64_t)((int32_t)9)))))
		{
			goto IL_0099;
		}
	}

IL_0090:
	{
		int32_t* L_21 = ___2_bytesConsumed;
		*((int32_t*)L_21) = (int32_t)0;
		int64_t* L_22 = ___1_value;
		*((int64_t*)L_22) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0099:
	{
		int64_t L_23 = V_3;
		V_4 = L_23;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_26 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_00f4;
	}

IL_00b3:
	{
		int32_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_27, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_29 = *((uint8_t*)L_28);
		V_6 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)48))));
		int64_t L_30 = V_6;
		if ((((int64_t)L_30) < ((int64_t)((int64_t)0))))
		{
			goto IL_00d6;
		}
	}
	{
		int64_t L_31 = V_6;
		if ((((int64_t)L_31) <= ((int64_t)((int64_t)((int32_t)9)))))
		{
			goto IL_00e3;
		}
	}

IL_00d6:
	{
		int32_t* L_32 = ___2_bytesConsumed;
		int32_t L_33 = V_5;
		*((int32_t*)L_32) = (int32_t)L_33;
		int64_t* L_34 = ___1_value;
		uint64_t L_35 = V_4;
		int32_t L_36 = V_1;
		*((int64_t*)L_34) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_35, ((int64_t)L_36)));
		return (bool)1;
	}

IL_00e3:
	{
		uint64_t L_37 = V_4;
		int64_t L_38 = V_6;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, ((int64_t)((int32_t)10)))), L_38));
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f4:
	{
		int32_t L_40 = V_5;
		int32_t L_41;
		L_41 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_0207;
	}

IL_0104:
	{
		int32_t L_42 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_014f;
	}

IL_010e:
	{
		int32_t L_43 = V_7;
		uint8_t* L_44;
		L_44 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_43, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_45 = *((uint8_t*)L_44);
		V_8 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)48))));
		int64_t L_46 = V_8;
		if ((((int64_t)L_46) < ((int64_t)((int64_t)0))))
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_47 = V_8;
		if ((((int64_t)L_47) <= ((int64_t)((int64_t)((int32_t)9)))))
		{
			goto IL_013e;
		}
	}

IL_0131:
	{
		int32_t* L_48 = ___2_bytesConsumed;
		int32_t L_49 = V_7;
		*((int32_t*)L_48) = (int32_t)L_49;
		int64_t* L_50 = ___1_value;
		uint64_t L_51 = V_4;
		int32_t L_52 = V_1;
		*((int64_t*)L_50) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_51, ((int64_t)L_52)));
		return (bool)1;
	}

IL_013e:
	{
		uint64_t L_53 = V_4;
		int64_t L_54 = V_8;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, ((int64_t)((int32_t)10)))), L_54));
		int32_t L_55 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_014f:
	{
		int32_t L_56 = V_7;
		int32_t L_57 = V_2;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_57, 1)))))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_58 = V_2;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		goto IL_01f9;
	}

IL_0160:
	{
		int32_t L_59 = V_9;
		uint8_t* L_60;
		L_60 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_59, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_61 = *((uint8_t*)L_60);
		V_10 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)48))));
		int64_t L_62 = V_10;
		if ((((int64_t)L_62) < ((int64_t)((int64_t)0))))
		{
			goto IL_0183;
		}
	}
	{
		int64_t L_63 = V_10;
		if ((((int64_t)L_63) <= ((int64_t)((int64_t)((int32_t)9)))))
		{
			goto IL_0190;
		}
	}

IL_0183:
	{
		int32_t* L_64 = ___2_bytesConsumed;
		int32_t L_65 = V_9;
		*((int32_t*)L_64) = (int32_t)L_65;
		int64_t* L_66 = ___1_value;
		uint64_t L_67 = V_4;
		int32_t L_68 = V_1;
		*((int64_t*)L_66) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_67, ((int64_t)L_68)));
		return (bool)1;
	}

IL_0190:
	{
		int32_t L_69 = V_1;
		V_11 = (bool)((((int32_t)L_69) > ((int32_t)0))? 1 : 0);
		int64_t L_70 = V_10;
		if ((((int64_t)L_70) > ((int64_t)((int64_t)8))))
		{
			goto IL_01b7;
		}
	}
	{
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_01b1;
		}
	}
	{
		int64_t L_72 = V_10;
		G_B34_0 = ((((int64_t)L_72) > ((int64_t)((int64_t)7)))? 1 : 0);
		goto IL_01b8;
	}

IL_01b1:
	{
		G_B34_0 = 0;
		goto IL_01b8;
	}

IL_01b7:
	{
		G_B34_0 = 1;
	}

IL_01b8:
	{
		V_12 = (bool)G_B34_0;
		uint64_t L_73 = V_4;
		if ((!(((uint64_t)L_73) <= ((uint64_t)((int64_t)922337203685477580LL)))))
		{
			goto IL_01df;
		}
	}
	{
		uint64_t L_74 = V_4;
		bool L_75 = V_12;
		if (!((int32_t)(((((int64_t)L_74) == ((int64_t)((int64_t)922337203685477580LL)))? 1 : 0)&(int32_t)L_75)))
		{
			goto IL_01e8;
		}
	}

IL_01df:
	{
		int32_t* L_76 = ___2_bytesConsumed;
		*((int32_t*)L_76) = (int32_t)0;
		int64_t* L_77 = ___1_value;
		*((int64_t*)L_77) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_01e8:
	{
		uint64_t L_78 = V_4;
		int64_t L_79 = V_10;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_78, ((int64_t)((int32_t)10)))), L_79));
		int32_t L_80 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01f9:
	{
		int32_t L_81 = V_9;
		int32_t L_82;
		L_82 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_0160;
		}
	}

IL_0207:
	{
		int32_t* L_83 = ___2_bytesConsumed;
		int32_t L_84;
		L_84 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_83) = (int32_t)L_84;
		int64_t* L_85 = ___1_value;
		uint64_t L_86 = V_4;
		int32_t L_87 = V_1;
		*((int64_t*)L_85) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)L_87)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseSByteN_mD3CC7E53D9C91845CB6786ABDC1C60366DAC71D8 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_011d;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)46))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48)));
	}

IL_0080:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) < ((uint32_t)L_24))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_25 = V_1;
		uint8_t* L_26;
		L_26 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_25, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_27 = *((uint8_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, ((int32_t)10))), L_33)), ((int32_t)48)));
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)127), ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_35)), 1))/2)))))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_011d;
	}

IL_00cf:
	{
		V_3 = 0;
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_1;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) < ((uint32_t)L_38))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_39 = V_1;
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_39, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_011d;
		}
	}

IL_00f2:
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_1;
		int32_t L_44;
		L_44 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_43) < ((uint32_t)L_44))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_45 = V_1;
		uint8_t* L_46;
		L_46 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_45, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_47 = *((uint8_t*)L_46);
		V_2 = L_47;
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)48))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_49, NULL);
		if (!L_50)
		{
			goto IL_0125;
		}
	}

IL_011d:
	{
		int32_t* L_51 = ___2_bytesConsumed;
		*((int32_t*)L_51) = (int32_t)0;
		int8_t* L_52 = ___1_value;
		*((int8_t*)L_52) = (int8_t)0;
		return (bool)0;
	}

IL_0125:
	{
		int32_t* L_53 = ___2_bytesConsumed;
		int32_t L_54 = V_1;
		*((int32_t*)L_53) = (int32_t)L_54;
		int8_t* L_55 = ___1_value;
		int32_t L_56 = V_3;
		int32_t L_57 = V_0;
		*((int8_t*)L_55) = (int8_t)((int8_t)((int32_t)il2cpp_codegen_multiply(L_56, L_57)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt16N_mDEBB6D945FF06290DA9BB72FB8DB89AA5EF123A7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)46))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_21 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48)));
	}

IL_0080:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) < ((uint32_t)L_24))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_25 = V_1;
		uint8_t* L_26;
		L_26 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_25, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_27 = *((uint8_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, ((int32_t)10))), L_33)), ((int32_t)48)));
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)32767), ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_35)), 1))/2)))))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0120;
	}

IL_00d2:
	{
		V_3 = 0;
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_1;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) < ((uint32_t)L_38))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_39 = V_1;
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_39, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0120;
		}
	}

IL_00f5:
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_1;
		int32_t L_44;
		L_44 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_43) < ((uint32_t)L_44))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_45 = V_1;
		uint8_t* L_46;
		L_46 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_45, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_47 = *((uint8_t*)L_46);
		V_2 = L_47;
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)48))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_49, NULL);
		if (!L_50)
		{
			goto IL_0128;
		}
	}

IL_0120:
	{
		int32_t* L_51 = ___2_bytesConsumed;
		*((int32_t*)L_51) = (int32_t)0;
		int16_t* L_52 = ___1_value;
		*((int16_t*)L_52) = (int16_t)0;
		return (bool)0;
	}

IL_0128:
	{
		int32_t* L_53 = ___2_bytesConsumed;
		int32_t L_54 = V_1;
		*((int32_t*)L_53) = (int32_t)L_54;
		int16_t* L_55 = ___1_value;
		int32_t L_56 = V_3;
		int32_t L_57 = V_0;
		*((int16_t*)L_55) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply(L_56, L_57)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt32N_m6C6EBBC84033C7B9CCAEA06F7A30379D7ECD8D3B (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_012e;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)46))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_21 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48)));
	}

IL_0080:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) < ((uint32_t)L_24))))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_25 = V_1;
		uint8_t* L_26;
		L_26 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_25, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_27 = *((uint8_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)214748364)))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_33, ((int32_t)10))), L_34)), ((int32_t)48)));
		int32_t L_35 = V_3;
		int32_t L_36 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_35))) <= ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)2147483647LL)), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_36)), 1))/2))))))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_012e;
	}

IL_00e0:
	{
		V_3 = 0;
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) < ((uint32_t)L_39))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_40 = V_1;
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_40, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_012e;
		}
	}

IL_0103:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_1;
		int32_t L_45;
		L_45 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_44) < ((uint32_t)L_45))))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_46 = V_1;
		uint8_t* L_47;
		L_47 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_46, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_48 = *((uint8_t*)L_47);
		V_2 = L_48;
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)48))))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_50, NULL);
		if (!L_51)
		{
			goto IL_0136;
		}
	}

IL_012e:
	{
		int32_t* L_52 = ___2_bytesConsumed;
		*((int32_t*)L_52) = (int32_t)0;
		int32_t* L_53 = ___1_value;
		*((int32_t*)L_53) = (int32_t)0;
		return (bool)0;
	}

IL_0136:
	{
		int32_t* L_54 = ___2_bytesConsumed;
		int32_t L_55 = V_1;
		*((int32_t*)L_54) = (int32_t)L_55;
		int32_t* L_56 = ___1_value;
		int32_t L_57 = V_3;
		int32_t L_58 = V_0;
		*((int32_t*)L_56) = (int32_t)((int32_t)il2cpp_codegen_multiply(L_57, L_58));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseInt64N_m01511E988A734FCBA2A5EC18AC7EFB4B8028F11C (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, int64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0139;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (-1);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_2 = L_10;
		goto IL_0068;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) < ((uint32_t)L_14))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_2 = L_17;
	}

IL_0068:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)46))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_21 = V_2;
		V_3 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48))));
	}

IL_0081:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) < ((uint32_t)L_24))))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_25 = V_1;
		uint8_t* L_26;
		L_26 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_25, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_27 = *((uint8_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_0142;
		}
	}
	{
		int64_t L_32 = V_3;
		if ((!(((uint64_t)L_32) <= ((uint64_t)((int64_t)922337203685477580LL)))))
		{
			goto IL_0139;
		}
	}
	{
		int64_t L_33 = V_3;
		int32_t L_34 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_33, ((int64_t)((int32_t)10)))), ((int64_t)L_34))), ((int64_t)((int32_t)48))));
		int64_t L_35 = V_3;
		int32_t L_36 = V_0;
		if ((!(((uint64_t)L_35) > ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(std::numeric_limits<int64_t>::max)()), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((-1), L_36)), 1))/2)))))))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0139;
	}

IL_00ea:
	{
		V_3 = ((int64_t)0);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) < ((uint32_t)L_39))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_40 = V_1;
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_40, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0139;
		}
	}

IL_010e:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_1;
		int32_t L_45;
		L_45 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_44) < ((uint32_t)L_45))))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_46 = V_1;
		uint8_t* L_47;
		L_47 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_46, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_48 = *((uint8_t*)L_47);
		V_2 = L_48;
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)48))))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_50, NULL);
		if (!L_51)
		{
			goto IL_0142;
		}
	}

IL_0139:
	{
		int32_t* L_52 = ___2_bytesConsumed;
		*((int32_t*)L_52) = (int32_t)0;
		int64_t* L_53 = ___1_value;
		*((int64_t*)L_53) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0142:
	{
		int32_t* L_54 = ___2_bytesConsumed;
		int32_t L_55 = V_1;
		*((int32_t*)L_54) = (int32_t)L_55;
		int64_t* L_56 = ___1_value;
		int64_t L_57 = V_3;
		int32_t L_58 = V_0;
		*((int64_t*)L_56) = (int64_t)((int64_t)il2cpp_codegen_multiply(L_57, ((int64_t)L_58)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m6DE5A4ACCECE1B1BA8A31A9BB4E1A65D8D0A2E21 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_008d;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008d;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		uint8_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseByteD_mA50D3CBD1F74CDC90E6718CBE3140A1A831327FD(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		uint8_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseByteN_m8D5761C9E966102F9D8EF5F8030E18DFC29CDCAD(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_20 = ___0_source;
		uint8_t* L_21 = ___1_value;
		int32_t* L_22 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Parser_TryParseByteX_mF2530ED3F2B5AAD126BF85B679AAF2816E16B155(L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_008d:
	{
		uint8_t* L_24 = ___1_value;
		int32_t* L_25 = ___2_bytesConsumed;
		bool L_26;
		L_26 = ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F(L_24, L_25, ThrowHelper_TryParseThrowFormatException_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m247835660B07C69E50CE2C36B418B465DCAEE06F_RuntimeMethod_var);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m3C350E11E55C889F601E0F44D82812BB27FCC8FB (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_008d;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008d;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		uint16_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseUInt16D_mE7D6948D2E014BF3D667D0282FE48A454FD88B48(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		uint16_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseUInt16N_mB50A99B4B9DFC2136FBECCBC2016812CAD4934CB(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_20 = ___0_source;
		uint16_t* L_21 = ___1_value;
		int32_t* L_22 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9(L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_008d:
	{
		uint16_t* L_24 = ___1_value;
		int32_t* L_25 = ___2_bytesConsumed;
		bool L_26;
		L_26 = ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F(L_24, L_25, ThrowHelper_TryParseThrowFormatException_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF30B2EF61DFAD4ACB07A983F5DAFBE266EDCEA8F_RuntimeMethod_var);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m05EC17339E494440B595E74C6B3666E9326C86D1 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_008d;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008d;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		uint32_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		uint32_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseUInt32N_m59E7E57141573F6B2FB4F466111DDD2B80DE8BBD(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_20 = ___0_source;
		uint32_t* L_21 = ___1_value;
		int32_t* L_22 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE(L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_008d:
	{
		uint32_t* L_24 = ___1_value;
		int32_t* L_25 = ___2_bytesConsumed;
		bool L_26;
		L_26 = ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962(L_24, L_25, ThrowHelper_TryParseThrowFormatException_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m816B7815A882FBF949CD09745EC29158D9DC1962_RuntimeMethod_var);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m9F0BDA6C094ADD72FFA5E5AA1AA32DD09D2B0737 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)68))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)71))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_008d;
	}

IL_0038:
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_7 = ___3_standardFormat;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_8 = ___3_standardFormat;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_008d;
	}

IL_0055:
	{
		Il2CppChar L_9 = ___3_standardFormat;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)103))))
		{
			goto IL_0072;
		}
	}
	{
		Il2CppChar L_10 = ___3_standardFormat;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_11 = ___3_standardFormat;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)120))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008d;
	}

IL_0072:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_12 = ___0_source;
		uint64_t* L_13 = ___1_value;
		int32_t* L_14 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Parser_TryParseUInt64D_mE2E097A0AA674B5D253D1DA6D46BC07B5D551673(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_007b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_16 = ___0_source;
		uint64_t* L_17 = ___1_value;
		int32_t* L_18 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryParseUInt64N_m03150E6C4F9361804EC28F9C186B15529035FAE2(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0084:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_20 = ___0_source;
		uint64_t* L_21 = ___1_value;
		int32_t* L_22 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133(L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_008d:
	{
		uint64_t* L_24 = ___1_value;
		int32_t* L_25 = ___2_bytesConsumed;
		bool L_26;
		L_26 = ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9(L_24, L_25, ThrowHelper_TryParseThrowFormatException_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFEF684E559ED67A47B81CA312CF49A121E9F44B9_RuntimeMethod_var);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteD_mA50D3CBD1F74CDC90E6718CBE3140A1A831327FD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_00ed;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		V_2 = 0;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_10, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)48))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_00f5;
		}
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)48)));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_18) < ((uint32_t)L_19))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_20 = V_0;
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_20, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_26)), L_27)), ((int32_t)48)));
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_30, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_1 = L_32;
		int32_t L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_2;
		int32_t L_37 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_36, ((int32_t)10))), L_37)), ((int32_t)48)));
		int32_t L_38 = V_2;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)255)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_39 = V_0;
		int32_t L_40;
		L_40 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_39) < ((uint32_t)L_40))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_41 = V_0;
		uint8_t* L_42;
		L_42 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_41, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_43 = *((uint8_t*)L_42);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_00f5;
		}
	}

IL_00ed:
	{
		int32_t* L_45 = ___2_bytesConsumed;
		*((int32_t*)L_45) = (int32_t)0;
		uint8_t* L_46 = ___1_value;
		*((int8_t*)L_46) = (int8_t)0;
		return (bool)0;
	}

IL_00f5:
	{
		int32_t* L_47 = ___2_bytesConsumed;
		int32_t L_48 = V_0;
		*((int32_t*)L_47) = (int32_t)L_48;
		uint8_t* L_49 = ___1_value;
		int32_t L_50 = V_2;
		*((int8_t*)L_49) = (int8_t)((int32_t)(uint8_t)L_50);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16D_mE7D6948D2E014BF3D667D0282FE48A454FD88B48 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_014d;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		V_2 = 0;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_10, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)48))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_0155;
		}
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)48)));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_18) < ((uint32_t)L_19))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_20 = V_0;
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_20, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_26)), L_27)), ((int32_t)48)));
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_30, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_1 = L_32;
		int32_t L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_2;
		int32_t L_37 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_36)), L_37)), ((int32_t)48)));
		int32_t L_38 = V_0;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) < ((uint32_t)L_39))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_40 = V_0;
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_40, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_46)), L_47)), ((int32_t)48)));
		int32_t L_48 = V_0;
		int32_t L_49;
		L_49 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_48) < ((uint32_t)L_49))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_50, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_52 = *((uint8_t*)L_51);
		V_1 = L_52;
		int32_t L_53 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_53, NULL);
		if (!L_54)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_2;
		int32_t L_57 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)10))), L_57)), ((int32_t)48)));
		int32_t L_58 = V_2;
		if ((!(((uint32_t)L_58) <= ((uint32_t)((int32_t)65535)))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_59 = V_0;
		int32_t L_60;
		L_60 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_59) < ((uint32_t)L_60))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_61 = V_0;
		uint8_t* L_62;
		L_62 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_61, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_63 = *((uint8_t*)L_62);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_63, NULL);
		if (!L_64)
		{
			goto IL_0155;
		}
	}

IL_014d:
	{
		int32_t* L_65 = ___2_bytesConsumed;
		*((int32_t*)L_65) = (int32_t)0;
		uint16_t* L_66 = ___1_value;
		*((int16_t*)L_66) = (int16_t)0;
		return (bool)0;
	}

IL_0155:
	{
		int32_t* L_67 = ___2_bytesConsumed;
		int32_t L_68 = V_0;
		*((int32_t*)L_67) = (int32_t)L_68;
		uint16_t* L_69 = ___1_value;
		int32_t L_70 = V_2;
		*((int16_t*)L_69) = (int16_t)((int32_t)(uint16_t)L_70);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0250;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		V_2 = 0;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0250;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_10, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)48))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_0258;
		}
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)48)));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_18) < ((uint32_t)L_19))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_20 = V_0;
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_20, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_26)), L_27)), ((int32_t)48)));
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_30, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_1 = L_32;
		int32_t L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_2;
		int32_t L_37 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_36)), L_37)), ((int32_t)48)));
		int32_t L_38 = V_0;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) < ((uint32_t)L_39))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_40 = V_0;
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_40, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_46)), L_47)), ((int32_t)48)));
		int32_t L_48 = V_0;
		int32_t L_49;
		L_49 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_48) < ((uint32_t)L_49))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_50, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_52 = *((uint8_t*)L_51);
		V_1 = L_52;
		int32_t L_53 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_53, NULL);
		if (!L_54)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_2;
		int32_t L_57 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_56)), L_57)), ((int32_t)48)));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_58) < ((uint32_t)L_59))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_60 = V_0;
		uint8_t* L_61;
		L_61 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_60, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_62 = *((uint8_t*)L_61);
		V_1 = L_62;
		int32_t L_63 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_63, NULL);
		if (!L_64)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_2;
		int32_t L_67 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_66)), L_67)), ((int32_t)48)));
		int32_t L_68 = V_0;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_68) < ((uint32_t)L_69))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_70 = V_0;
		uint8_t* L_71;
		L_71 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_70, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_72 = *((uint8_t*)L_71);
		V_1 = L_72;
		int32_t L_73 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_73, NULL);
		if (!L_74)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_75 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_2;
		int32_t L_77 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_76)), L_77)), ((int32_t)48)));
		int32_t L_78 = V_0;
		int32_t L_79;
		L_79 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_78) < ((uint32_t)L_79))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_80, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_82 = *((uint8_t*)L_81);
		V_1 = L_82;
		int32_t L_83 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_83, NULL);
		if (!L_84)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_85 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		int32_t L_86 = V_2;
		int32_t L_87 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_86)), L_87)), ((int32_t)48)));
		int32_t L_88 = V_0;
		int32_t L_89;
		L_89 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_88) < ((uint32_t)L_89))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_90 = V_0;
		uint8_t* L_91;
		L_91 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_90, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_92 = *((uint8_t*)L_91);
		V_1 = L_92;
		int32_t L_93 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_93, NULL);
		if (!L_94)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_95 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		int32_t L_96 = V_2;
		int32_t L_97 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_96)), L_97)), ((int32_t)48)));
		int32_t L_98 = V_0;
		int32_t L_99;
		L_99 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_98) < ((uint32_t)L_99))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_100 = V_0;
		uint8_t* L_101;
		L_101 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_100, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_102 = *((uint8_t*)L_101);
		V_1 = L_102;
		int32_t L_103 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_104;
		L_104 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_103, NULL);
		if (!L_104)
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_105 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_2;
		if ((!(((uint32_t)L_106) <= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_0250;
		}
	}
	{
		int32_t L_107 = V_2;
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_108 = V_1;
		if ((((int32_t)L_108) > ((int32_t)((int32_t)53))))
		{
			goto IL_0250;
		}
	}

IL_0226:
	{
		int32_t L_109 = V_2;
		int32_t L_110 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_109, ((int32_t)10))), L_110)), ((int32_t)48)));
		int32_t L_111 = V_0;
		int32_t L_112;
		L_112 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_111) < ((uint32_t)L_112))))
		{
			goto IL_0258;
		}
	}
	{
		int32_t L_113 = V_0;
		uint8_t* L_114;
		L_114 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_113, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_115 = *((uint8_t*)L_114);
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_115, NULL);
		if (!L_116)
		{
			goto IL_0258;
		}
	}

IL_0250:
	{
		int32_t* L_117 = ___2_bytesConsumed;
		*((int32_t*)L_117) = (int32_t)0;
		uint32_t* L_118 = ___1_value;
		*((int32_t*)L_118) = (int32_t)0;
		return (bool)0;
	}

IL_0258:
	{
		int32_t* L_119 = ___2_bytesConsumed;
		int32_t L_120 = V_0;
		*((int32_t*)L_119) = (int32_t)L_120;
		uint32_t* L_121 = ___1_value;
		int32_t L_122 = V_2;
		*((int32_t*)L_121) = (int32_t)L_122;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64D_mE2E097A0AA674B5D253D1DA6D46BC07B5D551673 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		uint64_t* L_2 = ___1_value;
		*((int64_t*)L_2) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0016:
	{
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		V_0 = ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)48)))));
		uint64_t L_5 = V_0;
		if ((!(((uint64_t)L_5) > ((uint64_t)((int64_t)((int32_t)9))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t* L_6 = ___2_bytesConsumed;
		*((int32_t*)L_6) = (int32_t)0;
		uint64_t* L_7 = ___1_value;
		*((int64_t*)L_7) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0036:
	{
		uint64_t L_8 = V_0;
		V_1 = L_8;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)19))))
		{
			goto IL_0087;
		}
	}
	{
		V_2 = 1;
		goto IL_0078;
	}

IL_004d:
	{
		int32_t L_10 = V_2;
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_10, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_3 = ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)48)))));
		uint64_t L_13 = V_3;
		if ((!(((uint64_t)L_13) > ((uint64_t)((int64_t)((int32_t)9))))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_14 = ___2_bytesConsumed;
		int32_t L_15 = V_2;
		*((int32_t*)L_14) = (int32_t)L_15;
		uint64_t* L_16 = ___1_value;
		uint64_t L_17 = V_1;
		*((int64_t*)L_16) = (int64_t)L_17;
		return (bool)1;
	}

IL_006c:
	{
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_3;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_18, ((int64_t)((int32_t)10)))), (int64_t)L_19));
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0078:
	{
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_013d;
	}

IL_0087:
	{
		V_4 = 1;
		goto IL_00c1;
	}

IL_008f:
	{
		int32_t L_23 = V_4;
		uint8_t* L_24;
		L_24 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_23, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_25 = *((uint8_t*)L_24);
		V_5 = ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_25, ((int32_t)48)))));
		uint64_t L_26 = V_5;
		if ((!(((uint64_t)L_26) > ((uint64_t)((int64_t)((int32_t)9))))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t* L_27 = ___2_bytesConsumed;
		int32_t L_28 = V_4;
		*((int32_t*)L_27) = (int32_t)L_28;
		uint64_t* L_29 = ___1_value;
		uint64_t L_30 = V_1;
		*((int64_t*)L_29) = (int64_t)L_30;
		return (bool)1;
	}

IL_00b2:
	{
		uint64_t L_31 = V_1;
		uint64_t L_32 = V_5;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_31, ((int64_t)((int32_t)10)))), (int64_t)L_32));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c1:
	{
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)18))))
		{
			goto IL_008f;
		}
	}
	{
		V_6 = ((int32_t)18);
		goto IL_0132;
	}

IL_00d0:
	{
		int32_t L_35 = V_6;
		uint8_t* L_36;
		L_36 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_35, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_37 = *((uint8_t*)L_36);
		V_7 = ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_37, ((int32_t)48)))));
		uint64_t L_38 = V_7;
		if ((!(((uint64_t)L_38) > ((uint64_t)((int64_t)((int32_t)9))))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t* L_39 = ___2_bytesConsumed;
		int32_t L_40 = V_6;
		*((int32_t*)L_39) = (int32_t)L_40;
		uint64_t* L_41 = ___1_value;
		uint64_t L_42 = V_1;
		*((int64_t*)L_41) = (int64_t)L_42;
		return (bool)1;
	}

IL_00f3:
	{
		uint64_t L_43 = V_1;
		if ((!(((uint64_t)L_43) <= ((uint64_t)((int64_t)1844674407370955161LL)))))
		{
			goto IL_011a;
		}
	}
	{
		uint64_t L_44 = V_1;
		if ((!(((uint64_t)L_44) == ((uint64_t)((int64_t)1844674407370955161LL)))))
		{
			goto IL_0123;
		}
	}
	{
		uint64_t L_45 = V_7;
		if ((!(((uint64_t)L_45) > ((uint64_t)((int64_t)5)))))
		{
			goto IL_0123;
		}
	}

IL_011a:
	{
		int32_t* L_46 = ___2_bytesConsumed;
		*((int32_t*)L_46) = (int32_t)0;
		uint64_t* L_47 = ___1_value;
		*((int64_t*)L_47) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0123:
	{
		uint64_t L_48 = V_1;
		uint64_t L_49 = V_7;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_48, ((int64_t)((int32_t)10)))), (int64_t)L_49));
		int32_t L_50 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0132:
	{
		int32_t L_51 = V_6;
		int32_t L_52;
		L_52 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00d0;
		}
	}

IL_013d:
	{
		int32_t* L_53 = ___2_bytesConsumed;
		int32_t L_54;
		L_54 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_53) = (int32_t)L_54;
		uint64_t* L_55 = ___1_value;
		uint64_t L_56 = V_1;
		*((int64_t*)L_55) = (int64_t)L_56;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteN_m8D5761C9E966102F9D8EF5F8030E18DFC29CDCAD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = L_10;
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)46))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)48)));
	}

IL_0054:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_18, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)44))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)10))), L_26)), ((int32_t)48)));
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_00ec;
	}

IL_009e:
	{
		V_2 = 0;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_29) < ((uint32_t)L_30))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_31 = V_0;
		uint8_t* L_32;
		L_32 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_31, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_33 = *((uint8_t*)L_32);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00ec;
		}
	}

IL_00c1:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_35) < ((uint32_t)L_36))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_37 = V_0;
		uint8_t* L_38;
		L_38 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_37, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_39 = *((uint8_t*)L_38);
		V_1 = L_39;
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)48))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_41, NULL);
		if (!L_42)
		{
			goto IL_00f4;
		}
	}

IL_00ec:
	{
		int32_t* L_43 = ___2_bytesConsumed;
		*((int32_t*)L_43) = (int32_t)0;
		uint8_t* L_44 = ___1_value;
		*((int8_t*)L_44) = (int8_t)0;
		return (bool)0;
	}

IL_00f4:
	{
		int32_t* L_45 = ___2_bytesConsumed;
		int32_t L_46 = V_0;
		*((int32_t*)L_45) = (int32_t)L_46;
		uint8_t* L_47 = ___1_value;
		int32_t L_48 = V_2;
		*((int8_t*)L_47) = (int8_t)((int32_t)(uint8_t)L_48);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16N_mB50A99B4B9DFC2136FBECCBC2016812CAD4934CB (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = L_10;
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)46))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)48)));
	}

IL_0054:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_18, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)44))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)10))), L_26)), ((int32_t)48)));
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_00ec;
	}

IL_009e:
	{
		V_2 = 0;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_29) < ((uint32_t)L_30))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_31 = V_0;
		uint8_t* L_32;
		L_32 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_31, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_33 = *((uint8_t*)L_32);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00ec;
		}
	}

IL_00c1:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_35) < ((uint32_t)L_36))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_37 = V_0;
		uint8_t* L_38;
		L_38 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_37, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_39 = *((uint8_t*)L_38);
		V_1 = L_39;
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)48))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_41, NULL);
		if (!L_42)
		{
			goto IL_00f4;
		}
	}

IL_00ec:
	{
		int32_t* L_43 = ___2_bytesConsumed;
		*((int32_t*)L_43) = (int32_t)0;
		uint16_t* L_44 = ___1_value;
		*((int16_t*)L_44) = (int16_t)0;
		return (bool)0;
	}

IL_00f4:
	{
		int32_t* L_45 = ___2_bytesConsumed;
		int32_t L_46 = V_0;
		*((int32_t*)L_45) = (int32_t)L_46;
		uint16_t* L_47 = ___1_value;
		int32_t L_48 = V_2;
		*((int16_t*)L_47) = (int16_t)((int32_t)(uint16_t)L_48);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32N_m59E7E57141573F6B2FB4F466111DDD2B80DE8BBD (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = L_10;
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)46))))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)48)));
	}

IL_0054:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_18, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)44))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)53))))
		{
			goto IL_00ff;
		}
	}

IL_00a5:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_28, ((int32_t)10))), L_29)), ((int32_t)48)));
		goto IL_0054;
	}

IL_00b1:
	{
		V_2 = 0;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_31) < ((uint32_t)L_32))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_33 = V_0;
		uint8_t* L_34;
		L_34 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_33, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_35 = *((uint8_t*)L_34);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00ff;
		}
	}

IL_00d4:
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_0;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) < ((uint32_t)L_38))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_39 = V_0;
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_39, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		V_1 = L_41;
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)48))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_0107;
		}
	}

IL_00ff:
	{
		int32_t* L_45 = ___2_bytesConsumed;
		*((int32_t*)L_45) = (int32_t)0;
		uint32_t* L_46 = ___1_value;
		*((int32_t*)L_46) = (int32_t)0;
		return (bool)0;
	}

IL_0107:
	{
		int32_t* L_47 = ___2_bytesConsumed;
		int32_t L_48 = V_0;
		*((int32_t*)L_47) = (int32_t)L_48;
		uint32_t* L_49 = ___1_value;
		int32_t L_50 = V_2;
		*((int32_t*)L_49) = (int32_t)L_50;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64N_m03150E6C4F9361804EC28F9C186B15529035FAE2 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_010c;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_1, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_8, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = L_10;
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)46))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_14 = V_1;
		V_2 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)48))));
	}

IL_0055:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) < ((uint32_t)L_17))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_18, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)44))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		int64_t L_25 = V_2;
		if ((!(((uint64_t)L_25) <= ((uint64_t)((int64_t)1844674407370955161LL)))))
		{
			goto IL_010c;
		}
	}
	{
		int64_t L_26 = V_2;
		if ((!(((uint64_t)L_26) == ((uint64_t)((int64_t)1844674407370955161LL)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)53))))
		{
			goto IL_010c;
		}
	}

IL_00ae:
	{
		int64_t L_28 = V_2;
		int32_t L_29 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_28, ((int64_t)((int32_t)10)))), ((int64_t)L_29))), ((int64_t)((int32_t)48))));
		goto IL_0055;
	}

IL_00bd:
	{
		V_2 = ((int64_t)0);
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_31) < ((uint32_t)L_32))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_33 = V_0;
		uint8_t* L_34;
		L_34 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_33, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_35 = *((uint8_t*)L_34);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_010c;
		}
	}

IL_00e1:
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_0;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) < ((uint32_t)L_38))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_39 = V_0;
		uint8_t* L_40;
		L_40 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_39, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_41 = *((uint8_t*)L_40);
		V_1 = L_41;
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)48))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_0115;
		}
	}

IL_010c:
	{
		int32_t* L_45 = ___2_bytesConsumed;
		*((int32_t*)L_45) = (int32_t)0;
		uint64_t* L_46 = ___1_value;
		*((int64_t*)L_46) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0115:
	{
		int32_t* L_47 = ___2_bytesConsumed;
		int32_t L_48 = V_0;
		*((int32_t*)L_47) = (int32_t)L_48;
		uint64_t* L_49 = ___1_value;
		int64_t L_50 = V_2;
		*((int64_t*)L_49) = (int64_t)L_50;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseByteX_mF2530ED3F2B5AAD126BF85B679AAF2816E16B155 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint8_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		uint8_t* L_2 = ___1_value;
		*((int8_t*)L_2) = (int8_t)0;
		return (bool)0;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = (uint8_t)L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		uint8_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint8_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t* L_11 = ___2_bytesConsumed;
		*((int32_t*)L_11) = (int32_t)0;
		uint8_t* L_12 = ___1_value;
		*((int8_t*)L_12) = (int8_t)0;
		return (bool)0;
	}

IL_003c:
	{
		uint8_t L_13 = V_2;
		V_3 = L_13;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)2)))
		{
			goto IL_0093;
		}
	}
	{
		V_4 = 1;
		goto IL_0083;
	}

IL_0053:
	{
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_1 = (uint8_t)L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		uint8_t L_19 = V_1;
		NullCheck(L_18);
		uint8_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		uint8_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_23 = ___2_bytesConsumed;
		int32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint8_t* L_25 = ___1_value;
		uint32_t L_26 = V_3;
		*((int8_t*)L_25) = (int8_t)((int32_t)(uint8_t)L_26);
		return (bool)1;
	}

IL_0077:
	{
		uint32_t L_27 = V_3;
		uint8_t L_28 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<4)), (int32_t)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0083:
	{
		int32_t L_30 = V_4;
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0123;
	}

IL_0093:
	{
		V_5 = 1;
		goto IL_00cb;
	}

IL_009b:
	{
		int32_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_32, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_1 = (uint8_t)L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		uint8_t L_36 = V_1;
		NullCheck(L_35);
		uint8_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = L_38;
		uint8_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t* L_40 = ___2_bytesConsumed;
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		uint8_t* L_42 = ___1_value;
		uint32_t L_43 = V_3;
		*((int8_t*)L_42) = (int8_t)((int32_t)(uint8_t)L_43);
		return (bool)1;
	}

IL_00bf:
	{
		uint32_t L_44 = V_3;
		uint8_t L_45 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_44<<4)), (int32_t)L_45));
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00cb:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_009b;
		}
	}
	{
		V_6 = 2;
		goto IL_0118;
	}

IL_00d8:
	{
		int32_t L_48 = V_6;
		uint8_t* L_49;
		L_49 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_48, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		V_1 = (uint8_t)L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		uint8_t L_52 = V_1;
		NullCheck(L_51);
		uint8_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_2 = L_54;
		uint8_t L_55 = V_2;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t* L_56 = ___2_bytesConsumed;
		int32_t L_57 = V_6;
		*((int32_t*)L_56) = (int32_t)L_57;
		uint8_t* L_58 = ___1_value;
		uint32_t L_59 = V_3;
		*((int8_t*)L_58) = (int8_t)((int32_t)(uint8_t)L_59);
		return (bool)1;
	}

IL_00fc:
	{
		uint32_t L_60 = V_3;
		if ((!(((uint32_t)L_60) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t* L_61 = ___2_bytesConsumed;
		*((int32_t*)L_61) = (int32_t)0;
		uint8_t* L_62 = ___1_value;
		*((int8_t*)L_62) = (int8_t)0;
		return (bool)0;
	}

IL_010c:
	{
		uint32_t L_63 = V_3;
		uint8_t L_64 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_63<<4)), (int32_t)L_64));
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0118:
	{
		int32_t L_66 = V_6;
		int32_t L_67;
		L_67 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00d8;
		}
	}

IL_0123:
	{
		int32_t* L_68 = ___2_bytesConsumed;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_68) = (int32_t)L_69;
		uint8_t* L_70 = ___1_value;
		uint32_t L_71 = V_3;
		*((int8_t*)L_70) = (int8_t)((int32_t)(uint8_t)L_71);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt16X_m92596E585C04F0C2CF06E0481959C1D0647D00B9 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint16_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		uint16_t* L_2 = ___1_value;
		*((int16_t*)L_2) = (int16_t)0;
		return (bool)0;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = (uint8_t)L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		uint8_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint8_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t* L_11 = ___2_bytesConsumed;
		*((int32_t*)L_11) = (int32_t)0;
		uint16_t* L_12 = ___1_value;
		*((int16_t*)L_12) = (int16_t)0;
		return (bool)0;
	}

IL_003c:
	{
		uint8_t L_13 = V_2;
		V_3 = L_13;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)4)))
		{
			goto IL_0093;
		}
	}
	{
		V_4 = 1;
		goto IL_0083;
	}

IL_0053:
	{
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_1 = (uint8_t)L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		uint8_t L_19 = V_1;
		NullCheck(L_18);
		uint8_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		uint8_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_23 = ___2_bytesConsumed;
		int32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint16_t* L_25 = ___1_value;
		uint32_t L_26 = V_3;
		*((int16_t*)L_25) = (int16_t)((int32_t)(uint16_t)L_26);
		return (bool)1;
	}

IL_0077:
	{
		uint32_t L_27 = V_3;
		uint8_t L_28 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<4)), (int32_t)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0083:
	{
		int32_t L_30 = V_4;
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0126;
	}

IL_0093:
	{
		V_5 = 1;
		goto IL_00cb;
	}

IL_009b:
	{
		int32_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_32, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_1 = (uint8_t)L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		uint8_t L_36 = V_1;
		NullCheck(L_35);
		uint8_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = L_38;
		uint8_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t* L_40 = ___2_bytesConsumed;
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		uint16_t* L_42 = ___1_value;
		uint32_t L_43 = V_3;
		*((int16_t*)L_42) = (int16_t)((int32_t)(uint16_t)L_43);
		return (bool)1;
	}

IL_00bf:
	{
		uint32_t L_44 = V_3;
		uint8_t L_45 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_44<<4)), (int32_t)L_45));
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00cb:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		V_6 = 4;
		goto IL_011b;
	}

IL_00d8:
	{
		int32_t L_48 = V_6;
		uint8_t* L_49;
		L_49 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_48, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		V_1 = (uint8_t)L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		uint8_t L_52 = V_1;
		NullCheck(L_51);
		uint8_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_2 = L_54;
		uint8_t L_55 = V_2;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t* L_56 = ___2_bytesConsumed;
		int32_t L_57 = V_6;
		*((int32_t*)L_56) = (int32_t)L_57;
		uint16_t* L_58 = ___1_value;
		uint32_t L_59 = V_3;
		*((int16_t*)L_58) = (int16_t)((int32_t)(uint16_t)L_59);
		return (bool)1;
	}

IL_00fc:
	{
		uint32_t L_60 = V_3;
		if ((!(((uint32_t)L_60) > ((uint32_t)((int32_t)4095)))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t* L_61 = ___2_bytesConsumed;
		*((int32_t*)L_61) = (int32_t)0;
		uint16_t* L_62 = ___1_value;
		*((int16_t*)L_62) = (int16_t)0;
		return (bool)0;
	}

IL_010f:
	{
		uint32_t L_63 = V_3;
		uint8_t L_64 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_63<<4)), (int32_t)L_64));
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_011b:
	{
		int32_t L_66 = V_6;
		int32_t L_67;
		L_67 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00d8;
		}
	}

IL_0126:
	{
		int32_t* L_68 = ___2_bytesConsumed;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_68) = (int32_t)L_69;
		uint16_t* L_70 = ___1_value;
		uint32_t L_71 = V_3;
		*((int16_t*)L_70) = (int16_t)((int32_t)(uint16_t)L_71);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32X_mFE05C07EA252645A82F2A4A7F1FF6C5B05810CEE (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		uint32_t* L_2 = ___1_value;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = (uint8_t)L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		uint8_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint8_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t* L_11 = ___2_bytesConsumed;
		*((int32_t*)L_11) = (int32_t)0;
		uint32_t* L_12 = ___1_value;
		*((int32_t*)L_12) = (int32_t)0;
		return (bool)0;
	}

IL_003c:
	{
		uint8_t L_13 = V_2;
		V_3 = L_13;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)8)))
		{
			goto IL_0092;
		}
	}
	{
		V_4 = 1;
		goto IL_0082;
	}

IL_0053:
	{
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_1 = (uint8_t)L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		uint8_t L_19 = V_1;
		NullCheck(L_18);
		uint8_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		uint8_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_23 = ___2_bytesConsumed;
		int32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint32_t* L_25 = ___1_value;
		uint32_t L_26 = V_3;
		*((int32_t*)L_25) = (int32_t)L_26;
		return (bool)1;
	}

IL_0076:
	{
		uint32_t L_27 = V_3;
		uint8_t L_28 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<4)), (int32_t)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0082:
	{
		int32_t L_30 = V_4;
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0123;
	}

IL_0092:
	{
		V_5 = 1;
		goto IL_00c9;
	}

IL_009a:
	{
		int32_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_32, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_1 = (uint8_t)L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		uint8_t L_36 = V_1;
		NullCheck(L_35);
		uint8_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = L_38;
		uint8_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t* L_40 = ___2_bytesConsumed;
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		uint32_t* L_42 = ___1_value;
		uint32_t L_43 = V_3;
		*((int32_t*)L_42) = (int32_t)L_43;
		return (bool)1;
	}

IL_00bd:
	{
		uint32_t L_44 = V_3;
		uint8_t L_45 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_44<<4)), (int32_t)L_45));
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c9:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)8)))
		{
			goto IL_009a;
		}
	}
	{
		V_6 = 8;
		goto IL_0118;
	}

IL_00d6:
	{
		int32_t L_48 = V_6;
		uint8_t* L_49;
		L_49 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_48, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		V_1 = (uint8_t)L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		uint8_t L_52 = V_1;
		NullCheck(L_51);
		uint8_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_2 = L_54;
		uint8_t L_55 = V_2;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t* L_56 = ___2_bytesConsumed;
		int32_t L_57 = V_6;
		*((int32_t*)L_56) = (int32_t)L_57;
		uint32_t* L_58 = ___1_value;
		uint32_t L_59 = V_3;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}

IL_00f9:
	{
		uint32_t L_60 = V_3;
		if ((!(((uint32_t)L_60) > ((uint32_t)((int32_t)268435455)))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t* L_61 = ___2_bytesConsumed;
		*((int32_t*)L_61) = (int32_t)0;
		uint32_t* L_62 = ___1_value;
		*((int32_t*)L_62) = (int32_t)0;
		return (bool)0;
	}

IL_010c:
	{
		uint32_t L_63 = V_3;
		uint8_t L_64 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_63<<4)), (int32_t)L_64));
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0118:
	{
		int32_t L_66 = V_6;
		int32_t L_67;
		L_67 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00d6;
		}
	}

IL_0123:
	{
		int32_t* L_68 = ___2_bytesConsumed;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_68) = (int32_t)L_69;
		uint32_t* L_70 = ___1_value;
		uint32_t L_71 = V_3;
		*((int32_t*)L_70) = (int32_t)L_71;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt64X_m869E49A45334B2D0A74E1AEFB98BA89811F16133 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint64_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_1 = ___2_bytesConsumed;
		*((int32_t*)L_1) = (int32_t)0;
		uint64_t* L_2 = ___1_value;
		*((int64_t*)L_2) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_tEE4E83CF68E1E7F612C6363A5DDE78E04404EC1D_il2cpp_TypeInfo_var))->___s_hexLookup;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), 0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = (uint8_t)L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		uint8_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint8_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_11 = ___2_bytesConsumed;
		*((int32_t*)L_11) = (int32_t)0;
		uint64_t* L_12 = ___1_value;
		*((int64_t*)L_12) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_003e:
	{
		uint8_t L_13 = V_2;
		V_3 = ((int64_t)(uint64_t)((uint32_t)L_13));
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)((int32_t)16))))
		{
			goto IL_0097;
		}
	}
	{
		V_4 = 1;
		goto IL_0087;
	}

IL_0057:
	{
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_1 = (uint8_t)L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		uint8_t L_19 = V_1;
		NullCheck(L_18);
		uint8_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		uint8_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_23 = ___2_bytesConsumed;
		int32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint64_t* L_25 = ___1_value;
		uint64_t L_26 = V_3;
		*((int64_t*)L_25) = (int64_t)L_26;
		return (bool)1;
	}

IL_007a:
	{
		uint64_t L_27 = V_3;
		uint8_t L_28 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_27<<4)), ((int64_t)(uint64_t)((uint32_t)L_28))));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0087:
	{
		int32_t L_30 = V_4;
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0131;
	}

IL_0097:
	{
		V_5 = 1;
		goto IL_00cf;
	}

IL_009f:
	{
		int32_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_32, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		V_1 = (uint8_t)L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		uint8_t L_36 = V_1;
		NullCheck(L_35);
		uint8_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_2 = L_38;
		uint8_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t* L_40 = ___2_bytesConsumed;
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		uint64_t* L_42 = ___1_value;
		uint64_t L_43 = V_3;
		*((int64_t*)L_42) = (int64_t)L_43;
		return (bool)1;
	}

IL_00c2:
	{
		uint64_t L_44 = V_3;
		uint8_t L_45 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_44<<4)), ((int64_t)(uint64_t)((uint32_t)L_45))));
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00cf:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)16))))
		{
			goto IL_009f;
		}
	}
	{
		V_6 = ((int32_t)16);
		goto IL_0126;
	}

IL_00de:
	{
		int32_t L_48 = V_6;
		uint8_t* L_49;
		L_49 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_48, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		V_1 = (uint8_t)L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		uint8_t L_52 = V_1;
		NullCheck(L_51);
		uint8_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_2 = L_54;
		uint8_t L_55 = V_2;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t* L_56 = ___2_bytesConsumed;
		int32_t L_57 = V_6;
		*((int32_t*)L_56) = (int32_t)L_57;
		uint64_t* L_58 = ___1_value;
		uint64_t L_59 = V_3;
		*((int64_t*)L_58) = (int64_t)L_59;
		return (bool)1;
	}

IL_0101:
	{
		uint64_t L_60 = V_3;
		if ((!(((uint64_t)L_60) > ((uint64_t)((int64_t)1152921504606846975LL)))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t* L_61 = ___2_bytesConsumed;
		*((int32_t*)L_61) = (int32_t)0;
		uint64_t* L_62 = ___1_value;
		*((int64_t*)L_62) = (int64_t)((int64_t)0);
		return (bool)0;
	}

IL_0119:
	{
		uint64_t L_63 = V_3;
		uint8_t L_64 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_63<<4)), ((int64_t)(uint64_t)((uint32_t)L_64))));
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0126:
	{
		int32_t L_66 = V_6;
		int32_t L_67;
		L_67 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00de;
		}
	}

IL_0131:
	{
		int32_t* L_68 = ___2_bytesConsumed;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		*((int32_t*)L_68) = (int32_t)L_69;
		uint64_t* L_70 = ___1_value;
		uint64_t L_71 = V_3;
		*((int64_t*)L_70) = (int64_t)L_71;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNumber_m82A7C9AE615F919E14AF8D90B39B83FA580DA9F7 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* ___1_number, int32_t* ___2_bytesConsumed, int32_t ___3_options, bool* ___4_textUsedExponentNotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		bool* L_0 = ___4_textUsedExponentNotation;
		*((int8_t*)L_0) = (int8_t)0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_2 = ___2_bytesConsumed;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_0015:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_3 = ___1_number;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4;
		L_4 = NumberBuffer_get_Digits_m32BE8B01B9038A161967177A4173BB4B93A84D6D(L_3, NULL);
		V_0 = L_4;
		V_1 = 0;
		V_2 = 0;
		int32_t L_5 = V_1;
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_5, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		V_3 = (uint8_t)L_7;
		uint8_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)43))))
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0061;
		}
	}
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_10 = ___1_number;
		L_10->___IsNegative = (bool)1;
	}

IL_0041:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t* L_14 = ___2_bytesConsumed;
		*((int32_t*)L_14) = (int32_t)0;
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_15, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_3 = (uint8_t)L_17;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_4 = L_18;
		goto IL_007f;
	}

IL_0069:
	{
		int32_t L_19 = V_1;
		uint8_t* L_20;
		L_20 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_19, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_21 = *((uint8_t*)L_20);
		V_3 = (uint8_t)L_21;
		uint8_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007f:
	{
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_0069;
		}
	}

IL_0089:
	{
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_00ac;
		}
	}
	{
		uint8_t* L_28;
		L_28 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&V_0), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_28) = (int8_t)0;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_29 = ___1_number;
		L_29->___Scale = 0;
		int32_t* L_30 = ___2_bytesConsumed;
		int32_t L_31 = V_1;
		*((int32_t*)L_30) = (int32_t)L_31;
		return (bool)1;
	}

IL_00ac:
	{
		int32_t L_32 = V_1;
		V_5 = L_32;
		goto IL_00cd;
	}

IL_00b4:
	{
		int32_t L_33 = V_1;
		uint8_t* L_34;
		L_34 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_33, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_35 = *((uint8_t*)L_34);
		V_3 = (uint8_t)L_35;
		uint8_t L_36 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, ((int32_t)48)))) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00cd:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_00b4;
		}
	}

IL_00d7:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_40, L_41));
		int32_t L_42 = V_1;
		int32_t L_43 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
		int32_t L_44 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_44, ((int32_t)50), NULL);
		V_8 = L_45;
		int32_t L_46 = V_5;
		int32_t L_47 = V_8;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_48;
		L_48 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_source), L_46, L_47, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		V_9 = L_48;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_49 = V_0;
		ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B((&V_9), L_49, ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_RuntimeMethod_var);
		int32_t L_50 = V_8;
		V_2 = L_50;
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_51 = ___1_number;
		int32_t L_52 = V_7;
		L_51->___Scale = L_52;
		int32_t L_53 = V_1;
		int32_t L_54;
		L_54 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t* L_55 = ___2_bytesConsumed;
		int32_t L_56 = V_1;
		*((int32_t*)L_55) = (int32_t)L_56;
		return (bool)1;
	}

IL_0120:
	{
		V_10 = 0;
		uint8_t L_57 = V_3;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_59 = V_1;
		V_11 = L_59;
		goto IL_0150;
	}

IL_0137:
	{
		int32_t L_60 = V_1;
		uint8_t* L_61;
		L_61 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_60, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_62 = *((uint8_t*)L_61);
		V_3 = (uint8_t)L_62;
		uint8_t L_63 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_63, ((int32_t)48)))) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0150:
	{
		int32_t L_65 = V_1;
		int32_t L_66;
		L_66 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0137;
		}
	}

IL_015a:
	{
		int32_t L_67 = V_1;
		int32_t L_68 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_67, L_68));
		int32_t L_69 = V_11;
		V_12 = L_69;
		int32_t L_70 = V_2;
		if (L_70)
		{
			goto IL_0196;
		}
	}
	{
		goto IL_0180;
	}

IL_016f:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_71 = ___1_number;
		int32_t* L_72 = (int32_t*)(&L_71->___Scale);
		int32_t* L_73 = L_72;
		int32_t L_74 = *((int32_t*)L_73);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_74, 1));
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0180:
	{
		int32_t L_76 = V_12;
		int32_t L_77 = V_1;
		if ((((int32_t)L_76) >= ((int32_t)L_77)))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_78 = V_12;
		uint8_t* L_79;
		L_79 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_78, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_80 = *((uint8_t*)L_79);
		if ((((int32_t)L_80) == ((int32_t)((int32_t)48))))
		{
			goto IL_016f;
		}
	}

IL_0196:
	{
		int32_t L_81 = V_1;
		int32_t L_82 = V_12;
		int32_t L_83 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_84;
		L_84 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_81, L_82)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)51), L_83)), 1)), NULL);
		V_13 = L_84;
		int32_t L_85 = V_12;
		int32_t L_86 = V_13;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_87;
		L_87 = ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_inline((&___0_source), L_85, L_86, ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_RuntimeMethod_var);
		V_9 = L_87;
		int32_t L_88 = V_2;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_89;
		L_89 = Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_inline((&V_0), L_88, Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B((&V_9), L_89, ReadOnlySpan_1_CopyTo_m52D104C07A1380A9C034E31931E14590EE936E7B_RuntimeMethod_var);
		int32_t L_90 = V_2;
		int32_t L_91 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_90, L_91));
		int32_t L_92 = V_1;
		int32_t L_93;
		L_93 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_92) == ((uint32_t)L_93))))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_94 = V_6;
		if (L_94)
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_95 = V_10;
		if (L_95)
		{
			goto IL_01e8;
		}
	}
	{
		int32_t* L_96 = ___2_bytesConsumed;
		*((int32_t*)L_96) = (int32_t)0;
		return (bool)0;
	}

IL_01e8:
	{
		int32_t* L_97 = ___2_bytesConsumed;
		int32_t L_98 = V_1;
		*((int32_t*)L_97) = (int32_t)L_98;
		return (bool)1;
	}

IL_01ed:
	{
		int32_t L_99 = V_6;
		if (L_99)
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_100 = V_10;
		if (L_100)
		{
			goto IL_0200;
		}
	}
	{
		int32_t* L_101 = ___2_bytesConsumed;
		*((int32_t*)L_101) = (int32_t)0;
		return (bool)0;
	}

IL_0200:
	{
		uint8_t L_102 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_102&((int32_t)-33)))) == ((int32_t)((int32_t)69))))
		{
			goto IL_0210;
		}
	}
	{
		int32_t* L_103 = ___2_bytesConsumed;
		int32_t L_104 = V_1;
		*((int32_t*)L_103) = (int32_t)L_104;
		return (bool)1;
	}

IL_0210:
	{
		bool* L_105 = ___4_textUsedExponentNotation;
		*((int8_t*)L_105) = (int8_t)1;
		int32_t L_106 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		int32_t L_107 = ___3_options;
		if (((int32_t)((int32_t)L_107&1)))
		{
			goto IL_0225;
		}
	}
	{
		int32_t* L_108 = ___2_bytesConsumed;
		*((int32_t*)L_108) = (int32_t)0;
		return (bool)0;
	}

IL_0225:
	{
		int32_t L_109 = V_1;
		int32_t L_110;
		L_110 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_109) == ((uint32_t)L_110))))
		{
			goto IL_0237;
		}
	}
	{
		int32_t* L_111 = ___2_bytesConsumed;
		*((int32_t*)L_111) = (int32_t)0;
		return (bool)0;
	}

IL_0237:
	{
		V_14 = (bool)0;
		int32_t L_112 = V_1;
		uint8_t* L_113;
		L_113 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_112, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_114 = *((uint8_t*)L_113);
		V_3 = (uint8_t)L_114;
		uint8_t L_115 = V_3;
		if ((((int32_t)L_115) == ((int32_t)((int32_t)43))))
		{
			goto IL_0257;
		}
	}
	{
		uint8_t L_116 = V_3;
		if ((!(((uint32_t)L_116) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0277;
		}
	}
	{
		V_14 = (bool)1;
	}

IL_0257:
	{
		int32_t L_117 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		int32_t L_118 = V_1;
		int32_t L_119;
		L_119 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_118) == ((uint32_t)L_119))))
		{
			goto IL_026d;
		}
	}
	{
		int32_t* L_120 = ___2_bytesConsumed;
		*((int32_t*)L_120) = (int32_t)0;
		return (bool)0;
	}

IL_026d:
	{
		int32_t L_121 = V_1;
		uint8_t* L_122;
		L_122 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_121, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_123 = *((uint8_t*)L_122);
		V_3 = (uint8_t)L_123;
	}

IL_0277:
	{
		int32_t L_124 = V_1;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_125;
		L_125 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_124, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_126;
		L_126 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_125, (&V_15), (&V_16), NULL);
		if (L_126)
		{
			goto IL_0292;
		}
	}
	{
		int32_t* L_127 = ___2_bytesConsumed;
		*((int32_t*)L_127) = (int32_t)0;
		return (bool)0;
	}

IL_0292:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = V_16;
		V_1 = ((int32_t)il2cpp_codegen_add(L_128, L_129));
		bool L_130 = V_14;
		if (!L_130)
		{
			goto IL_02d5;
		}
	}
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_131 = ___1_number;
		int32_t L_132 = L_131->___Scale;
		uint32_t L_133 = V_15;
		if ((((int64_t)((int64_t)L_132)) >= ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)-2147483648LL)), ((int64_t)(uint64_t)((uint32_t)L_133)))))))
		{
			goto IL_02c4;
		}
	}
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_134 = ___1_number;
		L_134->___Scale = ((int32_t)-2147483648LL);
		goto IL_02fc;
	}

IL_02c4:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_135 = ___1_number;
		int32_t* L_136 = (int32_t*)(&L_135->___Scale);
		int32_t* L_137 = L_136;
		int32_t L_138 = *((int32_t*)L_137);
		uint32_t L_139 = V_15;
		*((int32_t*)L_137) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_138, (int32_t)L_139));
		goto IL_02fc;
	}

IL_02d5:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_140 = ___1_number;
		int32_t L_141 = L_140->___Scale;
		uint32_t L_142 = V_15;
		if ((((int64_t)((int64_t)L_141)) <= ((int64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)2147483647LL)), ((int64_t)(uint64_t)((uint32_t)L_142)))))))
		{
			goto IL_02f0;
		}
	}
	{
		int32_t* L_143 = ___2_bytesConsumed;
		*((int32_t*)L_143) = (int32_t)0;
		return (bool)0;
	}

IL_02f0:
	{
		NumberBuffer_t2EC89D1034C6D8B8ACFD6195906D46311B42E1E2* L_144 = ___1_number;
		int32_t* L_145 = (int32_t*)(&L_144->___Scale);
		int32_t* L_146 = L_145;
		int32_t L_147 = *((int32_t*)L_146);
		uint32_t L_148 = V_15;
		*((int32_t*)L_146) = (int32_t)((int32_t)il2cpp_codegen_add(L_147, (int32_t)L_148));
	}

IL_02fc:
	{
		int32_t* L_149 = ___2_bytesConsumed;
		int32_t L_150 = V_1;
		*((int32_t*)L_149) = (int32_t)L_150;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanBigG_mEAB5CE04CFF207362FB78A254175619FF69061CE (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = (uint8_t)0;
		goto IL_0027;
	}

IL_0009:
	{
		int32_t L_0 = V_0;
		uint8_t* L_1;
		L_1 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_0, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_2 = *((uint8_t*)L_1);
		V_1 = (uint8_t)L_2;
		uint8_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)32))))
		{
			goto IL_0023;
		}
	}
	{
		uint8_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0009;
		}
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004a;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = ___1_value;
		il2cpp_codegen_initobj(L_10, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_11 = ___2_bytesConsumed;
		*((int32_t*)L_11) = (int32_t)0;
		return (bool)0;
	}

IL_004a:
	{
		V_2 = (bool)0;
		uint8_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0073;
		}
	}
	{
		V_2 = (bool)1;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0073;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_16 = ___1_value;
		il2cpp_codegen_initobj(L_16, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_17 = ___2_bytesConsumed;
		*((int32_t*)L_17) = (int32_t)0;
		return (bool)0;
	}

IL_0073:
	{
		int32_t L_18 = V_0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_19;
		L_19 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_18, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_19, (&V_3), (&V_4), NULL);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___1_value;
		il2cpp_codegen_initobj(L_21, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_22 = ___2_bytesConsumed;
		*((int32_t*)L_22) = (int32_t)0;
		return (bool)0;
	}

IL_0095:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t* L_29;
		L_29 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_28, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_30 = *((uint8_t*)L_29);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_31 = ___1_value;
		il2cpp_codegen_initobj(L_31, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_32 = ___2_bytesConsumed;
		*((int32_t*)L_32) = (int32_t)0;
		return (bool)0;
	}

IL_00c7:
	{
		int32_t L_33 = V_0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_34;
		L_34 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_33, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_34, (&V_5), (&V_4), NULL);
		if (L_35)
		{
			goto IL_00e9;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_36 = ___1_value;
		il2cpp_codegen_initobj(L_36, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_37 = ___2_bytesConsumed;
		*((int32_t*)L_37) = (int32_t)0;
		return (bool)0;
	}

IL_00e9:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		int32_t L_40 = V_0;
		int32_t L_41;
		L_41 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint8_t* L_44;
		L_44 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_43, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_45 = *((uint8_t*)L_44);
		if ((((int32_t)L_45) == ((int32_t)((int32_t)58))))
		{
			goto IL_011b;
		}
	}

IL_010f:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_46 = ___1_value;
		il2cpp_codegen_initobj(L_46, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_47 = ___2_bytesConsumed;
		*((int32_t*)L_47) = (int32_t)0;
		return (bool)0;
	}

IL_011b:
	{
		int32_t L_48 = V_0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_49;
		L_49 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_48, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_49, (&V_6), (&V_4), NULL);
		if (L_50)
		{
			goto IL_013d;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_51 = ___1_value;
		il2cpp_codegen_initobj(L_51, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_52 = ___2_bytesConsumed;
		*((int32_t*)L_52) = (int32_t)0;
		return (bool)0;
	}

IL_013d:
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_55) == ((int32_t)L_56)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		V_0 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		uint8_t* L_59;
		L_59 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_58, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_60 = *((uint8_t*)L_59);
		if ((((int32_t)L_60) == ((int32_t)((int32_t)58))))
		{
			goto IL_016f;
		}
	}

IL_0163:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_61 = ___1_value;
		il2cpp_codegen_initobj(L_61, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_62 = ___2_bytesConsumed;
		*((int32_t*)L_62) = (int32_t)0;
		return (bool)0;
	}

IL_016f:
	{
		int32_t L_63 = V_0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_64;
		L_64 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_63, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = Utf8Parser_TryParseUInt32D_mF056645E917D842DFB0BE8360339C8101057F984(L_64, (&V_7), (&V_4), NULL);
		if (L_65)
		{
			goto IL_0191;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_66 = ___1_value;
		il2cpp_codegen_initobj(L_66, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_67 = ___2_bytesConsumed;
		*((int32_t*)L_67) = (int32_t)0;
		return (bool)0;
	}

IL_0191:
	{
		int32_t L_68 = V_0;
		int32_t L_69 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_68, L_69));
		int32_t L_70 = V_0;
		int32_t L_71;
		L_71 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_70) == ((int32_t)L_71)))
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_72 = V_0;
		int32_t L_73 = L_72;
		V_0 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		uint8_t* L_74;
		L_74 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_73, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_75 = *((uint8_t*)L_74);
		if ((((int32_t)L_75) == ((int32_t)((int32_t)46))))
		{
			goto IL_01c3;
		}
	}

IL_01b7:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_76 = ___1_value;
		il2cpp_codegen_initobj(L_76, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_77 = ___2_bytesConsumed;
		*((int32_t*)L_77) = (int32_t)0;
		return (bool)0;
	}

IL_01c3:
	{
		int32_t L_78 = V_0;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_79;
		L_79 = ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_inline((&___0_source), L_78, ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Utf8Parser_TryParseTimeSpanFraction_m5CA125B01A19BCDC74F943FB48E5E63D0DB566DF(L_79, (&V_8), (&V_4), NULL);
		if (L_80)
		{
			goto IL_01e5;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_81 = ___1_value;
		il2cpp_codegen_initobj(L_81, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_82 = ___2_bytesConsumed;
		*((int32_t*)L_82) = (int32_t)0;
		return (bool)0;
	}

IL_01e5:
	{
		int32_t L_83 = V_0;
		int32_t L_84 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_83, L_84));
		bool L_85 = V_2;
		uint32_t L_86 = V_3;
		uint32_t L_87 = V_5;
		uint32_t L_88 = V_6;
		uint32_t L_89 = V_7;
		uint32_t L_90 = V_8;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_91 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_85, L_86, L_87, L_88, L_89, L_90, L_91, NULL);
		if (L_92)
		{
			goto IL_020b;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_93 = ___1_value;
		il2cpp_codegen_initobj(L_93, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_94 = ___2_bytesConsumed;
		*((int32_t*)L_94) = (int32_t)0;
		return (bool)0;
	}

IL_020b:
	{
		int32_t L_95 = V_0;
		int32_t L_96;
		L_96 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			goto IL_0244;
		}
	}
	{
		int32_t L_97 = V_0;
		uint8_t* L_98;
		L_98 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_97, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_99 = *((uint8_t*)L_98);
		if ((((int32_t)L_99) == ((int32_t)((int32_t)46))))
		{
			goto IL_0238;
		}
	}
	{
		int32_t L_100 = V_0;
		uint8_t* L_101;
		L_101 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_100, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_102 = *((uint8_t*)L_101);
		if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0244;
		}
	}

IL_0238:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_103 = ___1_value;
		il2cpp_codegen_initobj(L_103, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		int32_t* L_104 = ___2_bytesConsumed;
		*((int32_t*)L_104) = (int32_t)0;
		return (bool)0;
	}

IL_0244:
	{
		int32_t* L_105 = ___2_bytesConsumed;
		int32_t L_106 = V_0;
		*((int32_t*)L_105) = (int32_t)L_106;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanC_mF6D38C9EA9901545C1E9C3FAA9966062FA3DD89B (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF));
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_source;
		int32_t* L_1 = ___2_bytesConsumed;
		bool L_2;
		L_2 = TimeSpanSplitter_TrySplitTimeSpan_m0ADBF4B50B31C20BE72F901F2ECADD849819D348((&V_0), L_0, (bool)1, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_3 = ___1_value;
		il2cpp_codegen_initobj(L_3, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_0020:
	{
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_4 = V_0;
		bool L_5 = L_4.___IsNegative;
		V_1 = L_5;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_6 = V_0;
		uint32_t L_7 = L_6.___Separators;
		V_2 = L_7;
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)16842752)))))
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)16777216))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)16842752))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0187;
	}

IL_005a:
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)33619968)))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)16843264))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)33619968))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_0187;
	}

IL_0080:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)33620224))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)33620226))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0187;
	}

IL_009b:
	{
		bool L_17 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_18 = V_0;
		uint32_t L_19 = L_18.___V1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_17, L_19, 0, 0, 0, 0, L_20, NULL);
		V_3 = L_21;
		goto IL_0190;
	}

IL_00b2:
	{
		bool L_22 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_23 = V_0;
		uint32_t L_24 = L_23.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_25 = V_0;
		uint32_t L_26 = L_25.___V2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_27 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_22, 0, L_24, L_26, 0, 0, L_27, NULL);
		V_3 = L_28;
		goto IL_0190;
	}

IL_00ce:
	{
		bool L_29 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_30 = V_0;
		uint32_t L_31 = L_30.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_32 = V_0;
		uint32_t L_33 = L_32.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_34 = V_0;
		uint32_t L_35 = L_34.___V3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_36 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_29, L_31, L_33, L_35, 0, 0, L_36, NULL);
		V_3 = L_37;
		goto IL_0190;
	}

IL_00ef:
	{
		bool L_38 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_39 = V_0;
		uint32_t L_40 = L_39.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_41 = V_0;
		uint32_t L_42 = L_41.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_43 = V_0;
		uint32_t L_44 = L_43.___V3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_45 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_38, 0, L_40, L_42, L_44, 0, L_45, NULL);
		V_3 = L_46;
		goto IL_0190;
	}

IL_0110:
	{
		bool L_47 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_48 = V_0;
		uint32_t L_49 = L_48.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_50 = V_0;
		uint32_t L_51 = L_50.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_52 = V_0;
		uint32_t L_53 = L_52.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_54 = V_0;
		uint32_t L_55 = L_54.___V4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_56 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_47, L_49, L_51, L_53, L_55, 0, L_56, NULL);
		V_3 = L_57;
		goto IL_0190;
	}

IL_0136:
	{
		bool L_58 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_59 = V_0;
		uint32_t L_60 = L_59.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_61 = V_0;
		uint32_t L_62 = L_61.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_63 = V_0;
		uint32_t L_64 = L_63.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_65 = V_0;
		uint32_t L_66 = L_65.___V4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_67 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_58, 0, L_60, L_62, L_64, L_66, L_67, NULL);
		V_3 = L_68;
		goto IL_0190;
	}

IL_015c:
	{
		bool L_69 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_70 = V_0;
		uint32_t L_71 = L_70.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_72 = V_0;
		uint32_t L_73 = L_72.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_74 = V_0;
		uint32_t L_75 = L_74.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_76 = V_0;
		uint32_t L_77 = L_76.___V4;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_78 = V_0;
		uint32_t L_79 = L_78.___V5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_80 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_69, L_71, L_73, L_75, L_77, L_79, L_80, NULL);
		V_3 = L_81;
		goto IL_0190;
	}

IL_0187:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_82 = ___1_value;
		il2cpp_codegen_initobj(L_82, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_3 = (bool)0;
	}

IL_0190:
	{
		bool L_83 = V_3;
		if (L_83)
		{
			goto IL_019b;
		}
	}
	{
		int32_t* L_84 = ___2_bytesConsumed;
		*((int32_t*)L_84) = (int32_t)0;
		return (bool)0;
	}

IL_019b:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m4B0F5155B15D74E478531256D6C4A4C960472855 (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, Il2CppChar ___3_standardFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___3_standardFormat;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)84)))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_1 = ___3_standardFormat;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		Il2CppChar L_2 = ___3_standardFormat;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)71))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_3 = ___3_standardFormat;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)84))))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0056;
	}

IL_0023:
	{
		Il2CppChar L_4 = ___3_standardFormat;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)99))))
		{
			goto IL_003b;
		}
	}
	{
		Il2CppChar L_5 = ___3_standardFormat;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)103))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_6 = ___3_standardFormat;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0056;
		}
	}

IL_003b:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_7 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_8 = ___1_value;
		int32_t* L_9 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Utf8Parser_TryParseTimeSpanC_mF6D38C9EA9901545C1E9C3FAA9966062FA3DD89B(L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_0044:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_11 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_12 = ___1_value;
		int32_t* L_13 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Parser_TryParseTimeSpanBigG_mEAB5CE04CFF207362FB78A254175619FF69061CE(L_11, L_12, L_13, NULL);
		return L_14;
	}

IL_004d:
	{
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_15 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_16 = ___1_value;
		int32_t* L_17 = ___2_bytesConsumed;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Utf8Parser_TryParseTimeSpanLittleG_m79D4CB8BE9826E7A87EA00AE96893F18A4155CBC(L_15, L_16, L_17, NULL);
		return L_18;
	}

IL_0056:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_19 = ___1_value;
		int32_t* L_20 = ___2_bytesConsumed;
		bool L_21;
		L_21 = ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657(L_19, L_20, ThrowHelper_TryParseThrowFormatException_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mEBBF59AE4C9DF578E937154A6CDE73D563DA1657_RuntimeMethod_var);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanFraction_m5CA125B01A19BCDC74F943FB48E5E63D0DB566DF (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, uint32_t* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t* L_2 = ___1_value;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___2_bytesConsumed;
		*((int32_t*)L_3) = (int32_t)0;
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		uint8_t* L_5;
		L_5 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_4, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_6 = *((uint8_t*)L_5);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)48)));
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0034;
		}
	}
	{
		uint32_t* L_8 = ___1_value;
		*((int32_t*)L_8) = (int32_t)0;
		int32_t* L_9 = ___2_bytesConsumed;
		*((int32_t*)L_9) = (int32_t)0;
		return (bool)0;
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		uint32_t L_11 = V_1;
		V_2 = L_11;
		V_3 = 1;
		goto IL_0074;
	}

IL_0041:
	{
		int32_t L_12 = V_0;
		uint8_t* L_13;
		L_13 = ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_inline((&___0_source), L_12, ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_RuntimeMethod_var);
		int32_t L_14 = *((uint8_t*)L_13);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)48)));
		uint32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) <= ((int32_t)7)))
		{
			goto IL_006d;
		}
	}
	{
		uint32_t* L_19 = ___1_value;
		*((int32_t*)L_19) = (int32_t)0;
		int32_t* L_20 = ___2_bytesConsumed;
		*((int32_t*)L_20) = (int32_t)0;
		return (bool)0;
	}

IL_006d:
	{
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), (int32_t)L_21)), (int32_t)L_22));
	}

IL_0074:
	{
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_inline((&___0_source), ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0041;
		}
	}

IL_007e:
	{
		int32_t L_25 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_25, 2)))
		{
			case 0:
			{
				goto IL_00d1;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_00b7;
			}
			case 3:
			{
				goto IL_00ad;
			}
			case 4:
			{
				goto IL_00a3;
			}
			case 5:
			{
				goto IL_00e6;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_00a3:
	{
		uint32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)10)));
		goto IL_00e6;
	}

IL_00ad:
	{
		uint32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)100)));
		goto IL_00e6;
	}

IL_00b7:
	{
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)1000)));
		goto IL_00e6;
	}

IL_00c4:
	{
		uint32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)10000)));
		goto IL_00e6;
	}

IL_00d1:
	{
		uint32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)100000)));
		goto IL_00e6;
	}

IL_00de:
	{
		uint32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1000000)));
	}

IL_00e6:
	{
		uint32_t* L_32 = ___1_value;
		uint32_t L_33 = V_2;
		*((int32_t*)L_32) = (int32_t)L_33;
		int32_t* L_34 = ___2_bytesConsumed;
		int32_t L_35 = V_0;
		*((int32_t*)L_34) = (int32_t)L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0 (bool ___0_isNegative, uint32_t ___1_days, uint32_t ___2_hours, uint32_t ___3_minutes, uint32_t ___4_seconds, uint32_t ___5_fraction, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___6_timeSpan, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		uint32_t L_0 = ___2_hours;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)23)))))
		{
			goto IL_0019;
		}
	}
	{
		uint32_t L_1 = ___3_minutes;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)59)))))
		{
			goto IL_0019;
		}
	}
	{
		uint32_t L_2 = ___4_seconds;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)59)))))
		{
			goto IL_0023;
		}
	}

IL_0019:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_3 = ___6_timeSpan;
		il2cpp_codegen_initobj(L_3, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_0023:
	{
		uint32_t L_4 = ___1_days;
		uint32_t L_5 = ___2_hours;
		uint32_t L_6 = ___3_minutes;
		uint32_t L_7 = ___4_seconds;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_4)), ((int64_t)((int32_t)3600)))), ((int64_t)((int32_t)24)))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_5)), ((int64_t)((int32_t)3600)))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_6)), ((int64_t)((int32_t)60)))))), ((int64_t)(uint64_t)((uint32_t)L_7)))), ((int64_t)((int32_t)1000))));
		bool L_8 = ___0_isNegative;
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((-L_9));
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) >= ((int64_t)((int64_t)-922337203685477LL))))
		{
			goto IL_006f;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_11 = ___6_timeSpan;
		il2cpp_codegen_initobj(L_11, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_006f:
	{
		int64_t L_12 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_multiply(L_12, ((int64_t)((int32_t)10000))));
		int64_t L_13 = V_1;
		uint32_t L_14 = ___5_fraction;
		if ((((int64_t)L_13) >= ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)(std::numeric_limits<int64_t>::min)()), ((int64_t)(uint64_t)((uint32_t)L_14)))))))
		{
			goto IL_0095;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = ___6_timeSpan;
		il2cpp_codegen_initobj(L_15, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_0095:
	{
		int64_t L_16 = V_1;
		uint32_t L_17 = ___5_fraction;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_16, ((int64_t)(uint64_t)((uint32_t)L_17))));
		goto IL_00e5;
	}

IL_00a0:
	{
		int64_t L_18 = V_0;
		if ((((int64_t)L_18) <= ((int64_t)((int64_t)922337203685477LL))))
		{
			goto IL_00b9;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_19 = ___6_timeSpan;
		il2cpp_codegen_initobj(L_19, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_00b9:
	{
		int64_t L_20 = V_0;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_20, ((int64_t)((int32_t)10000))));
		int64_t L_21 = V_3;
		uint32_t L_22 = ___5_fraction;
		if ((((int64_t)L_21) <= ((int64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(std::numeric_limits<int64_t>::max)()), ((int64_t)(uint64_t)((uint32_t)L_22)))))))
		{
			goto IL_00df;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_23 = ___6_timeSpan;
		il2cpp_codegen_initobj(L_23, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_00df:
	{
		int64_t L_24 = V_3;
		uint32_t L_25 = ___5_fraction;
		V_2 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)(uint64_t)((uint32_t)L_25))));
	}

IL_00e5:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_26 = ___6_timeSpan;
		int64_t L_27 = V_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_28;
		memset((&L_28), 0, sizeof(L_28));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_28), L_27, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_26 = L_28;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseTimeSpanLittleG_m79D4CB8BE9826E7A87EA00AE96893F18A4155CBC (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_value, int32_t* ___2_bytesConsumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF));
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_0 = ___0_source;
		int32_t* L_1 = ___2_bytesConsumed;
		bool L_2;
		L_2 = TimeSpanSplitter_TrySplitTimeSpan_m0ADBF4B50B31C20BE72F901F2ECADD849819D348((&V_0), L_0, (bool)0, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_3 = ___1_value;
		il2cpp_codegen_initobj(L_3, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		return (bool)0;
	}

IL_0020:
	{
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_4 = V_0;
		bool L_5 = L_4.___IsNegative;
		V_1 = L_5;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_6 = V_0;
		uint32_t L_7 = L_6.___Separators;
		V_2 = L_7;
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)16842752)))))
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)16777216))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)16842752))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_014b;
	}

IL_005a:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)16843008))))
		{
			goto IL_00d4;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)16843010))))
		{
			goto IL_0120;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)16843264))))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_014b;
	}

IL_0080:
	{
		bool L_15 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_16 = V_0;
		uint32_t L_17 = L_16.___V1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_18 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_15, L_17, 0, 0, 0, 0, L_18, NULL);
		V_3 = L_19;
		goto IL_0154;
	}

IL_0097:
	{
		bool L_20 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_21 = V_0;
		uint32_t L_22 = L_21.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_23 = V_0;
		uint32_t L_24 = L_23.___V2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_25 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_20, 0, L_22, L_24, 0, 0, L_25, NULL);
		V_3 = L_26;
		goto IL_0154;
	}

IL_00b3:
	{
		bool L_27 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_28 = V_0;
		uint32_t L_29 = L_28.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_30 = V_0;
		uint32_t L_31 = L_30.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_32 = V_0;
		uint32_t L_33 = L_32.___V3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_34 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_27, 0, L_29, L_31, L_33, 0, L_34, NULL);
		V_3 = L_35;
		goto IL_0154;
	}

IL_00d4:
	{
		bool L_36 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_37 = V_0;
		uint32_t L_38 = L_37.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_39 = V_0;
		uint32_t L_40 = L_39.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_41 = V_0;
		uint32_t L_42 = L_41.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_43 = V_0;
		uint32_t L_44 = L_43.___V4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_45 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_36, L_38, L_40, L_42, L_44, 0, L_45, NULL);
		V_3 = L_46;
		goto IL_0154;
	}

IL_00fa:
	{
		bool L_47 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_48 = V_0;
		uint32_t L_49 = L_48.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_50 = V_0;
		uint32_t L_51 = L_50.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_52 = V_0;
		uint32_t L_53 = L_52.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_54 = V_0;
		uint32_t L_55 = L_54.___V4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_56 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_47, 0, L_49, L_51, L_53, L_55, L_56, NULL);
		V_3 = L_57;
		goto IL_0154;
	}

IL_0120:
	{
		bool L_58 = V_1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_59 = V_0;
		uint32_t L_60 = L_59.___V1;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_61 = V_0;
		uint32_t L_62 = L_61.___V2;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_63 = V_0;
		uint32_t L_64 = L_63.___V3;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_65 = V_0;
		uint32_t L_66 = L_65.___V4;
		TimeSpanSplitter_t8B534C5C81F0C5950D39F3C91A157AEB1A2597CF L_67 = V_0;
		uint32_t L_68 = L_67.___V5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_69 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Utf8Parser_TryCreateTimeSpan_m4922626E13D9FEEED9BA097EFD1BBB70762A08E0(L_58, L_60, L_62, L_64, L_66, L_68, L_69, NULL);
		V_3 = L_70;
		goto IL_0154;
	}

IL_014b:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_71 = ___1_value;
		il2cpp_codegen_initobj(L_71, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_3 = (bool)0;
	}

IL_0154:
	{
		bool L_72 = V_3;
		if (L_72)
		{
			goto IL_015f;
		}
	}
	{
		int32_t* L_73 = ___2_bytesConsumed;
		*((int32_t*)L_73) = (int32_t)0;
		return (bool)0;
	}

IL_015f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8Parser__cctor_mE5E3155C948968FDC39F5BACF95B500567C58CD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____DD3AEFEADB1CD615F3017763F1568179FEE640B0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____E92B39D8233061927D9ACDE54665E68E7535635A_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____E92B39D8233061927D9ACDE54665E68E7535635A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth365 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth365), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (System_Memory_U3CPrivateImplementationDetailsU3E_t695DD40456D394A8B66B4A0B71DD8392F02AAE5D____DD3AEFEADB1CD615F3017763F1568179FEE640B0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth366 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tFE21F28050A165688DA0D4D9B55B48B3FA5889C1_il2cpp_TypeInfo_var))->___s_daysToMonth366), (void*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* System_Memory215866_SR_get_ResourceType_m787D95C7B54DAA1E85BD2DA4377885513F20CAB4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_StaticFields*)il2cpp_codegen_static_fields_for(System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var))->___U3CResourceTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____format;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____precision;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 MemoryExtensions_AsSpan_mC5B28FB7C2B1AA4EB631A5E4CE6BDF204E8F7A3E_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2));
		ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 L_1 = V_0;
		return L_1;
	}

IL_0010:
	{
		String_t* L_2 = ___0_text;
		Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* L_3;
		L_3 = il2cpp_unsafe_as<Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9*>(L_2);
		il2cpp_codegen_runtime_class_init_inline(MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t9B1DFDC7122F75D54616D2D44479B46521F39430_il2cpp_TypeInfo_var))->___StringAdjustment;
		String_t* L_5 = ___0_text;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_inline((&L_7), L_3, L_4, L_6, ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_m368BBDD17335981575583BECF11A9BEE5882F002_inline (MemoryHandle_t11FDB3CD43B9CD1B288813F93E2727F78EF047C2* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____pointer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_GetMaxDecodedFromUtf8Length_mC9C90E06EFEA9E2D3424860323B986A52C5215D2_inline (int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E(0, NULL);
	}

IL_000d:
	{
		int32_t L_1 = ___0_length;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_1>>2)), 3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_Decode_mD0BADC72D840626735C4BB3A546F639EA80D4489_inline (uint8_t* ___0_encodedBytes, int8_t* ___1_decodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint8_t* L_0 = ___0_encodedBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_encodedBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_1 = L_4;
		uint8_t* L_5 = ___0_encodedBytes;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = *((uint8_t*)L_6);
		V_2 = L_7;
		uint8_t* L_8 = ___0_encodedBytes;
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_add<uint8_t,int32_t>(L_8, 3);
		int32_t L_10 = *((uint8_t*)L_9);
		V_3 = L_10;
		int8_t* L_11 = ___1_decodingMap;
		int32_t L_12 = V_0;
		int8_t* L_13;
		L_13 = il2cpp_unsafe_add<int8_t,int32_t>(L_11, L_12);
		int32_t L_14 = *((int8_t*)L_13);
		V_0 = L_14;
		int8_t* L_15 = ___1_decodingMap;
		int32_t L_16 = V_1;
		int8_t* L_17;
		L_17 = il2cpp_unsafe_add<int8_t,int32_t>(L_15, L_16);
		int32_t L_18 = *((int8_t*)L_17);
		V_1 = L_18;
		int8_t* L_19 = ___1_decodingMap;
		int32_t L_20 = V_2;
		int8_t* L_21;
		L_21 = il2cpp_unsafe_add<int8_t,int32_t>(L_19, L_20);
		int32_t L_22 = *((int8_t*)L_21);
		V_2 = L_22;
		int8_t* L_23 = ___1_decodingMap;
		int32_t L_24 = V_3;
		int8_t* L_25;
		L_25 = il2cpp_unsafe_add<int8_t,int32_t>(L_23, L_24);
		int32_t L_26 = *((int8_t*)L_25);
		V_3 = L_26;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)(L_27<<((int32_t)18)));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)(L_28<<((int32_t)12)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)(L_29<<6));
		int32_t L_30 = V_0;
		int32_t L_31 = V_3;
		V_0 = ((int32_t)(L_30|L_31));
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		V_1 = ((int32_t)(L_32|L_33));
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		V_0 = ((int32_t)(L_34|L_35));
		int32_t L_36 = V_0;
		return L_36;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Base64_WriteThreeLowOrderBytes_m981C0B408C74ACD34B8D4F402CD71A80F835476A_inline (uint8_t* ___0_destination, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		int32_t L_1 = ___1_value;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_1>>((int32_t)16))));
		uint8_t* L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = ___1_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4>>8)));
		uint8_t* L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = ___1_value;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_GetMaxEncodedToUtf8Length_mA3FEA01A2BA01357F6C24DC393BE82A7B8AC77A4_inline (int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_length;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)1610612733)))))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E(0, NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_length;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 2))/3)), 4));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_Encode_m8428F11B149CF32270FBA512BCA1F1918C1DCBF8_inline (uint8_t* ___0_threeBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint8_t* L_0 = ___0_threeBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___0_threeBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		uint8_t* L_5 = ___0_threeBytes;
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, 2);
		int32_t L_7 = *((uint8_t*)L_6);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1<<((int32_t)16)))|((int32_t)(L_4<<8))))|L_7));
		uint8_t* L_8 = ___1_encodingMap;
		int32_t L_9 = V_0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,int32_t>(L_8, ((int32_t)(L_9>>((int32_t)18))));
		int32_t L_11 = *((uint8_t*)L_10);
		V_1 = L_11;
		uint8_t* L_12 = ___1_encodingMap;
		int32_t L_13 = V_0;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, ((int32_t)(((int32_t)(L_13>>((int32_t)12)))&((int32_t)63))));
		int32_t L_15 = *((uint8_t*)L_14);
		V_2 = L_15;
		uint8_t* L_16 = ___1_encodingMap;
		int32_t L_17 = V_0;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, ((int32_t)(((int32_t)(L_17>>6))&((int32_t)63))));
		int32_t L_19 = *((uint8_t*)L_18);
		V_3 = L_19;
		uint8_t* L_20 = ___1_encodingMap;
		int32_t L_21 = V_0;
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,int32_t>(L_20, ((int32_t)(L_21&((int32_t)63))));
		int32_t L_23 = *((uint8_t*)L_22);
		V_4 = L_23;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		return ((int32_t)(((int32_t)(((int32_t)(L_24|((int32_t)(L_25<<8))))|((int32_t)(L_26<<((int32_t)16)))))|((int32_t)(L_27<<((int32_t)24)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadTwo_m28EEF9A183F38CB4D91780D9B286DEE2CB882D5E_inline (uint8_t* ___0_oneByte, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = ___0_oneByte;
		int32_t L_1 = *((uint8_t*)L_0);
		V_0 = ((int32_t)(L_1<<8));
		uint8_t* L_2 = ___1_encodingMap;
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, ((int32_t)(L_3>>((int32_t)10))));
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = L_5;
		uint8_t* L_6 = ___1_encodingMap;
		int32_t L_7 = V_0;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, ((int32_t)(((int32_t)(L_7>>4))&((int32_t)63))));
		int32_t L_9 = *((uint8_t*)L_8);
		V_2 = L_9;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		return ((int32_t)(((int32_t)(((int32_t)(L_10|((int32_t)(L_11<<8))))|((int32_t)3997696)))|((int32_t)1023410176)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Base64_EncodeAndPadOne_m27CD106730D70FA5F926BF3736B598BEF17EC29A_inline (uint8_t* ___0_twoBytes, uint8_t* ___1_encodingMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint8_t* L_0 = ___0_twoBytes;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___0_twoBytes;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_2, 1);
		int32_t L_4 = *((uint8_t*)L_3);
		V_0 = ((int32_t)(((int32_t)(L_1<<((int32_t)16)))|((int32_t)(L_4<<8))));
		uint8_t* L_5 = ___1_encodingMap;
		int32_t L_6 = V_0;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, ((int32_t)(L_6>>((int32_t)18))));
		int32_t L_8 = *((uint8_t*)L_7);
		V_1 = L_8;
		uint8_t* L_9 = ___1_encodingMap;
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add<uint8_t,int32_t>(L_9, ((int32_t)(((int32_t)(L_10>>((int32_t)12)))&((int32_t)63))));
		int32_t L_12 = *((uint8_t*)L_11);
		V_2 = L_12;
		uint8_t* L_13 = ___1_encodingMap;
		int32_t L_14 = V_0;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, ((int32_t)(((int32_t)(L_14>>6))&((int32_t)63))));
		int32_t L_16 = *((uint8_t*)L_15);
		V_3 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		return ((int32_t)(((int32_t)(((int32_t)(L_17|((int32_t)(L_18<<8))))|((int32_t)(L_19<<((int32_t)16)))))|((int32_t)1023410176)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38_inline (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_numerator;
		uint32_t L_1 = ___1_denominator;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_0/(uint32_t)(int32_t)L_1));
		uint32_t* L_2 = ___2_modulo;
		uint32_t L_3 = ___0_numerator;
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___1_denominator;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))));
		uint32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar FormattingHelpers_GetSymbolOrDefault_m1E17BEFE5819DAC5561FE724A0D9A43B463406D5_inline (StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* ___0_format, Il2CppChar ___1_defaultSymbol, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* L_0 = ___0_format;
		Il2CppChar L_1;
		L_1 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline(L_0, NULL);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA* L_3 = ___0_format;
		uint8_t L_4;
		L_4 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_5 = ___1_defaultSymbol;
		V_0 = L_5;
	}

IL_001a:
	{
		Il2CppChar L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BinaryPrimitives_TryWriteUInt32BigEndian_mA4F7D1C8C872C15E5D70BAB5A9BF0A0F410B89BD_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_0 = ___1_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m60D796333562244238C92F8A3A1AF60ED7B79197_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_0012:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___0_destination;
		bool L_3;
		L_3 = MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_inline(L_2, (&___1_value), MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32BigEndian_m7FDFF39BEAB2E4FC2C6444DA26F7E48C24620E27_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_0 = ___1_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m60D796333562244238C92F8A3A1AF60ED7B79197_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_0012:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteTwoDecimalDigits_m966BA6FF2BBE16B62AA930410A9FCC836EEDC2CE_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_0));
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_2 = ___2_startingIndex;
		uint8_t* L_3;
		L_3 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_2, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___0_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))))));
		int32_t L_6 = ___2_startingIndex;
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_6, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_8 = ___0_value;
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_8)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteFourDecimalDigits_m52D300BF0B4B5562EA017268D526807033812DF8_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_0));
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_2 = ___2_startingIndex;
		uint8_t* L_3;
		L_3 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_2, 3)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___0_value;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))))));
		uint32_t L_6 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_6));
		uint32_t L_7 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_8, 2)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_0;
		uint32_t L_11 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)10))))));
		uint32_t L_12 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_12));
		uint32_t L_13 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_13/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_14 = ___2_startingIndex;
		uint8_t* L_15;
		L_15 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_14, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_16 = V_0;
		uint32_t L_17 = ___0_value;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)10))))));
		int32_t L_18 = ___2_startingIndex;
		uint8_t* L_19;
		L_19 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_18, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_20 = ___0_value;
		*((int8_t*)L_19) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_20)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_002e;
	}

IL_000f:
	{
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_1));
		uint32_t L_2 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_5 = V_1;
		uint32_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)10))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_10)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteHexByte_mA03219902337B86B1408BA871AD8AAA549D40B6D_inline (uint8_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, int32_t ___2_startingIndex, uint32_t ___3_casing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint8_t L_0 = ___0_value;
		uint8_t L_1 = ___0_value;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)240)))<<4)), ((int32_t)((int32_t)L_1&((int32_t)15))))), ((int32_t)35209)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___3_casing;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)((int32_t)(((-((int32_t)L_2)))&((int32_t)28784)))>>4)), (int32_t)L_3)), ((int32_t)47545)))|(int32_t)L_4));
		int32_t L_5 = ___2_startingIndex;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), ((int32_t)il2cpp_codegen_add(L_5, 1)), Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_7 = V_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___2_startingIndex;
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_8, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_10 = V_1;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___3_format), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt64Default_m776520CC725D75F55E868C1145C33C6EEB8EE2CC_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		Il2CppChar L_5;
		L_5 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___3_format), NULL);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)68))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)71))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f5;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)78))))
		{
			goto IL_00c2;
		}
	}
	{
		Il2CppChar L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)88))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00f5;
	}

IL_0057:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)103)))))
		{
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)100))))
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)103))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f5;
	}

IL_0074:
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_00c2;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)120))))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00f5;
	}

IL_0089:
	{
		bool L_17;
		L_17 = StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68((&___3_format), NULL);
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7(NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_19 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormatUInt64_m446BC3EA59BE7590CAF2586EDD0BD35E202CAF10_RuntimeMethod_var)));
	}

IL_00a0:
	{
		uint64_t L_20 = ___0_value;
		uint8_t L_21;
		L_21 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22 = ___1_destination;
		int32_t* L_23 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_20, L_21, L_22, (bool)0, L_23, NULL);
		return L_24;
	}

IL_00b1:
	{
		uint64_t L_25 = ___0_value;
		uint8_t L_26;
		L_26 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___1_destination;
		int32_t* L_28 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_25, L_26, L_27, (bool)0, L_28, NULL);
		return L_29;
	}

IL_00c2:
	{
		uint64_t L_30 = ___0_value;
		uint8_t L_31;
		L_31 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_32 = ___1_destination;
		int32_t* L_33 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447(L_30, L_31, L_32, (bool)0, L_33, NULL);
		return L_34;
	}

IL_00d3:
	{
		uint64_t L_35 = ___0_value;
		uint8_t L_36;
		L_36 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_37 = ___1_destination;
		int32_t* L_38 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(L_35, L_36, (bool)1, L_37, L_38, NULL);
		return L_39;
	}

IL_00e4:
	{
		uint64_t L_40 = ___0_value;
		uint8_t L_41;
		L_41 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___3_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_42 = ___1_destination;
		int32_t* L_43 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(L_40, L_41, (bool)0, L_42, L_43, NULL);
		return L_44;
	}

IL_00f5:
	{
		int32_t* L_45 = ___2_bytesWritten;
		bool L_46;
		L_46 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_45, NULL);
		return L_46;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_inline (int64_t ___0_value, uint64_t ___1_mask, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, StandardFormat_t9573597695B80F4B1095F7CD3EA17A935432F3CA ___4_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mDC1002BD4FF3EF7CAB1463315D6A61D83D0BC206((&___4_format), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___2_destination;
		int32_t* L_3 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatInt64Default_m09238099AE8A28C305E864397CD33AB689DA8E6A_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		Il2CppChar L_5;
		L_5 = StandardFormat_get_Symbol_mC3B2A68AF27AE2237D42153180FF1B3BE922B6D6_inline((&___4_format), NULL);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)68))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)71))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f6;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)78))))
		{
			goto IL_00c0;
		}
	}
	{
		Il2CppChar L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)88))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_00f6;
	}

IL_0057:
	{
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)103)))))
		{
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)100))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)103))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00f6;
	}

IL_0074:
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_00c0;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)120))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00f6;
	}

IL_0089:
	{
		bool L_17;
		L_17 = StandardFormat_get_HasPrecision_m2A885238EC20A1B5BA2864BBDE3E16AAFC659D68((&___4_format), NULL);
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&System_Memory215866_SR_t03D99834BCB2FA3EFD2EAF11DC6A5CFACB8076A1_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = System_Memory215866_SR_get_Argument_GWithPrecisionNotSupported_m815DE79198F3230F90C4CB4B9F84F8EAF26A16A7(NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_19 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormatInt64_mE701B2A5A87C78482CC2048CDDCF76607159A051_RuntimeMethod_var)));
	}

IL_00a0:
	{
		int64_t L_20 = ___0_value;
		uint8_t L_21;
		L_21 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_22 = ___2_destination;
		int32_t* L_23 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline(L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}

IL_00b0:
	{
		int64_t L_25 = ___0_value;
		uint8_t L_26;
		L_26 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_27 = ___2_destination;
		int32_t* L_28 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline(L_25, L_26, L_27, L_28, NULL);
		return L_29;
	}

IL_00c0:
	{
		int64_t L_30 = ___0_value;
		uint8_t L_31;
		L_31 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_32 = ___2_destination;
		int32_t* L_33 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatInt64N_m16CF37BBD48178906BE789DD1BC48E8F7E9958B2_inline(L_30, L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_00d0:
	{
		int64_t L_35 = ___0_value;
		uint64_t L_36 = ___1_mask;
		uint8_t L_37;
		L_37 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_38 = ___2_destination;
		int32_t* L_39 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(((int64_t)(L_35&(int64_t)L_36)), L_37, (bool)1, L_38, L_39, NULL);
		return L_40;
	}

IL_00e3:
	{
		int64_t L_41 = ___0_value;
		uint64_t L_42 = ___1_mask;
		uint8_t L_43;
		L_43 = StandardFormat_get_Precision_mE5029A2010FDB7EEF36EAFDC73549C74453CCED9_inline((&___4_format), NULL);
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_44 = ___2_destination;
		int32_t* L_45 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Utf8Formatter_TryFormatUInt64X_m8F0C31EDA5667876FC90C712FD2B3788450E5D55(((int64_t)(L_41&(int64_t)L_42)), L_43, (bool)0, L_44, L_45, NULL);
		return L_46;
	}

IL_00f6:
	{
		int32_t* L_47 = ___3_bytesWritten;
		bool L_48;
		L_48 = ThrowHelper_TryFormatThrowFormatException_mDE12E2DB93A130436737CF3DC38F77F0CF55BC8E(L_47, NULL);
		return L_48;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64Default_m09238099AE8A28C305E864397CD33AB689DA8E6A_inline (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)((int32_t)10))))))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(((int32_t)(uint32_t)L_1), L_2, L_3, NULL);
		return L_4;
	}

IL_0013:
	{
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_6 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_7 = ___1_destination;
		int32_t* L_8 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Formatter_TryFormatInt64MultipleDigits_mF251162FB54EDF3E9FB97E2ED59864344ACE2236_inline(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		int64_t L_10 = ___0_value;
		if ((((int64_t)L_10) > ((int64_t)((int64_t)((int32_t)2147483647LL)))))
		{
			goto IL_0049;
		}
	}
	{
		int64_t L_11 = ___0_value;
		if ((((int64_t)L_11) < ((int64_t)((int64_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0049;
		}
	}
	{
		int64_t L_12 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_13 = ___1_destination;
		int32_t* L_14 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD_inline(((int32_t)L_12), L_13, L_14, NULL);
		return L_15;
	}

IL_0049:
	{
		int64_t L_16 = ___0_value;
		if ((((int64_t)L_16) > ((int64_t)((int64_t)4294967295000000000LL))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_17 = ___0_value;
		if ((((int64_t)L_17) < ((int64_t)((int64_t)-4294967295000000000LL))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_18 = ___0_value;
		if ((((int64_t)L_18) < ((int64_t)((int64_t)0))))
		{
			goto IL_0078;
		}
	}
	{
		int64_t L_19 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_20 = ___1_destination;
		int32_t* L_21 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633(L_19, L_20, L_21, NULL);
		return L_22;
	}

IL_0078:
	{
		int64_t L_23 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_24 = ___1_destination;
		int32_t* L_25 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8Formatter_TryFormatInt64MoreThanNegativeBillionMaxUInt_mC691F7FEB5BF8B540EFC21751212A373CB70024F(((-L_23)), L_24, L_25, NULL);
		return L_26;
	}

IL_0082:
	{
		int64_t L_27 = ___0_value;
		if ((((int64_t)L_27) < ((int64_t)((int64_t)0))))
		{
			goto IL_0093;
		}
	}
	{
		int64_t L_28 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_29 = ___1_destination;
		int32_t* L_30 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12(L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_0093:
	{
		int64_t L_32 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_33 = ___1_destination;
		int32_t* L_34 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Utf8Formatter_TryFormatInt64LessThanNegativeBillionMaxUInt_m5B28C9B6C3CC65F1DC1B4167D368BB2CD6CB71B5(((-L_32)), L_33, L_34, NULL);
		return L_35;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64D_mED675CD07A1D146CEFCE5319D0B7E2EF40C06500_inline (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = (bool)1;
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
	}

IL_0010:
	{
		int64_t L_2 = ___0_value;
		uint8_t L_3 = ___1_precision;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4 = ___2_destination;
		bool L_5 = V_0;
		int32_t* L_6 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Formatter_TryFormatUInt64D_mD1EFAA6BBC0B7E2C332186CB334DE84E981C71DE(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64N_m16CF37BBD48178906BE789DD1BC48E8F7E9958B2_inline (int64_t ___0_value, uint8_t ___1_precision, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___2_destination, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		V_0 = (bool)1;
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
	}

IL_0010:
	{
		int64_t L_2 = ___0_value;
		uint8_t L_3 = ___1_precision;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_4 = ___2_destination;
		bool L_5 = V_0;
		int32_t* L_6 = ___3_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Utf8Formatter_TryFormatUInt64N_mCDBB6A7782ACCCFB04D824693F5171964DD27447(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___2_bytesWritten;
		*((int32_t*)L_1) = (int32_t)0;
		return (bool)0;
	}

IL_0011:
	{
		uint8_t* L_2;
		L_2 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint32_t L_3 = ___0_value;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_3)));
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)1;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt64MultipleDigits_mF251162FB54EDF3E9FB97E2ED59864344ACE2236_inline (int64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_1 = ___0_value;
		___0_value = ((-L_1));
		int64_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_6 = ___2_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0025:
	{
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_7) = (int8_t)((int32_t)45);
		int32_t* L_8 = ___2_bytesWritten;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_10 = ___0_value;
		int32_t L_11 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12;
		L_12 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_11, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline(L_10, L_12, NULL);
		return (bool)1;
	}

IL_0046:
	{
		int64_t L_13 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		int32_t* L_15 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline(L_13, L_14, L_15, NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatInt32MultipleDigits_m87B8FBE7FF03DEA85515EB31256F2FC53ED81FFD_inline (int32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_1 = ___0_value;
		___0_value = ((-L_1));
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_6 = ___2_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0024:
	{
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_destination), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_7) = (int8_t)((int32_t)45);
		int32_t* L_8 = ___2_bytesWritten;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = ___0_value;
		int32_t L_11 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12;
		L_12 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 1, L_11, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_10, L_12, NULL);
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_13 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_14 = ___1_destination;
		int32_t* L_15 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline(L_13, L_14, L_15, NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000)))))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_1 = ___0_value;
		___0_value = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000)));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_001a:
	{
		uint32_t L_3 = ___0_value;
		if ((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_4 = ___0_value;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_005f;
	}

IL_0033:
	{
		uint32_t L_6 = ___0_value;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		goto IL_005f;
	}

IL_0047:
	{
		uint32_t L_8 = ___0_value;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		goto IL_005f;
	}

IL_005b:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
	}

IL_005f:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline (uint32_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_mD2A3D260A1D157F62C2D2D85571A533DE0B682CD_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_5 = ___2_bytesWritten;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		uint32_t L_7 = ___0_value;
		int32_t L_8 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_9;
		L_9 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_8, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m9DAA96E0B3F5844E19072D705A3DA3166D0EE53E_inline(L_7, L_9, NULL);
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)10000000))))))
		{
			goto IL_0047;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		if ((!(((uint64_t)L_1) >= ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_0034;
		}
	}
	{
		uint64_t L_2 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)100000000000000LL))));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)14)));
		goto IL_004a;
	}

IL_0034:
	{
		uint64_t L_4 = ___0_value;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int32_t)10000000)))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		goto IL_004a;
	}

IL_0047:
	{
		uint64_t L_6 = ___0_value;
		V_1 = ((int32_t)(uint32_t)L_6);
	}

IL_004a:
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_00b7;
	}

IL_0063:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		goto IL_00b7;
	}

IL_0077:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		goto IL_00b7;
	}

IL_008b:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)100000)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_00b7;
	}

IL_009f:
	{
		uint32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)1000000)))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 5));
		goto IL_00b7;
	}

IL_00b3:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 6));
	}

IL_00b7:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0031;
	}

IL_000f:
	{
		uint64_t L_1 = ___0_value;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_1));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_5 = V_1;
		uint64_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, ((int64_t)((int32_t)10)))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		uint8_t* L_9;
		L_9 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_10 = ___0_value;
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_10)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = FormattingHelpers_CountDigits_m7D7F1735EC0CB46B4A1D90F182B81C80A9D15B1D_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t* L_4 = ___2_bytesWritten;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_5 = ___2_bytesWritten;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		uint64_t L_7 = ___0_value;
		int32_t L_8 = V_0;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_9;
		L_9 = Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_inline((&___1_destination), 0, L_8, Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_RuntimeMethod_var);
		FormattingHelpers_WriteDigits_m60ED66A3B049E1BADBF3068DA8851FB1C31F222B_inline(L_7, L_9, NULL);
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatUInt64Default_m776520CC725D75F55E868C1145C33C6EEB8EE2CC_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)((int32_t)10))))))
		{
			goto IL_0013;
		}
	}
	{
		uint64_t L_1 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_2 = ___1_destination;
		int32_t* L_3 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Utf8Formatter_TryFormatUInt32SingleDigit_mA2C70BBE7157E7D870D035F436C9362AB623EA1A_inline(((int32_t)(uint32_t)L_1), L_2, L_3, NULL);
		return L_4;
	}

IL_0013:
	{
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_0027;
		}
	}
	{
		uint64_t L_6 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_7 = ___1_destination;
		int32_t* L_8 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Formatter_TryFormatUInt64MultipleDigits_mCCC6DB95D8BF4E8AD1CBA31201EA2911B9A756F8_inline(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		uint64_t L_10 = ___0_value;
		if ((!(((uint64_t)L_10) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0039;
		}
	}
	{
		uint64_t L_11 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_12 = ___1_destination;
		int32_t* L_13 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Formatter_TryFormatUInt32MultipleDigits_mD996636B0E8AE2FFDB78E12C5475985990067F5C_inline(((int32_t)(uint32_t)L_11), L_12, L_13, NULL);
		return L_14;
	}

IL_0039:
	{
		uint64_t L_15 = ___0_value;
		if ((!(((uint64_t)L_15) <= ((uint64_t)((int64_t)4294967295000000000LL)))))
		{
			goto IL_0051;
		}
	}
	{
		uint64_t L_16 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_17 = ___1_destination;
		int32_t* L_18 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Utf8Formatter_TryFormatUInt64LessThanBillionMaxUInt_mEDD9E0D60ADB8EEEF2A4EACE7CEC1DE798041633(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0051:
	{
		uint64_t L_20 = ___0_value;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_21 = ___1_destination;
		int32_t* L_22 = ___2_bytesWritten;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_tF60C4789F1D4369368E0D17F6DF3FBA1B276EBAC_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Formatter_TryFormatUInt64MoreThanBillionMaxUInt_mE07433349329CEC801BFF094DC0BA75D88930E12(L_20, L_21, L_22, NULL);
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_FillWithAsciiZeros_mA075A6357F4D722A800CBFFCB08B7031E1935928_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		uint8_t* L_1;
		L_1 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___0_buffer), L_0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_1) = (int8_t)((int32_t)48);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FormattingHelpers_WriteDigitsWithGroupSeparator_m35BCC092BFDFBB35210AB1AC237308658B892E0E_inline (uint64_t ___0_value, Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___1_buffer), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0054;
	}

IL_0011:
	{
		uint64_t L_1 = ___0_value;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_1));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		int32_t L_3 = V_1;
		uint8_t* L_4;
		L_4 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_3, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_5 = V_2;
		uint64_t L_6 = ___0_value;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, ((int64_t)((int32_t)10)))))));
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		V_1 = L_9;
		uint8_t* L_10;
		L_10 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), L_9, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		*((int8_t*)L_10) = (int8_t)((int32_t)44);
		V_0 = 0;
		goto IL_0050;
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0050:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0054:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_14;
		L_14 = Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_inline((&___1_buffer), 0, Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_RuntimeMethod_var);
		uint64_t L_15 = ___0_value;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)48)), (int64_t)L_15)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_mA4308E880C2EE1DDEC136AE3F5CB68D1C86F996F_inline (uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 8));
		uint64_t L_2 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_2>>((int32_t)32)));
	}

IL_0014:
	{
		uint64_t L_3 = ___0_value;
		if ((!(((uint64_t)L_3) > ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		uint64_t L_5 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_5>>((int32_t)16)));
	}

IL_002a:
	{
		uint64_t L_6 = ___0_value;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		uint64_t L_8 = ___0_value;
		___0_value = ((int64_t)((uint64_t)L_8>>8));
	}

IL_003f:
	{
		uint64_t L_9 = ___0_value;
		if ((!(((uint64_t)L_9) > ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t FormattingHelpers_DivMod_m31F37D4EDAC0FF114192736C8A28C5E2A230FA56_inline (uint64_t ___0_numerator, uint64_t ___1_denominator, uint64_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___0_numerator;
		uint64_t L_1 = ___1_denominator;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)L_1));
		uint64_t* L_2 = ___2_modulo;
		uint64_t L_3 = ___0_numerator;
		uint64_t L_4 = V_0;
		uint64_t L_5 = ___1_denominator;
		*((int64_t*)L_2) = (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, ((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)L_5))));
		uint64_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDecimalTrailingZeros_m2A1E42DBD23D1826425AD12171016FEE84AC2D35_inline (uint32_t ___0_value, uint32_t* ___1_valueWithoutTrailingZeros, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0022;
		}
	}

IL_0008:
	{
		uint32_t L_1 = ___0_value;
		uint32_t L_2;
		L_2 = FormattingHelpers_DivMod_m689D9385CB8792B1D7DC50F28496A2BA3629AF38_inline(L_1, ((int32_t)10), (&V_1), NULL);
		V_2 = L_2;
		uint32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_4 = V_2;
		___0_value = L_4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0008;
	}

IL_0022:
	{
		uint32_t* L_6 = ___1_valueWithoutTrailingZeros;
		uint32_t L_7 = ___0_value;
		*((int32_t*)L_6) = (int32_t)L_7;
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_ticks;
		__this->____ticks = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_mEBBCEC2FF55CBED434D8A931C23766A5101A4904_inline (int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_i;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)48)))) <= ((uint32_t)((int32_t)9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m8FD3A973E73E03FAA7EA1D34881CF2411A9766D9_gshared_inline (ReadOnlyMemory_1_t18913C4A74D2F49E9656EE8FACD99ADB76331430* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_start;
		int32_t L_1 = __this->____index;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		*((int32_t*)L_2) = (int32_t)L_3;
		RuntimeObject* L_4 = __this->____object;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mE42E84DAF52E0192765A29EE1442440E2D323D82_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mDAB5B2956F8A0687D66C0C419951C21BF03B0441_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m3D87C6B3C6E1BA89A01764BA6896A2F6A042AFFC(NULL);
	}

IL_0011:
	{
		Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppChar>(L_4);
		int32_t L_6 = ___0_index;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0036:
	{
		Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* L_8 = __this->____pinnable;
		NullCheck(L_8);
		Il2CppChar* L_9 = (Il2CppChar*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m78F502355977EFE5629BBFFFC0CB7D7C952D2B8F_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m30C73F35805B43A16C9AE32223471E4E97DBBF68_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m3D87C6B3C6E1BA89A01764BA6896A2F6A042AFFC(NULL);
	}

IL_0011:
	{
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6 = ___0_index;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0036:
	{
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_8 = __this->____pinnable;
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_mF05DFC475072836623437182DA56F5D7A56F278B_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E((int32_t)1, NULL);
	}

IL_0020:
	{
		intptr_t L_5 = __this->____byteOffset;
		int32_t L_6 = ___0_start;
		intptr_t L_7;
		L_7 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_7;
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_8 = __this->____pinnable;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___1_length;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_inline((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m109830C85644E03E4A81C80535C9E2D82A017790_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m3D87C6B3C6E1BA89A01764BA6896A2F6A042AFFC(NULL);
	}

IL_0011:
	{
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_2 = __this->____pinnable;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_3 = __this->____byteOffset;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6 = ___0_index;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0036:
	{
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_8 = __this->____pinnable;
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)(&L_8->___Data);
		intptr_t L_10 = __this->____byteOffset;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___0_index;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 Span_1_Slice_m3181437A5DC4E678EB3494EE71B0C5459745B234_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E((int32_t)1, NULL);
	}

IL_0012:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_mA4AC37072AD257C7085FB6D2911E3E18CD5F2F03_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E((int32_t)1, NULL);
	}

IL_0020:
	{
		intptr_t L_5 = __this->____byteOffset;
		int32_t L_6 = ___0_start;
		intptr_t L_7;
		L_7 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_0 = L_7;
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_8 = __this->____pinnable;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___1_length;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_inline((&L_11), L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 ReadOnlySpan_1_Slice_m792E4A740FE93DB340234156DB424A34ABEB8409_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E((int32_t)1, NULL);
	}

IL_0012:
	{
		intptr_t L_2 = __this->____byteOffset;
		int32_t L_3 = ___0_start;
		intptr_t L_4;
		L_4 = SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_inline(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_0 = L_4;
		int32_t L_5 = __this->____length;
		int32_t L_6 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_7 = __this->____pinnable;
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_inline((&L_10), L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m60D796333562244238C92F8A3A1AF60ED7B79197_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2FFB7D6E1A8A342C8638B7957A8639A2BA2B2810_gshared_inline (ReadOnlySpan_1_tF67AECD95795AFFF2C8EE3754EF8F6487E30F1C2* __this, Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tE8288A7EE058B57C6FA481EFB2756956BAF477D9* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryMarshal_TryWrite_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF001C5C590E467176063CE86AA3E16401AAE8DF8_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m77DBF5B76E9CF9718757F3563925DD2C21EAEDB7(L_2, NULL);
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((((int64_t)((int64_t)L_3)) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)L_4)))))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		uint32_t* L_7 = ___1_value;
		uint32_t L_8 = (*(uint32_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m973C56E3A576BB283D8F642E467E16EB8A06E75A_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m77DBF5B76E9CF9718757F3563925DD2C21EAEDB7(L_2, NULL);
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_4;
		L_4 = Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_inline((&___0_destination), Span_1_get_Length_m6A201A7FF1A6138534A85D2ECBB4A1E1534A59FE_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m62B3D4F1A2FD22F499FFDBC7CF6B611A2C6F979E((int32_t)0, NULL);
	}

IL_0030:
	{
		Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9 L_5 = ___0_destination;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A(L_5, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m50F47C393F747411B15D2565ED70F7DCBEF6B98A_RuntimeMethod_var);
		uint32_t* L_7 = ___1_value;
		uint32_t L_8 = (*(uint32_t*)L_7);
		il2cpp_unsafe_write_unaligned(L_6, L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB5747338BB402C8287EBA0576FF1AEC0F4B2623E_gshared_inline (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE7AFE8410791BBCC6B841A9CA287D7225EAB3F9E_gshared_inline (Span_1_t22F1729BC40D97FE40373F13963B659259FE73A9* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m221460F23A0ACB0E2F38B59FC72BC544820DF463_gshared_inline (ReadOnlySpan_1_t356ADF1DD100C984D952068834397BADC5AEA1E2* __this, Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* ___0_pinnable, intptr_t ___1_byteOffset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_length;
		__this->____length = L_0;
		Pinnable_1_tAF8774F81D1AFA94D45383144E9A1089F884607A* L_1 = ___0_pinnable;
		__this->____pinnable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable), (void*)L_1);
		intptr_t L_2 = ___1_byteOffset;
		__this->____byteOffset = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m765E6BCA7DD8F0546BF30DD84A88B1D2D63C6610_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t79D731CFBC429F2364A13F2FE44EE127BE026069_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
