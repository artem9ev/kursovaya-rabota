#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

struct Action_1_tC6249E5E3BC876ADDFB8D5C243CBC0095487E04A;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t8B2A36B7C2D065646F35C01B885B63488BA2E5BE;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t472B63FD413B998E105C32814D85D29A13E076DA;
struct Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B;
struct DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B;
struct DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE;
struct DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751;
struct DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB;
struct Func_1_tAA4ECBED6066AD3EA4D7289CEEE8EC2E20C49573;
struct Func_1_t9EE439C42ABF0AD82E259B79C0A0ACC177FA92CC;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
struct Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB;
struct Func_2_t440A737B31BAC1661CB293686028935A6C345B64;
struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6;
struct Func_2_tEE2E132F8908935795FF1561B1E774E68C1BFEFF;
struct Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737;
struct Func_2_tFC51C87C24C4DF06829A486F11929F0F7DDC74AB;
struct Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct HashSet_1_t23D728BE0FFE10E58B7E140DEFDAAB45C6AA836C;
struct HashSet_1_t8AB376A197BAA876785C0C6E4B50DD43510E4BD7;
struct IAsyncStreamReader_1_tAC771DFC77305083DF4546EE5D1CD4DFD90988E1;
struct IDictionary_2_t52B7F958D1CBA529E97272207686F8F1FAA5EE13;
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
struct IEnumerable_1_t62D6C482930A604247B07260EF79E3D1B586AAC8;
struct IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5;
struct IEnumerator_1_tD1AF9258725F7B50445253BA17F180C0FBE0150A;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IObjectPool_1_t980DF5106D89308047F790F0B658427A68C5C277;
struct IObjectPool_1_tB39E4AAFB61768B9F04F2A051CBEFF20C22378AB;
struct IServerStreamWriter_1_t5FF8F914C187D5B0FDF7802DA6B300524B9C31B8;
struct KeyCollection_t909CCED6C979DE255B24410E93B94D80456A6E38;
struct KeyCollection_t36FCA47610336AF6AB3E8466DFEF79BD7CA06404;
struct Lazy_1_t047470871949E2BD2D0BE02BBC3B8C0DA5148C2A;
struct List_1_tCD3648A7B8407C43BC2C613EB8C32025C38E8ACA;
struct List_1_t3AC7114287F6D54D15F0884A718D04987275109D;
struct List_1_t300DA71F1F5407C4B19E93CDFF9D5467F5CCE4E2;
struct List_1_t361983A722C8A4AE6303840D2B1BD3CA06CC531F;
struct Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC;
struct Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E;
struct Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318;
struct Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct ReadOnlyDictionary_2_tDAACC3BECDF3AB5254DD9E5A36CEC354FD3BBA0A;
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
struct ValueCollection_tEA1E88238A8973D358112CB3828DED32463E8268;
struct ValueCollection_tB32974E3C780479CE784018CB7FE4882EF90F9DA;
struct EntryU5BU5D_tA423D0C3ED830156D7154F94FF56F47E56997980;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AtomicCounter_t7220A6A4450790E793A0B2288DF148C5ACB85310;
struct AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B;
struct BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA;
struct BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF;
struct CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0;
struct CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD;
struct CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA;
struct ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2;
struct ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7;
struct ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F;
struct CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328;
struct CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct DebugStats_tF7166931C7EE513AF74D7EE7A4464F5598EA620E;
struct DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
struct Exception_t;
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
struct GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624;
struct GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49;
struct GrpcThreadPool_tE581A44AB90B16A84FE73310DD2C6D52AEAE5253;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IHasWriteOptions_t2AF4AD8D871139C9429169F7B079CDCBAF6DC242;
struct ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4;
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
struct IServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6;
struct InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF;
struct Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305;
struct MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3;
struct MethodInfo_t;
struct NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918;
struct NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76;
struct NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD;
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E;
struct RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC;
struct RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618;
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
struct SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Server_t2016436C42019CF01603E5C47FE74700609E61EC;
struct ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D;
struct ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693;
struct ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC;
struct ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct UnimplementedCallInvoker_tEA1975E20409477123667F212E14C2E495BBB6E5;
struct UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8;
struct UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9;
struct MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896;
struct Entry_t145FB95C13D8717695720E16C90A1D25E759AB71;
struct ServerPortCollection_t5BE2A6FAF231345F99C4533A10C5B41AE08BF22E;
struct ServiceDefinitionCollection_t5D2CCCEAF6D917D87EB0E7AAEBB48047FE0A7582;
struct U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695;
struct U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D;
struct gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469;
struct gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561;
struct gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23;
struct gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64;
struct gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC;
struct gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030;
struct grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E;
struct grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C;
struct grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F;
struct grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6;
struct grpcsharp_batch_context_create_delegate_t5C9E793034431F60F3C2CC2AB3D5792F433ECD1B;
struct grpcsharp_batch_context_destroy_delegate_t36A031C1A44A0CCE766839DCEAD4F633FD91BD4E;
struct grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t0AEAAAB2352806C43FFBC986FF84A5D19AB6B71E;
struct grpcsharp_batch_context_recv_initial_metadata_delegate_t59EC7FEEE6F9D4E3A7EA31C019DE117366338DB0;
struct grpcsharp_batch_context_recv_message_length_delegate_tA48461E6D4391BA59FE3F7EA150E958E582EBEEC;
struct grpcsharp_batch_context_recv_message_to_buffer_delegate_t5F86C6855286170CBDCB5918DD4B639F57E747D5;
struct grpcsharp_batch_context_recv_status_on_client_details_delegate_tCB6139E8F9B411A088638C9412CA891B0BC1E9F9;
struct grpcsharp_batch_context_recv_status_on_client_status_delegate_t0C97E41428D56797ACCA4DC34D41B68DD977DAB5;
struct grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t9AD56204C26A02885344F1530EF44875B13C7937;
struct grpcsharp_batch_context_reset_delegate_t221B8248CD9E9BE826E44529520BA5A9B191A4CD;
struct grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799;
struct grpcsharp_call_cancel_delegate_t0985A835EDBEB990E984DF6EB262156345F5CCB1;
struct grpcsharp_call_cancel_with_status_delegate_tEF02E2C33E7CEFA8D0362D6187E123E78047A865;
struct grpcsharp_call_credentials_release_delegate_t258E4CEE469C472A6E909A6B23DE6D89C3E20370;
struct grpcsharp_call_destroy_delegate_t62DDA99C785F2905B47F4186EE545DD330D00AFB;
struct grpcsharp_call_get_peer_delegate_t289374E3C29B77FABE3A45C9DB0E13381A8D078A;
struct grpcsharp_call_recv_initial_metadata_delegate_t7E7777602D360A2AEBF5A9EBD01533D4D578B138;
struct grpcsharp_call_recv_message_delegate_t4D1BAB2BFB7436E08EB071E3AF978DEF1A9EE150;
struct grpcsharp_call_send_close_from_client_delegate_t08BF9C2F0618D9CBC348C00A89C2125B4A3CB3F4;
struct grpcsharp_call_send_initial_metadata_delegate_t0A4D71C8439247B04C4065DA63A8F5B627FC4A39;
struct grpcsharp_call_send_message_delegate_t9B7945B1CA5699F1894C0D367EBBAB3E803B17AE;
struct grpcsharp_call_send_status_from_server_delegate_t3D966EBEA88B2B5107317C32C7D9F87FE9578669;
struct grpcsharp_call_set_credentials_delegate_t86154C8901422FAB419D59A1000A1C8B634CCA89;
struct grpcsharp_call_start_client_streaming_delegate_t5D936C6812665F1473D4017746B07B9602CAB811;
struct grpcsharp_call_start_duplex_streaming_delegate_t5E7E30B29AC5C651D93C9CE582B92D3AB02FE33D;
struct grpcsharp_call_start_server_streaming_delegate_t9740EBF4988C2B1C8AAEC967DCEA654CD8FAF83E;
struct grpcsharp_call_start_serverside_delegate_t3C1DD2B53C5C77651B3E7C64C1526120B176C385;
struct grpcsharp_call_start_unary_delegate_t776F5F2B28F4BC50CA72788A085A0B98681228DF;
struct grpcsharp_channel_args_create_delegate_t3CECD5D0398FC8C412AB6ADC29E8AA912D243AD9;
struct grpcsharp_channel_args_destroy_delegate_tAFC2AF9CF659ED92020CF86E9BB913DC9AF44748;
struct grpcsharp_channel_args_set_integer_delegate_t7A1E448AF3B85E2DE08D8B88703BE1B47B915634;
struct grpcsharp_channel_args_set_string_delegate_t9E1AEB5A26680BDD47CF09D326F575D4BB1AFD88;
struct grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236;
struct grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2;
struct grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863;
struct grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C;
struct grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382;
struct grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E;
struct grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99;
struct grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796;
struct grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B;
struct grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1;
struct grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821;
struct grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855;
struct grpcsharp_composite_call_credentials_create_delegate_tB30F1631AA711F9C0AE6BB7588C93541DA0B4031;
struct grpcsharp_composite_channel_credentials_create_delegate_tBFD8413391A79EAA0454A47C8F4FA8D5F21715F4;
struct grpcsharp_init_delegate_t99F727EAD6455B2A918919DEEB50191C151D3CFB;
struct grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB;
struct grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08;
struct grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF;
struct grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C;
struct grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B;
struct grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67;
struct grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8;
struct grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D;
struct grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D;
struct grpcsharp_override_default_ssl_roots_t730D630E100A76F4D2FF25BB544D388D9A2D4DF0;
struct grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834;
struct grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766;
struct grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4;
struct grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0;
struct grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00;
struct grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0;
struct grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599;
struct grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF;
struct grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5;
struct grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54;
struct grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3;
struct grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7;
struct grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36;
struct grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A;
struct grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410;
struct grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19;
struct grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D;
struct grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1;
struct grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B;
struct grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9;
struct grpcsharp_shutdown_delegate_t5B04865E181DD238F69F776141959F78F96F7410;
struct grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0;
struct grpcsharp_ssl_credentials_create_delegate_tE51D6999930693319A48E9FBB4D9C4A602A4F4BE;
struct grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8;
struct grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3;
struct grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D;
struct grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08;
struct grpcsharp_version_string_delegate_t5B4A7C1B15024A7C94D0BCA479A03C118A753EAE;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelState_t23EAC5DF705E19C51D6865E2A3BA68530CA0633D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextPropagationFlags_tD7DC82975AC8F0A053FE7AC61AB16D64EE8ADEDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t440A737B31BAC1661CB293686028935A6C345B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD1AF9258725F7B50445253BA17F180C0FBE0150A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatusCode_t841BF5E120DD6F22ACD1DBE309365DE4CB3AB854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09605D5FD6622BEB802CCD58463E3E3650E33658;
IL2CPP_EXTERN_C String_t* _stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2C22D7B72951057E0B4CF9356B59001C88CFFD;
IL2CPP_EXTERN_C String_t* _stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE;
IL2CPP_EXTERN_C String_t* _stringLiteral456712C9451BACDA761E91E9111B6C9F3D7833B6;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral73BCBB6D21AF3F274BABD75DADECB4887FBFE4E4;
IL2CPP_EXTERN_C String_t* _stringLiteral7C19A3E78437A0AD89B0D16EBF9C74FEDCCBB8AC;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA13C272EC106C82FEBF0CB1FFF22EA6756F285;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C63E4F530C5944B6D758C92B2E89C44D0D241F;
IL2CPP_EXTERN_C String_t* _stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B62439F31A80B75961E54C60ED1042E1D42DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA47291CA392A93058A6DB6F73C1E946E153B7F;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD8089C5EDBE36657FBF81E70B08D4B9425ECCACB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE064A593217F8D9C315BF354EAAD770AB3C8246C;
IL2CPP_EXTERN_C const RuntimeMethod* DuplexStreamingServerCallHandler_2_HandleCall_m93F20E730EAD38F3B4A8BEC6096E475055CD2535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuplexStreamingServerCallHandler_2__ctor_m900088B8231567887514475CE527FA6E6BF7419A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8_TisString_t_TisIServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_m7E489F30800A6148086097E5FF0CD16E283E2B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisFunc_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737_m1E31C40C20C437D198DE8A3AB02A7F2380A0AAFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_ForType_TisRequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_m49F716E1D344E437E380E30256FEAA4DCA116F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_ForType_TisUnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_m4BFF74E053C50B25B0A63902152754219568D476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9BB9219D1993296C8AAEFD59227D3E86DA0D7EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9348A59FCE76A9F90808FBD2412C8F57492B7747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshaller_1__ctor_mD972DC94D062EDBB4CC1E882684E8D655D37142C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Method_2__ctor_m0C7338B864BA9B1B7868513E0FAE7103B1C7351E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformApis__cctor_mF08A21F5187E16B014037E2CBDE2CC5C39E91645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInterceptU3Eb__0_0_m83FD1E9C65724D4C3151E4D51C7BA935374D3A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CInterceptU3Eb__1_m812A88233663B5E4B6F357756E448A156CFA13B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnimplementedMethodCallHandler_UnimplementedMethod_m2CE6359E9921D7FB3F62EFF9E7A61769E508D289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary_FirstValidLibraryPath_mC5E53C71CCD30B198D85FF35FCB8938951D5464C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary_LoadSymbol_m43EDA46797A156DAEA9FAB7139DE472332DF2FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary_PlatformSpecificLoadLibrary_mE7F468A4147C55D25C24130396212B5AC8F93C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedLibrary__ctor_mABDF514DB467C94F585E386574C08817412E118A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA423D0C3ED830156D7154F94FF56F47E56997980* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t909CCED6C979DE255B24410E93B94D80456A6E38* ____keys;
	ValueCollection_tEA1E88238A8973D358112CB3828DED32463E8268* ____values;
	RuntimeObject* ____syncRoot;
};
struct DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B  : public RuntimeObject
{
	Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* ___method;
	DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751* ___handler;
};
struct Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC  : public RuntimeObject
{
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___serializer;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___deserializer;
};
struct ReadOnlyDictionary_2_tDAACC3BECDF3AB5254DD9E5A36CEC354FD3BBA0A  : public RuntimeObject
{
	RuntimeObject* ___m_dictionary;
	RuntimeObject* ____syncRoot;
	KeyCollection_t36FCA47610336AF6AB3E8466DFEF79BD7CA06404* ____keys;
	ValueCollection_tB32974E3C780479CE784018CB7FE4882EF90F9DA* ____values;
};
struct CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD  : public RuntimeObject
{
};
struct CallInvokerExtensions_t49E2B3E7663E616628EB841FFBACE13DE7143389  : public RuntimeObject
{
};
struct Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA  : public RuntimeObject
{
	RuntimeObject* ___myLock;
	AtomicCounter_t7220A6A4450790E793A0B2288DF148C5ACB85310* ___activeCallCounter;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___shutdownTokenSource;
	String_t* ___target;
	GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49* ___environment;
	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___completionQueue;
	ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___handle;
	Dictionary_2_t472B63FD413B998E105C32814D85D29A13E076DA* ___options;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___connectivityWatcherTask;
	bool ___shutdownRequested;
};
struct ChannelExtensions_tB0DE846B64604E7BF80E5C30D205E2F265B4699B  : public RuntimeObject
{
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49  : public RuntimeObject
{
	RuntimeObject* ___batchContextPool;
	RuntimeObject* ___requestCallContextPool;
	GrpcThreadPool_tE581A44AB90B16A84FE73310DD2C6D52AEAE5253* ___threadPool;
	DebugStats_tF7166931C7EE513AF74D7EE7A4464F5598EA620E* ___debugStats;
	AtomicCounter_t7220A6A4450790E793A0B2288DF148C5ACB85310* ___cqPickerCounter;
	bool ___isShutdown;
};
struct HandlerUtils_t0D706000AB33F32F60A87D8F555B1595E8C5AAB3  : public RuntimeObject
{
};
struct Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305  : public RuntimeObject
{
	List_1_t361983A722C8A4AE6303840D2B1BD3CA06CC531F* ___entries;
	bool ___readOnly;
};
struct NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD  : public RuntimeObject
{
	grpcsharp_init_delegate_t99F727EAD6455B2A918919DEEB50191C151D3CFB* ___grpcsharp_init;
	grpcsharp_shutdown_delegate_t5B04865E181DD238F69F776141959F78F96F7410* ___grpcsharp_shutdown;
	grpcsharp_version_string_delegate_t5B4A7C1B15024A7C94D0BCA479A03C118A753EAE* ___grpcsharp_version_string;
	grpcsharp_batch_context_create_delegate_t5C9E793034431F60F3C2CC2AB3D5792F433ECD1B* ___grpcsharp_batch_context_create;
	grpcsharp_batch_context_recv_initial_metadata_delegate_t59EC7FEEE6F9D4E3A7EA31C019DE117366338DB0* ___grpcsharp_batch_context_recv_initial_metadata;
	grpcsharp_batch_context_recv_message_length_delegate_tA48461E6D4391BA59FE3F7EA150E958E582EBEEC* ___grpcsharp_batch_context_recv_message_length;
	grpcsharp_batch_context_recv_message_to_buffer_delegate_t5F86C6855286170CBDCB5918DD4B639F57E747D5* ___grpcsharp_batch_context_recv_message_to_buffer;
	grpcsharp_batch_context_recv_status_on_client_status_delegate_t0C97E41428D56797ACCA4DC34D41B68DD977DAB5* ___grpcsharp_batch_context_recv_status_on_client_status;
	grpcsharp_batch_context_recv_status_on_client_details_delegate_tCB6139E8F9B411A088638C9412CA891B0BC1E9F9* ___grpcsharp_batch_context_recv_status_on_client_details;
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t9AD56204C26A02885344F1530EF44875B13C7937* ___grpcsharp_batch_context_recv_status_on_client_trailing_metadata;
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t0AEAAAB2352806C43FFBC986FF84A5D19AB6B71E* ___grpcsharp_batch_context_recv_close_on_server_cancelled;
	grpcsharp_batch_context_reset_delegate_t221B8248CD9E9BE826E44529520BA5A9B191A4CD* ___grpcsharp_batch_context_reset;
	grpcsharp_batch_context_destroy_delegate_t36A031C1A44A0CCE766839DCEAD4F633FD91BD4E* ___grpcsharp_batch_context_destroy;
	grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4* ___grpcsharp_request_call_context_create;
	grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766* ___grpcsharp_request_call_context_call;
	grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599* ___grpcsharp_request_call_context_method;
	grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0* ___grpcsharp_request_call_context_host;
	grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0* ___grpcsharp_request_call_context_deadline;
	grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF* ___grpcsharp_request_call_context_request_metadata;
	grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5* ___grpcsharp_request_call_context_reset;
	grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00* ___grpcsharp_request_call_context_destroy;
	grpcsharp_composite_call_credentials_create_delegate_tB30F1631AA711F9C0AE6BB7588C93541DA0B4031* ___grpcsharp_composite_call_credentials_create;
	grpcsharp_call_credentials_release_delegate_t258E4CEE469C472A6E909A6B23DE6D89C3E20370* ___grpcsharp_call_credentials_release;
	grpcsharp_call_cancel_delegate_t0985A835EDBEB990E984DF6EB262156345F5CCB1* ___grpcsharp_call_cancel;
	grpcsharp_call_cancel_with_status_delegate_tEF02E2C33E7CEFA8D0362D6187E123E78047A865* ___grpcsharp_call_cancel_with_status;
	grpcsharp_call_start_unary_delegate_t776F5F2B28F4BC50CA72788A085A0B98681228DF* ___grpcsharp_call_start_unary;
	grpcsharp_call_start_client_streaming_delegate_t5D936C6812665F1473D4017746B07B9602CAB811* ___grpcsharp_call_start_client_streaming;
	grpcsharp_call_start_server_streaming_delegate_t9740EBF4988C2B1C8AAEC967DCEA654CD8FAF83E* ___grpcsharp_call_start_server_streaming;
	grpcsharp_call_start_duplex_streaming_delegate_t5E7E30B29AC5C651D93C9CE582B92D3AB02FE33D* ___grpcsharp_call_start_duplex_streaming;
	grpcsharp_call_send_message_delegate_t9B7945B1CA5699F1894C0D367EBBAB3E803B17AE* ___grpcsharp_call_send_message;
	grpcsharp_call_send_close_from_client_delegate_t08BF9C2F0618D9CBC348C00A89C2125B4A3CB3F4* ___grpcsharp_call_send_close_from_client;
	grpcsharp_call_send_status_from_server_delegate_t3D966EBEA88B2B5107317C32C7D9F87FE9578669* ___grpcsharp_call_send_status_from_server;
	grpcsharp_call_recv_message_delegate_t4D1BAB2BFB7436E08EB071E3AF978DEF1A9EE150* ___grpcsharp_call_recv_message;
	grpcsharp_call_recv_initial_metadata_delegate_t7E7777602D360A2AEBF5A9EBD01533D4D578B138* ___grpcsharp_call_recv_initial_metadata;
	grpcsharp_call_start_serverside_delegate_t3C1DD2B53C5C77651B3E7C64C1526120B176C385* ___grpcsharp_call_start_serverside;
	grpcsharp_call_send_initial_metadata_delegate_t0A4D71C8439247B04C4065DA63A8F5B627FC4A39* ___grpcsharp_call_send_initial_metadata;
	grpcsharp_call_set_credentials_delegate_t86154C8901422FAB419D59A1000A1C8B634CCA89* ___grpcsharp_call_set_credentials;
	grpcsharp_call_get_peer_delegate_t289374E3C29B77FABE3A45C9DB0E13381A8D078A* ___grpcsharp_call_get_peer;
	grpcsharp_call_destroy_delegate_t62DDA99C785F2905B47F4186EE545DD330D00AFB* ___grpcsharp_call_destroy;
	grpcsharp_channel_args_create_delegate_t3CECD5D0398FC8C412AB6ADC29E8AA912D243AD9* ___grpcsharp_channel_args_create;
	grpcsharp_channel_args_set_string_delegate_t9E1AEB5A26680BDD47CF09D326F575D4BB1AFD88* ___grpcsharp_channel_args_set_string;
	grpcsharp_channel_args_set_integer_delegate_t7A1E448AF3B85E2DE08D8B88703BE1B47B915634* ___grpcsharp_channel_args_set_integer;
	grpcsharp_channel_args_destroy_delegate_tAFC2AF9CF659ED92020CF86E9BB913DC9AF44748* ___grpcsharp_channel_args_destroy;
	grpcsharp_override_default_ssl_roots_t730D630E100A76F4D2FF25BB544D388D9A2D4DF0* ___grpcsharp_override_default_ssl_roots;
	grpcsharp_ssl_credentials_create_delegate_tE51D6999930693319A48E9FBB4D9C4A602A4F4BE* ___grpcsharp_ssl_credentials_create;
	grpcsharp_composite_channel_credentials_create_delegate_tBFD8413391A79EAA0454A47C8F4FA8D5F21715F4* ___grpcsharp_composite_channel_credentials_create;
	grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* ___grpcsharp_channel_credentials_release;
	grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* ___grpcsharp_insecure_channel_create;
	grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* ___grpcsharp_secure_channel_create;
	grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* ___grpcsharp_channel_create_call;
	grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* ___grpcsharp_channel_check_connectivity_state;
	grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* ___grpcsharp_channel_watch_connectivity_state;
	grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* ___grpcsharp_channel_get_target;
	grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* ___grpcsharp_channel_destroy;
	grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* ___grpcsharp_sizeof_grpc_event;
	grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* ___grpcsharp_completion_queue_create_async;
	grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* ___grpcsharp_completion_queue_create_sync;
	grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* ___grpcsharp_completion_queue_shutdown;
	grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* ___grpcsharp_completion_queue_next;
	grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* ___grpcsharp_completion_queue_pluck;
	grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* ___grpcsharp_completion_queue_destroy;
	gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* ___gprsharp_free;
	grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* ___grpcsharp_metadata_array_create;
	grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* ___grpcsharp_metadata_array_add;
	grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* ___grpcsharp_metadata_array_count;
	grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* ___grpcsharp_metadata_array_get_key;
	grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* ___grpcsharp_metadata_array_get_value;
	grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* ___grpcsharp_metadata_array_destroy_full;
	grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* ___grpcsharp_redirect_log;
	grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* ___grpcsharp_metadata_credentials_create_from_plugin;
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* ___grpcsharp_metadata_credentials_notify_from_plugin;
	grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* ___grpcsharp_ssl_server_credentials_create;
	grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* ___grpcsharp_server_credentials_release;
	grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* ___grpcsharp_server_create;
	grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* ___grpcsharp_server_register_completion_queue;
	grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* ___grpcsharp_server_add_insecure_http2_port;
	grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* ___grpcsharp_server_add_secure_http2_port;
	grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* ___grpcsharp_server_start;
	grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* ___grpcsharp_server_request_call;
	grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* ___grpcsharp_server_cancel_all_calls;
	grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* ___grpcsharp_server_shutdown_and_notify_callback;
	grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* ___grpcsharp_server_destroy;
	grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* ___grpcsharp_call_auth_context;
	grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* ___grpcsharp_auth_context_peer_identity_property_name;
	grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* ___grpcsharp_auth_context_property_iterator;
	grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* ___grpcsharp_auth_property_iterator_next;
	grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* ___grpcsharp_auth_context_release;
	gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* ___gprsharp_now;
	gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* ___gprsharp_inf_future;
	gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* ___gprsharp_inf_past;
	gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* ___gprsharp_convert_clock_type;
	gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* ___gprsharp_sizeof_timespec;
	grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* ___grpcsharp_test_callback;
	grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* ___grpcsharp_test_nop;
	grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* ___grpcsharp_test_override_method;
};
struct PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065  : public RuntimeObject
{
};
struct Server_t2016436C42019CF01603E5C47FE74700609E61EC  : public RuntimeObject
{
	AtomicCounter_t7220A6A4450790E793A0B2288DF148C5ACB85310* ___activeCallCounter;
	ServiceDefinitionCollection_t5D2CCCEAF6D917D87EB0E7AAEBB48047FE0A7582* ___serviceDefinitions;
	ServerPortCollection_t5BE2A6FAF231345F99C4533A10C5B41AE08BF22E* ___ports;
	GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49* ___environment;
	List_1_tCD3648A7B8407C43BC2C613EB8C32025C38E8ACA* ___options;
	ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___handle;
	RuntimeObject* ___myLock;
	List_1_t300DA71F1F5407C4B19E93CDFF9D5467F5CCE4E2* ___serviceDefinitionsList;
	List_1_t3AC7114287F6D54D15F0884A718D04987275109D* ___serverPortList;
	Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B* ___callHandlers;
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___shutdownTcs;
	bool ___startRequested;
	bool ___shutdownRequested;
	int32_t ___requestCallTokensPerCq;
};
struct ServerCalls_t483FCBA5C47FB4068A3C98E9143C15D2BECB7488  : public RuntimeObject
{
};
struct ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88  : public RuntimeObject
{
	ReadOnlyDictionary_2_tDAACC3BECDF3AB5254DD9E5A36CEC354FD3BBA0A* ___callHandlers;
};
struct ServerServiceDefinitionExtensions_t828F8B0353ACC384FA26ABD0C9E19027324A49A1  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8  : public RuntimeObject
{
	DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B* ___callHandlerImpl;
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
struct Entry_t145FB95C13D8717695720E16C90A1D25E759AB71  : public RuntimeObject
{
	String_t* ___key;
	String_t* ___value;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___valueBytes;
};
struct U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222  : public RuntimeObject
{
	Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___interceptor;
};
struct U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D  : public RuntimeObject
{
};
struct CoreCLR_t99C2F2D746F56048A069C1864CD2772A96B186B1  : public RuntimeObject
{
};
struct Linux_t3DBF7719A6D05B49972A425A5A1E76B8956E4281  : public RuntimeObject
{
};
struct MacOSX_t0627A21AC6EDD7374F4F4EE841C6B0B5391D9CAC  : public RuntimeObject
{
};
struct Mono_t120F7D0EC2AB1C53B45EEFF0A50DE8CCB69C1A50  : public RuntimeObject
{
};
struct Windows_t6A2004A999F886103FEB33A9FBEF54A62358A531  : public RuntimeObject
{
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8 
{
	String_t* ___key;
	RuntimeObject* ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C  : public CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD
{
	Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___channel;
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
struct InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF  : public CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD
{
	CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___invoker;
	Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___interceptor;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816 
{
	int32_t ___m_owner;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshaled_pinvoke
{
	int32_t ___m_owner;
};
struct SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshaled_com
{
	int32_t ___m_owner;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UnimplementedCallInvoker_tEA1975E20409477123667F212E14C2E495BBB6E5  : public CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD
{
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
struct CompletionCallbackData_tD7E0D6401BDC32516486CA28D5D53543FF2B8681 
{
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___U3CCallbackU3Ek__BackingField;
	RuntimeObject* ___U3CStateU3Ek__BackingField;
};
struct CompletionCallbackData_tD7E0D6401BDC32516486CA28D5D53543FF2B8681_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3CCallbackU3Ek__BackingField;
	Il2CppIUnknown* ___U3CStateU3Ek__BackingField;
};
struct CompletionCallbackData_tD7E0D6401BDC32516486CA28D5D53543FF2B8681_marshaled_com
{
	Il2CppMethodPointer ___U3CCallbackU3Ek__BackingField;
	Il2CppIUnknown* ___U3CStateU3Ek__BackingField;
};
struct MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896  : public Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654
{
	Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___interceptor;
};
struct UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 
{
	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___cq;
};
struct UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906_marshaled_pinvoke
{
	void* ___cq;
};
struct UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906_marshaled_com
{
	void* ___cq;
};
struct CallError_t042E4FEFC2CFD973EDC7AA6914704A16482E4A83 
{
	int32_t ___value__;
};
struct ChannelState_t23EAC5DF705E19C51D6865E2A3BA68530CA0633D 
{
	int32_t ___value__;
};
struct ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67 
{
	int32_t ___value__;
};
struct CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838  : public RuntimeObject
{
	GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49* ___environment;
	Func_1_tAA4ECBED6066AD3EA4D7289CEEE8EC2E20C49573* ___batchContextFactory;
	Func_1_t9EE439C42ABF0AD82E259B79C0A0ACC177FA92CC* ___requestCallContextFactory;
	Dictionary_2_t8B2A36B7C2D065646F35C01B885B63488BA2E5BE* ___dict;
	SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816 ___spinLock;
	intptr_t ___lastRegisteredKey;
};
struct ContextPropagationFlags_tD7DC82975AC8F0A053FE7AC61AB16D64EE8ADEDD 
{
	int32_t ___value__;
};
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	int32_t ___value__;
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
struct MethodType_t7873BA123471943AAAC2C35E01B1139D2E26CE56 
{
	int32_t ___value__;
};
struct PlatformID_t9C84323A65D2A39DBEB7A922286A9E9836B8BECA 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	intptr_t ___handle;
	int32_t ____state;
	bool ____ownsHandle;
	bool ____fullyInitialized;
};
struct StatusCode_t841BF5E120DD6F22ACD1DBE309365DE4CB3AB854 
{
	int32_t ___value__;
};
struct UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1  : public RuntimeObject
{
	String_t* ___libraryPath;
	intptr_t ___handle;
};
struct WriteFlags_t6663A04934C40CB2F5DB47CEFC78B8CD3108AAE4 
{
	int32_t ___value__;
};
struct NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 
{
	intptr_t ___AuthContext;
	uintptr_t ___Index;
	intptr_t ___Name;
};
struct CompletionType_t8AF73A30AAF1221D5BE1ABBE7102A1A4658E8D8D 
{
	int32_t ___value__;
};
struct Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318  : public RuntimeObject
{
	int32_t ___type;
	String_t* ___serviceName;
	String_t* ___name;
	Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* ___requestMarshaller;
	Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* ___responseMarshaller;
	String_t* ___fullName;
};
struct CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F 
{
	int32_t ___type;
	int32_t ___success;
	intptr_t ___tag;
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
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557  : public RuntimeObject
{
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version;
	int32_t ____platform;
	String_t* ____servicePack;
	String_t* ____versionString;
};
struct SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};
struct Status_tDDC69F95A6B0A81C14A533C56151168261064F9A 
{
	int32_t ___statusCode;
	String_t* ___detail;
};
struct Status_tDDC69F95A6B0A81C14A533C56151168261064F9A_marshaled_pinvoke
{
	int32_t ___statusCode;
	char* ___detail;
};
struct Status_tDDC69F95A6B0A81C14A533C56151168261064F9A_marshaled_com
{
	int32_t ___statusCode;
	Il2CppChar* ___detail;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 
{
	int64_t ___tv_sec;
	int32_t ___tv_nsec;
	int32_t ___clock_type;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9  : public RuntimeObject
{
	int32_t ___flags;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB  : public MulticastDelegate_t
{
};
struct DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751  : public MulticastDelegate_t
{
};
struct Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB  : public MulticastDelegate_t
{
};
struct Func_2_t440A737B31BAC1661CB293686028935A6C345B64  : public MulticastDelegate_t
{
};
struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6  : public MulticastDelegate_t
{
};
struct Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA  : public MulticastDelegate_t
{
};
struct BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
	Action_1_tC6249E5E3BC876ADDFB8D5C243CBC0095487E04A* ___returnToPoolAction;
	CompletionCallbackData_tD7E0D6401BDC32516486CA28D5D53543FF2B8681 ___completionCallbackData;
};
struct CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___completionQueue;
};
struct ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
	AtomicCounter_t7220A6A4450790E793A0B2288DF148C5ACB85310* ___shutdownRefcount;
	CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* ___completionRegistry;
};
struct GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624  : public MulticastDelegate_t
{
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918  : public MulticastDelegate_t
{
};
struct NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76  : public MulticastDelegate_t
{
};
struct RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E  : public MulticastDelegate_t
{
};
struct RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
	Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* ___returnToPoolAction;
	RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___U3CCompletionCallbackU3Ek__BackingField;
};
struct RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618  : public Exception_t
{
	Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___status;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___trailers;
};
struct ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D  : public RuntimeObject
{
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___callHandle;
	String_t* ___method;
	String_t* ___host;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___deadline;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___requestHeaders;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___responseTrailers;
	Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___status;
	Func_2_tFC51C87C24C4DF06829A486F11929F0F7DDC74AB* ___writeHeadersFunc;
	RuntimeObject* ___writeOptionsHolder;
	Lazy_1_t047470871949E2BD2D0BE02BBC3B8C0DA5148C2A* ___authContext;
};
struct ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E 
{
	Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___server;
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___call;
	String_t* ___method;
	String_t* ___host;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___deadline;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___requestMetadata;
};
struct ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_pinvoke
{
	Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___server;
	void* ___call;
	char* ___method;
	char* ___host;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___deadline;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___requestMetadata;
};
struct ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_com
{
	Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___server;
	void* ___call;
	Il2CppChar* ___method;
	Il2CppChar* ___host;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___deadline;
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___requestMetadata;
};
struct ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC  : public SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397
{
};
struct gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469  : public MulticastDelegate_t
{
};
struct gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561  : public MulticastDelegate_t
{
};
struct gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23  : public MulticastDelegate_t
{
};
struct gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64  : public MulticastDelegate_t
{
};
struct gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC  : public MulticastDelegate_t
{
};
struct gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030  : public MulticastDelegate_t
{
};
struct grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E  : public MulticastDelegate_t
{
};
struct grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C  : public MulticastDelegate_t
{
};
struct grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F  : public MulticastDelegate_t
{
};
struct grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6  : public MulticastDelegate_t
{
};
struct grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382  : public MulticastDelegate_t
{
};
struct grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821  : public MulticastDelegate_t
{
};
struct grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855  : public MulticastDelegate_t
{
};
struct grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D  : public MulticastDelegate_t
{
};
struct grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D  : public MulticastDelegate_t
{
};
struct grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF  : public MulticastDelegate_t
{
};
struct grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5  : public MulticastDelegate_t
{
};
struct grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54  : public MulticastDelegate_t
{
};
struct grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3  : public MulticastDelegate_t
{
};
struct grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7  : public MulticastDelegate_t
{
};
struct grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36  : public MulticastDelegate_t
{
};
struct grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A  : public MulticastDelegate_t
{
};
struct grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410  : public MulticastDelegate_t
{
};
struct grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19  : public MulticastDelegate_t
{
};
struct grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D  : public MulticastDelegate_t
{
};
struct grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1  : public MulticastDelegate_t
{
};
struct grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B  : public MulticastDelegate_t
{
};
struct grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9  : public MulticastDelegate_t
{
};
struct grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0  : public MulticastDelegate_t
{
};
struct grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8  : public MulticastDelegate_t
{
};
struct grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3  : public MulticastDelegate_t
{
};
struct grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D  : public MulticastDelegate_t
{
};
struct grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08  : public MulticastDelegate_t
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	String_t* ___U3CFileNameU3Ek__BackingField;
	String_t* ___U3CFusionLogU3Ek__BackingField;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B_StaticFields
{
	RuntimeObject* ___Logger;
};
struct Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA_StaticFields
{
	RuntimeObject* ___Logger;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___WatchConnectivityStateHandler;
};
struct GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_StaticFields
{
	RuntimeObject* ___staticLock;
	GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49* ___instance;
	int32_t ___refCount;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___customThreadPoolSize;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___customCompletionQueueCount;
	bool ___inlineHandlers;
	int32_t ___batchContextPoolSharedCapacity;
	int32_t ___batchContextPoolThreadLocalCapacity;
	int32_t ___requestCallContextPoolSharedCapacity;
	int32_t ___requestCallContextPoolThreadLocalCapacity;
	HashSet_1_t23D728BE0FFE10E58B7E140DEFDAAB45C6AA836C* ___registeredChannels;
	HashSet_1_t8AB376A197BAA876785C0C6E4B50DD43510E4BD7* ___registeredServers;
	RuntimeObject* ___logger;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ShuttingDown;
};
struct Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305_StaticFields
{
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___Empty;
};
struct PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields
{
	bool ___isLinux;
	bool ___isMacOSX;
	bool ___isWindows;
	bool ___isMono;
	bool ___isNetCore;
};
struct Server_t2016436C42019CF01603E5C47FE74700609E61EC_StaticFields
{
	RuntimeObject* ___Logger;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_StaticFields
{
	UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* ___Instance;
};
struct Entry_t145FB95C13D8717695720E16C90A1D25E759AB71_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___ValidKeyRegex;
};
struct U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields
{
	U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* ___U3CU3E9;
	Func_2_t440A737B31BAC1661CB293686028935A6C345B64* ___U3CU3E9__0_0;
};
struct U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields
{
	U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* ___U3CU3E9;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___U3CU3E9__2_0;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___U3CU3E9__2_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
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
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838_StaticFields
{
	RuntimeObject* ___Logger;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_StaticFields
{
	RuntimeObject* ___Logger;
};
struct CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct Status_tDDC69F95A6B0A81C14A533C56151168261064F9A_StaticFields
{
	Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___DefaultSuccess;
	Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___DefaultCancelled;
};
struct Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
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
struct WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9_StaticFields
{
	WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* ___Default;
};
struct AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
	RuntimeObject* ___Logger;
};
struct CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A_StaticFields
{
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___NullInstance;
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_IUnaryResponseClientCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_IReceivedStatusOnClientCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_IReceivedMessageCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_IReceivedResponseHeadersCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_ISendCompletionCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_ISendStatusFromServerCompletionCallback;
	BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___CompletionHandler_IReceivedCloseOnServerCallback;
};
struct ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
	RuntimeObject* ___Logger;
};
struct ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
struct ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields
{
	NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* ___Native;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50  : public RuntimeArray
{
	ALIGN_FIELD (8) Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* m_Items[1];

	inline Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshaller_1__ctor_m316DEBD45D70435A85845BCB69096008B9EAF1F5_gshared (Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E* __this, Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* ___0_serializer, Func_2_tEE2E132F8908935795FF1561B1E774E68C1BFEFF* ___1_deserializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Method_2__ctor_m54252142DEA57814D8A770A452A905F5F95D4005_gshared (Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* __this, int32_t ___0_type, String_t* ___1_serviceName, String_t* ___2_name, Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E* ___3_requestMarshaller, Marshaller_1_tA2ACD5FE5BF7F46C64934778702728312612139E* ___4_responseMarshaller, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplexStreamingServerMethod_2__ctor_mAB6848CB82B06A0A3554CF4FDA310A0198197EE7_gshared (DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2_gshared (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE* __this, Method_2_t3B9D4481D9371129D57A14D9F5FAB38F36207464* ___0_method, DuplexStreamingServerMethod_2_t1C7E8CFEC3650DA1D9BA73C1ECC265CCE45BFFDB* ___1_handler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DuplexStreamingServerCallHandler_2_HandleCall_mE6F238D89452F375D66074F01484B29D97042B7F_gshared (DuplexStreamingServerCallHandler_2_t4745618482B2ECFFD1E7E41412A5E049A56BDDCE* __this, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E ___0_newRpc, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared (RuntimeObject* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared (RuntimeObject* ___0_source, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___1_keySelector, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___2_elementSelector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___0_success, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSafeHandle__ctor_m748FDCF1956BFED97C7486C022917BD140C19457 (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSafeHandle__ctor_m83D2C4FA14E39AD36BC195F8CD2E0BA2E168D35D (CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringSafeHandle__ctor_mBD9927ABE5E20C3F3DAE74430ACF8A270221BC17 (CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionQueueSafeHandle__ctor_m5A84C1876FEB10756EF06A4E958B208DDCE23D48 (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataArraySafeHandle__ctor_mB255B6AD799B4896D76556FD4BFA08C1C0493683 (MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallCredentialsSafeHandle__ctor_mCA696BC953128D083E65396234A6E1988436849B (CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCredentialsSafeHandle__ctor_m0159E5A320A90D9EAC68C38105BA89AE37C7F1C5 (ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle__ctor_m26ABD7F4CD998FC49F017035D87252D8BC0700B6 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthContextSafeHandle__ctor_mDDF8431E0BED0F3C712C41770754A2F41B9EADB2 (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformApis_GetUname_m949E520B324761C2B3C37C0B360E4434ADCA51F5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformApis_uname_m8FFB632D0B091B8687646C706176ADF03C8DF735 (intptr_t ___0_buf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00 (SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* grpcsharp_request_call_context_create_delegate_Invoke_mCDDD9B7E5E34830285C805B05F2C0F9374AEB99A_inline (grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckState_m43970BE23BBA48D4AD14C8641FCEDE447E36209A (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_request_call_context_call_delegate_Invoke_m1DBAA893A2B366381A40D5672170B7B375CEDA63_inline (grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_method_delegate_Invoke_m46F68223AD40FCF07B7B5A165119C72DC97F5C52_inline (grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, uintptr_t* ___1_methodLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mDCD72FE33CAE42EBB32334D7CC555E97667864D3 (intptr_t ___0_ptr, int32_t ___1_len, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_host_delegate_Invoke_m3BE8DA48F9558BA8D68391344852B98057C37237_inline (grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, uintptr_t* ___1_hostLength, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 grpcsharp_request_call_context_deadline_delegate_Invoke_m95FC304F1EFF6CD91DFC59994A081845BDC46CEB_inline (grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_request_metadata_delegate_Invoke_m2E3FD33D9B7DEF8D14844D59B315D372DB3C124D_inline (grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mF940A657438E021016E354F69C4FE24F997AF415 (intptr_t ___0_metadataArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcNew__ctor_mEE030395CFD5F5773FFDA8E85B889855DB878448 (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___0_server, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_call, String_t* ___2_method, String_t* ___3_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___4_deadline, Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___5_requestMetadata, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_request_call_context_reset_delegate_Invoke_m0E4C88599E8883324089B355D7DEC973456632DF_inline (grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m73855DD5405B5F6940DB846DD7F8B911211F9DCB_inline (Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_request_call_context_destroy_delegate_Invoke_m32808A2FE550061EBBDBF4AE0D0305363B986705_inline (grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00* __this, intptr_t ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37_inline (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_Recycle_m8AF1E4C3A3FD2917F76346F188A11BE9993C378F (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B_inline (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestCallCompletionDelegate_Invoke_m90B2C1EA10F56D52729641928A625091E759876A_inline (RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* __this, bool ___0_success, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___1_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* NativeMethods_Get_mDAD647E854DF08A10EEB5644C917C8A2C62D389A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcEnvironment_get_Logger_m839180F12709257C8234DD89C741258F89C3E130_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_invalidHandleValue, bool ___1_ownsHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mD26A5AC8F9D1B72F4B75E06D44C6ABCA7BCDB4A0 (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Marshaller_1__ctor_mD972DC94D062EDBB4CC1E882684E8D655D37142C (Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* __this, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___0_serializer, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___1_deserializer, const RuntimeMethod* method)
{
	((  void (*) (Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC*, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, const RuntimeMethod*))Marshaller_1__ctor_m316DEBD45D70435A85845BCB69096008B9EAF1F5_gshared)(__this, ___0_serializer, ___1_deserializer, method);
}
inline void Method_2__ctor_m0C7338B864BA9B1B7868513E0FAE7103B1C7351E (Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* __this, int32_t ___0_type, String_t* ___1_serviceName, String_t* ___2_name, Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* ___3_requestMarshaller, Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* ___4_responseMarshaller, const RuntimeMethod* method)
{
	((  void (*) (Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318*, int32_t, String_t*, String_t*, Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC*, Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC*, const RuntimeMethod*))Method_2__ctor_m54252142DEA57814D8A770A452A905F5F95D4005_gshared)(__this, ___0_type, ___1_serviceName, ___2_name, ___3_requestMarshaller, ___4_responseMarshaller, method);
}
inline void DuplexStreamingServerMethod_2__ctor_mF1EF02E8266D129EFAEAB3339F77EB392A653B86 (DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751*, RuntimeObject*, intptr_t, const RuntimeMethod*))DuplexStreamingServerMethod_2__ctor_mAB6848CB82B06A0A3554CF4FDA310A0198197EE7_gshared)(__this, ___0_object, ___1_method, method);
}
inline void DuplexStreamingServerCallHandler_2__ctor_m900088B8231567887514475CE527FA6E6BF7419A (DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B* __this, Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* ___0_method, DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751* ___1_handler, const RuntimeMethod* method)
{
	((  void (*) (DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B*, Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318*, DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751*, const RuntimeMethod*))DuplexStreamingServerCallHandler_2__ctor_m810D96AA596E6881D407F35BA465BFEBF638CFD2_gshared)(__this, ___0_method, ___1_handler, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_m89DB42909FAC6EE24A54F4576DF79A5933911821 (Status_tDDC69F95A6B0A81C14A533C56151168261064F9A* __this, int32_t ___0_statusCode, String_t* ___1_detail, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServerCallContext_set_Status_mB85398DBA11BC4D2A51E7307601E238C35522B08_inline (ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D* __this, Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskUtils_get_CompletedTask_m82B98F5F987AB2911498387B6C8E5B0DF5425DDA (const RuntimeMethod* method) ;
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DuplexStreamingServerCallHandler_2_HandleCall_m93F20E730EAD38F3B4A8BEC6096E475055CD2535 (DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B* __this, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E ___0_newRpc, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B*, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*))DuplexStreamingServerCallHandler_2_HandleCall_mE6F238D89452F375D66074F01484B29D97042B7F_gshared)(__this, ___0_newRpc, ___1_cq, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnimplementedMethodCallHandler__ctor_mF07EACD670EC51C4B38EFC657D5A5583FC29D766 (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFE8CC528DE9A7DDA58C9A68AAF82B59C08695FB1 (U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* RpcException_get_Trailers_m3FCFA1A40AA512F53C5E182B389BAF895B93AB6E_inline (RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Metadata_GetEnumerator_mECBD8D2924B6A4306E6A280201F2FE50BB2D137A (Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_Add_m915C5A8263CC4BF5F1507E4783DDCBA28D3E3EE1 (Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* __this, Entry_t145FB95C13D8717695720E16C90A1D25E759AB71* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Status_tDDC69F95A6B0A81C14A533C56151168261064F9A RpcException_get_Status_m299E4544788E0334DF4A0BDA09E3F44DD983EBC6_inline (RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WriteOptions_get_Flags_mE773ECA6BA3F314A01E346EDF59CA8B2C9CE329D_inline (WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckArgument_m091B966182E70E54E11C193256AE8AC2E0262C5F (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m8AD80E1EF069A66D0E48BF7765C91088B5C09419 (uintptr_t* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_inline (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_inline (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Server_t2016436C42019CF01603E5C47FE74700609E61EC* ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ServerRpcNew_get_RequestMetadata_mA22EB952456851353D5826130BFEE68B33050E14_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcEnvironment_GrpcNativeInit_m08DBB77DCF2CF424D78861B5748DDD9055F97F38 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_inline (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D (UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_inline (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_inline (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_inline (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_inline (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F_inline (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* CompletionRegistry_RegisterBatchCompletion_mD747C56FEE7DDF057AB4F13832E2BE8B268C9B86 (CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* __this, BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_inline (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* CompletionRegistry_RegisterRequestCallCompletion_mAEDA7BFE4107841032C6E319BDCAB42BA9AE0520 (CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* __this, RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_inline (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallErrorExtensions_CheckOk_m43EAF4411DD6BEE27E2505769E0D5FCEACF2CD35 (int32_t ___0_callError, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_inline (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcEnvironment_GrpcNativeShutdown_mF0C1705180C7934A23443638F8EA29B1737A0647 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_inline (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, int32_t ___2_clock_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733 (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_inline (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_inline (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_inline (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_inline (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int32_t ___0_targetClock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_InfFuture_m8D65E08A1AF995742B050CE91D6162226547FC9A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_InfPast_m7D67B7B6054F3852452EE48545F5DE5AB9CA03B9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m568A6320E27F3F7708C77BF8751925C8775DD921 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckArgument_m1E50CC2CCDB582B46C5CC04EB01E60619B52A26F (bool ___0_condition, String_t* ___1_errorMessage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m8F1FA3C039A0148FC1500E790A77CB44F025EA9F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_inline (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_inline (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_inline (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, int32_t ___7_kind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallInvoker__ctor_mD26697B962D1C7E7010837D21D466C27C235E543 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibrary_FirstValidLibraryPath_mC5E53C71CCD30B198D85FF35FCB8938951D5464C (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_libraryPathAlternatives, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLibrary_PlatformSpecificLoadLibrary_mE7F468A4147C55D25C24130396212B5AC8F93C3A (String_t* ___0_libraryPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsWindows_m6FF375D9A1290B95A304777DA680091B0C92E1C1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_Is64Bit_m2839F3F2B7B373E962EB24652219EB99CB523247 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Windows_GetProcAddress_m097424DB1A9D880C62E59147A6074875B976D360 (intptr_t ___0_hModule, String_t* ___1_procName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsLinux_mED2791B96D9A3BF967C301D0EC8311ADF63FCC02_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMono_mCDA40AAFCFFF7200F5F04781A943634ABCECAF47_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_dlsym_m7B83E4542E62BE8A07581ABFE015F499C692682E (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsNetCore_mB96CBC14C9F06C2D22EA0FA72131A770C0CA488F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CoreCLR_dlsym_m8D72AAC1270157B550817201A0EE69A5967BFE7D (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Linux_dlsym_m156BDB39D7B6BC69DB4E20165253373973C7CD3C (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMacOSX_m941D84ED2FC827842033C5A7B84445DF92935340_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MacOSX_dlsym_mDF53ADD36C4E8BE1DAF4C02ED15622AF53CA6C63 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Windows_LoadLibrary_m9AA48007B9E91DF02E02B936791E4A3556CC9D7A (String_t* ___0_filename, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_dlopen_m28A6FCFD6D4175345383F596F0DAA79E26C34070 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CoreCLR_dlopen_m88D4F170C0DD39C3E6094F9C51FD70D376D8A9FF (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Linux_dlopen_m2E20C524D4EF9E1756180F57E3183FEF77230D85 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MacOSX_dlopen_m127C8AAA50733377855ECD5B5496FDEC36AF8BD8 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptingCallInvoker__ctor_m3E246B6225A39A749121FBB0F78A54D22882824F (InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF* __this, CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) ;
inline CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method)
{
	return ((  CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* (*) (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared)(___0_reference, ___1_paramName, method);
}
inline InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A (InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method)
{
	return ((  InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* (*) (InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared)(___0_reference, ___1_paramName, method);
}
inline RuntimeObject* Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_m9A7119559DCF20375E5B44E9BE2A759E62438A94 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInterceptor__ctor_m199227A74B7BC511CF87E1F03019B885F0DC258B (MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896* __this, Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___0_interceptor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interceptor__ctor_m5A0C506653E2A6D8C86CDC40FCAB4F2E565FB903 (Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* __this, const RuntimeMethod* method) ;
inline Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* GrpcPreconditions_CheckNotNull_TisFunc_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737_m1E31C40C20C437D198DE8A3AB02A7F2380A0AAFA (Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method)
{
	return ((  Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* (*) (Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared)(___0_reference, ___1_paramName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D (DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C* __this, Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_m2AF659AA9A64D55A7CC7D7B071BF51C01DE7DBA0 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* ___1_interceptors, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_mD5D6FE799A72BD510A86DAE02372A0FC677AD73C (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___1_interceptor, const RuntimeMethod* method) ;
inline Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2 (Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method)
{
	return ((  Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* (*) (Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared)(___0_reference, ___1_paramName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mB88991ED20CAD19E8F9B0B2CD6C5B3C53C0A94AB (U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* __this, const RuntimeMethod* method) ;
inline ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ___0_reference, String_t* ___1_paramName, const RuntimeMethod* method)
{
	return ((  ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* (*) (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m9D677D55A164E229D50DF0C9B4FCEEFF21A12C93_gshared)(___0_reference, ___1_paramName, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServerServiceDefinition_get_CallHandlers_mB5553AD15284459B1D798FF56E9F7F9156EA4C93_inline (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m3594CBEB8CA0148FFE22FBE09A939232C6A6B65C (Func_2_t440A737B31BAC1661CB293686028935A6C345B64* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t440A737B31BAC1661CB293686028935A6C345B64*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Func_2__ctor_m0A2B69F3E88BBC5F5286962A11680176379F3881 (Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
inline Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B* Enumerable_ToDictionary_TisKeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8_TisString_t_TisIServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_m7E489F30800A6148086097E5FF0CD16E283E2B35 (RuntimeObject* ___0_source, Func_2_t440A737B31BAC1661CB293686028935A6C345B64* ___1_keySelector, Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB* ___2_elementSelector, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B* (*) (RuntimeObject*, Func_2_t440A737B31BAC1661CB293686028935A6C345B64*, Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB*, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared)(___0_source, ___1_keySelector, ___2_elementSelector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerServiceDefinition__ctor_m2F6B2B58F0796D49F77989D2F01612BA159B67E1 (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* __this, Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B* ___0_callHandlers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ServerServiceDefinitionExtensions_Intercept_m1E0D77C68E6D8DB2D4916C7C1EF66359F88FA295 (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ___0_serverServiceDefinition, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) ;
inline RuntimeObject* KeyValuePair_2_get_Value_m9348A59FCE76A9F90808FBD2412C8F57492B7747_inline (KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10D65737A1E083BCEEE51758ADA7723AAD1D342E (U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* __this, const RuntimeMethod* method) ;
inline String_t* KeyValuePair_2_get_Key_m9BB9219D1993296C8AAEFD59227D3E86DA0D7EEE_inline (KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlsym(intptr_t, char*);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uname(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibrary(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlsym(intptr_t, char*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E_Multicast(grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* currentDelegate = reinterpret_cast<grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_credentials, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E_OpenInst(grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_credentials, method);
}
void grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E_OpenStatic(grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_credentials, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863 (grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_credentials);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_credentials_release_delegate__ctor_m490BDB2F2C9244BEDFA9DE7CD32D2B966E4B62CA (grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_credentials_release_delegate_Invoke_mD8D6013A9F902CC04704AEC8B893098B93CF202E (grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_credentials, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_credentials_release_delegate_BeginInvoke_m003955EE3BDEFC1DC805E42296F753572A4CED1A (grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, intptr_t ___0_credentials, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_credentials);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_credentials_release_delegate_EndInvoke_mFD2D9AB576E0AE10DAA18D1C60D9C640FD8E9393 (grpcsharp_channel_credentials_release_delegate_t16407EFCCEB9D0D1C303C5FF98CF8BEDCA1CD863* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_Multicast(grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* currentDelegate = reinterpret_cast<grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB*>(delegatesToInvoke[i]);
		typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_target, ___1_channelArgs, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_OpenInst(grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_target);
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_target, ___1_channelArgs, method);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_OpenStatic(grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, const RuntimeMethod* method)
{
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_target, ___1_channelArgs, method);
}
IL2CPP_EXTERN_C  ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* DelegatePInvokeWrapper_grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB (grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(char*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_target_marshaled = NULL;
	____0_target_marshaled = il2cpp_codegen_marshal_string(___0_target);

	void* ____1_channelArgs_marshaled = NULL;
	if (___1_channelArgs == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("channelArgs"), NULL);
	bool ___safeHandle_reference_incremented_for____1_channelArgs = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_channelArgs, (&___safeHandle_reference_incremented_for____1_channelArgs), NULL);
	____1_channelArgs_marshaled = reinterpret_cast<void*>((___1_channelArgs)->___handle);

	void* returnValue = il2cppPInvokeFunc(____0_target_marshaled, ____1_channelArgs_marshaled);

	ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* _returnValue_unmarshaled = (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*)il2cpp_codegen_object_new(ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_il2cpp_TypeInfo_var);
	ChannelSafeHandle__ctor_m748FDCF1956BFED97C7486C022917BD140C19457(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	il2cpp_codegen_marshal_free(____0_target_marshaled);
	____0_target_marshaled = NULL;

	if (___safeHandle_reference_incremented_for____1_channelArgs)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_channelArgs, NULL);
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_insecure_channel_create_delegate__ctor_m56739DFB9EEC933BBF662D3429E4C179C7DD2AE2 (grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_insecure_channel_create_delegate_Invoke_m9895847FACB4B8C37C7D970DFFADDAC693298B4E (grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, const RuntimeMethod* method) 
{
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_target, ___1_channelArgs, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_insecure_channel_create_delegate_BeginInvoke_m25860D4EC4DA28237B19335B2B65E188F798CAEC (grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, String_t* ___0_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___1_channelArgs, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_target;
	__d_args[1] = ___1_channelArgs;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_insecure_channel_create_delegate_EndInvoke_m6F1B2ED513E84B09CA22743F578207C5EB80FF46 (grpcsharp_insecure_channel_create_delegate_t8361ED45556E3901C2355C90A2B36BE9D6DE4EBB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_Multicast(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* currentDelegate = reinterpret_cast<grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54*>(delegatesToInvoke[i]);
		typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (RuntimeObject*, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_credentials, ___1_target, ___2_channelArgs, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenInst(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_credentials);
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_credentials, ___1_target, ___2_channelArgs, method);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenStatic(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_credentials, ___1_target, ___2_channelArgs, method);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenVirtual(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_credentials);
	return VirtualFuncInvoker2< ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_credentials, ___1_target, ___2_channelArgs);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenInterface(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_credentials);
	return InterfaceFuncInvoker2< ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_credentials, ___1_target, ___2_channelArgs);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenGenericVirtual(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_credentials);
	return GenericVirtualFuncInvoker2< ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* >::Invoke(method, ___0_credentials, ___1_target, ___2_channelArgs);
}
ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenGenericInterface(grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	NullCheck(___0_credentials);
	return GenericInterfaceFuncInvoker2< ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* >::Invoke(method, ___0_credentials, ___1_target, ___2_channelArgs);
}
IL2CPP_EXTERN_C  ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* DelegatePInvokeWrapper_grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54 (grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(void*, char*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_credentials_marshaled = NULL;
	if (___0_credentials == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("credentials"), NULL);
	bool ___safeHandle_reference_incremented_for____0_credentials = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_credentials, (&___safeHandle_reference_incremented_for____0_credentials), NULL);
	____0_credentials_marshaled = reinterpret_cast<void*>((___0_credentials)->___handle);

	char* ____1_target_marshaled = NULL;
	____1_target_marshaled = il2cpp_codegen_marshal_string(___1_target);

	void* ____2_channelArgs_marshaled = NULL;
	if (___2_channelArgs == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("channelArgs"), NULL);
	bool ___safeHandle_reference_incremented_for____2_channelArgs = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_channelArgs, (&___safeHandle_reference_incremented_for____2_channelArgs), NULL);
	____2_channelArgs_marshaled = reinterpret_cast<void*>((___2_channelArgs)->___handle);

	void* returnValue = il2cppPInvokeFunc(____0_credentials_marshaled, ____1_target_marshaled, ____2_channelArgs_marshaled);

	ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* _returnValue_unmarshaled = (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*)il2cpp_codegen_object_new(ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F_il2cpp_TypeInfo_var);
	ChannelSafeHandle__ctor_m748FDCF1956BFED97C7486C022917BD140C19457(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	if (___safeHandle_reference_incremented_for____0_credentials)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_credentials, NULL);
	}

	il2cpp_codegen_marshal_free(____1_target_marshaled);
	____1_target_marshaled = NULL;

	if (___safeHandle_reference_incremented_for____2_channelArgs)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_channelArgs, NULL);
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_secure_channel_create_delegate__ctor_m68B5274BBCF52B68303E0532A26FA86A9250DF53 (grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_Invoke_mC25ED768AB7B5841FC65314FF5F2ADDFC7237ACD (grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, const RuntimeMethod* method) 
{
	typedef ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* (*FunctionPointerType) (RuntimeObject*, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7*, String_t*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_credentials, ___1_target, ___2_channelArgs, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_secure_channel_create_delegate_BeginInvoke_mC347D91A5651364E0B711D3FE433AE8842E3D660 (grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, ChannelCredentialsSafeHandle_t47C341DCCA838874957C92E6208C0FAAFC8C82C7* ___0_credentials, String_t* ___1_target, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___2_channelArgs, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_credentials;
	__d_args[1] = ___1_target;
	__d_args[2] = ___2_channelArgs;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* grpcsharp_secure_channel_create_delegate_EndInvoke_mC099150EBC1250029853158A981B8DCE01837EEB (grpcsharp_secure_channel_create_delegate_t0A68DA92A29C3828B85AF43A1CAC4B77A5874A54* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_Multicast(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* currentDelegate = reinterpret_cast<grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2*>(delegatesToInvoke[i]);
		typedef CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenInst(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	typedef CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline, method);
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenStatic(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	typedef CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline, method);
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenVirtual(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return VirtualFuncInvoker6< CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline);
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenInterface(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return InterfaceFuncInvoker6< CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline);
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenGenericVirtual(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return GenericVirtualFuncInvoker6< CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 >::Invoke(method, ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline);
}
CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenGenericInterface(grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return GenericInterfaceFuncInvoker6< CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 >::Invoke(method, ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline);
}
IL2CPP_EXTERN_C  CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* DelegatePInvokeWrapper_grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2 (grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(void*, void*, int32_t, void*, char*, char*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_channel_marshaled = NULL;
	if (___0_channel == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("channel"), NULL);
	bool ___safeHandle_reference_incremented_for____0_channel = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_channel, (&___safeHandle_reference_incremented_for____0_channel), NULL);
	____0_channel_marshaled = reinterpret_cast<void*>((___0_channel)->___handle);

	void* ____1_parentCall_marshaled = NULL;
	if (___1_parentCall == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("parentCall"), NULL);
	bool ___safeHandle_reference_incremented_for____1_parentCall = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_parentCall, (&___safeHandle_reference_incremented_for____1_parentCall), NULL);
	____1_parentCall_marshaled = reinterpret_cast<void*>((___1_parentCall)->___handle);

	void* ____3_cq_marshaled = NULL;
	if (___3_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____3_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___3_cq, (&___safeHandle_reference_incremented_for____3_cq), NULL);
	____3_cq_marshaled = reinterpret_cast<void*>((___3_cq)->___handle);

	char* ____4_method_marshaled = NULL;
	____4_method_marshaled = il2cpp_codegen_marshal_string(___4_method);

	char* ____5_host_marshaled = NULL;
	____5_host_marshaled = il2cpp_codegen_marshal_string(___5_host);

	void* returnValue = il2cppPInvokeFunc(____0_channel_marshaled, ____1_parentCall_marshaled, ___2_propagationMask, ____3_cq_marshaled, ____4_method_marshaled, ____5_host_marshaled, ___6_deadline);

	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* _returnValue_unmarshaled = (CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*)il2cpp_codegen_object_new(CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A_il2cpp_TypeInfo_var);
	CallSafeHandle__ctor_m83D2C4FA14E39AD36BC195F8CD2E0BA2E168D35D(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	if (___safeHandle_reference_incremented_for____0_channel)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_channel, NULL);
	}

	if (___safeHandle_reference_incremented_for____1_parentCall)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_parentCall, NULL);
	}

	if (___safeHandle_reference_incremented_for____3_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___3_cq, NULL);
	}

	il2cpp_codegen_marshal_free(____4_method_marshaled);
	____4_method_marshaled = NULL;

	il2cpp_codegen_marshal_free(____5_host_marshaled);
	____5_host_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_create_call_delegate__ctor_mE4B3C9E08103E3466F6BB443EB4E2B88E41B22B0 (grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_Invoke_m2206961A7A4C1C944E81D5C46F934DDDB26B2388 (grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, const RuntimeMethod* method) 
{
	typedef CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, int32_t, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, String_t*, String_t*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channel, ___1_parentCall, ___2_propagationMask, ___3_cq, ___4_method, ___5_host, ___6_deadline, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_create_call_delegate_BeginInvoke_m8813BAA4452F67516BA9D3245BF3E70B57280E5B (grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_parentCall, int32_t ___2_propagationMask, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, String_t* ___4_method, String_t* ___5_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___6_deadline, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextPropagationFlags_tD7DC82975AC8F0A053FE7AC61AB16D64EE8ADEDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = ___0_channel;
	__d_args[1] = ___1_parentCall;
	__d_args[2] = Box(ContextPropagationFlags_tD7DC82975AC8F0A053FE7AC61AB16D64EE8ADEDD_il2cpp_TypeInfo_var, &___2_propagationMask);
	__d_args[3] = ___3_cq;
	__d_args[4] = ___4_method;
	__d_args[5] = ___5_host;
	__d_args[6] = Box(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, &___6_deadline);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_channel_create_call_delegate_EndInvoke_m04EDD90EE1B3ED8674D7CB949099FDA9B53050F6 (grpcsharp_channel_create_call_delegate_t940CF4EDB48F6642E9618A20660400CB019D59F2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_Multicast(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* currentDelegate = reinterpret_cast<grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_channel, ___1_tryToConnect, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenInst(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	typedef int32_t (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_tryToConnect, method);
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenStatic(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_tryToConnect, method);
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenVirtual(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return VirtualFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_channel, ___1_tryToConnect);
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenInterface(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_channel, ___1_tryToConnect);
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenGenericVirtual(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return GenericVirtualFuncInvoker1< int32_t, int32_t >::Invoke(method, ___0_channel, ___1_tryToConnect);
}
int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenGenericInterface(grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	return GenericInterfaceFuncInvoker1< int32_t, int32_t >::Invoke(method, ___0_channel, ___1_tryToConnect);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236 (grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_channel_marshaled = NULL;
	if (___0_channel == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("channel"), NULL);
	bool ___safeHandle_reference_incremented_for____0_channel = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_channel, (&___safeHandle_reference_incremented_for____0_channel), NULL);
	____0_channel_marshaled = reinterpret_cast<void*>((___0_channel)->___handle);

	int32_t returnValue = il2cppPInvokeFunc(____0_channel_marshaled, ___1_tryToConnect);

	if (___safeHandle_reference_incremented_for____0_channel)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_channel, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_check_connectivity_state_delegate__ctor_mF42E49C0DD935F165E620DDA0666384469193704 (grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_channel_check_connectivity_state_delegate_Invoke_m8774E63EBD10A883B83CABC0D38B2F3F8486689E (grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channel, ___1_tryToConnect, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m42C78E0BE3FAB68FF66D1929216AC92888691B2C (grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_tryToConnect, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_channel;
	__d_args[1] = Box(il2cpp_defaults.int32_class, &___1_tryToConnect);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_mEEFB74C89303B95DCFECD29BBDD5BDB5E2582B5D (grpcsharp_channel_check_connectivity_state_delegate_t1F23901B0D249E4D0A34150B1DF9D41D88BB2236* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_Multicast(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* currentDelegate = reinterpret_cast<grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenInst(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	typedef void (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx, method);
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenStatic(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx, method);
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenVirtual(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	VirtualActionInvoker4< int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx);
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenInterface(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	InterfaceActionInvoker4< int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx);
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenGenericVirtual(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	GenericVirtualActionInvoker4< int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* >::Invoke(method, ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx);
}
void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenGenericInterface(grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_channel);
	GenericInterfaceActionInvoker4< int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* >::Invoke(method, ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E (grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_channel_marshaled = NULL;
	if (___0_channel == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("channel"), NULL);
	bool ___safeHandle_reference_incremented_for____0_channel = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_channel, (&___safeHandle_reference_incremented_for____0_channel), NULL);
	____0_channel_marshaled = reinterpret_cast<void*>((___0_channel)->___handle);

	void* ____3_cq_marshaled = NULL;
	if (___3_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____3_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___3_cq, (&___safeHandle_reference_incremented_for____3_cq), NULL);
	____3_cq_marshaled = reinterpret_cast<void*>((___3_cq)->___handle);

	void* ____4_ctx_marshaled = NULL;
	if (___4_ctx == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("ctx"), NULL);
	bool ___safeHandle_reference_incremented_for____4_ctx = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___4_ctx, (&___safeHandle_reference_incremented_for____4_ctx), NULL);
	____4_ctx_marshaled = reinterpret_cast<void*>((___4_ctx)->___handle);

	il2cppPInvokeFunc(____0_channel_marshaled, ___1_lastObservedState, ___2_deadline, ____3_cq_marshaled, ____4_ctx_marshaled);

	if (___safeHandle_reference_incremented_for____0_channel)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_channel, NULL);
	}

	if (___safeHandle_reference_incremented_for____3_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___3_cq, NULL);
	}

	if (___safeHandle_reference_incremented_for____4_ctx)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___4_ctx, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_watch_connectivity_state_delegate__ctor_m1C721A50EC81908967E95FD340B901F5B7664ED0 (grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m13B047C205A5B235D2BF9F189A482B766E973964 (grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, int32_t, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channel, ___1_lastObservedState, ___2_deadline, ___3_cq, ___4_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_m7701A808F711D65E84420BECA0F1CBA70E385108 (grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_channel, int32_t ___1_lastObservedState, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___2_deadline, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___3_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___4_ctx, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelState_t23EAC5DF705E19C51D6865E2A3BA68530CA0633D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_channel;
	__d_args[1] = Box(ChannelState_t23EAC5DF705E19C51D6865E2A3BA68530CA0633D_il2cpp_TypeInfo_var, &___1_lastObservedState);
	__d_args[2] = Box(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, &___2_deadline);
	__d_args[3] = ___3_cq;
	__d_args[4] = ___4_ctx;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mCF98E6E3001EAC9D4FD14EF8F18771C904D9D475 (grpcsharp_channel_watch_connectivity_state_delegate_t545398944693485D7E394D4C4C708ED28CC1169E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_Multicast(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* currentDelegate = reinterpret_cast<grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382*>(delegatesToInvoke[i]);
		typedef CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_call, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenInst(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	typedef CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_call, method);
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenStatic(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	typedef CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* (*FunctionPointerType) (ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_call, method);
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenVirtual(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return VirtualFuncInvoker0< CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_call);
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenInterface(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return InterfaceFuncInvoker0< CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_call);
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenGenericVirtual(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return GenericVirtualFuncInvoker0< CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* >::Invoke(method, ___0_call);
}
CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenGenericInterface(grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return GenericInterfaceFuncInvoker0< CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* >::Invoke(method, ___0_call);
}
IL2CPP_EXTERN_C  CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* DelegatePInvokeWrapper_grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382 (grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_call_marshaled = NULL;
	if (___0_call == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("call"), NULL);
	bool ___safeHandle_reference_incremented_for____0_call = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_call, (&___safeHandle_reference_incremented_for____0_call), NULL);
	____0_call_marshaled = reinterpret_cast<void*>((___0_call)->___handle);

	void* returnValue = il2cppPInvokeFunc(____0_call_marshaled);

	CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* _returnValue_unmarshaled = (CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF*)il2cpp_codegen_object_new(CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF_il2cpp_TypeInfo_var);
	CStringSafeHandle__ctor_mBD9927ABE5E20C3F3DAE74430ACF8A270221BC17(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	if (___safeHandle_reference_incremented_for____0_call)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_call, NULL);
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_get_target_delegate__ctor_m69E0EDBF233D285381F86340774EA517EC1A32AF (grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_Invoke_m4F91F9D133A059A0E24DA9DAB87C60307EDB6FE0 (grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, const RuntimeMethod* method) 
{
	typedef CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* (*FunctionPointerType) (RuntimeObject*, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_call, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_get_target_delegate_BeginInvoke_m41FD9F8A3F9738FED121CA778D2F379536E421E6 (grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, ChannelSafeHandle_tCFF8B15A38A3A3C30CCC7D17CE60F3780729D37F* ___0_call, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_call;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF* grpcsharp_channel_get_target_delegate_EndInvoke_mF347845D42800C0D1A8899BA0F6D65375CC3294D (grpcsharp_channel_get_target_delegate_t49B0728F4FE7D6AAEA7D2D36630D02FA67496382* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (CStringSafeHandle_t20F2C93B904E96F41B196729BD47189845A8EFCF*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890_Multicast(grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* currentDelegate = reinterpret_cast<grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_channel, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890_OpenInst(grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channel, method);
}
void grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890_OpenStatic(grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channel, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C (grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_channel);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_destroy_delegate__ctor_mCC90227F91850E872330AA38C87D60E29470324D (grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_destroy_delegate_Invoke_m3A15110E5BB00879FDF6FEF68F018AE0E3312890 (grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channel, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_channel_destroy_delegate_BeginInvoke_m67ADA9DADEBAE9D3FB419543D5B5B449E216EB11 (grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, intptr_t ___0_channel, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_channel);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_channel_destroy_delegate_EndInvoke_m13F3B6E4E6104C15780821E4CE48D77475715275 (grpcsharp_channel_destroy_delegate_t2B5F8FB3C8DCF7010549515F886CF7081344DD5C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2_Multicast(grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* currentDelegate = reinterpret_cast<grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2_OpenInst(grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
int32_t grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2_OpenStatic(grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0 (grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_sizeof_grpc_event_delegate__ctor_m655B25034BAA0C48555FE543C858EFF8D12A4823 (grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_sizeof_grpc_event_delegate_Invoke_m9A9B5B83FAC1D2045E9F86377A7BD24E181FA7C2 (grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m67BB982006897AD2852E620A43FBF26BBBA279A7 (grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m6791FEB839B91F5C15562A82BE47DF4B4F0487DA (grpcsharp_sizeof_grpc_event_delegate_t30370DA493C888A7468E6962DAFC9FA65A4E4BB0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6_Multicast(grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99*>(delegatesToInvoke[i]);
		typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6_OpenInst(grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, const RuntimeMethod* method)
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6_OpenStatic(grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, const RuntimeMethod* method)
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* DelegatePInvokeWrapper_grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99 (grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* returnValue = il2cppPInvokeFunc();

	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* _returnValue_unmarshaled = (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*)il2cpp_codegen_object_new(CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_il2cpp_TypeInfo_var);
	CompletionQueueSafeHandle__ctor_m5A84C1876FEB10756EF06A4E958B208DDCE23D48(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_create_async_delegate__ctor_m68D5E92BEB2D2A5A03E6717ABE6A960D71DFB2BB (grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_async_delegate_Invoke_m33F8AED0850F8C5BA83FF2CA9E4DE495A03419B6 (grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, const RuntimeMethod* method) 
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m4FBAD9D3EFF0676FF4471CB4F8B78A75E327597A (grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_async_delegate_EndInvoke_m1310AB3A1C6FBE0B32B43D3BF690FF3D7D5BD6D2 (grpcsharp_completion_queue_create_async_delegate_t06792341B1EFF179204EBD7723E9665F40321E99* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271_Multicast(grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796*>(delegatesToInvoke[i]);
		typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271_OpenInst(grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, const RuntimeMethod* method)
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271_OpenStatic(grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, const RuntimeMethod* method)
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* DelegatePInvokeWrapper_grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796 (grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* returnValue = il2cppPInvokeFunc();

	CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* _returnValue_unmarshaled = (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*)il2cpp_codegen_object_new(CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328_il2cpp_TypeInfo_var);
	CompletionQueueSafeHandle__ctor_m5A84C1876FEB10756EF06A4E958B208DDCE23D48(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_create_sync_delegate__ctor_m894E9688D7A7BF91EE7CFB734ECE1AD6D76BC9F1 (grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_sync_delegate_Invoke_mF4BBA6944F5E3D6A13E0BDE8AAA61D7DF8B6F271 (grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, const RuntimeMethod* method) 
{
	typedef CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_mD0AEDB4E7CD0B2ACA1554782E6F0F4C1EBA5F2FB (grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mC1AB1A15B369B2F7FB31FD4BDE06F0728FA0EF2C (grpcsharp_completion_queue_create_sync_delegate_t9840DEEFDB2D7184120281A79386276217C9A796* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_Multicast(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenInst(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	typedef void (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenStatic(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenVirtual(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_cq);
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenInterface(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_cq);
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenGenericVirtual(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	GenericVirtualActionInvoker0::Invoke(method, ___0_cq);
}
void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenGenericInterface(grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_cq);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855 (grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_cq_marshaled = NULL;
	if (___0_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____0_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_cq, (&___safeHandle_reference_incremented_for____0_cq), NULL);
	____0_cq_marshaled = reinterpret_cast<void*>((___0_cq)->___handle);

	il2cppPInvokeFunc(____0_cq_marshaled);

	if (___safeHandle_reference_incremented_for____0_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_cq, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_shutdown_delegate__ctor_mF8C9F107D297284B54CBCA63A70E850CE896AF0F (grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_shutdown_delegate_Invoke_m2F2C331CC84F7BE806A156C71E43F0453E858977 (grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mF114860209CBD70BBD1940360A9D32F51A6CAB5A (grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_cq;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_shutdown_delegate_EndInvoke_mF126F6DEF24824BB85A39DFEBC36A375CBA247A8 (grpcsharp_completion_queue_shutdown_delegate_tBD27A616761B4FE20005BAFB2F2623621685F855* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_Multicast(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1*>(delegatesToInvoke[i]);
		typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenInst(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenStatic(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenVirtual(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return VirtualFuncInvoker0< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_cq);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenInterface(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return InterfaceFuncInvoker0< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_cq);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenGenericVirtual(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return GenericVirtualFuncInvoker0< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F >::Invoke(method, ___0_cq);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenGenericInterface(grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return GenericInterfaceFuncInvoker0< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F >::Invoke(method, ___0_cq);
}
IL2CPP_EXTERN_C  CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F DelegatePInvokeWrapper_grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1 (grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method)
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_cq_marshaled = NULL;
	if (___0_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____0_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_cq, (&___safeHandle_reference_incremented_for____0_cq), NULL);
	____0_cq_marshaled = reinterpret_cast<void*>((___0_cq)->___handle);

	CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F returnValue = il2cppPInvokeFunc(____0_cq_marshaled);

	if (___safeHandle_reference_incremented_for____0_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_cq, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_next_delegate__ctor_m7D455EF701175F00503842245EFCAD402ADEF449 (grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_Invoke_mAA9DD405ED0710B9C07DEBCDE111DB034DDD1D6B (grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method) 
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_next_delegate_BeginInvoke_mD1C1EF3E4E2E2B1C9543A82BE5FAE1C63CC751BD (grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_cq;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_next_delegate_EndInvoke_m5D2021611AEA0D44D38C2FB1410685F70CAE0900 (grpcsharp_completion_queue_next_delegate_t7D141C6B6D221C276A167CEA9AAE147A0D6F6CF1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_Multicast(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821*>(delegatesToInvoke[i]);
		typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cq, ___1_tag, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenInst(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_cq, ___1_tag, method);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenStatic(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_cq, ___1_tag, method);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenVirtual(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return VirtualFuncInvoker1< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_cq, ___1_tag);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenInterface(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return InterfaceFuncInvoker1< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_cq, ___1_tag);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenGenericVirtual(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return GenericVirtualFuncInvoker1< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F, intptr_t >::Invoke(method, ___0_cq, ___1_tag);
}
CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenGenericInterface(grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	NullCheck(___0_cq);
	return GenericInterfaceFuncInvoker1< CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F, intptr_t >::Invoke(method, ___0_cq, ___1_tag);
}
IL2CPP_EXTERN_C  CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F DelegatePInvokeWrapper_grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821 (grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method)
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_cq_marshaled = NULL;
	if (___0_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____0_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_cq, (&___safeHandle_reference_incremented_for____0_cq), NULL);
	____0_cq_marshaled = reinterpret_cast<void*>((___0_cq)->___handle);

	CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F returnValue = il2cppPInvokeFunc(____0_cq_marshaled, ___1_tag);

	if (___safeHandle_reference_incremented_for____0_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_cq, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_pluck_delegate__ctor_mB6A3314E0F38D36042B5C3C065A5E8A6ADC5228F (grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_Invoke_mCDE97BC1758BEC5BE002460F0379D7E032CCA362 (grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, const RuntimeMethod* method) 
{
	typedef CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F (*FunctionPointerType) (RuntimeObject*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cq, ___1_tag, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mA77ADA64C9E72A0F26DBE9086DA263289DE0B60E (grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, intptr_t ___1_tag, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_cq;
	__d_args[1] = Box(il2cpp_defaults.int_class, &___1_tag);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F grpcsharp_completion_queue_pluck_delegate_EndInvoke_m218BD0AFB231FA90C3AC01C13B0637508CD7EB94 (grpcsharp_completion_queue_pluck_delegate_tF66F5BB182FAD0BBFEFC43E9926DE6902186D821* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(CompletionQueueEvent_t41FF5BEBEBB0C026969147B544C8846976A3772F*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808_Multicast(grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* currentDelegate = reinterpret_cast<grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808_OpenInst(grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
void grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808_OpenStatic(grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_cq, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B (grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_cq);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_destroy_delegate__ctor_m75E6B119A599AE94BD8A8A675AC6D4A911DF4019 (grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_destroy_delegate_Invoke_mD66DF4BDAF9BFA844303DE4F19F13093A274E808 (grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_cq, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_completion_queue_destroy_delegate_BeginInvoke_m3CCC73D12845B15C6B01358510A9FCD88DCA3899 (grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, intptr_t ___0_cq, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_cq);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_completion_queue_destroy_delegate_EndInvoke_mF56D7B2FAC4212B796D5982BEC561504474D3798 (grpcsharp_completion_queue_destroy_delegate_t70066357267A8BE35A6DCFD2C56F8F198BC5B19B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9_Multicast(gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* currentDelegate = reinterpret_cast<gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9_OpenInst(gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ptr, method);
}
void gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9_OpenStatic(gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_ptr, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561 (gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_ptr);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_free_delegate__ctor_mE59A2FAB200EE5E5F98A37335FE2B4008C65E41B (gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_free_delegate_Invoke_mF57374375612BB38D9106975B736FB5595EE91F9 (gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_free_delegate_BeginInvoke_mA79C4A50C449BC082F049EB064F98FFEA06D711F (gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_free_delegate_EndInvoke_m09FE6B055D4A6B02CB73DD0398A6F511B7611DF0 (gprsharp_free_delegate_t01888642E53A4B68FD1B19B3321566B68241C561* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD_Multicast(grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C*>(delegatesToInvoke[i]);
		typedef MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* (*FunctionPointerType) (RuntimeObject*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_capacity, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD_OpenInst(grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, const RuntimeMethod* method)
{
	typedef MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* (*FunctionPointerType) (uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_capacity, method);
}
MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD_OpenStatic(grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, const RuntimeMethod* method)
{
	typedef MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* (*FunctionPointerType) (uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_capacity, method);
}
IL2CPP_EXTERN_C  MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* DelegatePInvokeWrapper_grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C (grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* returnValue = il2cppPInvokeFunc(___0_capacity);

	MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* _returnValue_unmarshaled = (MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*)il2cpp_codegen_object_new(MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_il2cpp_TypeInfo_var);
	MetadataArraySafeHandle__ctor_mB255B6AD799B4896D76556FD4BFA08C1C0493683(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_create_delegate__ctor_m69B731AC924A0034255C249604CA2322BE48D424 (grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* grpcsharp_metadata_array_create_delegate_Invoke_mF0806264F8357AE9D15E87E56196CD74AB4953CD (grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, const RuntimeMethod* method) 
{
	typedef MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* (*FunctionPointerType) (RuntimeObject*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_capacity, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_create_delegate_BeginInvoke_m040FE3CE054332C973D188CDE0E259384481EE3E (grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, uintptr_t ___0_capacity, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.uint_class, &___0_capacity);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* grpcsharp_metadata_array_create_delegate_EndInvoke_m327C9F36782784CC91CA6608D41DF7F9C9D23366 (grpcsharp_metadata_array_create_delegate_t41AB92120765BC45D0A28048BDB5AA44A664210C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_Multicast(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_array, ___1_key, ___2_value, ___3_valueLength, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenInst(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	typedef void (*FunctionPointerType) (MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_array, ___1_key, ___2_value, ___3_valueLength, method);
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenStatic(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_array, ___1_key, ___2_value, ___3_valueLength, method);
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenVirtual(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	VirtualActionInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_array, ___1_key, ___2_value, ___3_valueLength);
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenInterface(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	InterfaceActionInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_array, ___1_key, ___2_value, ___3_valueLength);
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenGenericVirtual(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	GenericVirtualActionInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(method, ___0_array, ___1_key, ___2_value, ___3_valueLength);
}
void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenGenericInterface(grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	GenericInterfaceActionInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(method, ___0_array, ___1_key, ___2_value, ___3_valueLength);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08 (grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, char*, uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_array_marshaled = NULL;
	if (___0_array == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("array"), NULL);
	bool ___safeHandle_reference_incremented_for____0_array = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_array, (&___safeHandle_reference_incremented_for____0_array), NULL);
	____0_array_marshaled = reinterpret_cast<void*>((___0_array)->___handle);

	char* ____1_key_marshaled = NULL;
	____1_key_marshaled = il2cpp_codegen_marshal_string(___1_key);

	uint8_t* ____2_value_marshaled = NULL;
	if (___2_value != NULL)
	{
		____2_value_marshaled = reinterpret_cast<uint8_t*>((___2_value)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_array_marshaled, ____1_key_marshaled, ____2_value_marshaled, ___3_valueLength);

	if (___safeHandle_reference_incremented_for____0_array)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_array, NULL);
	}

	il2cpp_codegen_marshal_free(____1_key_marshaled);
	____1_key_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_add_delegate__ctor_m7837BA398F4B697C271D3A86C353924E5D82EB8C (grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_add_delegate_Invoke_mA1B5DF2E12F0A1DA0175C1356D5C2724816DE438 (grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_array, ___1_key, ___2_value, ___3_valueLength, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_add_delegate_BeginInvoke_m631DCCC98AD3127930DCC81C8B02E0BE1A32CCEA (grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___0_array, String_t* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_value, uintptr_t ___3_valueLength, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_array;
	__d_args[1] = ___1_key;
	__d_args[2] = ___2_value;
	__d_args[3] = Box(il2cpp_defaults.uint_class, &___3_valueLength);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_add_delegate_EndInvoke_m658DC39EBCA6E9A76739CBA8575CB918A3E745AA (grpcsharp_metadata_array_add_delegate_tB0C4DD4CEDF827686B1BFF5EBB5ECEE5D6454F08* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uintptr_t grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3_Multicast(grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_metadataArray, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
uintptr_t grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3_OpenInst(grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, method);
}
uintptr_t grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3_OpenStatic(grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, method);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF (grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	uintptr_t returnValue = il2cppPInvokeFunc(___0_metadataArray);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_count_delegate__ctor_mE4CE5B74399C8A772C0B89C3EBACFDE216F123C4 (grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t grpcsharp_metadata_array_count_delegate_Invoke_m8C53F8C5E9407FBB62FBB92B32279E806043E1C3 (grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_metadataArray, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_count_delegate_BeginInvoke_mAEAC3B02421ED4C964DEF3ECA103E01C58798A47 (grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, intptr_t ___0_metadataArray, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_metadataArray);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t grpcsharp_metadata_array_count_delegate_EndInvoke_m1A00D6E2D618723ABDF7B4F3EC8FDAFD18376DCD (grpcsharp_metadata_array_count_delegate_t5D5A053F14F223587C886A3072538740D4DBF0DF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035_Multicast(grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_metadataArray, ___1_index, ___2_keyLength, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
intptr_t grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035_OpenInst(grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, ___1_index, ___2_keyLength, method);
}
intptr_t grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035_OpenStatic(grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, ___1_index, ___2_keyLength, method);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67 (grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uintptr_t, uintptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	intptr_t returnValue = il2cppPInvokeFunc(___0_metadataArray, ___1_index, ___2_keyLength);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_get_key_delegate__ctor_m62D134E73C917006721338A19126391BC571FA67 (grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_metadata_array_get_key_delegate_Invoke_m5A50E0C6F6FCE82E96A03CDE48EFE27499BF5035 (grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_metadataArray, ___1_index, ___2_keyLength, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_get_key_delegate_BeginInvoke_m9B44B758877AB1165CD95C0813DB745F3498B0EE (grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_keyLength, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_metadataArray);
	__d_args[1] = Box(il2cpp_defaults.uint_class, &___1_index);
	__d_args[2] = Box(il2cpp_defaults.uint_class, &*___2_keyLength);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_metadata_array_get_key_delegate_EndInvoke_mF133D2D987A5D4EA195FB77BF2B9369D68650029 (grpcsharp_metadata_array_get_key_delegate_t24EBB30341D496A1586DFBE7EB94D9A4EB8CFC67* __this, uintptr_t* ___0_keyLength, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_keyLength,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A_Multicast(grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_metadataArray, ___1_index, ___2_valueLength, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
intptr_t grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A_OpenInst(grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, ___1_index, ___2_valueLength, method);
}
intptr_t grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A_OpenStatic(grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_metadataArray, ___1_index, ___2_valueLength, method);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8 (grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uintptr_t, uintptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	intptr_t returnValue = il2cppPInvokeFunc(___0_metadataArray, ___1_index, ___2_valueLength);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_get_value_delegate__ctor_mD743869A321EA666C4BCF8497973E3ED47F2DDC0 (grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_metadata_array_get_value_delegate_Invoke_m491126E6D1C3EA93B6C5109FC465D2490371542A (grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uintptr_t, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_metadataArray, ___1_index, ___2_valueLength, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m8AE47C9A84FCB7C99D6A59A45C6DB427A1D29F76 (grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, intptr_t ___0_metadataArray, uintptr_t ___1_index, uintptr_t* ___2_valueLength, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_metadataArray);
	__d_args[1] = Box(il2cpp_defaults.uint_class, &___1_index);
	__d_args[2] = Box(il2cpp_defaults.uint_class, &*___2_valueLength);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_metadata_array_get_value_delegate_EndInvoke_m1BDC8179A12BF55F5BDA4A775EF553EDA1EAFAFD (grpcsharp_metadata_array_get_value_delegate_t45602EDEAF111B5FF842941502CA7A5493657CB8* __this, uintptr_t* ___0_valueLength, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_valueLength,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C_Multicast(grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* currentDelegate = reinterpret_cast<grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_array, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C_OpenInst(grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_array, method);
}
void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C_OpenStatic(grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_array, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B (grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_array);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_destroy_full_delegate__ctor_mA051E4F7036F4761D1D5565C7681FA5AC931165C (grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m46F154D5D580ACA4D33E2D4BF23D3437763ECD1C (grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_array, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_mB33454ED82F2F37F0CFC8449645AD46278ED9713 (grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, intptr_t ___0_array, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_array);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_mEB24CD6DD31CDE1E951E649A234F722570DE05F9 (grpcsharp_metadata_array_destroy_full_delegate_t8CD018E768D69079CFDFB36FDF495B29AE48DD2B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_Multicast(grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* currentDelegate = reinterpret_cast<grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_callback, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_OpenInst(grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, const RuntimeMethod* method)
{
	NullCheck(___0_callback);
	typedef void (*FunctionPointerType) (GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_callback, method);
}
void grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_OpenStatic(grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_callback, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834 (grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	il2cppPInvokeFunc(____0_callback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_redirect_log_delegate__ctor_m6BBEAA32764841B4821AC089569E647D26E8A10B (grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_redirect_log_delegate_Invoke_m447207DED0EA6FC3C68355F82D5B02EBF685DAE2 (grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_redirect_log_delegate_BeginInvoke_m51E37819512166D4A2FFE85FEF3583C8260CCA98 (grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, GprLogDelegate_tC3ECAAA6701AB41C33C8EE78318D609B9C95C624* ___0_callback, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1___callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_callback;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1___callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_redirect_log_delegate_EndInvoke_m8D3D8713C6CB384A1A3B90FDA50C8794A8469435 (grpcsharp_redirect_log_delegate_tD965C7706A482769B70517F83DE7A8BB8BD16834* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_Multicast(grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* currentDelegate = reinterpret_cast<grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D*>(delegatesToInvoke[i]);
		typedef CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* (*FunctionPointerType) (RuntimeObject*, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_interceptor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_OpenInst(grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, const RuntimeMethod* method)
{
	NullCheck(___0_interceptor);
	typedef CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* (*FunctionPointerType) (NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_interceptor, method);
}
CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_OpenStatic(grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, const RuntimeMethod* method)
{
	typedef CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* (*FunctionPointerType) (NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_interceptor, method);
}
IL2CPP_EXTERN_C  CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* DelegatePInvokeWrapper_grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D (grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Il2CppMethodPointer ____0_interceptor_marshaled = NULL;
	____0_interceptor_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_interceptor));

	void* returnValue = il2cppPInvokeFunc(____0_interceptor_marshaled);

	CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* _returnValue_unmarshaled = (CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0*)il2cpp_codegen_object_new(CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0_il2cpp_TypeInfo_var);
	CallCredentialsSafeHandle__ctor_mCA696BC953128D083E65396234A6E1988436849B(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_mD7BD5BB9A71D34AFEA2F839AAD9703EEBDFF75EA (grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mD9F2B7EDB35E7AA8E3478F97E7EEFB43FB5242B2 (grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, const RuntimeMethod* method) 
{
	typedef CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* (*FunctionPointerType) (RuntimeObject*, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_interceptor, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m7E6846A9EDB5AD5E94EAFA7F3F470DC769639B23 (grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, NativeMetadataInterceptor_t270D879413722FC334772F5BF189898F66367B76* ___0_interceptor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_interceptor;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0* grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m5212C0F7B38CDF21CF95A395A0D8719B3D90B1B6 (grpcsharp_metadata_credentials_create_from_plugin_delegate_t9FFD6F6673515F1F9DED7F7429ABC589587BF23D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (CallCredentialsSafeHandle_tDD844FC1A7C86B4C0EAB40886928B2295D247DD0*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9_Multicast(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* currentDelegate = reinterpret_cast<grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_callbackPtr, ___1_userData, ___2_metadataArray, ___3_statusCode, ___4_errorDetails, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9_OpenInst(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_callbackPtr, ___1_userData, ___2_metadataArray, ___3_statusCode, ___4_errorDetails, method);
}
void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9_OpenStatic(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_callbackPtr, ___1_userData, ___2_metadataArray, ___3_statusCode, ___4_errorDetails, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, void*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____2_metadataArray_marshaled = NULL;
	if (___2_metadataArray == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("metadataArray"), NULL);
	bool ___safeHandle_reference_incremented_for____2_metadataArray = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_metadataArray, (&___safeHandle_reference_incremented_for____2_metadataArray), NULL);
	____2_metadataArray_marshaled = reinterpret_cast<void*>((___2_metadataArray)->___handle);

	char* ____4_errorDetails_marshaled = NULL;
	____4_errorDetails_marshaled = il2cpp_codegen_marshal_string(___4_errorDetails);

	il2cppPInvokeFunc(___0_callbackPtr, ___1_userData, ____2_metadataArray_marshaled, ___3_statusCode, ____4_errorDetails_marshaled);

	if (___safeHandle_reference_incremented_for____2_metadataArray)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_metadataArray, NULL);
	}

	il2cpp_codegen_marshal_free(____4_errorDetails_marshaled);
	____4_errorDetails_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mF99185F06466B4535950EB37224FE6D24FA72E2A (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mAF057BF4D3E4469ED6A7D8A23D4C36B5B740FBB9 (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_callbackPtr, ___1_userData, ___2_metadataArray, ___3_statusCode, ___4_errorDetails, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m166E39F9EA8E239644AC7171E680F17F487D10F1 (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, intptr_t ___0_callbackPtr, intptr_t ___1_userData, MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3* ___2_metadataArray, int32_t ___3_statusCode, String_t* ___4_errorDetails, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusCode_t841BF5E120DD6F22ACD1DBE309365DE4CB3AB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_callbackPtr);
	__d_args[1] = Box(il2cpp_defaults.int_class, &___1_userData);
	__d_args[2] = ___2_metadataArray;
	__d_args[3] = Box(StatusCode_t841BF5E120DD6F22ACD1DBE309365DE4CB3AB854_il2cpp_TypeInfo_var, &___3_statusCode);
	__d_args[4] = ___4_errorDetails;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m9AF334B86D293029399A2DCC18AF93B2DEDF6C17 (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t63997F6D57FE939BAA68FFD4333D62CF115E2A8D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_Multicast(grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* currentDelegate = reinterpret_cast<grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8*>(delegatesToInvoke[i]);
		typedef ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* (*FunctionPointerType) (RuntimeObject*, String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uintptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_pemRootCerts, ___1_keyCertPairCertChainArray, ___2_keyCertPairPrivateKeyArray, ___3_numKeyCertPairs, ___4_forceClientAuth, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_OpenInst(grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method)
{
	NullCheck(___0_pemRootCerts);
	typedef ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* (*FunctionPointerType) (String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_pemRootCerts, ___1_keyCertPairCertChainArray, ___2_keyCertPairPrivateKeyArray, ___3_numKeyCertPairs, ___4_forceClientAuth, method);
}
ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_OpenStatic(grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method)
{
	typedef ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* (*FunctionPointerType) (String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_pemRootCerts, ___1_keyCertPairCertChainArray, ___2_keyCertPairPrivateKeyArray, ___3_numKeyCertPairs, ___4_forceClientAuth, method);
}
IL2CPP_EXTERN_C  ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* DelegatePInvokeWrapper_grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8 (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(char*, char**, char**, uintptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_pemRootCerts_marshaled = NULL;
	____0_pemRootCerts_marshaled = il2cpp_codegen_marshal_string(___0_pemRootCerts);

	char** ____1_keyCertPairCertChainArray_marshaled = NULL;
	if (___1_keyCertPairCertChainArray != NULL)
	{
		il2cpp_array_size_t ____1_keyCertPairCertChainArray_Length = (___1_keyCertPairCertChainArray)->max_length;
		____1_keyCertPairCertChainArray_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____1_keyCertPairCertChainArray_Length + 1);
		(____1_keyCertPairCertChainArray_marshaled)[____1_keyCertPairCertChainArray_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_keyCertPairCertChainArray_Length); i++)
		{
			(____1_keyCertPairCertChainArray_marshaled)[i] = il2cpp_codegen_marshal_string((___1_keyCertPairCertChainArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_keyCertPairCertChainArray_marshaled = NULL;
	}

	char** ____2_keyCertPairPrivateKeyArray_marshaled = NULL;
	if (___2_keyCertPairPrivateKeyArray != NULL)
	{
		il2cpp_array_size_t ____2_keyCertPairPrivateKeyArray_Length = (___2_keyCertPairPrivateKeyArray)->max_length;
		____2_keyCertPairPrivateKeyArray_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____2_keyCertPairPrivateKeyArray_Length + 1);
		(____2_keyCertPairPrivateKeyArray_marshaled)[____2_keyCertPairPrivateKeyArray_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_keyCertPairPrivateKeyArray_Length); i++)
		{
			(____2_keyCertPairPrivateKeyArray_marshaled)[i] = il2cpp_codegen_marshal_string((___2_keyCertPairPrivateKeyArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____2_keyCertPairPrivateKeyArray_marshaled = NULL;
	}

	void* returnValue = il2cppPInvokeFunc(____0_pemRootCerts_marshaled, ____1_keyCertPairCertChainArray_marshaled, ____2_keyCertPairPrivateKeyArray_marshaled, ___3_numKeyCertPairs, ___4_forceClientAuth);

	ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* _returnValue_unmarshaled = (ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*)il2cpp_codegen_object_new(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
	ServerCredentialsSafeHandle__ctor_m0159E5A320A90D9EAC68C38105BA89AE37C7F1C5(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	il2cpp_codegen_marshal_free(____0_pemRootCerts_marshaled);
	____0_pemRootCerts_marshaled = NULL;

	if (____1_keyCertPairCertChainArray_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_keyCertPairCertChainArray_marshaled_CleanupLoopCount = (___1_keyCertPairCertChainArray != NULL) ? (___1_keyCertPairCertChainArray)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_keyCertPairCertChainArray_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____1_keyCertPairCertChainArray_marshaled)[i]);
			(____1_keyCertPairCertChainArray_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____1_keyCertPairCertChainArray_marshaled);
		____1_keyCertPairCertChainArray_marshaled = NULL;
	}

	if (____2_keyCertPairPrivateKeyArray_marshaled != NULL)
	{
		const il2cpp_array_size_t ____2_keyCertPairPrivateKeyArray_marshaled_CleanupLoopCount = (___2_keyCertPairPrivateKeyArray != NULL) ? (___2_keyCertPairPrivateKeyArray)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_keyCertPairPrivateKeyArray_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____2_keyCertPairPrivateKeyArray_marshaled)[i]);
			(____2_keyCertPairPrivateKeyArray_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____2_keyCertPairPrivateKeyArray_marshaled);
		____2_keyCertPairPrivateKeyArray_marshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_ssl_server_credentials_create_delegate__ctor_m197D6298D3F644FA6832A1D4EB4A60831C0338FD (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190 (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method) 
{
	typedef ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* (*FunctionPointerType) (RuntimeObject*, String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_pemRootCerts, ___1_keyCertPairCertChainArray, ___2_keyCertPairPrivateKeyArray, ___3_numKeyCertPairs, ___4_forceClientAuth, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_m271ACFFB8B3188E544FF4A0574E3E2295910A342 (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_pemRootCerts;
	__d_args[1] = ___1_keyCertPairCertChainArray;
	__d_args[2] = ___2_keyCertPairPrivateKeyArray;
	__d_args[3] = Box(il2cpp_defaults.uint_class, &___3_numKeyCertPairs);
	__d_args[4] = Box(il2cpp_defaults.int32_class, &___4_forceClientAuth);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_mFAB9166110A2BEA9B4A07E86910D60FA1A8DA79F (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_Multicast(grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* currentDelegate = reinterpret_cast<grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_credentials, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_OpenInst(grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_credentials, method);
}
void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_OpenStatic(grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_credentials, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410 (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_credentials);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_credentials_release_delegate__ctor_m545DB20D9AE17C6E4E143009A99351A916EDB82B (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_credentials, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_credentials_release_delegate_BeginInvoke_mF233C6FCC4E7E394E2238CEEE842073FF23DFAF5 (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_credentials);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_credentials_release_delegate_EndInvoke_m1E4EAF3119DD96F331FD002403A08F12F0679044 (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_Multicast(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* currentDelegate = reinterpret_cast<grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A*>(delegatesToInvoke[i]);
		typedef ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* (*FunctionPointerType) (RuntimeObject*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_args, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenInst(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	NullCheck(___0_args);
	typedef ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* (*FunctionPointerType) (ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_args, method);
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenStatic(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	typedef ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* (*FunctionPointerType) (ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_args, method);
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenVirtual(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	NullCheck(___0_args);
	return VirtualFuncInvoker0< ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_args);
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenInterface(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	NullCheck(___0_args);
	return InterfaceFuncInvoker0< ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_args);
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenGenericVirtual(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	NullCheck(___0_args);
	return GenericVirtualFuncInvoker0< ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* >::Invoke(method, ___0_args);
}
ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenGenericInterface(grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	NullCheck(___0_args);
	return GenericInterfaceFuncInvoker0< ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* >::Invoke(method, ___0_args);
}
IL2CPP_EXTERN_C  ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* DelegatePInvokeWrapper_grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_args_marshaled = NULL;
	if (___0_args == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("args"), NULL);
	bool ___safeHandle_reference_incremented_for____0_args = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_args, (&___safeHandle_reference_incremented_for____0_args), NULL);
	____0_args_marshaled = reinterpret_cast<void*>((___0_args)->___handle);

	void* returnValue = il2cppPInvokeFunc(____0_args_marshaled);

	ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* _returnValue_unmarshaled = (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*)il2cpp_codegen_object_new(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
	ServerSafeHandle__ctor_m26ABD7F4CD998FC49F017035D87252D8BC0700B6(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	if (___safeHandle_reference_incremented_for____0_args)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_args, NULL);
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_create_delegate__ctor_m783A49B172F36AE10A422E4CB4B648F1C995521A (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method) 
{
	typedef ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* (*FunctionPointerType) (RuntimeObject*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_args, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_create_delegate_BeginInvoke_mFBFAC5778B1ADDE4931BE115E9EFE8C7DF69773A (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_args;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_EndInvoke_mDCADAB7362641B04B382E612FC1D77EC72B10EEE (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_Multicast(grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* currentDelegate = reinterpret_cast<grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, ___1_cq, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_OpenInst(grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, method);
}
void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_OpenStatic(grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	void* ____1_cq_marshaled = NULL;
	if (___1_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____1_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_cq, (&___safeHandle_reference_incremented_for____1_cq), NULL);
	____1_cq_marshaled = reinterpret_cast<void*>((___1_cq)->___handle);

	il2cppPInvokeFunc(____0_server_marshaled, ____1_cq_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

	if (___safeHandle_reference_incremented_for____1_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_cq, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_register_completion_queue_delegate__ctor_m3DA8B40BA2AC8D881490479D0C936D01F6FDE697 (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_register_completion_queue_delegate_BeginInvoke_m04615C5EF396407271F8D9FDCE9FBE4B766B5305 (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_server;
	__d_args[1] = ___1_cq;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_register_completion_queue_delegate_EndInvoke_m12CC3B82FA0BB0378BA9EC1548CFDC52F87B6DEA (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_Multicast(grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* currentDelegate = reinterpret_cast<grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, ___1_addr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_OpenInst(grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_addr, method);
}
int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_OpenStatic(grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_addr, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3 (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	char* ____1_addr_marshaled = NULL;
	____1_addr_marshaled = il2cpp_codegen_marshal_string(___1_addr);

	int32_t returnValue = il2cppPInvokeFunc(____0_server_marshaled, ____1_addr_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

	il2cpp_codegen_marshal_free(____1_addr_marshaled);
	____1_addr_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_add_insecure_http2_port_delegate__ctor_m5BE635FBEBB5537F2336F1911C30D0FF8045F40C (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4 (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_addr, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m453F74FC0A906FA2F181BC33D70171BF1D021743 (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_server;
	__d_args[1] = ___1_addr;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m85AAE75D5D7DBC34CAFE6E39EB7F65B2C6A705FA (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_Multicast(grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* currentDelegate = reinterpret_cast<grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, ___1_addr, ___2_creds, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_OpenInst(grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_addr, ___2_creds, method);
}
int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_OpenStatic(grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_addr, ___2_creds, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7 (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, char*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	char* ____1_addr_marshaled = NULL;
	____1_addr_marshaled = il2cpp_codegen_marshal_string(___1_addr);

	void* ____2_creds_marshaled = NULL;
	if (___2_creds == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("creds"), NULL);
	bool ___safeHandle_reference_incremented_for____2_creds = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_creds, (&___safeHandle_reference_incremented_for____2_creds), NULL);
	____2_creds_marshaled = reinterpret_cast<void*>((___2_creds)->___handle);

	int32_t returnValue = il2cppPInvokeFunc(____0_server_marshaled, ____1_addr_marshaled, ____2_creds_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

	il2cpp_codegen_marshal_free(____1_addr_marshaled);
	____1_addr_marshaled = NULL;

	if (___safeHandle_reference_incremented_for____2_creds)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_creds, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_add_secure_http2_port_delegate__ctor_m68221C0DE3333CFA50EF2FD14A203A77331F6F4A (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_addr, ___2_creds, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_mCFB0B55E1739C5BB842B706B4CEF2EE2D4A9E346 (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_server;
	__d_args[1] = ___1_addr;
	__d_args[2] = ___2_creds;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_m1F8BFB503EC9298467AF070E7CF19E608CCD966A (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_Multicast(grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* currentDelegate = reinterpret_cast<grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_OpenInst(grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_OpenStatic(grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9 (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	il2cppPInvokeFunc(____0_server_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_start_delegate__ctor_m73C6C5DD4FF6EE902DEE76F6FC4E230FFD45DC53 (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11 (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_start_delegate_BeginInvoke_m1DE66B1CF8E01FC11F5CAF9B5E8240A4C4CCAC56 (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_server;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_start_delegate_EndInvoke_m9D666BB9A7D3CD34A5DA9E9DCDD723DFD2ED880E (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_Multicast(grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* currentDelegate = reinterpret_cast<grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_OpenInst(grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, ___2_ctx, method);
}
int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_OpenStatic(grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, ___2_ctx, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1 (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	void* ____1_cq_marshaled = NULL;
	if (___1_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____1_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_cq, (&___safeHandle_reference_incremented_for____1_cq), NULL);
	____1_cq_marshaled = reinterpret_cast<void*>((___1_cq)->___handle);

	void* ____2_ctx_marshaled = NULL;
	if (___2_ctx == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("ctx"), NULL);
	bool ___safeHandle_reference_incremented_for____2_ctx = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_ctx, (&___safeHandle_reference_incremented_for____2_ctx), NULL);
	____2_ctx_marshaled = reinterpret_cast<void*>((___2_ctx)->___handle);

	int32_t returnValue = il2cppPInvokeFunc(____0_server_marshaled, ____1_cq_marshaled, ____2_ctx_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

	if (___safeHandle_reference_incremented_for____1_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_cq, NULL);
	}

	if (___safeHandle_reference_incremented_for____2_ctx)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_ctx, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_request_call_delegate__ctor_mC213682D9C8F4001A6C2E6C34C68C9A8F158BE94 (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366 (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_request_call_delegate_BeginInvoke_m9BBAEBFD69FEC13D54F7D4B0C90BA6269211C93D (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_server;
	__d_args[1] = ___1_cq;
	__d_args[2] = ___2_ctx;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_server_request_call_delegate_EndInvoke_m9292539890507A5905E8DFA2FB7882FE97E9FBF3 (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_Multicast(grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* currentDelegate = reinterpret_cast<grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_OpenInst(grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_OpenStatic(grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36 (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	il2cppPInvokeFunc(____0_server_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_cancel_all_calls_delegate__ctor_mF1C48FD7B5C7307882F4C3898F674985EBD3314D (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m1D727A3B3C59A3C8E4E5C8B96E913AE4192CB961 (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_server;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mA4D73C0D2EA9FEAD5AF1FA148C266AAB2429986E (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_Multicast(grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* currentDelegate = reinterpret_cast<grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_OpenInst(grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_server);
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, ___2_ctx, method);
}
void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_OpenStatic(grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, ___1_cq, ___2_ctx, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_server_marshaled = NULL;
	if (___0_server == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("server"), NULL);
	bool ___safeHandle_reference_incremented_for____0_server = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_server, (&___safeHandle_reference_incremented_for____0_server), NULL);
	____0_server_marshaled = reinterpret_cast<void*>((___0_server)->___handle);

	void* ____1_cq_marshaled = NULL;
	if (___1_cq == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("cq"), NULL);
	bool ___safeHandle_reference_incremented_for____1_cq = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_cq, (&___safeHandle_reference_incremented_for____1_cq), NULL);
	____1_cq_marshaled = reinterpret_cast<void*>((___1_cq)->___handle);

	void* ____2_ctx_marshaled = NULL;
	if (___2_ctx == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("ctx"), NULL);
	bool ___safeHandle_reference_incremented_for____2_ctx = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_ctx, (&___safeHandle_reference_incremented_for____2_ctx), NULL);
	____2_ctx_marshaled = reinterpret_cast<void*>((___2_ctx)->___handle);

	il2cppPInvokeFunc(____0_server_marshaled, ____1_cq_marshaled, ____2_ctx_marshaled);

	if (___safeHandle_reference_incremented_for____0_server)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_server, NULL);
	}

	if (___safeHandle_reference_incremented_for____1_cq)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_cq, NULL);
	}

	if (___safeHandle_reference_incremented_for____2_ctx)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_ctx, NULL);
	}

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m71A08DC150DEF116B2E71AC0BCD494DDF2D570A1 (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m252547855D82CDD1B4937039CF99EB729AAC86BE (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_server;
	__d_args[1] = ___1_cq;
	__d_args[2] = ___2_ctx;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m389B44FD5C6AEFBF311E6A1F2E3EC3B5F10A8FEF (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_Multicast(grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* currentDelegate = reinterpret_cast<grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_OpenInst(grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_OpenStatic(grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_server, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19 (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_server);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_destroy_delegate__ctor_m730E6EF04686CB6A20621C1635A60BBD0C6527FF (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011 (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_server_destroy_delegate_BeginInvoke_mC72FFBBA172BDB2556010052F81A42E9A20974AC (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_server);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_server_destroy_delegate_EndInvoke_m0E47AB2358D17611B7A75A199AC17ECBF52C32E9 (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_Multicast(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* currentDelegate = reinterpret_cast<grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799*>(delegatesToInvoke[i]);
		typedef AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* (*FunctionPointerType) (RuntimeObject*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_call, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenInst(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	typedef AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* (*FunctionPointerType) (CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_call, method);
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenStatic(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	typedef AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* (*FunctionPointerType) (CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_call, method);
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenVirtual(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return VirtualFuncInvoker0< AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_call);
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenInterface(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return InterfaceFuncInvoker0< AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_call);
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenGenericVirtual(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return GenericVirtualFuncInvoker0< AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* >::Invoke(method, ___0_call);
}
AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenGenericInterface(grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	NullCheck(___0_call);
	return GenericInterfaceFuncInvoker0< AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* >::Invoke(method, ___0_call);
}
IL2CPP_EXTERN_C  AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* DelegatePInvokeWrapper_grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799 (grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_call_marshaled = NULL;
	if (___0_call == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("call"), NULL);
	bool ___safeHandle_reference_incremented_for____0_call = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_call, (&___safeHandle_reference_incremented_for____0_call), NULL);
	____0_call_marshaled = reinterpret_cast<void*>((___0_call)->___handle);

	void* returnValue = il2cppPInvokeFunc(____0_call_marshaled);

	AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* _returnValue_unmarshaled = (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*)il2cpp_codegen_object_new(AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B_il2cpp_TypeInfo_var);
	AuthContextSafeHandle__ctor_mDDF8431E0BED0F3C712C41770754A2F41B9EADB2(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle = _returnValue_unmarshaled_handle_temp;

	if (___safeHandle_reference_incremented_for____0_call)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_call, NULL);
	}

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_call_auth_context_delegate__ctor_m7FB8CA5E19DD01B964216240A4A4B9134ED7480F (grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_Invoke_mCFE15D90A7464F1DB7289A62AD2D8A8556AD92DE (grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, const RuntimeMethod* method) 
{
	typedef AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* (*FunctionPointerType) (RuntimeObject*, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_call, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_call_auth_context_delegate_BeginInvoke_mDCD1DE1649CE81E0086EE6D8B432875250DCC036 (grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___0_call, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_call;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* grpcsharp_call_auth_context_delegate_EndInvoke_m09A54D3B86B745E1C0907BD518AFDAB42E7FF4B6 (grpcsharp_call_auth_context_delegate_t2170D60CB9EA1CD4529CC75952558E84A8339799* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_Multicast(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* currentDelegate = reinterpret_cast<grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenInst(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	typedef intptr_t (*FunctionPointerType) (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenStatic(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenVirtual(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return VirtualFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_authContext);
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenInterface(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return InterfaceFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_authContext);
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenGenericVirtual(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return GenericVirtualFuncInvoker0< intptr_t >::Invoke(method, ___0_authContext);
}
intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenGenericInterface(grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return GenericInterfaceFuncInvoker0< intptr_t >::Invoke(method, ___0_authContext);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E (grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_authContext_marshaled = NULL;
	if (___0_authContext == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("authContext"), NULL);
	bool ___safeHandle_reference_incremented_for____0_authContext = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_authContext, (&___safeHandle_reference_incremented_for____0_authContext), NULL);
	____0_authContext_marshaled = reinterpret_cast<void*>((___0_authContext)->___handle);

	intptr_t returnValue = il2cppPInvokeFunc(____0_authContext_marshaled);

	if (___safeHandle_reference_incremented_for____0_authContext)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_authContext, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m330A08C8041EAFF0FBA325BDC4DAA9EF48305D3F (grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_mF785304C38FBCDEC63B5CADD38F4EDF8E7F041D6 (grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mACA41711C623E205E5B1EF02FF4C4EB63CBF8E91 (grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_authContext;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m5A9AA0EB33FBDFE26E1A5C2F2CF62BE34B1371EF (grpcsharp_auth_context_peer_identity_property_name_delegate_t77C50910A0A6E095D4C1EAF55EF769E364DBCE9E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_Multicast(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* currentDelegate = reinterpret_cast<grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C*>(delegatesToInvoke[i]);
		typedef NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 (*FunctionPointerType) (RuntimeObject*, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenInst(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	typedef NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 (*FunctionPointerType) (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenStatic(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	typedef NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 (*FunctionPointerType) (AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenVirtual(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return VirtualFuncInvoker0< NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_authContext);
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenInterface(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return InterfaceFuncInvoker0< NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_authContext);
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenGenericVirtual(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return GenericVirtualFuncInvoker0< NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 >::Invoke(method, ___0_authContext);
}
NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenGenericInterface(grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	NullCheck(___0_authContext);
	return GenericInterfaceFuncInvoker0< NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 >::Invoke(method, ___0_authContext);
}
IL2CPP_EXTERN_C  NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 DelegatePInvokeWrapper_grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C (grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method)
{
	typedef NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	void* ____0_authContext_marshaled = NULL;
	if (___0_authContext == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("authContext"), NULL);
	bool ___safeHandle_reference_incremented_for____0_authContext = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_authContext, (&___safeHandle_reference_incremented_for____0_authContext), NULL);
	____0_authContext_marshaled = reinterpret_cast<void*>((___0_authContext)->___handle);

	NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 returnValue = il2cppPInvokeFunc(____0_authContext_marshaled);

	if (___safeHandle_reference_incremented_for____0_authContext)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_authContext, NULL);
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_context_property_iterator_delegate__ctor_m92B9BEDF493F52A812975990A0329A78E83B3162 (grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_Invoke_m239265BA84B1E38049A298C7BEB2E03535118093 (grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, const RuntimeMethod* method) 
{
	typedef NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 (*FunctionPointerType) (RuntimeObject*, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_mE3E4D47BC70F3605C2D39BDE5728BC6C21E02488 (grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, AuthContextSafeHandle_t2877376682FEF171390696A3A42BF89869AE426B* ___0_authContext, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_authContext;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87 grpcsharp_auth_context_property_iterator_delegate_EndInvoke_mD79347B919D1304F9240D7F30281BA1CACBE9360 (grpcsharp_auth_context_property_iterator_delegate_tB9065C5DF333B5D8A265F4BA526696F193FA012C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_Multicast(grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* currentDelegate = reinterpret_cast<grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_iterator, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
intptr_t grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_OpenInst(grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_iterator, method);
}
intptr_t grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_OpenStatic(grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_iterator, method);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6 (grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	intptr_t returnValue = il2cppPInvokeFunc(___0_iterator);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_property_iterator_next_delegate__ctor_m97CB1B8CD1A85102526689B3ADD5B49550793100 (grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_auth_property_iterator_next_delegate_Invoke_mA4F3ACA820549431B25CE1A14B12598C98E2F5C7 (grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_iterator, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mBF9BAD7B0DB94F3604011F6384A9413DF8999E6A (grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87_il2cpp_TypeInfo_var, &*___0_iterator);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m1AFB9170CCF61B9CE8A00BA97263865B7E767638 (grpcsharp_auth_property_iterator_next_delegate_t8CE9BB3FB1A11C840C9B4439662A0541ACCCE8F6* __this, NativeAuthPropertyIterator_t36F490BB82E7AA0B72EF9319BD850FAA95CFFD87* ___0_iterator, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_iterator,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77_Multicast(grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* currentDelegate = reinterpret_cast<grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77_OpenInst(grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
void grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77_OpenStatic(grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_authContext, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F (grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_authContext);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_context_release_delegate__ctor_m94B16E7C720663BD24DC47CB62EA4C55FC9A2691 (grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_context_release_delegate_Invoke_mA39EE4DA38DC5783E5EA32C5408AFA52FF60DA77 (grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_authContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_auth_context_release_delegate_BeginInvoke_m0C81127B3C3512A2774C555637F9A49B44A51853 (grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, intptr_t ___0_authContext, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_authContext);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_auth_context_release_delegate_EndInvoke_m978AB944BD9C7B4335BE4B5B9D2B995FA17A93AF (grpcsharp_auth_context_release_delegate_t769A5BC655D2B0FA3FF90EC59911C013BF7AE34F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_Multicast(gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* currentDelegate = reinterpret_cast<gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC*>(delegatesToInvoke[i]);
		typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_OpenInst(gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_OpenStatic(gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 DelegatePInvokeWrapper_gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 returnValue = il2cppPInvokeFunc(___0_clockType);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_now_delegate__ctor_m3879E6298194FC24B77052FDAEC69A127821F87E (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504 (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_now_delegate_BeginInvoke_mC589638EC38C2E574B6893CFED7F3C9D40F65A6D (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var, &___0_clockType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_EndInvoke_m0D165A76B57B2D7AD036A1154784896FE2BEF5D2 (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_Multicast(gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* currentDelegate = reinterpret_cast<gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23*>(delegatesToInvoke[i]);
		typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_OpenInst(gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_OpenStatic(gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 DelegatePInvokeWrapper_gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23 (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 returnValue = il2cppPInvokeFunc(___0_clockType);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_inf_future_delegate__ctor_mEF086DBAD8DA00B4D9002FEEC803AAD1F15F77B0 (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_inf_future_delegate_BeginInvoke_m3DED992B2D45E353AEA40ED4686CB5576AF339A6 (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var, &___0_clockType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_EndInvoke_mA2F11EDE903BA3C43BD2AC197DF60B3E56683239 (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_Multicast(gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* currentDelegate = reinterpret_cast<gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64*>(delegatesToInvoke[i]);
		typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_OpenInst(gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_OpenStatic(gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_clockType, method);
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 DelegatePInvokeWrapper_gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64 (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 returnValue = il2cppPInvokeFunc(___0_clockType);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_inf_past_delegate__ctor_mCD3EC5B870E9EF002902827BDE5C19FD95690FFE (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_inf_past_delegate_BeginInvoke_m737D0FB767DE4C6CAEC9C0911023C6EA523E9E21 (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var, &___0_clockType);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_EndInvoke_m771282F17C9E243E029EE3F2C581DE392D48B198 (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_Multicast(gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* currentDelegate = reinterpret_cast<gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469*>(delegatesToInvoke[i]);
		typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_t, ___1_targetClock, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_OpenInst(gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_t, ___1_targetClock, method);
}
Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_OpenStatic(gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_t, ___1_targetClock, method);
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 DelegatePInvokeWrapper_gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469 (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method)
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (DEFAULT_CALL *PInvokeFunc)(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 returnValue = il2cppPInvokeFunc(___0_t, ___1_targetClock);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_convert_clock_type_delegate__ctor_m8E1039A12A3E0E22473A8C86476BC961C5BEF6FE (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_t, ___1_targetClock, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_convert_clock_type_delegate_BeginInvoke_m034ED63C52A33889597A69108DE4477C9581B942 (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, &___0_t);
	__d_args[1] = Box(ClockType_t6092C742FB6F0BAAC25998822057D557C5261E67_il2cpp_TypeInfo_var, &___1_targetClock);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_EndInvoke_m1456772E71AC2B1BD0E511DE92555FC042102A6E (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_Multicast(gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* currentDelegate = reinterpret_cast<gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_OpenInst(gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_OpenStatic(gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030 (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gprsharp_sizeof_timespec_delegate__ctor_m8C56A726F691FC3E547FF30BA724BEFA41CD73EA (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468 (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gprsharp_sizeof_timespec_delegate_BeginInvoke_m65EB6624992C244525F28F2E8DF304A47D63289B (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gprsharp_sizeof_timespec_delegate_EndInvoke_mB1CF3E6E20C76F4EAD8E9D497D92F0DEACCE0A0C (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_Multicast(grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* currentDelegate = reinterpret_cast<grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_callback, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_OpenInst(grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, const RuntimeMethod* method)
{
	NullCheck(___0_callback);
	typedef int32_t (*FunctionPointerType) (NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_callback, method);
}
int32_t grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_OpenStatic(grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_callback, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3 (grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	int32_t returnValue = il2cppPInvokeFunc(____0_callback_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_test_callback_delegate__ctor_mF23FFB0CB95AB3E1E60B9DFBDB3C89437BAF4AE0 (grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_test_callback_delegate_Invoke_mE46231A5CA8DF28AD96ECC6A3697050880A3821B (grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_test_callback_delegate_BeginInvoke_m2CD4E0D8CE30C7408A5FA22B410CACA04A46EE91 (grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, NativeCallbackTestDelegate_t6069B15CFA069EB520C5A1086EEEE73E25460918* ___0_callback, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1___callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_callback;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1___callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t grpcsharp_test_callback_delegate_EndInvoke_mA69A9CBD0F265F9D3B49EE4F3EA8F8FF83E0F810 (grpcsharp_test_callback_delegate_t9B5ACC99A48B8821E5493EE93489402623785BE3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521_Multicast(grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* currentDelegate = reinterpret_cast<grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
intptr_t grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521_OpenInst(grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ptr, method);
}
intptr_t grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521_OpenStatic(grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ptr, method);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D (grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_test_nop_delegate__ctor_mB58E188466D843D12AE239C2479EB6FA8578A3D5 (grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_test_nop_delegate_Invoke_m9804DFAF31E78C0DF88F627931F686B8FFFF0521 (grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_test_nop_delegate_BeginInvoke_m2B1D66DDD34F452DE6071F2AF78A7DE24878682B (grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.int_class, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t grpcsharp_test_nop_delegate_EndInvoke_mF6DA3BD7AFF27A1EBD4A8A30CBDCA73178F09B81 (grpcsharp_test_nop_delegate_t08B16CD3C8D4719C348B7C9245A744062237777D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_Multicast(grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* currentDelegate = reinterpret_cast<grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_methodName, ___1_variant, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_OpenInst(grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, const RuntimeMethod* method)
{
	NullCheck(___0_methodName);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_methodName, ___1_variant, method);
}
void grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_OpenStatic(grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_methodName, ___1_variant, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08 (grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_methodName_marshaled = NULL;
	____0_methodName_marshaled = il2cpp_codegen_marshal_string(___0_methodName);

	char* ____1_variant_marshaled = NULL;
	____1_variant_marshaled = il2cpp_codegen_marshal_string(___1_variant);

	il2cppPInvokeFunc(____0_methodName_marshaled, ____1_variant_marshaled);

	il2cpp_codegen_marshal_free(____0_methodName_marshaled);
	____0_methodName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_variant_marshaled);
	____1_variant_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_test_override_method_delegate__ctor_m9A1B4A7CBD02159F48A187351CA3CA623A8481C0 (grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_test_override_method_delegate_Invoke_mE4A25BB843EA31476F9C43FE53FAC2856C2E07AA (grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_methodName, ___1_variant, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* grpcsharp_test_override_method_delegate_BeginInvoke_mCD3415011E6D9BEDE14B871E7994F51BBBB1C7D0 (grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, String_t* ___0_methodName, String_t* ___1_variant, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_methodName;
	__d_args[1] = ___1_variant;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grpcsharp_test_override_method_delegate_EndInvoke_m1BD71C7D2B9B65AD8831E3CD448C213C2A67EA05 (grpcsharp_test_override_method_delegate_t19ADACB306E04B98EE6C6971C20847A3BA2C0A08* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformApis__cctor_mF08A21F5187E16B014037E2CBDE2CC5C39E91645 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis__cctor_mF08A21F5187E16B014037E2CBDE2CC5C39E91645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* L_0;
		L_0 = Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3;
		L_3 = PlatformApis_GetUname_m949E520B324761C2B3C37C0B360E4434ADCA51F5(NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMacOSX = (bool)G_B3_0;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0034;
		}
	}
	{
		bool L_6 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMacOSX;
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isLinux = (bool)G_B6_0;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B10_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 1;
	}

IL_0048:
	{
		((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isWindows = (bool)G_B10_0;
		((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isNetCore = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = il2cpp_codegen_get_type(_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, PlatformApis__cctor_mF08A21F5187E16B014037E2CBDE2CC5C39E91645_RuntimeMethod_var);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, (Type_t*)NULL, NULL);
		((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMono = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_IsLinux_mED2791B96D9A3BF967C301D0EC8311ADF63FCC02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isLinux;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMacOSX_m941D84ED2FC827842033C5A7B84445DF92935340 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMacOSX;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_IsWindows_m6FF375D9A1290B95A304777DA680091B0C92E1C1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isWindows;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMono_mCDA40AAFCFFF7200F5F04781A943634ABCECAF47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMono;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_IsNetCore_mB96CBC14C9F06C2D22EA0FA72131A770C0CA488F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isNetCore;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformApis_get_Is64Bit_m2839F3F2B7B373E962EB24652219EB99CB523247 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformApis_uname_m8FFB632D0B091B8687646C706176ADF03C8DF735 (intptr_t ___0_buf, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "uname", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uname)(___0_buf);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_buf);
	#endif

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformApis_GetUname_m949E520B324761C2B3C37C0B360E4434ADCA51F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)8192), NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				{
					intptr_t L_1 = V_0;
					bool L_2;
					L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
					if (!L_2)
					{
						goto IL_0040;
					}
				}
				{
					intptr_t L_3 = V_0;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
				}

IL_0040:
				{
					return;
				}
			}
		});
		try
		{
			try
			{
				{
					intptr_t L_4 = V_0;
					il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
					int32_t L_5;
					L_5 = PlatformApis_uname_m8FFB632D0B091B8687646C706176ADF03C8DF735(L_4, NULL);
					if (L_5)
					{
						goto IL_001c_2;
					}
				}
				{
					intptr_t L_6 = V_0;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					String_t* L_7;
					L_7 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_6, NULL);
					V_1 = L_7;
					goto IL_0041;
				}

IL_001c_2:
				{
					String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
					V_1 = L_8;
					goto IL_0041;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0024_1;
				}
				throw e;
			}

CATCH_0024_1:
			{
				RuntimeObject* L_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
				String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
				V_1 = L_10;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0041;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		String_t* L_11 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle__ctor_m2813E35A100074528BEF3874183DD7CB8043C7AD (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	{
		SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* RequestCallContextSafeHandle_Create_m41C075CE0072D1B878CBF8BC92BFA96BC0947AEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4* L_1 = L_0->___grpcsharp_request_call_context_create;
		NullCheck(L_1);
		RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* L_2;
		L_2 = grpcsharp_request_call_context_create_delegate_Invoke_mCDDD9B7E5E34830285C805B05F2C0F9374AEB99A_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RequestCallContextSafeHandle_get_Handle_m798D47A8CD387461EF6D8F5E0BE7BED248FAB0D3 (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_SetReturnToPoolAction_mB61CB73828F2554248A1B83D33DF25DE285E31B2 (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* ___0_returnAction, const RuntimeMethod* method) 
{
	{
		Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* L_0 = __this->___returnToPoolAction;
		GrpcPreconditions_CheckState_m43970BE23BBA48D4AD14C8641FCEDE447E36209A((bool)((((RuntimeObject*)(Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* L_1 = ___0_returnAction;
		__this->___returnToPoolAction = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnToPoolAction), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	{
		RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_0 = __this->___U3CCompletionCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37 (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___0_value, const RuntimeMethod* method) 
{
	{
		RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_0 = ___0_value;
		__this->___U3CCompletionCallbackU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCompletionCallbackU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E RequestCallContextSafeHandle_GetServerRpcNew_m3B60DAC9938765C45D3F8597A9CEDA9C56E0682F (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___0_server, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* V_0 = NULL;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	uintptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766* L_1 = L_0->___grpcsharp_request_call_context_call;
		NullCheck(L_1);
		CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* L_2;
		L_2 = grpcsharp_request_call_context_call_delegate_Invoke_m1DBAA893A2B366381A40D5672170B7B375CEDA63_inline(L_1, __this, NULL);
		V_0 = L_2;
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_3 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_3);
		grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599* L_4 = L_3->___grpcsharp_request_call_context_method;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = grpcsharp_request_call_context_method_delegate_Invoke_m46F68223AD40FCF07B7B5A165119C72DC97F5C52_inline(L_4, __this, (&V_1), NULL);
		uint32_t L_6;
		L_6 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Marshal_PtrToStringAnsi_mDCD72FE33CAE42EBB32334D7CC555E97667864D3(L_5, L_6, NULL);
		V_2 = L_7;
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_8 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_8);
		grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0* L_9 = L_8->___grpcsharp_request_call_context_host;
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = grpcsharp_request_call_context_host_delegate_Invoke_m3BE8DA48F9558BA8D68391344852B98057C37237_inline(L_9, __this, (&V_3), NULL);
		uint32_t L_11;
		L_11 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_3), NULL);
		String_t* L_12;
		L_12 = Marshal_PtrToStringAnsi_mDCD72FE33CAE42EBB32334D7CC555E97667864D3(L_10, L_11, NULL);
		V_4 = L_12;
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_13 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_13);
		grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0* L_14 = L_13->___grpcsharp_request_call_context_deadline;
		NullCheck(L_14);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_15;
		L_15 = grpcsharp_request_call_context_deadline_delegate_Invoke_m95FC304F1EFF6CD91DFC59994A081845BDC46CEB_inline(L_14, __this, NULL);
		V_5 = L_15;
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_16 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_16);
		grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF* L_17 = L_16->___grpcsharp_request_call_context_request_metadata;
		NullCheck(L_17);
		intptr_t L_18;
		L_18 = grpcsharp_request_call_context_request_metadata_delegate_Invoke_m2E3FD33D9B7DEF8D14844D59B315D372DB3C124D_inline(L_17, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetadataArraySafeHandle_t99218297F19B675B0452B16E075FB4C008F615E3_il2cpp_TypeInfo_var);
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_19;
		L_19 = MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mF940A657438E021016E354F69C4FE24F997AF415(L_18, NULL);
		V_6 = L_19;
		Server_t2016436C42019CF01603E5C47FE74700609E61EC* L_20 = ___0_server;
		CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* L_21 = V_0;
		String_t* L_22 = V_2;
		String_t* L_23 = V_4;
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_24 = V_5;
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_25 = V_6;
		ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E L_26;
		memset((&L_26), 0, sizeof(L_26));
		ServerRpcNew__ctor_mEE030395CFD5F5773FFDA8E85B889855DB878448((&L_26), L_20, L_21, L_22, L_23, L_24, L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_Recycle_m8AF1E4C3A3FD2917F76346F188A11BE9993C378F (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* L_0 = __this->___returnToPoolAction;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_1 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_1);
		grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5* L_2 = L_1->___grpcsharp_request_call_context_reset;
		NullCheck(L_2);
		grpcsharp_request_call_context_reset_delegate_Invoke_m0E4C88599E8883324089B355D7DEC973456632DF_inline(L_2, __this, NULL);
		Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB* L_3 = __this->___returnToPoolAction;
		__this->___returnToPoolAction = (Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnToPoolAction), (void*)(Action_1_tF3511EC31DF19A339D8A072429F939458ADC46BB*)NULL);
		NullCheck(L_3);
		Action_1_Invoke_m73855DD5405B5F6940DB846DD7F8B911211F9DCB_inline(L_3, __this, NULL);
		return;
	}

IL_002c:
	{
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestCallContextSafeHandle_ReleaseHandle_m2A4BDBCBE02CEF467BBE6098D22D5BB63794C01D (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00* L_1 = L_0->___grpcsharp_request_call_context_destroy;
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle;
		NullCheck(L_1);
		grpcsharp_request_call_context_destroy_delegate_Invoke_m32808A2FE550061EBBDBF4AE0D0305363B986705_inline(L_1, L_2, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mA37E78584954AE9EF76F07873FB2C60CE369D92A (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, bool ___0_success, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{
				RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37_inline(__this, (RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E*)NULL, NULL);
				RequestCallContextSafeHandle_Recycle_m8AF1E4C3A3FD2917F76346F188A11BE9993C378F(__this, NULL);
				return;
			}
		});
		try
		{
			try
			{
				RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_0;
				L_0 = RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B_inline(__this, NULL);
				bool L_1 = ___0_success;
				NullCheck(L_0);
				RequestCallCompletionDelegate_Invoke_m90B2C1EA10F56D52729641928A625091E759876A_inline(L_0, L_1, __this, NULL);
				goto IL_0030;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_000f_1;
				}
				throw e;
			}

CATCH_000f_1:
			{
				Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				V_0 = L_2;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var)));
				RuntimeObject* L_3 = ((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))))->___Logger;
				Exception_t* L_4 = V_0;
				NullCheck(L_3);
				InterfaceActionInvoker2< Exception_t*, String_t* >::Invoke(10, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4_il2cpp_TypeInfo_var)), L_3, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73BCBB6D21AF3F274BABD75DADECB4887FBFE4E4)));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0030;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle__cctor_m7C25A46E0C4BD6604657C429A4A3A9153B57BE08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_ForType_TisRequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_m49F716E1D344E437E380E30256FEAA4DCA116F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0;
		L_0 = NativeMethods_Get_mDAD647E854DF08A10EEB5644C917C8A2C62D389A(NULL);
		((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Native), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = GrpcEnvironment_get_Logger_m839180F12709257C8234DD89C741258F89C3E130_inline(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(ILogger_ForType_TisRequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_m49F716E1D344E437E380E30256FEAA4DCA116F30_RuntimeMethod_var, L_1);
		((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Logger = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_StaticFields*)il2cpp_codegen_static_fields_for(RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC_il2cpp_TypeInfo_var))->___Logger), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00 (SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397* __this, const RuntimeMethod* method) 
{
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, 0, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandleZeroIsInvalid_get_IsInvalid_m2261B4C6D2B8220BE4FD449C270A2C5688CD6EE3 (SafeHandleZeroIsInvalid_tE7E81880F910A79A3FD19D4DC7C1C21B72D22397* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnimplementedMethodCallHandler__ctor_mF07EACD670EC51C4B38EFC657D5A5583FC29D766 (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerCallHandler_2__ctor_m900088B8231567887514475CE527FA6E6BF7419A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshaller_1__ctor_mD972DC94D062EDBB4CC1E882684E8D655D37142C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2__ctor_m0C7338B864BA9B1B7868513E0FAE7103B1C7351E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnimplementedMethodCallHandler_UnimplementedMethod_m2CE6359E9921D7FB3F62EFF9E7A61769E508D289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* V_0 = NULL;
	Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* V_1 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B2_0 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B1_0 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B4_0 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B4_1 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B3_0 = NULL;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_0 = ((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0;
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0025;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* L_2 = ((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_3 = (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*)il2cpp_codegen_object_new(Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var);
		Func_2__ctor_mD26A5AC8F9D1B72F4B75E06D44C6ABCA7BCDB4A0(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA_RuntimeMethod_var), NULL);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_4 = L_3;
		((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_5 = ((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_1;
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = G_B2_0;
			goto IL_0044;
		}
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* L_7 = ((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_8 = (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*)il2cpp_codegen_object_new(Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var);
		Func_2__ctor_mD26A5AC8F9D1B72F4B75E06D44C6ABCA7BCDB4A0(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC_RuntimeMethod_var), NULL);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_9 = L_8;
		((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9__2_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* L_10 = (Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC*)il2cpp_codegen_object_new(Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC_il2cpp_TypeInfo_var);
		Marshaller_1__ctor_mD972DC94D062EDBB4CC1E882684E8D655D37142C(L_10, G_B4_1, G_B4_0, Marshaller_1__ctor_mD972DC94D062EDBB4CC1E882684E8D655D37142C_RuntimeMethod_var);
		V_0 = L_10;
		Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* L_11 = V_0;
		Marshaller_1_tFB9C5BEA832BFEF92EFDE78BC6E752E452DC0FDC* L_12 = V_0;
		Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* L_13 = (Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318*)il2cpp_codegen_object_new(Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318_il2cpp_TypeInfo_var);
		Method_2__ctor_m0C7338B864BA9B1B7868513E0FAE7103B1C7351E(L_13, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_11, L_12, Method_2__ctor_m0C7338B864BA9B1B7868513E0FAE7103B1C7351E_RuntimeMethod_var);
		V_1 = L_13;
		Method_2_tB75F99F9505B4EAA3B3B9DFDA32ABA24994C2318* L_14 = V_1;
		DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751* L_15 = (DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751*)il2cpp_codegen_object_new(DuplexStreamingServerMethod_2_tB43198207C970B1B3A11D43CD3599A1F829CB751_il2cpp_TypeInfo_var);
		DuplexStreamingServerMethod_2__ctor_mF1EF02E8266D129EFAEAB3339F77EB392A653B86(L_15, __this, (intptr_t)((void*)UnimplementedMethodCallHandler_UnimplementedMethod_m2CE6359E9921D7FB3F62EFF9E7A61769E508D289_RuntimeMethod_var), NULL);
		DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B* L_16 = (DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B*)il2cpp_codegen_object_new(DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B_il2cpp_TypeInfo_var);
		DuplexStreamingServerCallHandler_2__ctor_m900088B8231567887514475CE527FA6E6BF7419A(L_16, L_14, L_15, DuplexStreamingServerCallHandler_2__ctor_m900088B8231567887514475CE527FA6E6BF7419A_RuntimeMethod_var);
		__this->___callHandlerImpl = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callHandlerImpl), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnimplementedMethodCallHandler_UnimplementedMethod_m2CE6359E9921D7FB3F62EFF9E7A61769E508D289 (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* __this, RuntimeObject* ___0_requestStream, RuntimeObject* ___1_responseStream, ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D* ___2_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D* L_0 = ___2_ctx;
		Status_tDDC69F95A6B0A81C14A533C56151168261064F9A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Status__ctor_m89DB42909FAC6EE24A54F4576DF79A5933911821((&L_1), ((int32_t)12), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_0);
		ServerCallContext_set_Status_mB85398DBA11BC4D2A51E7307601E238C35522B08_inline(L_0, L_1, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = TaskUtils_get_CompletedTask_m82B98F5F987AB2911498387B6C8E5B0DF5425DDA(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnimplementedMethodCallHandler_HandleCall_mF31E27B1869DF9DF404B7965C2DBBFBC88DBBA9B (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* __this, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E ___0_newRpc, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplexStreamingServerCallHandler_2_HandleCall_m93F20E730EAD38F3B4A8BEC6096E475055CD2535_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DuplexStreamingServerCallHandler_2_tB49C4A5C5857645BA7CB081B3F4C7871E25BE96B* L_0 = __this->___callHandlerImpl;
		ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E L_1 = ___0_newRpc;
		CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_2 = ___1_cq;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = DuplexStreamingServerCallHandler_2_HandleCall_m93F20E730EAD38F3B4A8BEC6096E475055CD2535(L_0, L_1, L_2, DuplexStreamingServerCallHandler_2_HandleCall_m93F20E730EAD38F3B4A8BEC6096E475055CD2535_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnimplementedMethodCallHandler_Intercept_mC69B95DE602FF9AA3546BC652822D33B46D8AC1A (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* __this, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___0_interceptor, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnimplementedMethodCallHandler__cctor_m7FFDFAEF9AF1B752B1CC6365AB6A215EED826A73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8* L_0 = (UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8*)il2cpp_codegen_object_new(UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_il2cpp_TypeInfo_var);
		UnimplementedMethodCallHandler__ctor_mF07EACD670EC51C4B38EFC657D5A5583FC29D766(L_0, NULL);
		((UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_StaticFields*)il2cpp_codegen_static_fields_for(UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_il2cpp_TypeInfo_var))->___Instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_StaticFields*)il2cpp_codegen_static_fields_for(UnimplementedMethodCallHandler_tDCE7CBFF1BB664E375C3EB25E4F6BB51850915D8_il2cpp_TypeInfo_var))->___Instance), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2091365597CAA0F4A54D870406C8F40703B4A748 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* L_0 = (U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D*)il2cpp_codegen_object_new(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFE8CC528DE9A7DDA58C9A68AAF82B59C08695FB1(L_0, NULL);
		((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFE8CC528DE9A7DDA58C9A68AAF82B59C08695FB1 (U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CU3Ec_U3C_ctorU3Eb__2_0_mF5311EF89104817350C43D0BC306CE2EC2B216DA (U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_payload, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_payload;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CU3Ec_U3C_ctorU3Eb__2_1_m4A30CD80A886435C304958DCADAA254A80FF1EDC (U3CU3Ec_t1A71EA439704C693F561AD5FF6A1CB3D84FFD61D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_payload, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_payload;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tDDC69F95A6B0A81C14A533C56151168261064F9A HandlerUtils_GetStatusFromExceptionAndMergeTrailers_mF566DA3F881483E46F878DDCC4BDA8BB18849389 (Exception_t* ___0_e, Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___1_callContextResponseTrailers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1AF9258725F7B50445253BA17F180C0FBE0150A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8089C5EDBE36657FBF81E70B08D4B9425ECCACB);
		s_Il2CppMethodInitialized = true;
	}
	RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Entry_t145FB95C13D8717695720E16C90A1D25E759AB71* V_2 = NULL;
	{
		Exception_t* L_0 = ___0_e;
		V_0 = ((RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618*)IsInstClass((RuntimeObject*)L_0, RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618_il2cpp_TypeInfo_var));
		RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* L_2 = V_0;
		NullCheck(L_2);
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_3;
		L_3 = RpcException_get_Trailers_m3FCFA1A40AA512F53C5E182B389BAF895B93AB6E_inline(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Metadata_GetEnumerator_mECBD8D2924B6A4306E6A280201F2FE50BB2D137A(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0018_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Entry_t145FB95C13D8717695720E16C90A1D25E759AB71* L_8;
				L_8 = InterfaceFuncInvoker0< Entry_t145FB95C13D8717695720E16C90A1D25E759AB71* >::Invoke(0, IEnumerator_1_tD1AF9258725F7B50445253BA17F180C0FBE0150A_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_9 = ___1_callContextResponseTrailers;
				Entry_t145FB95C13D8717695720E16C90A1D25E759AB71* L_10 = V_2;
				NullCheck(L_9);
				Metadata_Add_m915C5A8263CC4BF5F1507E4783DDCBA28D3E3EE1(L_9, L_10, NULL);
			}

IL_0026_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* L_13 = V_0;
		NullCheck(L_13);
		Status_tDDC69F95A6B0A81C14A533C56151168261064F9A L_14;
		L_14 = RpcException_get_Status_m299E4544788E0334DF4A0BDA09E3F44DD983EBC6_inline(L_13, NULL);
		return L_14;
	}

IL_0041:
	{
		Status_tDDC69F95A6B0A81C14A533C56151168261064F9A L_15;
		memset((&L_15), 0, sizeof(L_15));
		Status__ctor_m89DB42909FAC6EE24A54F4576DF79A5933911821((&L_15), 2, _stringLiteralD8089C5EDBE36657FBF81E70B08D4B9425ECCACB, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandlerUtils_GetWriteFlags_m8E4E9D72EDE3E8B0CC3012E07A1D435625CEB3BD (WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* ___0_writeOptions, const RuntimeMethod* method) 
{
	{
		WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* L_0 = ___0_writeOptions;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0005:
	{
		WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* L_1 = ___0_writeOptions;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WriteOptions_get_Flags_mE773ECA6BA3F314A01E346EDF59CA8B2C9CE329D_inline(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCredentialsSafeHandle__ctor_m0159E5A320A90D9EAC68C38105BA89AE37C7F1C5 (ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* __this, const RuntimeMethod* method) 
{
	{
		SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ServerCredentialsSafeHandle_CreateSslCredentials_m5DED7FE4314D1E44158FD741EAB1EA52CD2D5B32 (String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, bool ___3_forceClientAuth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* G_B2_4 = NULL;
	uintptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	uintptr_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* G_B3_5 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_keyCertPairCertChainArray;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___2_keyCertPairPrivateKeyArray;
		NullCheck(L_1);
		GrpcPreconditions_CheckArgument_m091B966182E70E54E11C193256AE8AC2E0262C5F((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0), NULL);
		il2cpp_codegen_runtime_class_init_inline(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_2 = ((ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_StaticFields*)il2cpp_codegen_static_fields_for(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_2);
		grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* L_3 = L_2->___grpcsharp_ssl_server_credentials_create;
		String_t* L_4 = ___0_pemRootCerts;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___1_keyCertPairCertChainArray;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___2_keyCertPairPrivateKeyArray;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___1_keyCertPairCertChainArray;
		NullCheck(L_7);
		uintptr_t L_8;
		memset((&L_8), 0, sizeof(L_8));
		UIntPtr__ctor_m8AD80E1EF069A66D0E48BF7765C91088B5C09419((&L_8), ((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), NULL);
		bool L_9 = ___3_forceClientAuth;
		if (L_9)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			G_B2_2 = L_5;
			G_B2_3 = L_4;
			G_B2_4 = L_3;
			goto IL_0029;
		}
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		G_B1_2 = L_5;
		G_B1_3 = L_4;
		G_B1_4 = L_3;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002a:
	{
		NullCheck(G_B3_5);
		ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* L_10;
		L_10 = grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_inline(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerCredentialsSafeHandle_ReleaseHandle_mC7FA15834B2F9EE12F57B7A592BE39627791A00F (ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_StaticFields*)il2cpp_codegen_static_fields_for(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* L_1 = L_0->___grpcsharp_server_credentials_release;
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle;
		NullCheck(L_1);
		grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_inline(L_1, L_2, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCredentialsSafeHandle__cctor_m558160441AB73030C89B1C35E351A7518B4CFE37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0;
		L_0 = NativeMethods_Get_mDAD647E854DF08A10EEB5644C917C8A2C62D389A(NULL);
		((ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_StaticFields*)il2cpp_codegen_static_fields_for(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var))->___Native = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_StaticFields*)il2cpp_codegen_static_fields_for(ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693_il2cpp_TypeInfo_var))->___Native), (void*)L_0);
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
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_pinvoke(const ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E& unmarshaled, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___serverException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___serverException, NULL);
}
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_pinvoke_back(const ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_pinvoke& marshaled, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___serverException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___serverException, NULL);
}
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_pinvoke_cleanup(ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_com(const ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E& unmarshaled, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___serverException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___serverException, NULL);
}
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_com_back(const ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_com& marshaled, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___serverException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E____server_FieldInfo_var, ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___serverException, NULL);
}
IL2CPP_EXTERN_C void ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshal_com_cleanup(ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcNew__ctor_mEE030395CFD5F5773FFDA8E85B889855DB878448 (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___0_server, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_call, String_t* ___2_method, String_t* ___3_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___4_deadline, Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___5_requestMetadata, const RuntimeMethod* method) 
{
	{
		Server_t2016436C42019CF01603E5C47FE74700609E61EC* L_0 = ___0_server;
		__this->___server = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___server), (void*)L_0);
		CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* L_1 = ___1_call;
		__this->___call = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___call), (void*)L_1);
		String_t* L_2 = ___2_method;
		__this->___method = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___method), (void*)L_2);
		String_t* L_3 = ___3_host;
		__this->___host = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___host), (void*)L_3);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_4 = ___4_deadline;
		__this->___deadline = L_4;
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_5 = ___5_requestMetadata;
		__this->___requestMetadata = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestMetadata), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ServerRpcNew__ctor_mEE030395CFD5F5773FFDA8E85B889855DB878448_AdjustorThunk (RuntimeObject* __this, Server_t2016436C42019CF01603E5C47FE74700609E61EC* ___0_server, CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ___1_call, String_t* ___2_method, String_t* ___3_host, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___4_deadline, Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ___5_requestMetadata, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	ServerRpcNew__ctor_mEE030395CFD5F5773FFDA8E85B889855DB878448(_thisAdjusted, ___0_server, ___1_call, ___2_method, ___3_host, ___4_deadline, ___5_requestMetadata, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Server_t2016436C42019CF01603E5C47FE74700609E61EC* ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Server_t2016436C42019CF01603E5C47FE74700609E61EC* L_0 = __this->___server;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Server_t2016436C42019CF01603E5C47FE74700609E61EC* ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	Server_t2016436C42019CF01603E5C47FE74700609E61EC* _returnValue;
	_returnValue = ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02 (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* L_0 = __this->___call;
		return L_0;
	}
}
IL2CPP_EXTERN_C  CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* _returnValue;
	_returnValue = ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2 (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___method;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___host;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_0 = __this->___deadline;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 _returnValue;
	_returnValue = ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ServerRpcNew_get_RequestMetadata_mA22EB952456851353D5826130BFEE68B33050E14 (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_0 = __this->___requestMetadata;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ServerRpcNew_get_RequestMetadata_mA22EB952456851353D5826130BFEE68B33050E14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E*>(__this + _offset);
	Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* _returnValue;
	_returnValue = ServerRpcNew_get_RequestMetadata_mA22EB952456851353D5826130BFEE68B33050E14_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle__ctor_m26ABD7F4CD998FC49F017035D87252D8BC0700B6 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, const RuntimeMethod* method) 
{
	{
		SafeHandleZeroIsInvalid__ctor_m7437699C7878B2D5B2CC415C4AD081A2B7C9EE00(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ServerSafeHandle_NewServer_mD0C3FA91D4C8C528726010CF71E820AD13565698 (ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		GrpcEnvironment_GrpcNativeInit_m08DBB77DCF2CF424D78861B5748DDD9055F97F38(NULL);
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* L_1 = L_0->___grpcsharp_server_create;
		ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* L_2 = ___0_args;
		NullCheck(L_1);
		ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* L_3;
		L_3 = grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle_RegisterCompletionQueue_m2C56BC611B55732F13182D35834EA77C91BD0045 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___0_cq, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_0 = ___0_cq;
		NullCheck(L_0);
		UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 L_1;
		L_1 = CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
			NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_2 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
			NullCheck(L_2);
			grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* L_3 = L_2->___grpcsharp_server_register_completion_queue;
			CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_4 = ___0_cq;
			NullCheck(L_3);
			grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_inline(L_3, __this, L_4, NULL);
			goto IL_0028;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerSafeHandle_AddInsecurePort_m6221E47E2611B89683699AA3B13EE817C5A6D34B (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, String_t* ___0_addr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* L_1 = L_0->___grpcsharp_server_add_insecure_http2_port;
		String_t* L_2 = ___0_addr;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_inline(L_1, __this, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServerSafeHandle_AddSecurePort_mB5817D42ABC318A20ACCCD6B22A70DFDDAF4D177 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, String_t* ___0_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___1_credentials, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* L_1 = L_0->___grpcsharp_server_add_secure_http2_port;
		String_t* L_2 = ___0_addr;
		ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* L_3 = ___1_credentials;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_inline(L_1, __this, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle_Start_mFA5BA67499892A8FCAD71E230C195E1BA4DC3D93 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* L_1 = L_0->___grpcsharp_server_start;
		NullCheck(L_1);
		grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_inline(L_1, __this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle_ShutdownAndNotify_m18CB916A7D419F85E97F75BD61A1E37CBA4FA55D (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* ___0_callback, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_completionQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* V_1 = NULL;
	{
		CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_0 = ___1_completionQueue;
		NullCheck(L_0);
		UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 L_1;
		L_1 = CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D((&V_0), NULL);
				return;
			}
		});
		try
		{
			CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_2 = ___1_completionQueue;
			NullCheck(L_2);
			CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* L_3;
			L_3 = CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F_inline(L_2, NULL);
			BatchCompletionDelegate_tA0169CAB6173FBD2BFE40A912FD8FA8AD29391FA* L_4 = ___0_callback;
			NullCheck(L_3);
			BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* L_5;
			L_5 = CompletionRegistry_RegisterBatchCompletion_mD747C56FEE7DDF057AB4F13832E2BE8B268C9B86(L_3, L_4, NULL, NULL);
			V_1 = L_5;
			il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
			NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_6 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
			NullCheck(L_6);
			grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* L_7 = L_6->___grpcsharp_server_shutdown_and_notify_callback;
			CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_8 = ___1_completionQueue;
			BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* L_9 = V_1;
			NullCheck(L_7);
			grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_inline(L_7, __this, L_8, L_9, NULL);
			goto IL_0037;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle_RequestCall_mF45B53E2A868874FEA4E46EC5DAA4B947784AC38 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___0_callback, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_completionQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* V_1 = NULL;
	{
		CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_0 = ___1_completionQueue;
		NullCheck(L_0);
		UsageScope_t92C75BD217BAB96AAAF5D5D51A792AE90B575906 L_1;
		L_1 = CompletionQueueSafeHandle_NewScope_m443A008B5B4320332C147651952FB8BE7FA6A17E(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				UsageScope_Dispose_m349ED08E2339F12E8C2B5003E08F5F0BE2E9BE0D((&V_0), NULL);
				return;
			}
		});
		try
		{
			CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_2 = ___1_completionQueue;
			NullCheck(L_2);
			CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* L_3;
			L_3 = CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F_inline(L_2, NULL);
			RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_4 = ___0_callback;
			NullCheck(L_3);
			RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* L_5;
			L_5 = CompletionRegistry_RegisterRequestCallCompletion_mAEDA7BFE4107841032C6E319BDCAB42BA9AE0520(L_3, L_4, NULL);
			V_1 = L_5;
			il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
			NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_6 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
			NullCheck(L_6);
			grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* L_7 = L_6->___grpcsharp_server_request_call;
			CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* L_8 = ___1_completionQueue;
			RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* L_9 = V_1;
			NullCheck(L_7);
			int32_t L_10;
			L_10 = grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_inline(L_7, __this, L_8, L_9, NULL);
			CallErrorExtensions_CheckOk_m43EAF4411DD6BEE27E2505769E0D5FCEACF2CD35(L_10, NULL);
			goto IL_003b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerSafeHandle_ReleaseHandle_m4FB39CA9E7FDCEE3CCFC26EF890071AA0876D289 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* L_1 = L_0->___grpcsharp_server_destroy;
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle;
		NullCheck(L_1);
		grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_inline(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		GrpcEnvironment_GrpcNativeShutdown_mF0C1705180C7934A23443638F8EA29B1737A0647(NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle_CancelAllCalls_mC579F18BB3CF29C4CBFF6B2885846F026F850AE0 (ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* L_1 = L_0->___grpcsharp_server_cancel_all_calls;
		NullCheck(L_1);
		grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_inline(L_1, __this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSafeHandle__cctor_mB00BA168C58F9347ABC17F841A67085DF101975B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0;
		L_0 = NativeMethods_Get_mDAD647E854DF08A10EEB5644C917C8A2C62D389A(NULL);
		((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_StaticFields*)il2cpp_codegen_static_fields_for(ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC_il2cpp_TypeInfo_var))->___Native), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733 (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_tv_sec;
		int32_t L_1 = ___1_tv_nsec;
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E(__this, L_0, L_1, 1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733_AdjustorThunk (RuntimeObject* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733(_thisAdjusted, ___0_tv_sec, ___1_tv_nsec, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, int32_t ___2_clock_type, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_tv_sec;
		__this->___tv_sec = L_0;
		int32_t L_1 = ___1_tv_nsec;
		__this->___tv_nsec = L_1;
		int32_t L_2 = ___2_clock_type;
		__this->___clock_type = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E_AdjustorThunk (RuntimeObject* __this, int64_t ___0_tv_sec, int32_t ___1_tv_nsec, int32_t ___2_clock_type, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E(_thisAdjusted, ___0_tv_sec, ___1_tv_nsec, ___2_clock_type, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_InfFuture_m8D65E08A1AF995742B050CE91D6162226547FC9A (const RuntimeMethod* method) 
{
	{
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E((&L_0), ((int64_t)(std::numeric_limits<int64_t>::max)()), 0, 1, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_InfPast_m7D67B7B6054F3852452EE48545F5DE5AB9CA03B9 (const RuntimeMethod* method) 
{
	{
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Timespec__ctor_m6A0D2BB6975E9FA6E3B10689801A863BEBEDB04E((&L_0), ((int64_t)(std::numeric_limits<int64_t>::min)()), 0, 1, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_Now_m6346A1B1E7D545B90CF959C21295525A5D93537C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* L_1 = L_0->___gprsharp_now;
		NullCheck(L_1);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_2;
		L_2 = gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_inline(L_1, 1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25 (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___tv_sec;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___tv_nsec;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, int32_t ___0_targetClock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* L_1 = L_0->___gprsharp_convert_clock_type;
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_2 = (*(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*)__this);
		int32_t L_3 = ___0_targetClock;
		NullCheck(L_1);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_4;
		L_4 = gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_targetClock, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 _returnValue;
	_returnValue = Timespec_ToClockType_m70E832C1EFB1E0F7902F2D7F81A50815EFC3AC4C(_thisAdjusted, ___0_targetClock, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int64_t G_B10_0 = 0;
	int64_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int64_t G_B11_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		int32_t L_0 = __this->___tv_nsec;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->___tv_nsec;
		G_B3_0 = ((((int64_t)((int64_t)L_1)) < ((int64_t)((int64_t)((int32_t)1000000000))))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		GrpcPreconditions_CheckState_m43970BE23BBA48D4AD14C8641FCEDE447E36209A((bool)G_B3_0, NULL);
		int32_t L_2 = __this->___clock_type;
		GrpcPreconditions_CheckState_m43970BE23BBA48D4AD14C8641FCEDE447E36209A((bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_3;
		L_3 = Timespec_get_InfFuture_m8D65E08A1AF995742B050CE91D6162226547FC9A(NULL);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_4 = L_3;
		RuntimeObject* L_5 = Box(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34> L_6(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, __this);
		bool L_7;
		L_7 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), L_5, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue;
		return L_8;
	}

IL_004c:
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_9;
		L_9 = Timespec_get_InfPast_m7D67B7B6054F3852452EE48545F5DE5AB9CA03B9(NULL);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_10 = L_9;
		RuntimeObject* L_11 = Box(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, &L_10);
		Il2CppFakeBox<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34> L_12(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var, __this);
		bool L_13;
		L_13 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_12), L_11, NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue;
		return L_14;
	}

IL_006a:
	{
	}
	try
	{
		{
			int32_t L_15 = __this->___tv_nsec;
			int32_t L_16 = __this->___tv_nsec;
			if (((int64_t)(((int64_t)L_16)%((int64_t)((int32_t)100)))))
			{
				G_B10_0 = ((int64_t)(((int64_t)L_15)/((int64_t)((int32_t)100))));
				goto IL_0086_1;
			}
			G_B9_0 = ((int64_t)(((int64_t)L_15)/((int64_t)((int32_t)100))));
		}
		{
			G_B11_0 = 0;
			G_B11_1 = G_B9_0;
			goto IL_0087_1;
		}

IL_0086_1:
		{
			G_B11_0 = 1;
			G_B11_1 = G_B10_0;
		}

IL_0087_1:
		{
			V_0 = ((int64_t)il2cpp_codegen_add(G_B11_1, ((int64_t)G_B11_0)));
			int64_t L_17 = __this->___tv_sec;
			if (il2cpp_codegen_check_mul_overflow_i64((int64_t)L_17, (int64_t)((int64_t)((int32_t)10000000)), kIl2CppInt64Min, kIl2CppInt64Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_RuntimeMethod_var);
			int64_t L_18 = V_0;
			if (il2cpp_codegen_check_add_overflow((int64_t)((int64_t)il2cpp_codegen_multiply(L_17, ((int64_t)((int32_t)10000000)))), (int64_t)L_18))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_17, ((int64_t)((int32_t)10000000)))), L_18));
			il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___UnixEpoch;
			V_2 = L_19;
			int64_t L_20 = V_1;
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
			L_21 = DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D((&V_2), L_20, NULL);
			V_2 = L_21;
			goto IL_00df;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c5;
		}
		throw e;
	}

CATCH_00ab:
	{
		{
			OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_22 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
			int64_t L_23 = __this->___tv_sec;
			if ((((int64_t)L_23) > ((int64_t)((int64_t)0))))
			{
				goto IL_00bd;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_24 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))))->___MinValue;
			G_B15_0 = L_24;
			goto IL_00c2;
		}

IL_00bd:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_25 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))))->___MaxValue;
			G_B15_0 = L_25;
		}

IL_00c2:
		{
			V_2 = G_B15_0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00df;
		}
	}

CATCH_00c5:
	{
		{
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = ((ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*));;
			int64_t L_27 = __this->___tv_sec;
			if ((((int64_t)L_27) > ((int64_t)((int64_t)0))))
			{
				goto IL_00d7;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))))->___MinValue;
			G_B19_0 = L_28;
			goto IL_00dc;
		}

IL_00d7:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))))->___MaxValue;
			G_B19_0 = L_29;
		}

IL_00dc:
		{
			V_2 = G_B19_0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00df;
		}
	}

IL_00df:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30 = V_2;
		return L_30;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = Timespec_ToDateTime_m96FC97988DA91C21E7068F123966B3DE3DF491FA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_FromDateTime_m31AA2BA5564A8CAB44053A5EEE5B983D3B90442D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B62439F31A80B75961E54C60ED1042E1D42DB7);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_dateTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue;
		bool L_2;
		L_2 = DateTime_op_Equality_m568A6320E27F3F7708C77BF8751925C8775DD921(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_3;
		L_3 = Timespec_get_InfFuture_m8D65E08A1AF995742B050CE91D6162226547FC9A(NULL);
		return L_3;
	}

IL_0013:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___0_dateTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue;
		bool L_6;
		L_6 = DateTime_op_Equality_m568A6320E27F3F7708C77BF8751925C8775DD921(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_7;
		L_7 = Timespec_get_InfPast_m7D67B7B6054F3852452EE48545F5DE5AB9CA03B9(NULL);
		return L_7;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___0_dateTime), NULL);
		GrpcPreconditions_CheckArgument_m1E50CC2CCDB582B46C5CC04EB01E60619B52A26F((bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0), _stringLiteralB8B62439F31A80B75961E54C60ED1042E1D42DB7, NULL);
	}
	try
	{
		{
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = ___0_dateTime;
			il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___UnixEpoch;
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11;
			L_11 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_9, L_10, NULL);
			V_0 = L_11;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			int64_t L_12;
			L_12 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_0), NULL);
			int64_t L_13 = L_12;
			V_1 = ((int64_t)(L_13/((int64_t)((int32_t)10000000))));
			V_2 = ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_13%((int64_t)((int32_t)10000000)))), ((int64_t)((int32_t)100)))));
			int32_t L_14 = V_2;
			if ((((int32_t)L_14) >= ((int32_t)0)))
			{
				goto IL_0074_1;
			}
		}
		{
			int64_t L_15 = V_1;
			V_1 = ((int64_t)il2cpp_codegen_subtract(L_15, ((int64_t)1)));
			int32_t L_16 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)1000000000)));
		}

IL_0074_1:
		{
			int64_t L_17 = V_1;
			int32_t L_18 = V_2;
			Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_19;
			memset((&L_19), 0, sizeof(L_19));
			Timespec__ctor_m6ED659F8011A6D43892EF69CE7A99C3B78E12733((&L_19), L_17, L_18, NULL);
			V_3 = L_19;
			goto IL_009b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{
		{
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = ((ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*));;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21 = ___0_dateTime;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var)));
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))))->___UnixEpoch;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
			bool L_23;
			L_23 = DateTime_op_GreaterThan_m8F1FA3C039A0148FC1500E790A77CB44F025EA9F(L_21, L_22, NULL);
			if (L_23)
			{
				goto IL_0093;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var)));
			Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_24;
			L_24 = Timespec_get_InfPast_m7D67B7B6054F3852452EE48545F5DE5AB9CA03B9(NULL);
			G_B11_0 = L_24;
			goto IL_0098;
		}

IL_0093:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var)));
			Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_25;
			L_25 = Timespec_get_InfFuture_m8D65E08A1AF995742B050CE91D6162226547FC9A(NULL);
			G_B11_0 = L_25;
		}

IL_0098:
		{
			V_3 = G_B11_0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_009b;
		}
	}

IL_009b:
	{
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_26 = V_3;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_PreciseNow_mF57D12FCB250E55C1D111306ADAB8051B7F70675 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* L_1 = L_0->___gprsharp_now;
		NullCheck(L_1);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_2;
		L_2 = gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_inline(L_1, 2, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timespec_get_NativeSize_mE1AF86C92A57F40E363454B0A91B494C296C0218 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* L_1 = L_0->___gprsharp_sizeof_timespec;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_NativeInfFuture_m6E464ACAEF3EB39AA4AD29A448CD427DE308B88F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* L_1 = L_0->___gprsharp_inf_future;
		NullCheck(L_1);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_2;
		L_2 = gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_inline(L_1, 1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 Timespec_get_NativeInfPast_m00B9478093D1255E45BFA0D4B21B4929ABB62ACC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0 = ((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native;
		NullCheck(L_0);
		gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* L_1 = L_0->___gprsharp_inf_past;
		NullCheck(L_1);
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_2;
		L_2 = gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_inline(L_1, 1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timespec__cctor_m016C6207749E3409D639E12026A64C8BE4DC981E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeMethods_t5A43AF61D037EB0FC4ED18BB4CC1DF83F99192FD* L_0;
		L_0 = NativeMethods_Get_mDAD647E854DF08A10EEB5644C917C8A2C62D389A(NULL);
		((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___Native), (void*)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_1), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		((Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_StaticFields*)il2cpp_codegen_static_fields_for(Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34_il2cpp_TypeInfo_var))->___UnixEpoch = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnimplementedCallInvoker__ctor_m37084568D0F765B943C69CE5523B481719B916B7 (UnimplementedCallInvoker_tEA1975E20409477123667F212E14C2E495BBB6E5* __this, const RuntimeMethod* method) 
{
	{
		CallInvoker__ctor_mD26697B962D1C7E7010837D21D466C27C235E543(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary__ctor_mABDF514DB467C94F585E386574C08817412E118A (UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_libraryPathAlternatives, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09605D5FD6622BEB802CCD58463E3E3650E33658);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_libraryPathAlternatives;
		il2cpp_codegen_runtime_class_init_inline(UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = UnmanagedLibrary_FirstValidLibraryPath_mC5E53C71CCD30B198D85FF35FCB8938951D5464C(L_0, NULL);
		__this->___libraryPath = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___libraryPath), (void*)L_1);
		RuntimeObject* L_2 = ((UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var))->___Logger;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = __this->___libraryPath;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2, ILogger_t7298908A58D93DB869A2BBCEB878BE57147B7AE4_il2cpp_TypeInfo_var, L_2, _stringLiteral09605D5FD6622BEB802CCD58463E3E3650E33658, L_4);
		String_t* L_6 = __this->___libraryPath;
		intptr_t L_7;
		L_7 = UnmanagedLibrary_PlatformSpecificLoadLibrary_mE7F468A4147C55D25C24130396212B5AC8F93C3A(L_6, NULL);
		__this->___handle = L_7;
		intptr_t L_8 = __this->___handle;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_10 = __this->___libraryPath;
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0C63E4F530C5944B6D758C92B2E89C44D0D241F)), L_10, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_12 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary__ctor_mABDF514DB467C94F585E386574C08817412E118A_RuntimeMethod_var)));
	}

IL_0069:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLibrary_LoadSymbol_m43EDA46797A156DAEA9FAB7139DE472332DF2FE6 (UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1* __this, String_t* ___0_symbolName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlatformApis_get_IsWindows_m6FF375D9A1290B95A304777DA680091B0C92E1C1_inline(NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PlatformApis_get_Is64Bit_m2839F3F2B7B373E962EB24652219EB99CB523247(NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_2 = __this->___handle;
		String_t* L_3 = ___0_symbolName;
		intptr_t L_4;
		L_4 = Windows_GetProcAddress_m097424DB1A9D880C62E59147A6074875B976D360(L_2, L_3, NULL);
		return L_4;
	}

IL_001b:
	{
		String_t* L_5 = ___0_symbolName;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_5, _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, NULL);
		___0_symbolName = L_6;
		V_0 = 0;
		goto IL_005c;
	}

IL_0031:
	{
		intptr_t L_7 = __this->___handle;
		String_t* L_8 = ___0_symbolName;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_8, L_11, NULL);
		intptr_t L_13;
		L_13 = Windows_GetProcAddress_m097424DB1A9D880C62E59147A6074875B976D360(L_7, L_12, NULL);
		V_1 = L_13;
		intptr_t L_14 = V_1;
		bool L_15;
		L_15 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_14, 0, NULL);
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		intptr_t L_16 = V_1;
		return L_16;
	}

IL_0058:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 4));
	}

IL_005c:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)128))))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = PlatformApis_get_IsLinux_mED2791B96D9A3BF967C301D0EC8311ADF63FCC02_inline(NULL);
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = PlatformApis_get_IsMono_mCDA40AAFCFFF7200F5F04781A943634ABCECAF47_inline(NULL);
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		intptr_t L_21 = __this->___handle;
		String_t* L_22 = ___0_symbolName;
		intptr_t L_23;
		L_23 = Mono_dlsym_m7B83E4542E62BE8A07581ABFE015F499C692682E(L_21, L_22, NULL);
		return L_23;
	}

IL_0085:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = PlatformApis_get_IsNetCore_mB96CBC14C9F06C2D22EA0FA72131A770C0CA488F_inline(NULL);
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		intptr_t L_25 = __this->___handle;
		String_t* L_26 = ___0_symbolName;
		intptr_t L_27;
		L_27 = CoreCLR_dlsym_m8D72AAC1270157B550817201A0EE69A5967BFE7D(L_25, L_26, NULL);
		return L_27;
	}

IL_0099:
	{
		intptr_t L_28 = __this->___handle;
		String_t* L_29 = ___0_symbolName;
		intptr_t L_30;
		L_30 = Linux_dlsym_m156BDB39D7B6BC69DB4E20165253373973C7CD3C(L_28, L_29, NULL);
		return L_30;
	}

IL_00a6:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = PlatformApis_get_IsMacOSX_m941D84ED2FC827842033C5A7B84445DF92935340_inline(NULL);
		if (!L_31)
		{
			goto IL_00ba;
		}
	}
	{
		intptr_t L_32 = __this->___handle;
		String_t* L_33 = ___0_symbolName;
		intptr_t L_34;
		L_34 = MacOSX_dlsym_mDF53ADD36C4E8BE1DAF4C02ED15622AF53CA6C63(L_32, L_33, NULL);
		return L_34;
	}

IL_00ba:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_35 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B2C22D7B72951057E0B4CF9356B59001C88CFFD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary_LoadSymbol_m43EDA46797A156DAEA9FAB7139DE472332DF2FE6_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnmanagedLibrary_PlatformSpecificLoadLibrary_mE7F468A4147C55D25C24130396212B5AC8F93C3A (String_t* ___0_libraryPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlatformApis_get_IsWindows_m6FF375D9A1290B95A304777DA680091B0C92E1C1_inline(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___0_libraryPath;
		intptr_t L_2;
		L_2 = Windows_LoadLibrary_m9AA48007B9E91DF02E02B936791E4A3556CC9D7A(L_1, NULL);
		return L_2;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PlatformApis_get_IsLinux_mED2791B96D9A3BF967C301D0EC8311ADF63FCC02_inline(NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PlatformApis_get_IsMono_mCDA40AAFCFFF7200F5F04781A943634ABCECAF47_inline(NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = ___0_libraryPath;
		intptr_t L_6;
		L_6 = Mono_dlopen_m28A6FCFD6D4175345383F596F0DAA79E26C34070(L_5, ((int32_t)9), NULL);
		return L_6;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = PlatformApis_get_IsNetCore_mB96CBC14C9F06C2D22EA0FA72131A770C0CA488F_inline(NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_8 = ___0_libraryPath;
		intptr_t L_9;
		L_9 = CoreCLR_dlopen_m88D4F170C0DD39C3E6094F9C51FD70D376D8A9FF(L_8, ((int32_t)9), NULL);
		return L_9;
	}

IL_0035:
	{
		String_t* L_10 = ___0_libraryPath;
		intptr_t L_11;
		L_11 = Linux_dlopen_m2E20C524D4EF9E1756180F57E3183FEF77230D85(L_10, ((int32_t)9), NULL);
		return L_11;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = PlatformApis_get_IsMacOSX_m941D84ED2FC827842033C5A7B84445DF92935340_inline(NULL);
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = ___0_libraryPath;
		intptr_t L_14;
		L_14 = MacOSX_dlopen_m127C8AAA50733377855ECD5B5496FDEC36AF8BD8(L_13, ((int32_t)9), NULL);
		return L_14;
	}

IL_004e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B2C22D7B72951057E0B4CF9356B59001C88CFFD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary_PlatformSpecificLoadLibrary_mE7F468A4147C55D25C24130396212B5AC8F93C3A_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnmanagedLibrary_FirstValidLibraryPath_mC5E53C71CCD30B198D85FF35FCB8938951D5464C (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_libraryPathAlternatives, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA13C272EC106C82FEBF0CB1FFF22EA6756F285);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_libraryPathAlternatives;
		NullCheck(L_0);
		GrpcPreconditions_CheckArgument_m1E50CC2CCDB582B46C5CC04EB01E60619B52A26F((bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0), _stringLiteral8EA13C272EC106C82FEBF0CB1FFF22EA6756F285, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_libraryPathAlternatives;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_8 = V_2;
		return L_8;
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___0_libraryPathAlternatives;
		String_t* L_13;
		L_13 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB)), L_12, NULL);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAA47291CA392A93058A6DB6F73C1E946E153B7F)), L_13, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_15 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnmanagedLibrary_FirstValidLibraryPath_mC5E53C71CCD30B198D85FF35FCB8938951D5464C_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedLibrary__cctor_mCEC13C11085C1120D9947EF182F9C76D1DD9D699 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_ForType_TisUnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_m4BFF74E053C50B25B0A63902152754219568D476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = GrpcEnvironment_get_Logger_m839180F12709257C8234DD89C741258F89C3E130_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(ILogger_ForType_TisUnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_m4BFF74E053C50B25B0A63902152754219568D476_RuntimeMethod_var, L_0);
		((UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var))->___Logger = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_StaticFields*)il2cpp_codegen_static_fields_for(UnmanagedLibrary_tA2C00C63AD1D71CE5CA6D7818A7EBB9C307357A1_il2cpp_TypeInfo_var))->___Logger), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Windows_LoadLibrary_m9AA48007B9E91DF02E02B936791E4A3556CC9D7A (String_t* ___0_filename, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibrary)(____0_filename_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Windows_GetProcAddress_m097424DB1A9D880C62E59147A6074875B976D360 (intptr_t ___0_hModule, String_t* ___1_procName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_procName_marshaled = NULL;
	____1_procName_marshaled = il2cpp_codegen_marshal_string(___1_procName);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___0_hModule, ____1_procName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_hModule, ____1_procName_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_procName_marshaled);
	____1_procName_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Linux_dlopen_m2E20C524D4EF9E1756180F57E3183FEF77230D85 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_filename_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_flags);
	#endif

	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Linux_dlsym_m156BDB39D7B6BC69DB4E20165253373973C7CD3C (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_symbol_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MacOSX_dlopen_m127C8AAA50733377855ECD5B5496FDEC36AF8BD8 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.dylib"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_filename_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_flags);
	#endif

	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MacOSX_dlsym_mDF53ADD36C4E8BE1DAF4C02ED15622AF53CA6C63 (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libSystem_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libSystem.dylib"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libSystem_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_symbol_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_dlopen_m28A6FCFD6D4175345383F596F0DAA79E26C34070 (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_filename_marshaled, ___1_flags);

	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_dlsym_m7B83E4542E62BE8A07581ABFE015F499C692682E (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);

	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CoreCLR_dlopen_m88D4F170C0DD39C3E6094F9C51FD70D376D8A9FF (String_t* ___0_filename, int32_t ___1_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libcoreclr_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcoreclr.so"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcoreclr_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____0_filename_marshaled, ___1_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_flags);
	#endif

	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CoreCLR_dlsym_m8D72AAC1270157B550817201A0EE69A5967BFE7D (intptr_t ___0_handle, String_t* ___1_symbol, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libcoreclr_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcoreclr.so"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	char* ____1_symbol_marshaled = NULL;
	____1_symbol_marshaled = il2cpp_codegen_marshal_string(___1_symbol);

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libcoreclr_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___0_handle, ____1_symbol_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_symbol_marshaled);
	#endif

	il2cpp_codegen_marshal_free(____1_symbol_marshaled);
	____1_symbol_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_m9A7119559DCF20375E5B44E9BE2A759E62438A94 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_0 = ___0_invoker;
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_1 = ___1_interceptor;
		InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF* L_2 = (InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF*)il2cpp_codegen_object_new(InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF_il2cpp_TypeInfo_var);
		InterceptingCallInvoker__ctor_m3E246B6225A39A749121FBB0F78A54D22882824F(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_m2AF659AA9A64D55A7CC7D7B071BF51C01DE7DBA0 (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* ___1_interceptors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C19A3E78437A0AD89B0D16EBF9C74FEDCCBB8AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE064A593217F8D9C315BF354EAAD770AB3C8246C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* V_1 = NULL;
	{
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_0 = ___0_invoker;
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57(L_0, _stringLiteralE064A593217F8D9C315BF354EAAD770AB3C8246C, GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57_RuntimeMethod_var);
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_2 = ___1_interceptors;
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_3;
		L_3 = GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A(L_2, _stringLiteral7C19A3E78437A0AD89B0D16EBF9C74FEDCCBB8AC, GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A_RuntimeMethod_var);
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_4 = ___1_interceptors;
		RuntimeObject* L_5;
		L_5 = Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2((RuntimeObject*)L_4, Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0049:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0036_1;
			}

IL_0026_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_10;
				L_10 = InterfaceFuncInvoker0< Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* >::Invoke(0, IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_11 = ___0_invoker;
				Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_12 = V_1;
				CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_13;
				L_13 = CallInvokerExtensions_Intercept_m9A7119559DCF20375E5B44E9BE2A759E62438A94(L_11, L_12, NULL);
				___0_invoker = L_13;
			}

IL_0036_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_004a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_16 = ___0_invoker;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* CallInvokerExtensions_Intercept_mD5D6FE799A72BD510A86DAE02372A0FC677AD73C (CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_0 = ___0_invoker;
		Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* L_1 = ___1_interceptor;
		MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896* L_2 = (MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896*)il2cpp_codegen_object_new(MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896_il2cpp_TypeInfo_var);
		MetadataInterceptor__ctor_m199227A74B7BC511CF87E1F03019B885F0DC258B(L_2, L_1, NULL);
		InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF* L_3 = (InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF*)il2cpp_codegen_object_new(InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF_il2cpp_TypeInfo_var);
		InterceptingCallInvoker__ctor_m3E246B6225A39A749121FBB0F78A54D22882824F(L_3, L_0, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInterceptor__ctor_m199227A74B7BC511CF87E1F03019B885F0DC258B (MetadataInterceptor_tFACA39F8E5440CCC47E02E012D182F7179401896* __this, Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___0_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisFunc_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737_m1E31C40C20C437D198DE8A3AB02A7F2380A0AAFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Interceptor__ctor_m5A0C506653E2A6D8C86CDC40FCAB4F2E565FB903(__this, NULL);
		Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* L_0 = ___0_interceptor;
		Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisFunc_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737_m1E31C40C20C437D198DE8A3AB02A7F2380A0AAFA(L_0, _stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE, GrpcPreconditions_CheckNotNull_TisFunc_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737_m1E31C40C20C437D198DE8A3AB02A7F2380A0AAFA_RuntimeMethod_var);
		__this->___interceptor = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interceptor), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ChannelExtensions_Intercept_mC020E97A8BAF26081207BFD334ED59BCB5C33737 (Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___0_channel, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* L_0 = ___0_channel;
		DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C* L_1 = (DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C*)il2cpp_codegen_object_new(DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D(L_1, L_0, NULL);
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_2 = ___1_interceptor;
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_3;
		L_3 = CallInvokerExtensions_Intercept_m9A7119559DCF20375E5B44E9BE2A759E62438A94(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ChannelExtensions_Intercept_m47A6E564DB73B5983A346CF8A2520B5DDFCF8ADE (Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___0_channel, InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* ___1_interceptors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* L_0 = ___0_channel;
		DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C* L_1 = (DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C*)il2cpp_codegen_object_new(DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D(L_1, L_0, NULL);
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_2 = ___1_interceptors;
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_3;
		L_3 = CallInvokerExtensions_Intercept_m2AF659AA9A64D55A7CC7D7B071BF51C01DE7DBA0(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ChannelExtensions_Intercept_m5AA075D6D15766C2E4EEAF17C6177EAE5D8B26C8 (Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___0_channel, Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* L_0 = ___0_channel;
		DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C* L_1 = (DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C*)il2cpp_codegen_object_new(DefaultCallInvoker_t588467213D80E34769921FFE89F1455BEB7E1A6C_il2cpp_TypeInfo_var);
		DefaultCallInvoker__ctor_mDA34DAEBC400CBA5C3B2ED5C6D7F56AA0611ED5D(L_1, L_0, NULL);
		Func_2_t61C370C5972263DF10DE105EE25C7D6FA11F4737* L_2 = ___1_interceptor;
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_3;
		L_3 = CallInvokerExtensions_Intercept_mD5D6FE799A72BD510A86DAE02372A0FC677AD73C(L_1, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptingCallInvoker__ctor_m3E246B6225A39A749121FBB0F78A54D22882824F (InterceptingCallInvoker_t7FB94F64EF3D420BF73785963EA913F00E9043BF* __this, CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* ___0_invoker, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE064A593217F8D9C315BF354EAAD770AB3C8246C);
		s_Il2CppMethodInitialized = true;
	}
	{
		CallInvoker__ctor_mD26697B962D1C7E7010837D21D466C27C235E543(__this, NULL);
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_0 = ___0_invoker;
		CallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD* L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57(L_0, _stringLiteralE064A593217F8D9C315BF354EAAD770AB3C8246C, GrpcPreconditions_CheckNotNull_TisCallInvoker_t0D3D5FE5C1A7B8467377D0CA3CFC35683E90CCFD_m7F35D92FB576C4CB1215F4A9B4FB7BBE8877EB57_RuntimeMethod_var);
		__this->___invoker = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___invoker), (void*)L_1);
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_2 = ___1_interceptor;
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_3;
		L_3 = GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2(L_2, _stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE, GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2_RuntimeMethod_var);
		__this->___interceptor = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interceptor), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interceptor__ctor_m5A0C506653E2A6D8C86CDC40FCAB4F2E565FB903 (Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ServerServiceDefinitionExtensions_Intercept_m1E0D77C68E6D8DB2D4916C7C1EF66359F88FA295 (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ___0_serverServiceDefinition, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* ___1_interceptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8_TisString_t_TisIServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_m7E489F30800A6148086097E5FF0CD16E283E2B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t440A737B31BAC1661CB293686028935A6C345B64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInterceptU3Eb__0_0_m83FD1E9C65724D4C3151E4D51C7BA935374D3A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CInterceptU3Eb__1_m812A88233663B5E4B6F357756E448A156CFA13B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456712C9451BACDA761E91E9111B6C9F3D7833B6);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* V_0 = NULL;
	Func_2_t440A737B31BAC1661CB293686028935A6C345B64* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t440A737B31BAC1661CB293686028935A6C345B64* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* L_0 = (U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mB88991ED20CAD19E8F9B0B2CD6C5B3C53C0A94AB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* L_1 = V_0;
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_2 = ___1_interceptor;
		NullCheck(L_1);
		L_1->___interceptor = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___interceptor), (void*)L_2);
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_3 = ___0_serverServiceDefinition;
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_4;
		L_4 = GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B(L_3, _stringLiteral456712C9451BACDA761E91E9111B6C9F3D7833B6, GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* L_5 = V_0;
		NullCheck(L_5);
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_6 = L_5->___interceptor;
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_7;
		L_7 = GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2(L_6, _stringLiteral29D01ED29B3E08D159739A60EE14FFC25AC4F8FE, GrpcPreconditions_CheckNotNull_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_mCA2AD3A21763C7678093F532B2406D978792CCA2_RuntimeMethod_var);
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_8 = ___0_serverServiceDefinition;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ServerServiceDefinition_get_CallHandlers_mB5553AD15284459B1D798FF56E9F7F9156EA4C93_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var);
		Func_2_t440A737B31BAC1661CB293686028935A6C345B64* L_10 = ((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9__0_0;
		Func_2_t440A737B31BAC1661CB293686028935A6C345B64* L_11 = L_10;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			goto IL_004f;
		}
		G_B1_0 = L_11;
		G_B1_1 = L_9;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var);
		U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* L_12 = ((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_t440A737B31BAC1661CB293686028935A6C345B64* L_13 = (Func_2_t440A737B31BAC1661CB293686028935A6C345B64*)il2cpp_codegen_object_new(Func_2_t440A737B31BAC1661CB293686028935A6C345B64_il2cpp_TypeInfo_var);
		Func_2__ctor_m3594CBEB8CA0148FFE22FBE09A939232C6A6B65C(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CInterceptU3Eb__0_0_m83FD1E9C65724D4C3151E4D51C7BA935374D3A96_RuntimeMethod_var), NULL);
		Func_2_t440A737B31BAC1661CB293686028935A6C345B64* L_14 = L_13;
		((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9__0_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9__0_0), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
	}

IL_004f:
	{
		U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* L_15 = V_0;
		Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB* L_16 = (Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB*)il2cpp_codegen_object_new(Func_2_t42D42B7BA5A51015F56F6F314C3EC196FAD14BEB_il2cpp_TypeInfo_var);
		Func_2__ctor_m0A2B69F3E88BBC5F5286962A11680176379F3881(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CInterceptU3Eb__1_m812A88233663B5E4B6F357756E448A156CFA13B0_RuntimeMethod_var), NULL);
		Dictionary_2_t7AA8F31755A7D9E7B253DCF2AB9D38E575EF081B* L_17;
		L_17 = Enumerable_ToDictionary_TisKeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8_TisString_t_TisIServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_m7E489F30800A6148086097E5FF0CD16E283E2B35(G_B2_1, G_B2_0, L_16, Enumerable_ToDictionary_TisKeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8_TisString_t_TisIServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_m7E489F30800A6148086097E5FF0CD16E283E2B35_RuntimeMethod_var);
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_18 = (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88*)il2cpp_codegen_object_new(ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_il2cpp_TypeInfo_var);
		ServerServiceDefinition__ctor_m2F6B2B58F0796D49F77989D2F01612BA159B67E1(L_18, L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ServerServiceDefinitionExtensions_Intercept_m0F1FEAF88F9829A1993CF1B7416F5FD6444D4683 (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* ___0_serverServiceDefinition, InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* ___1_interceptors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456712C9451BACDA761E91E9111B6C9F3D7833B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C19A3E78437A0AD89B0D16EBF9C74FEDCCBB8AC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* V_1 = NULL;
	{
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_0 = ___0_serverServiceDefinition;
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B(L_0, _stringLiteral456712C9451BACDA761E91E9111B6C9F3D7833B6, GrpcPreconditions_CheckNotNull_TisServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88_m213A8B3C01152E419512CFD52151D91B9E82D44B_RuntimeMethod_var);
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_2 = ___1_interceptors;
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_3;
		L_3 = GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A(L_2, _stringLiteral7C19A3E78437A0AD89B0D16EBF9C74FEDCCBB8AC, GrpcPreconditions_CheckNotNull_TisInterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50_m621C1F90DF2401F9CD4C26F1B82877C3FEE58D7A_RuntimeMethod_var);
		InterceptorU5BU5D_t1A74D3B57D98F54DEBFEE15B3B4F479BC9F17B50* L_4 = ___1_interceptors;
		RuntimeObject* L_5;
		L_5 = Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2((RuntimeObject*)L_4, Enumerable_Reverse_TisInterceptor_tCDDAB37E466940766B83B8FD38775808AC79E654_m8EEC870D83AB0A4198DBA6E13853368A9A38EBD2_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t2458903DF70D4554560D919900F93F09CF116AC3_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0049:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0036_1;
			}

IL_0026_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_10;
				L_10 = InterfaceFuncInvoker0< Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* >::Invoke(0, IEnumerator_1_t29BF60FE58D1BF47F8F7715CFC701439118CB9D5_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_11 = ___0_serverServiceDefinition;
				Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_12 = V_1;
				ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_13;
				L_13 = ServerServiceDefinitionExtensions_Intercept_m1E0D77C68E6D8DB2D4916C7C1EF66359F88FA295(L_11, L_12, NULL);
				___0_serverServiceDefinition = L_13;
			}

IL_0036_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_004a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* L_16 = ___0_serverServiceDefinition;
		return L_16;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mB88991ED20CAD19E8F9B0B2CD6C5B3C53C0A94AB (U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CInterceptU3Eb__1_m812A88233663B5E4B6F357756E448A156CFA13B0 (U3CU3Ec__DisplayClass0_0_tFCFB6FB019872A5489FC18A75D7A6B519CD82222* __this, KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8 ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9348A59FCE76A9F90808FBD2412C8F57492B7747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Value_m9348A59FCE76A9F90808FBD2412C8F57492B7747_inline((&___0_x), KeyValuePair_2_get_Value_m9348A59FCE76A9F90808FBD2412C8F57492B7747_RuntimeMethod_var);
		Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* L_1 = __this->___interceptor;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Interceptor_tCDDAB37E466940766B83B8FD38775808AC79E654* >::Invoke(1, IServerCallHandler_tED173D32632FB2EC370AE0E232D954F9133A33C6_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB7CE4EFA2E4C009C5C08E62B09609D0BDE324760 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* L_0 = (U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695*)il2cpp_codegen_object_new(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10D65737A1E083BCEEE51758ADA7723AAD1D342E(L_0, NULL);
		((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10D65737A1E083BCEEE51758ADA7723AAD1D342E (U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInterceptU3Eb__0_0_m83FD1E9C65724D4C3151E4D51C7BA935374D3A96 (U3CU3Ec_t248DC3CCFE9AFFCBDE8712407DF151FA204EC695* __this, KeyValuePair_2_t50D8A22E43058E1153BC553EACFEFF78A40104F8 ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9BB9219D1993296C8AAEFD59227D3E86DA0D7EEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m9BB9219D1993296C8AAEFD59227D3E86DA0D7EEE_inline((&___0_x), KeyValuePair_2_get_Key_m9BB9219D1993296C8AAEFD59227D3E86DA0D7EEE_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____platform;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* grpcsharp_request_call_context_create_delegate_Invoke_mCDDD9B7E5E34830285C805B05F2C0F9374AEB99A_inline (grpcsharp_request_call_context_create_delegate_tE887E2A88C5C4AB092B12437DAE9647572293CA4* __this, const RuntimeMethod* method) 
{
	typedef RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* grpcsharp_request_call_context_call_delegate_Invoke_m1DBAA893A2B366381A40D5672170B7B375CEDA63_inline (grpcsharp_request_call_context_call_delegate_t67B57912B01FAED2FD8250F85E8FDAA83F47F766* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) 
{
	typedef CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_method_delegate_Invoke_m46F68223AD40FCF07B7B5A165119C72DC97F5C52_inline (grpcsharp_request_call_context_method_delegate_t8C30824097B0ED70D294855A875C08CB4933B599* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, uintptr_t* ___1_methodLength, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, ___1_methodLength, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_host_delegate_Invoke_m3BE8DA48F9558BA8D68391344852B98057C37237_inline (grpcsharp_request_call_context_host_delegate_tD6492B95E04E0D297920DC5FC6BBD59210EDB1D0* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, uintptr_t* ___1_hostLength, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, uintptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, ___1_hostLength, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 grpcsharp_request_call_context_deadline_delegate_Invoke_m95FC304F1EFF6CD91DFC59994A081845BDC46CEB_inline (grpcsharp_request_call_context_deadline_delegate_tA931465074BBD4421D6F29F5AAA29C21AEC30AE0* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t grpcsharp_request_call_context_request_metadata_delegate_Invoke_m2E3FD33D9B7DEF8D14844D59B315D372DB3C124D_inline (grpcsharp_request_call_context_request_metadata_delegate_tCC0F7E190A7312979C81EE445530E904462E4DCF* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_request_call_context_reset_delegate_Invoke_m0E4C88599E8883324089B355D7DEC973456632DF_inline (grpcsharp_request_call_context_reset_delegate_tF496CA756C16C2B6D46F4AB124FE9455C7D488F5* __this, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___0_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_request_call_context_destroy_delegate_Invoke_m32808A2FE550061EBBDBF4AE0D0305363B986705_inline (grpcsharp_request_call_context_destroy_delegate_t4D58C343F6B81A6354C7E4E858FF0684D57CAA00* __this, intptr_t ___0_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestCallContextSafeHandle_set_CompletionCallback_m5E3B89F62926D9C236BD2EFED184A435AFC40C37_inline (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* ___0_value, const RuntimeMethod* method) 
{
	{
		RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_0 = ___0_value;
		__this->___U3CCompletionCallbackU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCompletionCallbackU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* RequestCallContextSafeHandle_get_CompletionCallback_mDBE9925BCE73FF75318A634547E0C0BC137BCA2B_inline (RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* __this, const RuntimeMethod* method) 
{
	{
		RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* L_0 = __this->___U3CCompletionCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestCallCompletionDelegate_Invoke_m90B2C1EA10F56D52729641928A625091E759876A_inline (RequestCallCompletionDelegate_t3137482BF6184352F6B765847A8D6670EE734E9E* __this, bool ___0_success, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___1_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_success, ___1_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcEnvironment_get_Logger_m839180F12709257C8234DD89C741258F89C3E130_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_StaticFields*)il2cpp_codegen_static_fields_for(GrpcEnvironment_t0BEAC08454CABA95D611BF534130A2DF238E0C49_il2cpp_TypeInfo_var))->___logger;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServerCallContext_set_Status_mB85398DBA11BC4D2A51E7307601E238C35522B08_inline (ServerCallContext_t0EC60CC418BD7C53A21EF0E33282A5ED812D424D* __this, Status_tDDC69F95A6B0A81C14A533C56151168261064F9A ___0_value, const RuntimeMethod* method) 
{
	{
		Status_tDDC69F95A6B0A81C14A533C56151168261064F9A L_0 = ___0_value;
		__this->___status = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___status))->___detail), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* RpcException_get_Trailers_m3FCFA1A40AA512F53C5E182B389BAF895B93AB6E_inline (RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* __this, const RuntimeMethod* method) 
{
	{
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_0 = __this->___trailers;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Status_tDDC69F95A6B0A81C14A533C56151168261064F9A RpcException_get_Status_m299E4544788E0334DF4A0BDA09E3F44DD983EBC6_inline (RpcException_t8CCEEDB2CAF0E1391065557DD7AD69BE10D0C618* __this, const RuntimeMethod* method) 
{
	{
		Status_tDDC69F95A6B0A81C14A533C56151168261064F9A L_0 = __this->___status;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WriteOptions_get_Flags_mE773ECA6BA3F314A01E346EDF59CA8B2C9CE329D_inline (WriteOptions_t060B68D5EA968A2FCE6BFFBDA62418A2A4EC8DC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___flags;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* grpcsharp_ssl_server_credentials_create_delegate_Invoke_m7BAC18B088D9417FBDB52D4C2D5148CA2C404190_inline (grpcsharp_ssl_server_credentials_create_delegate_t1554254DCAA43A4806B0903E2DA0B074475E3FE8* __this, String_t* ___0_pemRootCerts, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_keyCertPairCertChainArray, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_keyCertPairPrivateKeyArray, uintptr_t ___3_numKeyCertPairs, int32_t ___4_forceClientAuth, const RuntimeMethod* method) 
{
	typedef ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* (*FunctionPointerType) (RuntimeObject*, String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uintptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_pemRootCerts, ___1_keyCertPairCertChainArray, ___2_keyCertPairPrivateKeyArray, ___3_numKeyCertPairs, ___4_forceClientAuth, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_credentials_release_delegate_Invoke_m0D9977F82B46751195AD0B63712FB917DB2213EA_inline (grpcsharp_server_credentials_release_delegate_tFDF7A3AA86727A99D9B5AB17E5573685B4D56410* __this, intptr_t ___0_credentials, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_credentials, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Server_t2016436C42019CF01603E5C47FE74700609E61EC* ServerRpcNew_get_Server_m87B680FC40D0D915644F02EC34EB1C6AC07AD14B_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Server_t2016436C42019CF01603E5C47FE74700609E61EC* L_0 = __this->___server;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* ServerRpcNew_get_Call_m763D4B9EDCE95FD3BDF6CBC2E45D093B67415B02_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		CallSafeHandle_t2D74685261B7ED4BEBE583B12DD3FF157676B74A* L_0 = __this->___call;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Method_m4828D959C47D085F8AC61EA81C2F93F7E19073E2_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___method;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerRpcNew_get_Host_mB9402BAD4EEE97C1B2B0936C08FDC4D99209891C_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___host;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ServerRpcNew_get_Deadline_mB68D819B1743D463CE36E274F07D36922065016B_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 L_0 = __this->___deadline;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* ServerRpcNew_get_RequestMetadata_mA22EB952456851353D5826130BFEE68B33050E14_inline (ServerRpcNew_t00EDD5F5D37CFD428EB5F082ACB9C25CEEFC930E* __this, const RuntimeMethod* method) 
{
	{
		Metadata_t15D22C6D3A4423ED2253FB360F6D81922EB42305* L_0 = __this->___requestMetadata;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* grpcsharp_server_create_delegate_Invoke_m3C07DAA69CBAE7EE33648CDFAFEABE7414BB1F5F_inline (grpcsharp_server_create_delegate_t175CB49FE2638998AB4BD9B61B6EC8E3F183480A* __this, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2* ___0_args, const RuntimeMethod* method) 
{
	typedef ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* (*FunctionPointerType) (RuntimeObject*, ChannelArgsSafeHandle_tED274625EBE61CB02C5590911ACB418347BD6FE2*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_args, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_register_completion_queue_delegate_Invoke_m48082D196C5E256783BD4D0E5DAC77BF1FECD56F_inline (grpcsharp_server_register_completion_queue_delegate_tD6DA3EA81CEA8D64B18DC1F7C4E85671A410822D* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m9F60A49C25B48904DF757273003256336F1E68F4_inline (grpcsharp_server_add_insecure_http2_port_delegate_tE8D5D0ABD4EAB0C55328E66C3E6DE4C80FD747D3* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_addr, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_add_secure_http2_port_delegate_Invoke_m1A99C4A2324DBDA967833A2EE4D4B7B1D2C17CAE_inline (grpcsharp_server_add_secure_http2_port_delegate_t43CDC162D658DF9C03C5EE052937FD5DD339C3F7* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, String_t* ___1_addr, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693* ___2_creds, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, String_t*, ServerCredentialsSafeHandle_t95FCCD7CA1CECB2686CBB6CC9F9091918BD25693*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_addr, ___2_creds, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_start_delegate_Invoke_m7A3454C654E6FAA6D3F3EF38F590077CF9885F11_inline (grpcsharp_server_start_delegate_tC69EA5A6EAE0EBC2A1776B1FBA856C709CDD16E9* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* CompletionQueueSafeHandle_get_CompletionRegistry_m4FA73CF5AF68A4C1ED914E1134AD75E852F4FD9F_inline (CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* __this, const RuntimeMethod* method) 
{
	{
		CompletionRegistry_t800747ED375180CBCC5BE648B64B594B7E800838* L_0 = __this->___completionRegistry;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m4ACB56A6D0FD192711001B8CCA887FC677D34A8A_inline (grpcsharp_server_shutdown_and_notify_callback_delegate_t7B024CB51D07C28535DE4339B9B73B3A90624E6B* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6* ___2_ctx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, BatchContextSafeHandle_t9133A6266EDE23D204DEB3BBCE65DB5739F1BEB6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t grpcsharp_server_request_call_delegate_Invoke_mD9CAA765B5818B59A3BFF53C5AF0275E2763A366_inline (grpcsharp_server_request_call_delegate_t5822CFD78CCE8403BB4ACFDDF8881A480F03AAC1* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328* ___1_cq, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC* ___2_ctx, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, CompletionQueueSafeHandle_t4E6788B3FAEF371380212D4610F7E6FE1B704328*, RequestCallContextSafeHandle_t09063B96E300EA29DF94E4B243EFAF0FF47F59FC*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, ___1_cq, ___2_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_destroy_delegate_Invoke_m72D7DB1FA99BB0A0F5C5B064C5830DB9C9B58011_inline (grpcsharp_server_destroy_delegate_t8A11BF8A9ACC6521DEF8548BE7C3D40D03925B19* __this, intptr_t ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void grpcsharp_server_cancel_all_calls_delegate_Invoke_m19A9BDEE2357678B8712E47AD32B74BC35820A0E_inline (grpcsharp_server_cancel_all_calls_delegate_t5ECC76229389F7438224437A8D352D417A071F36* __this, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC* ___0_server, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ServerSafeHandle_tDBFF340F7DA3CDA811F2842D8CC8BE73CAFA99FC*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_server, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_now_delegate_Invoke_m405142383BF968F955BE1796C7612D86E02A3504_inline (gprsharp_now_delegate_t53BFED1544CA142182D0B484900F1912434E4BEC* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Timespec_get_TimevalSeconds_mD94F6B602DDF2E8AFEA00799637D3848C690FA25_inline (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___tv_sec;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Timespec_get_TimevalNanos_mA7DA2C0EBBE0AE1B19275519C44B35FA0179567D_inline (Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___tv_nsec;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_convert_clock_type_delegate_Invoke_m43584D2805AF7159C25D8BFBF0AC2F57936BA65F_inline (gprsharp_convert_clock_type_delegate_t3DCDE78EB1FC6FFFF651BE49A787C173F19FD469* __this, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 ___0_t, int32_t ___1_targetClock, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_t, ___1_targetClock, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t gprsharp_sizeof_timespec_delegate_Invoke_m9824EC4BDC9E98302E8A4004CBCF8AE43F7BC468_inline (gprsharp_sizeof_timespec_delegate_t115D59A94C3653F8C546EEA939402D878371B030* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_future_delegate_Invoke_m91E1550D9F31CB073E5D30CF70742DC4AB991B5E_inline (gprsharp_inf_future_delegate_t9C4C2264C6C26579CB0D68CF793D2AD114549F23* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 gprsharp_inf_past_delegate_Invoke_mC054A4E6E158EE6464BAF2B16316931EDAE610DC_inline (gprsharp_inf_past_delegate_t16C70C088C005F4DB4493A18F44EAB65ECECFA64* __this, int32_t ___0_clockType, const RuntimeMethod* method) 
{
	typedef Timespec_t081E69C046DFC0C7F28FBCA0504E56899642EA34 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_clockType, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsWindows_m6FF375D9A1290B95A304777DA680091B0C92E1C1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isWindows;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsLinux_mED2791B96D9A3BF967C301D0EC8311ADF63FCC02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isLinux;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMono_mCDA40AAFCFFF7200F5F04781A943634ABCECAF47_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMono;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsNetCore_mB96CBC14C9F06C2D22EA0FA72131A770C0CA488F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isNetCore;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlatformApis_get_IsMacOSX_m941D84ED2FC827842033C5A7B84445DF92935340_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_StaticFields*)il2cpp_codegen_static_fields_for(PlatformApis_t06D1251E33FB034A24D9132DE067114A5D9E6065_il2cpp_TypeInfo_var))->___isMacOSX;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServerServiceDefinition_get_CallHandlers_mB5553AD15284459B1D798FF56E9F7F9156EA4C93_inline (ServerServiceDefinition_tB9766F63B0ABDC29DD722A9D4E235552CBE08B88* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyDictionary_2_tDAACC3BECDF3AB5254DD9E5A36CEC354FD3BBA0A* L_0 = __this->___callHandlers;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
