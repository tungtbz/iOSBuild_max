#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioClip,SFXPoolInfo>
struct Dictionary_2_tD2CF827E99853B263385DF85AB4994C0444E52B8;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,System.Single>
struct Dictionary_2_t83F4FFD537394FE71A872D41344485D7C48A0081;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,SoundManager/SongCallBack>
struct Dictionary_2_tFFC47B14D97EEFF39F951FAFBF5418C816C5CDE4;
// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA;
// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Int32>
struct Dictionary_2_tAAD13DE2380C73CD048F3616B2AC85A1136378F9;
// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Object>
struct Dictionary_2_t2DAE84DC3402583279874CE6BA493DEE0C3AC849;
// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.String>
struct Dictionary_2_tD08FC78F679BCC220041C25A22BD3622D933B6E7;
// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,MEC.Timing/ProcessIndex>
struct Dictionary_2_tF4D7F70987404125561E6FDDE0B1DD7F143F2BB7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct Dictionary_2_t28F98B9784B492AA41EDD19D7F1AAF337B9C15D0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct Dictionary_2_t4D4F3F33B4DFA1217F335D58E359F1224C07AD22;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,SFXGroup>
struct Dictionary_2_t9F1B0D86EC74A838B805C454BC978D39B10736BF;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>
struct Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149;
// System.Func`3<System.Collections.Generic.IEnumerator`1<System.Single>,MEC.CoroutineHandle,System.Collections.Generic.IEnumerator`1<System.Single>>
struct Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0;
// System.Func`3<System.Object,MEC.CoroutineHandle,System.Object>
struct Func_3_t73FCD9B381EEF91160D41FA9D2C37DACE0D988D0;
// System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>
struct HashSet_1_tACBCFC2C11B395B11BF68EE21B995927E0859512;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF;
// System.Collections.Generic.IEqualityComparer`1<MEC.CoroutineHandle>
struct IEqualityComparer_1_t075B5D27151F8298479A13410644243C630D8C6A;
// System.Collections.Generic.IEqualityComparer`1<MEC.Timing/ProcessIndex>
struct IEqualityComparer_1_t5C8037AC63210247A2A92FCBB8CC7D60E9833754;
// System.Collections.Generic.Dictionary`2/KeyCollection<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct KeyCollection_t4D5EDB749558A8C932598820AB8C8F215326BA0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>
struct KeyCollection_t36D4B8E6A8CA9ABA83758FC58E328237693F98DF;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<SFXGroup>
struct List_1_t26BEFA4C1DF646C11EF2BCFAB008BD9BE730DD0F;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<SoundConnection>
struct List_1_t9CDE5940C5A866335368E84D8EEBDCD97A7A9D6B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct ValueCollection_tC9559E6AE7C7D4A7FF7882A042CDEA52F7B41FD5;
// System.Collections.Generic.Dictionary`2/ValueCollection<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>
struct ValueCollection_tD467E400B9948DC5BDBAFBD789A01288AE0E0544;
// System.Collections.Generic.Dictionary`2/Entry<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>[]
struct EntryU5BU5D_t5DD1A871FBDE5868B9014DBABD22CD1A9679E8F5;
// System.Collections.Generic.Dictionary`2/Entry<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>[]
struct EntryU5BU5D_t4ABE6E1D771C6010E4830215B85E6ED9A255212F;
// System.Collections.Generic.IEnumerator`1<System.Single>[]
struct IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// MEC.Timing[]
struct TimingU5BU5D_tE34E42498A1188497D0934C9337FCB890E9E9D10;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SoundConnection
struct SoundConnection_t46E681E7341D873B21B1BD33995007C347CD8AAE;
// SoundManager
struct SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// MEC.Timing
struct Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// SoundManager/<XOut>d__191
struct U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C;
// SoundManager/<_PlaySFXLoopTillDestroy>d__181
struct U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3;
// SoundManager/SongCallBack
struct SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43;
// SoundManagerTools/<>c
struct U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC;
// MEC.Timing/<_CallContinuously>d__335
struct U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD;
// MEC.Timing/<_DelayedCall>d__313
struct U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47;
// MEC.Timing/<_EOFPump>d__133
struct U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131;
// MEC.Timing/<_EOFPumpWatcher>d__132
struct U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5;
// MEC.Timing/<_InjectDelay>d__288
struct U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5;
// MEC.Timing/<_StartWhenDone>d__275
struct U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A;
// MEC.Timing/<_StartWhenDone>d__280
struct U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C;
// MEC.Timing/<_StartWhenDone>d__282
struct U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357;
// MEC.Timing/<_StartWhenDone>d__287
struct U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1;
// MEC.Timing/<_WatchCall>d__334
struct U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingReferenceException_t0957F7F403A0B9249CE6AB66FAD46E626F787EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral37407E1CCD62BFCCE0980D9087E09AE63E8534D2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6B3C263FFB5EFCB6DF7293F2B11527148C4B496F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m6D936C5E9DB4BCD23082FCA5E21379A3663158FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CXOutU3Ed__191_System_Collections_IEnumerator_Reset_m011440E019CD1E58AB110E5A88012F5A903D0668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_CallContinuouslyU3Ed__335_System_Collections_IEnumerator_Reset_m6C39B8690105DF7FE33407E4F670F007C1F76B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_DelayedCallU3Ed__313_System_Collections_IEnumerator_Reset_m0F5E756070BA07B3E3AC8703FFECB25D5B808D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_EOFPumpU3Ed__133_System_Collections_IEnumerator_Reset_m76045220FEB5D67B1AC2803CA6E40DBF8AE4EBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_EOFPumpWatcherU3Ed__132_System_Collections_IEnumerator_Reset_m6E32C5B57F7CBAE3833560A7A48BDBE012AF4DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_InjectDelayU3Ed__288_System_Collections_IEnumerator_Reset_m8A5B703CA36411E7CA0901FF5411DB30CA314E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_PlaySFXLoopTillDestroyU3Ed__181_System_Collections_IEnumerator_Reset_m195D7E53D80A9DF7089948ABEC3C83951C0FBFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_StartWhenDoneU3Ed__275_System_Collections_IEnumerator_Reset_mA6B62935E0B21F842831193E739AE5142AE71186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_StartWhenDoneU3Ed__280_System_Collections_IEnumerator_Reset_m81D27865BEEC35D8DD0721C9D359B23A70027F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_StartWhenDoneU3Ed__282_System_Collections_IEnumerator_Reset_m05688AFABE0D2FD0F134D24C2814348E2C61D220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_StartWhenDoneU3Ed__287_System_Collections_IEnumerator_Reset_mE605459835F11C35DD9C5D7877D1D69E4BD339E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_WatchCallU3Ed__334_System_Collections_IEnumerator_Reset_mCC8F7898A1A3029B9C8DED0062B513928FB1F375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>
struct Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5DD1A871FBDE5868B9014DBABD22CD1A9679E8F5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4D5EDB749558A8C932598820AB8C8F215326BA0B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC9559E6AE7C7D4A7FF7882A042CDEA52F7B41FD5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___entries_1)); }
	inline EntryU5BU5D_t5DD1A871FBDE5868B9014DBABD22CD1A9679E8F5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5DD1A871FBDE5868B9014DBABD22CD1A9679E8F5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5DD1A871FBDE5868B9014DBABD22CD1A9679E8F5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___keys_7)); }
	inline KeyCollection_t4D5EDB749558A8C932598820AB8C8F215326BA0B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D5EDB749558A8C932598820AB8C8F215326BA0B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D5EDB749558A8C932598820AB8C8F215326BA0B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ___values_8)); }
	inline ValueCollection_tC9559E6AE7C7D4A7FF7882A042CDEA52F7B41FD5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC9559E6AE7C7D4A7FF7882A042CDEA52F7B41FD5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC9559E6AE7C7D4A7FF7882A042CDEA52F7B41FD5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>
struct Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4ABE6E1D771C6010E4830215B85E6ED9A255212F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t36D4B8E6A8CA9ABA83758FC58E328237693F98DF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD467E400B9948DC5BDBAFBD789A01288AE0E0544 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___entries_1)); }
	inline EntryU5BU5D_t4ABE6E1D771C6010E4830215B85E6ED9A255212F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4ABE6E1D771C6010E4830215B85E6ED9A255212F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4ABE6E1D771C6010E4830215B85E6ED9A255212F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___keys_7)); }
	inline KeyCollection_t36D4B8E6A8CA9ABA83758FC58E328237693F98DF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t36D4B8E6A8CA9ABA83758FC58E328237693F98DF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t36D4B8E6A8CA9ABA83758FC58E328237693F98DF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ___values_8)); }
	inline ValueCollection_tD467E400B9948DC5BDBAFBD789A01288AE0E0544 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD467E400B9948DC5BDBAFBD789A01288AE0E0544 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD467E400B9948DC5BDBAFBD789A01288AE0E0544 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// SoundManager/<XOut>d__191
struct U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C  : public RuntimeObject
{
public:
	// System.Int32 SoundManager/<XOut>d__191::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundManager/<XOut>d__191::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single SoundManager/<XOut>d__191::duration
	float ___duration_2;
	// UnityEngine.AudioSource SoundManager/<XOut>d__191::a1
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___a1_3;
	// SoundManager SoundManager/<XOut>d__191::<>4__this
	SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * ___U3CU3E4__this_4;
	// SoundManager/SongCallBack SoundManager/<XOut>d__191::runOnEndFunction
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___runOnEndFunction_5;
	// System.Single SoundManager/<XOut>d__191::<startTime>5__2
	float ___U3CstartTimeU3E5__2_6;
	// System.Single SoundManager/<XOut>d__191::<endTime>5__3
	float ___U3CendTimeU3E5__3_7;
	// System.Single SoundManager/<XOut>d__191::<maxVolume>5__4
	float ___U3CmaxVolumeU3E5__4_8;
	// System.Boolean SoundManager/<XOut>d__191::<passedFirstPause>5__5
	bool ___U3CpassedFirstPauseU3E5__5_9;
	// System.Boolean SoundManager/<XOut>d__191::<passedFirstUnpause>5__6
	bool ___U3CpassedFirstUnpauseU3E5__6_10;
	// System.Single SoundManager/<XOut>d__191::<pauseTimeRemaining>5__7
	float ___U3CpauseTimeRemainingU3E5__7_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_a1_3() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___a1_3)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_a1_3() const { return ___a1_3; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_a1_3() { return &___a1_3; }
	inline void set_a1_3(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___a1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CU3E4__this_4)); }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_runOnEndFunction_5() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___runOnEndFunction_5)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_runOnEndFunction_5() const { return ___runOnEndFunction_5; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_runOnEndFunction_5() { return &___runOnEndFunction_5; }
	inline void set_runOnEndFunction_5(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___runOnEndFunction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runOnEndFunction_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CstartTimeU3E5__2_6)); }
	inline float get_U3CstartTimeU3E5__2_6() const { return ___U3CstartTimeU3E5__2_6; }
	inline float* get_address_of_U3CstartTimeU3E5__2_6() { return &___U3CstartTimeU3E5__2_6; }
	inline void set_U3CstartTimeU3E5__2_6(float value)
	{
		___U3CstartTimeU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CendTimeU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CendTimeU3E5__3_7)); }
	inline float get_U3CendTimeU3E5__3_7() const { return ___U3CendTimeU3E5__3_7; }
	inline float* get_address_of_U3CendTimeU3E5__3_7() { return &___U3CendTimeU3E5__3_7; }
	inline void set_U3CendTimeU3E5__3_7(float value)
	{
		___U3CendTimeU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CmaxVolumeU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CmaxVolumeU3E5__4_8)); }
	inline float get_U3CmaxVolumeU3E5__4_8() const { return ___U3CmaxVolumeU3E5__4_8; }
	inline float* get_address_of_U3CmaxVolumeU3E5__4_8() { return &___U3CmaxVolumeU3E5__4_8; }
	inline void set_U3CmaxVolumeU3E5__4_8(float value)
	{
		___U3CmaxVolumeU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CpassedFirstPauseU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CpassedFirstPauseU3E5__5_9)); }
	inline bool get_U3CpassedFirstPauseU3E5__5_9() const { return ___U3CpassedFirstPauseU3E5__5_9; }
	inline bool* get_address_of_U3CpassedFirstPauseU3E5__5_9() { return &___U3CpassedFirstPauseU3E5__5_9; }
	inline void set_U3CpassedFirstPauseU3E5__5_9(bool value)
	{
		___U3CpassedFirstPauseU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CpassedFirstUnpauseU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CpassedFirstUnpauseU3E5__6_10)); }
	inline bool get_U3CpassedFirstUnpauseU3E5__6_10() const { return ___U3CpassedFirstUnpauseU3E5__6_10; }
	inline bool* get_address_of_U3CpassedFirstUnpauseU3E5__6_10() { return &___U3CpassedFirstUnpauseU3E5__6_10; }
	inline void set_U3CpassedFirstUnpauseU3E5__6_10(bool value)
	{
		___U3CpassedFirstUnpauseU3E5__6_10 = value;
	}

	inline static int32_t get_offset_of_U3CpauseTimeRemainingU3E5__7_11() { return static_cast<int32_t>(offsetof(U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C, ___U3CpauseTimeRemainingU3E5__7_11)); }
	inline float get_U3CpauseTimeRemainingU3E5__7_11() const { return ___U3CpauseTimeRemainingU3E5__7_11; }
	inline float* get_address_of_U3CpauseTimeRemainingU3E5__7_11() { return &___U3CpauseTimeRemainingU3E5__7_11; }
	inline void set_U3CpauseTimeRemainingU3E5__7_11(float value)
	{
		___U3CpauseTimeRemainingU3E5__7_11 = value;
	}
};


// SoundManager/<_PlaySFXLoopTillDestroy>d__181
struct U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3  : public RuntimeObject
{
public:
	// System.Int32 SoundManager/<_PlaySFXLoopTillDestroy>d__181::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundManager/<_PlaySFXLoopTillDestroy>d__181::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single SoundManager/<_PlaySFXLoopTillDestroy>d__181::maxDuration
	float ___maxDuration_2;
	// System.Boolean SoundManager/<_PlaySFXLoopTillDestroy>d__181::tillDestroy
	bool ___tillDestroy_3;
	// SoundManager SoundManager/<_PlaySFXLoopTillDestroy>d__181::<>4__this
	SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * ___U3CU3E4__this_4;
	// UnityEngine.GameObject SoundManager/<_PlaySFXLoopTillDestroy>d__181::gO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gO_5;
	// UnityEngine.AudioSource SoundManager/<_PlaySFXLoopTillDestroy>d__181::source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source_6;
	// System.Boolean SoundManager/<_PlaySFXLoopTillDestroy>d__181::<trackEndTime>5__2
	bool ___U3CtrackEndTimeU3E5__2_7;
	// System.Single SoundManager/<_PlaySFXLoopTillDestroy>d__181::<endTime>5__3
	float ___U3CendTimeU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxDuration_2() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___maxDuration_2)); }
	inline float get_maxDuration_2() const { return ___maxDuration_2; }
	inline float* get_address_of_maxDuration_2() { return &___maxDuration_2; }
	inline void set_maxDuration_2(float value)
	{
		___maxDuration_2 = value;
	}

	inline static int32_t get_offset_of_tillDestroy_3() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___tillDestroy_3)); }
	inline bool get_tillDestroy_3() const { return ___tillDestroy_3; }
	inline bool* get_address_of_tillDestroy_3() { return &___tillDestroy_3; }
	inline void set_tillDestroy_3(bool value)
	{
		___tillDestroy_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___U3CU3E4__this_4)); }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_gO_5() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___gO_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gO_5() const { return ___gO_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gO_5() { return &___gO_5; }
	inline void set_gO_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gO_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gO_5), (void*)value);
	}

	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___source_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_source_6() const { return ___source_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackEndTimeU3E5__2_7() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___U3CtrackEndTimeU3E5__2_7)); }
	inline bool get_U3CtrackEndTimeU3E5__2_7() const { return ___U3CtrackEndTimeU3E5__2_7; }
	inline bool* get_address_of_U3CtrackEndTimeU3E5__2_7() { return &___U3CtrackEndTimeU3E5__2_7; }
	inline void set_U3CtrackEndTimeU3E5__2_7(bool value)
	{
		___U3CtrackEndTimeU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CendTimeU3E5__3_8() { return static_cast<int32_t>(offsetof(U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3, ___U3CendTimeU3E5__3_8)); }
	inline float get_U3CendTimeU3E5__3_8() const { return ___U3CendTimeU3E5__3_8; }
	inline float* get_address_of_U3CendTimeU3E5__3_8() { return &___U3CendTimeU3E5__3_8; }
	inline void set_U3CendTimeU3E5__3_8(float value)
	{
		___U3CendTimeU3E5__3_8 = value;
	}
};


// SoundManagerTools/<>c
struct U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_StaticFields
{
public:
	// SoundManagerTools/<>c SoundManagerTools/<>c::<>9
	U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> SoundManagerTools/<>c::<>9__7_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// MEC.Timing/<_CallContinuously>d__335
struct U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_CallContinuously>d__335::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_CallContinuously>d__335::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_CallContinuously>d__335::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;
	// System.Single MEC.Timing/<_CallContinuously>d__335::period
	float ___period_3;
	// UnityEngine.GameObject MEC.Timing/<_CallContinuously>d__335::gObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gObject_4;
	// System.Action MEC.Timing/<_CallContinuously>d__335::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_period_3() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___period_3)); }
	inline float get_period_3() const { return ___period_3; }
	inline float* get_address_of_period_3() { return &___period_3; }
	inline void set_period_3(float value)
	{
		___period_3 = value;
	}

	inline static int32_t get_offset_of_gObject_4() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___gObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gObject_4() const { return ___gObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gObject_4() { return &___gObject_4; }
	inline void set_gObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD, ___action_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_5() const { return ___action_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_5), (void*)value);
	}
};


// MEC.Timing/<_DelayedCall>d__313
struct U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_DelayedCall>d__313::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_DelayedCall>d__313::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_DelayedCall>d__313::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;
	// System.Single MEC.Timing/<_DelayedCall>d__313::delay
	float ___delay_3;
	// UnityEngine.GameObject MEC.Timing/<_DelayedCall>d__313::cancelWith
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cancelWith_4;
	// System.Action MEC.Timing/<_DelayedCall>d__313::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_cancelWith_4() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___cancelWith_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cancelWith_4() const { return ___cancelWith_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cancelWith_4() { return &___cancelWith_4; }
	inline void set_cancelWith_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cancelWith_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelWith_4), (void*)value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47, ___action_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_5() const { return ___action_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_5), (void*)value);
	}
};


// MEC.Timing/<_EOFPump>d__133
struct U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_EOFPump>d__133::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MEC.Timing/<_EOFPump>d__133::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_EOFPump>d__133::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MEC.Timing/<_EOFPumpWatcher>d__132
struct U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_EOFPumpWatcher>d__132::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_EOFPumpWatcher>d__132::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_EOFPumpWatcher>d__132::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MEC.Timing/<_InjectDelay>d__288
struct U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_InjectDelay>d__288::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_InjectDelay>d__288::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_InjectDelay>d__288::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;
	// System.Single MEC.Timing/<_InjectDelay>d__288::waitTime
	float ___waitTime_3;
	// System.Collections.Generic.IEnumerator`1<System.Single> MEC.Timing/<_InjectDelay>d__288::proc
	RuntimeObject* ___proc_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_3() { return static_cast<int32_t>(offsetof(U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5, ___waitTime_3)); }
	inline float get_waitTime_3() const { return ___waitTime_3; }
	inline float* get_address_of_waitTime_3() { return &___waitTime_3; }
	inline void set_waitTime_3(float value)
	{
		___waitTime_3 = value;
	}

	inline static int32_t get_offset_of_proc_4() { return static_cast<int32_t>(offsetof(U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5, ___proc_4)); }
	inline RuntimeObject* get_proc_4() const { return ___proc_4; }
	inline RuntimeObject** get_address_of_proc_4() { return &___proc_4; }
	inline void set_proc_4(RuntimeObject* value)
	{
		___proc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proc_4), (void*)value);
	}
};


// MEC.Timing/<_StartWhenDone>d__280
struct U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_StartWhenDone>d__280::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_StartWhenDone>d__280::<>2__current
	float ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation MEC.Timing/<_StartWhenDone>d__280::operation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation_2;
	// System.Collections.Generic.IEnumerator`1<System.Single> MEC.Timing/<_StartWhenDone>d__280::pausedProc
	RuntimeObject* ___pausedProc_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_operation_2() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C, ___operation_2)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_operation_2() const { return ___operation_2; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_operation_2() { return &___operation_2; }
	inline void set_operation_2(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___operation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___operation_2), (void*)value);
	}

	inline static int32_t get_offset_of_pausedProc_3() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C, ___pausedProc_3)); }
	inline RuntimeObject* get_pausedProc_3() const { return ___pausedProc_3; }
	inline RuntimeObject** get_address_of_pausedProc_3() { return &___pausedProc_3; }
	inline void set_pausedProc_3(RuntimeObject* value)
	{
		___pausedProc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausedProc_3), (void*)value);
	}
};


// MEC.Timing/<_StartWhenDone>d__282
struct U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_StartWhenDone>d__282::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_StartWhenDone>d__282::<>2__current
	float ___U3CU3E2__current_1;
	// UnityEngine.CustomYieldInstruction MEC.Timing/<_StartWhenDone>d__282::operation
	CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * ___operation_2;
	// System.Collections.Generic.IEnumerator`1<System.Single> MEC.Timing/<_StartWhenDone>d__282::pausedProc
	RuntimeObject* ___pausedProc_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_operation_2() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357, ___operation_2)); }
	inline CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * get_operation_2() const { return ___operation_2; }
	inline CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 ** get_address_of_operation_2() { return &___operation_2; }
	inline void set_operation_2(CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * value)
	{
		___operation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___operation_2), (void*)value);
	}

	inline static int32_t get_offset_of_pausedProc_3() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357, ___pausedProc_3)); }
	inline RuntimeObject* get_pausedProc_3() const { return ___pausedProc_3; }
	inline RuntimeObject** get_address_of_pausedProc_3() { return &___pausedProc_3; }
	inline void set_pausedProc_3(RuntimeObject* value)
	{
		___pausedProc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausedProc_3), (void*)value);
	}
};


// MEC.Timing/<_StartWhenDone>d__287
struct U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_StartWhenDone>d__287::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_StartWhenDone>d__287::<>2__current
	float ___U3CU3E2__current_1;
	// System.Func`1<System.Boolean> MEC.Timing/<_StartWhenDone>d__287::evaluatorFunc
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___evaluatorFunc_2;
	// System.Boolean MEC.Timing/<_StartWhenDone>d__287::continueOn
	bool ___continueOn_3;
	// System.Collections.Generic.IEnumerator`1<System.Single> MEC.Timing/<_StartWhenDone>d__287::pausedProc
	RuntimeObject* ___pausedProc_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_evaluatorFunc_2() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1, ___evaluatorFunc_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_evaluatorFunc_2() const { return ___evaluatorFunc_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_evaluatorFunc_2() { return &___evaluatorFunc_2; }
	inline void set_evaluatorFunc_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___evaluatorFunc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___evaluatorFunc_2), (void*)value);
	}

	inline static int32_t get_offset_of_continueOn_3() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1, ___continueOn_3)); }
	inline bool get_continueOn_3() const { return ___continueOn_3; }
	inline bool* get_address_of_continueOn_3() { return &___continueOn_3; }
	inline void set_continueOn_3(bool value)
	{
		___continueOn_3 = value;
	}

	inline static int32_t get_offset_of_pausedProc_4() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1, ___pausedProc_4)); }
	inline RuntimeObject* get_pausedProc_4() const { return ___pausedProc_4; }
	inline RuntimeObject** get_address_of_pausedProc_4() { return &___pausedProc_4; }
	inline void set_pausedProc_4(RuntimeObject* value)
	{
		___pausedProc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausedProc_4), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// MEC.CoroutineHandle
struct CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 
{
public:
	// System.Int32 MEC.CoroutineHandle::_id
	int32_t ____id_2;

public:
	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290, ____id_2)); }
	inline int32_t get__id_2() const { return ____id_2; }
	inline int32_t* get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(int32_t value)
	{
		____id_2 = value;
	}
};

struct CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290_StaticFields
{
public:
	// System.Int32[] MEC.CoroutineHandle::NextIndex
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___NextIndex_1;

public:
	inline static int32_t get_offset_of_NextIndex_1() { return static_cast<int32_t>(offsetof(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290_StaticFields, ___NextIndex_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_NextIndex_1() const { return ___NextIndex_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_NextIndex_1() { return &___NextIndex_1; }
	inline void set_NextIndex_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___NextIndex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextIndex_1), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// MEC.DebugInfoType
struct DebugInfoType_t542A0D48C1D8AFE64FB10C9919D4EE8ADD30410C 
{
public:
	// System.Int32 MEC.DebugInfoType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugInfoType_t542A0D48C1D8AFE64FB10C9919D4EE8ADD30410C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// MEC.Segment
struct Segment_t4FD7E1BB18B0EC0B0265DEDFEB522C81C27508F0 
{
public:
	// System.Int32 MEC.Segment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Segment_t4FD7E1BB18B0EC0B0265DEDFEB522C81C27508F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SoundManager/PlayMethod
struct PlayMethod_t793B6C94C53088EB672AF119140E5DA7D2EBC7C2 
{
public:
	// System.Int32 SoundManager/PlayMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMethod_t793B6C94C53088EB672AF119140E5DA7D2EBC7C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MEC.Timing/<_StartWhenDone>d__275
struct U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_StartWhenDone>d__275::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_StartWhenDone>d__275::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_StartWhenDone>d__275::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;
	// MEC.CoroutineHandle MEC.Timing/<_StartWhenDone>d__275::handle
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___handle_3;
	// System.Collections.Generic.IEnumerator`1<System.Single> MEC.Timing/<_StartWhenDone>d__275::proc
	RuntimeObject* ___proc_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_handle_3() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A, ___handle_3)); }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  get_handle_3() const { return ___handle_3; }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 * get_address_of_handle_3() { return &___handle_3; }
	inline void set_handle_3(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  value)
	{
		___handle_3 = value;
	}

	inline static int32_t get_offset_of_proc_4() { return static_cast<int32_t>(offsetof(U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A, ___proc_4)); }
	inline RuntimeObject* get_proc_4() const { return ___proc_4; }
	inline RuntimeObject** get_address_of_proc_4() { return &___proc_4; }
	inline void set_proc_4(RuntimeObject* value)
	{
		___proc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proc_4), (void*)value);
	}
};


// MEC.Timing/<_WatchCall>d__334
struct U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145  : public RuntimeObject
{
public:
	// System.Int32 MEC.Timing/<_WatchCall>d__334::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Single MEC.Timing/<_WatchCall>d__334::<>2__current
	float ___U3CU3E2__current_1;
	// MEC.Timing MEC.Timing/<_WatchCall>d__334::<>4__this
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ___U3CU3E4__this_2;
	// System.Single MEC.Timing/<_WatchCall>d__334::timeframe
	float ___timeframe_3;
	// MEC.CoroutineHandle MEC.Timing/<_WatchCall>d__334::handle
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___handle_4;
	// System.Action MEC.Timing/<_WatchCall>d__334::onDone
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onDone_5;
	// UnityEngine.GameObject MEC.Timing/<_WatchCall>d__334::gObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gObject_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___U3CU3E4__this_2)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_timeframe_3() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___timeframe_3)); }
	inline float get_timeframe_3() const { return ___timeframe_3; }
	inline float* get_address_of_timeframe_3() { return &___timeframe_3; }
	inline void set_timeframe_3(float value)
	{
		___timeframe_3 = value;
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___handle_4)); }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  get_handle_4() const { return ___handle_4; }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 * get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  value)
	{
		___handle_4 = value;
	}

	inline static int32_t get_offset_of_onDone_5() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___onDone_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onDone_5() const { return ___onDone_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onDone_5() { return &___onDone_5; }
	inline void set_onDone_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onDone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDone_5), (void*)value);
	}

	inline static int32_t get_offset_of_gObject_6() { return static_cast<int32_t>(offsetof(U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145, ___gObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gObject_6() const { return ___gObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gObject_6() { return &___gObject_6; }
	inline void set_gObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gObject_6), (void*)value);
	}
};


// strange.extensions.mediation.impl.View/BubbleType
struct BubbleType_t0FEF93D68B7BECDA9C804AB3B1408913FD321A37 
{
public:
	// System.Int32 strange.extensions.mediation.impl.View/BubbleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BubbleType_t0FEF93D68B7BECDA9C804AB3B1408913FD321A37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MiniJSON.Json/Parser/TOKEN
struct TOKEN_tDE0168D5A4886B12BC925F186400680F898C5C01 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tDE0168D5A4886B12BC925F186400680F898C5C01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.MissingReferenceException
struct MissingReferenceException_t0957F7F403A0B9249CE6AB66FAD46E626F787EE8  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// MEC.Timing/ProcessIndex
struct ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D 
{
public:
	// MEC.Segment MEC.Timing/ProcessIndex::seg
	int32_t ___seg_0;
	// System.Int32 MEC.Timing/ProcessIndex::i
	int32_t ___i_1;

public:
	inline static int32_t get_offset_of_seg_0() { return static_cast<int32_t>(offsetof(ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D, ___seg_0)); }
	inline int32_t get_seg_0() const { return ___seg_0; }
	inline int32_t* get_address_of_seg_0() { return &___seg_0; }
	inline void set_seg_0(int32_t value)
	{
		___seg_0 = value;
	}

	inline static int32_t get_offset_of_i_1() { return static_cast<int32_t>(offsetof(ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D, ___i_1)); }
	inline int32_t get_i_1() const { return ___i_1; }
	inline int32_t* get_address_of_i_1() { return &___i_1; }
	inline void set_i_1(int32_t value)
	{
		___i_1 = value;
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Collections.Generic.IEnumerator`1<System.Single>,MEC.CoroutineHandle,System.Collections.Generic.IEnumerator`1<System.Single>>
struct Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// SoundManager/SongCallBack
struct SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// antilunchbox.Singleton`1<SoundManager>
struct Singleton_1_t636D9D49A7B46947B1AE26F7DE359B036D4462DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t636D9D49A7B46947B1AE26F7DE359B036D4462DD_StaticFields
{
public:
	// T antilunchbox.Singleton`1::_mInstance
	SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * ____mInstance_4;

public:
	inline static int32_t get_offset_of__mInstance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t636D9D49A7B46947B1AE26F7DE359B036D4462DD_StaticFields, ____mInstance_4)); }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * get__mInstance_4() const { return ____mInstance_4; }
	inline SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C ** get_address_of__mInstance_4() { return &____mInstance_4; }
	inline void set__mInstance_4(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * value)
	{
		____mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mInstance_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// MEC.Timing
struct Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MEC.Timing::TimeBetweenSlowUpdateCalls
	float ___TimeBetweenSlowUpdateCalls_4;
	// MEC.DebugInfoType MEC.Timing::ProfilerDebugAmount
	int32_t ___ProfilerDebugAmount_5;
	// System.Boolean MEC.Timing::AutoTriggerManualTimeframe
	bool ___AutoTriggerManualTimeframe_6;
	// System.Int32 MEC.Timing::UpdateCoroutines
	int32_t ___UpdateCoroutines_7;
	// System.Int32 MEC.Timing::FixedUpdateCoroutines
	int32_t ___FixedUpdateCoroutines_8;
	// System.Int32 MEC.Timing::LateUpdateCoroutines
	int32_t ___LateUpdateCoroutines_9;
	// System.Int32 MEC.Timing::SlowUpdateCoroutines
	int32_t ___SlowUpdateCoroutines_10;
	// System.Int32 MEC.Timing::RealtimeUpdateCoroutines
	int32_t ___RealtimeUpdateCoroutines_11;
	// System.Int32 MEC.Timing::EditorUpdateCoroutines
	int32_t ___EditorUpdateCoroutines_12;
	// System.Int32 MEC.Timing::EditorSlowUpdateCoroutines
	int32_t ___EditorSlowUpdateCoroutines_13;
	// System.Int32 MEC.Timing::EndOfFrameCoroutines
	int32_t ___EndOfFrameCoroutines_14;
	// System.Int32 MEC.Timing::ManualTimeframeCoroutines
	int32_t ___ManualTimeframeCoroutines_15;
	// System.Single MEC.Timing::localTime
	float ___localTime_16;
	// System.Single MEC.Timing::deltaTime
	float ___deltaTime_17;
	// System.Func`2<System.Single,System.Single> MEC.Timing::SetManualTimeframeTime
	Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___SetManualTimeframeTime_18;
	// MEC.CoroutineHandle MEC.Timing::<currentCoroutine>k__BackingField
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___U3CcurrentCoroutineU3Ek__BackingField_23;
	// System.Int32 MEC.Timing::_currentUpdateFrame
	int32_t ____currentUpdateFrame_29;
	// System.Int32 MEC.Timing::_currentLateUpdateFrame
	int32_t ____currentLateUpdateFrame_30;
	// System.Int32 MEC.Timing::_currentSlowUpdateFrame
	int32_t ____currentSlowUpdateFrame_31;
	// System.Int32 MEC.Timing::_currentRealtimeUpdateFrame
	int32_t ____currentRealtimeUpdateFrame_32;
	// System.Int32 MEC.Timing::_currentEndOfFrameFrame
	int32_t ____currentEndOfFrameFrame_33;
	// System.Int32 MEC.Timing::_nextUpdateProcessSlot
	int32_t ____nextUpdateProcessSlot_34;
	// System.Int32 MEC.Timing::_nextLateUpdateProcessSlot
	int32_t ____nextLateUpdateProcessSlot_35;
	// System.Int32 MEC.Timing::_nextFixedUpdateProcessSlot
	int32_t ____nextFixedUpdateProcessSlot_36;
	// System.Int32 MEC.Timing::_nextSlowUpdateProcessSlot
	int32_t ____nextSlowUpdateProcessSlot_37;
	// System.Int32 MEC.Timing::_nextRealtimeUpdateProcessSlot
	int32_t ____nextRealtimeUpdateProcessSlot_38;
	// System.Int32 MEC.Timing::_nextEditorUpdateProcessSlot
	int32_t ____nextEditorUpdateProcessSlot_39;
	// System.Int32 MEC.Timing::_nextEditorSlowUpdateProcessSlot
	int32_t ____nextEditorSlowUpdateProcessSlot_40;
	// System.Int32 MEC.Timing::_nextEndOfFrameProcessSlot
	int32_t ____nextEndOfFrameProcessSlot_41;
	// System.Int32 MEC.Timing::_nextManualTimeframeProcessSlot
	int32_t ____nextManualTimeframeProcessSlot_42;
	// System.Int32 MEC.Timing::_lastUpdateProcessSlot
	int32_t ____lastUpdateProcessSlot_43;
	// System.Int32 MEC.Timing::_lastLateUpdateProcessSlot
	int32_t ____lastLateUpdateProcessSlot_44;
	// System.Int32 MEC.Timing::_lastFixedUpdateProcessSlot
	int32_t ____lastFixedUpdateProcessSlot_45;
	// System.Int32 MEC.Timing::_lastSlowUpdateProcessSlot
	int32_t ____lastSlowUpdateProcessSlot_46;
	// System.Int32 MEC.Timing::_lastRealtimeUpdateProcessSlot
	int32_t ____lastRealtimeUpdateProcessSlot_47;
	// System.Int32 MEC.Timing::_lastEndOfFrameProcessSlot
	int32_t ____lastEndOfFrameProcessSlot_48;
	// System.Int32 MEC.Timing::_lastManualTimeframeProcessSlot
	int32_t ____lastManualTimeframeProcessSlot_49;
	// System.Single MEC.Timing::_lastUpdateTime
	float ____lastUpdateTime_50;
	// System.Single MEC.Timing::_lastLateUpdateTime
	float ____lastLateUpdateTime_51;
	// System.Single MEC.Timing::_lastFixedUpdateTime
	float ____lastFixedUpdateTime_52;
	// System.Single MEC.Timing::_lastSlowUpdateTime
	float ____lastSlowUpdateTime_53;
	// System.Single MEC.Timing::_lastRealtimeUpdateTime
	float ____lastRealtimeUpdateTime_54;
	// System.Single MEC.Timing::_lastEndOfFrameTime
	float ____lastEndOfFrameTime_55;
	// System.Single MEC.Timing::_lastManualTimeframeTime
	float ____lastManualTimeframeTime_56;
	// System.Single MEC.Timing::_lastSlowUpdateDeltaTime
	float ____lastSlowUpdateDeltaTime_57;
	// System.Single MEC.Timing::_lastEditorUpdateDeltaTime
	float ____lastEditorUpdateDeltaTime_58;
	// System.Single MEC.Timing::_lastEditorSlowUpdateDeltaTime
	float ____lastEditorSlowUpdateDeltaTime_59;
	// System.Single MEC.Timing::_lastManualTimeframeDeltaTime
	float ____lastManualTimeframeDeltaTime_60;
	// System.UInt16 MEC.Timing::_framesSinceUpdate
	uint16_t ____framesSinceUpdate_61;
	// System.UInt16 MEC.Timing::_expansions
	uint16_t ____expansions_62;
	// System.Byte MEC.Timing::_instanceID
	uint8_t ____instanceID_63;
	// System.Boolean MEC.Timing::_EOFPumpRan
	bool ____EOFPumpRan_64;
	// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>> MEC.Timing::_waitingTriggers
	Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * ____waitingTriggers_67;
	// System.Collections.Generic.HashSet`1<MEC.CoroutineHandle> MEC.Timing::_allWaiting
	HashSet_1_tACBCFC2C11B395B11BF68EE21B995927E0859512 * ____allWaiting_68;
	// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,MEC.Timing/ProcessIndex> MEC.Timing::_handleToIndex
	Dictionary_2_tF4D7F70987404125561E6FDDE0B1DD7F143F2BB7 * ____handleToIndex_69;
	// System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle> MEC.Timing::_indexToHandle
	Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * ____indexToHandle_70;
	// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.String> MEC.Timing::_processTags
	Dictionary_2_tD08FC78F679BCC220041C25A22BD3622D933B6E7 * ____processTags_71;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>> MEC.Timing::_taggedProcesses
	Dictionary_2_t4D4F3F33B4DFA1217F335D58E359F1224C07AD22 * ____taggedProcesses_72;
	// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Int32> MEC.Timing::_processLayers
	Dictionary_2_tAAD13DE2380C73CD048F3616B2AC85A1136378F9 * ____processLayers_73;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>> MEC.Timing::_layeredProcesses
	Dictionary_2_t28F98B9784B492AA41EDD19D7F1AAF337B9C15D0 * ____layeredProcesses_74;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::UpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___UpdateProcesses_75;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::LateUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___LateUpdateProcesses_76;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::FixedUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___FixedUpdateProcesses_77;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::SlowUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___SlowUpdateProcesses_78;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::RealtimeUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___RealtimeUpdateProcesses_79;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::EditorUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___EditorUpdateProcesses_80;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::EditorSlowUpdateProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___EditorSlowUpdateProcesses_81;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::EndOfFrameProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___EndOfFrameProcesses_82;
	// System.Collections.Generic.IEnumerator`1<System.Single>[] MEC.Timing::ManualTimeframeProcesses
	IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* ___ManualTimeframeProcesses_83;
	// System.Boolean[] MEC.Timing::UpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___UpdatePaused_84;
	// System.Boolean[] MEC.Timing::LateUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___LateUpdatePaused_85;
	// System.Boolean[] MEC.Timing::FixedUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___FixedUpdatePaused_86;
	// System.Boolean[] MEC.Timing::SlowUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___SlowUpdatePaused_87;
	// System.Boolean[] MEC.Timing::RealtimeUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___RealtimeUpdatePaused_88;
	// System.Boolean[] MEC.Timing::EditorUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EditorUpdatePaused_89;
	// System.Boolean[] MEC.Timing::EditorSlowUpdatePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EditorSlowUpdatePaused_90;
	// System.Boolean[] MEC.Timing::EndOfFramePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EndOfFramePaused_91;
	// System.Boolean[] MEC.Timing::ManualTimeframePaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___ManualTimeframePaused_92;
	// System.Boolean[] MEC.Timing::UpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___UpdateHeld_93;
	// System.Boolean[] MEC.Timing::LateUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___LateUpdateHeld_94;
	// System.Boolean[] MEC.Timing::FixedUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___FixedUpdateHeld_95;
	// System.Boolean[] MEC.Timing::SlowUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___SlowUpdateHeld_96;
	// System.Boolean[] MEC.Timing::RealtimeUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___RealtimeUpdateHeld_97;
	// System.Boolean[] MEC.Timing::EditorUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EditorUpdateHeld_98;
	// System.Boolean[] MEC.Timing::EditorSlowUpdateHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EditorSlowUpdateHeld_99;
	// System.Boolean[] MEC.Timing::EndOfFrameHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EndOfFrameHeld_100;
	// System.Boolean[] MEC.Timing::ManualTimeframeHeld
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___ManualTimeframeHeld_101;
	// MEC.CoroutineHandle MEC.Timing::_eofWatcherHandle
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ____eofWatcherHandle_102;

public:
	inline static int32_t get_offset_of_TimeBetweenSlowUpdateCalls_4() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___TimeBetweenSlowUpdateCalls_4)); }
	inline float get_TimeBetweenSlowUpdateCalls_4() const { return ___TimeBetweenSlowUpdateCalls_4; }
	inline float* get_address_of_TimeBetweenSlowUpdateCalls_4() { return &___TimeBetweenSlowUpdateCalls_4; }
	inline void set_TimeBetweenSlowUpdateCalls_4(float value)
	{
		___TimeBetweenSlowUpdateCalls_4 = value;
	}

	inline static int32_t get_offset_of_ProfilerDebugAmount_5() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___ProfilerDebugAmount_5)); }
	inline int32_t get_ProfilerDebugAmount_5() const { return ___ProfilerDebugAmount_5; }
	inline int32_t* get_address_of_ProfilerDebugAmount_5() { return &___ProfilerDebugAmount_5; }
	inline void set_ProfilerDebugAmount_5(int32_t value)
	{
		___ProfilerDebugAmount_5 = value;
	}

	inline static int32_t get_offset_of_AutoTriggerManualTimeframe_6() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___AutoTriggerManualTimeframe_6)); }
	inline bool get_AutoTriggerManualTimeframe_6() const { return ___AutoTriggerManualTimeframe_6; }
	inline bool* get_address_of_AutoTriggerManualTimeframe_6() { return &___AutoTriggerManualTimeframe_6; }
	inline void set_AutoTriggerManualTimeframe_6(bool value)
	{
		___AutoTriggerManualTimeframe_6 = value;
	}

	inline static int32_t get_offset_of_UpdateCoroutines_7() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___UpdateCoroutines_7)); }
	inline int32_t get_UpdateCoroutines_7() const { return ___UpdateCoroutines_7; }
	inline int32_t* get_address_of_UpdateCoroutines_7() { return &___UpdateCoroutines_7; }
	inline void set_UpdateCoroutines_7(int32_t value)
	{
		___UpdateCoroutines_7 = value;
	}

	inline static int32_t get_offset_of_FixedUpdateCoroutines_8() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___FixedUpdateCoroutines_8)); }
	inline int32_t get_FixedUpdateCoroutines_8() const { return ___FixedUpdateCoroutines_8; }
	inline int32_t* get_address_of_FixedUpdateCoroutines_8() { return &___FixedUpdateCoroutines_8; }
	inline void set_FixedUpdateCoroutines_8(int32_t value)
	{
		___FixedUpdateCoroutines_8 = value;
	}

	inline static int32_t get_offset_of_LateUpdateCoroutines_9() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___LateUpdateCoroutines_9)); }
	inline int32_t get_LateUpdateCoroutines_9() const { return ___LateUpdateCoroutines_9; }
	inline int32_t* get_address_of_LateUpdateCoroutines_9() { return &___LateUpdateCoroutines_9; }
	inline void set_LateUpdateCoroutines_9(int32_t value)
	{
		___LateUpdateCoroutines_9 = value;
	}

	inline static int32_t get_offset_of_SlowUpdateCoroutines_10() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___SlowUpdateCoroutines_10)); }
	inline int32_t get_SlowUpdateCoroutines_10() const { return ___SlowUpdateCoroutines_10; }
	inline int32_t* get_address_of_SlowUpdateCoroutines_10() { return &___SlowUpdateCoroutines_10; }
	inline void set_SlowUpdateCoroutines_10(int32_t value)
	{
		___SlowUpdateCoroutines_10 = value;
	}

	inline static int32_t get_offset_of_RealtimeUpdateCoroutines_11() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___RealtimeUpdateCoroutines_11)); }
	inline int32_t get_RealtimeUpdateCoroutines_11() const { return ___RealtimeUpdateCoroutines_11; }
	inline int32_t* get_address_of_RealtimeUpdateCoroutines_11() { return &___RealtimeUpdateCoroutines_11; }
	inline void set_RealtimeUpdateCoroutines_11(int32_t value)
	{
		___RealtimeUpdateCoroutines_11 = value;
	}

	inline static int32_t get_offset_of_EditorUpdateCoroutines_12() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorUpdateCoroutines_12)); }
	inline int32_t get_EditorUpdateCoroutines_12() const { return ___EditorUpdateCoroutines_12; }
	inline int32_t* get_address_of_EditorUpdateCoroutines_12() { return &___EditorUpdateCoroutines_12; }
	inline void set_EditorUpdateCoroutines_12(int32_t value)
	{
		___EditorUpdateCoroutines_12 = value;
	}

	inline static int32_t get_offset_of_EditorSlowUpdateCoroutines_13() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorSlowUpdateCoroutines_13)); }
	inline int32_t get_EditorSlowUpdateCoroutines_13() const { return ___EditorSlowUpdateCoroutines_13; }
	inline int32_t* get_address_of_EditorSlowUpdateCoroutines_13() { return &___EditorSlowUpdateCoroutines_13; }
	inline void set_EditorSlowUpdateCoroutines_13(int32_t value)
	{
		___EditorSlowUpdateCoroutines_13 = value;
	}

	inline static int32_t get_offset_of_EndOfFrameCoroutines_14() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EndOfFrameCoroutines_14)); }
	inline int32_t get_EndOfFrameCoroutines_14() const { return ___EndOfFrameCoroutines_14; }
	inline int32_t* get_address_of_EndOfFrameCoroutines_14() { return &___EndOfFrameCoroutines_14; }
	inline void set_EndOfFrameCoroutines_14(int32_t value)
	{
		___EndOfFrameCoroutines_14 = value;
	}

	inline static int32_t get_offset_of_ManualTimeframeCoroutines_15() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___ManualTimeframeCoroutines_15)); }
	inline int32_t get_ManualTimeframeCoroutines_15() const { return ___ManualTimeframeCoroutines_15; }
	inline int32_t* get_address_of_ManualTimeframeCoroutines_15() { return &___ManualTimeframeCoroutines_15; }
	inline void set_ManualTimeframeCoroutines_15(int32_t value)
	{
		___ManualTimeframeCoroutines_15 = value;
	}

	inline static int32_t get_offset_of_localTime_16() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___localTime_16)); }
	inline float get_localTime_16() const { return ___localTime_16; }
	inline float* get_address_of_localTime_16() { return &___localTime_16; }
	inline void set_localTime_16(float value)
	{
		___localTime_16 = value;
	}

	inline static int32_t get_offset_of_deltaTime_17() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___deltaTime_17)); }
	inline float get_deltaTime_17() const { return ___deltaTime_17; }
	inline float* get_address_of_deltaTime_17() { return &___deltaTime_17; }
	inline void set_deltaTime_17(float value)
	{
		___deltaTime_17 = value;
	}

	inline static int32_t get_offset_of_SetManualTimeframeTime_18() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___SetManualTimeframeTime_18)); }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * get_SetManualTimeframeTime_18() const { return ___SetManualTimeframeTime_18; }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 ** get_address_of_SetManualTimeframeTime_18() { return &___SetManualTimeframeTime_18; }
	inline void set_SetManualTimeframeTime_18(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * value)
	{
		___SetManualTimeframeTime_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SetManualTimeframeTime_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCoroutineU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___U3CcurrentCoroutineU3Ek__BackingField_23)); }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  get_U3CcurrentCoroutineU3Ek__BackingField_23() const { return ___U3CcurrentCoroutineU3Ek__BackingField_23; }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 * get_address_of_U3CcurrentCoroutineU3Ek__BackingField_23() { return &___U3CcurrentCoroutineU3Ek__BackingField_23; }
	inline void set_U3CcurrentCoroutineU3Ek__BackingField_23(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  value)
	{
		___U3CcurrentCoroutineU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of__currentUpdateFrame_29() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____currentUpdateFrame_29)); }
	inline int32_t get__currentUpdateFrame_29() const { return ____currentUpdateFrame_29; }
	inline int32_t* get_address_of__currentUpdateFrame_29() { return &____currentUpdateFrame_29; }
	inline void set__currentUpdateFrame_29(int32_t value)
	{
		____currentUpdateFrame_29 = value;
	}

	inline static int32_t get_offset_of__currentLateUpdateFrame_30() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____currentLateUpdateFrame_30)); }
	inline int32_t get__currentLateUpdateFrame_30() const { return ____currentLateUpdateFrame_30; }
	inline int32_t* get_address_of__currentLateUpdateFrame_30() { return &____currentLateUpdateFrame_30; }
	inline void set__currentLateUpdateFrame_30(int32_t value)
	{
		____currentLateUpdateFrame_30 = value;
	}

	inline static int32_t get_offset_of__currentSlowUpdateFrame_31() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____currentSlowUpdateFrame_31)); }
	inline int32_t get__currentSlowUpdateFrame_31() const { return ____currentSlowUpdateFrame_31; }
	inline int32_t* get_address_of__currentSlowUpdateFrame_31() { return &____currentSlowUpdateFrame_31; }
	inline void set__currentSlowUpdateFrame_31(int32_t value)
	{
		____currentSlowUpdateFrame_31 = value;
	}

	inline static int32_t get_offset_of__currentRealtimeUpdateFrame_32() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____currentRealtimeUpdateFrame_32)); }
	inline int32_t get__currentRealtimeUpdateFrame_32() const { return ____currentRealtimeUpdateFrame_32; }
	inline int32_t* get_address_of__currentRealtimeUpdateFrame_32() { return &____currentRealtimeUpdateFrame_32; }
	inline void set__currentRealtimeUpdateFrame_32(int32_t value)
	{
		____currentRealtimeUpdateFrame_32 = value;
	}

	inline static int32_t get_offset_of__currentEndOfFrameFrame_33() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____currentEndOfFrameFrame_33)); }
	inline int32_t get__currentEndOfFrameFrame_33() const { return ____currentEndOfFrameFrame_33; }
	inline int32_t* get_address_of__currentEndOfFrameFrame_33() { return &____currentEndOfFrameFrame_33; }
	inline void set__currentEndOfFrameFrame_33(int32_t value)
	{
		____currentEndOfFrameFrame_33 = value;
	}

	inline static int32_t get_offset_of__nextUpdateProcessSlot_34() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextUpdateProcessSlot_34)); }
	inline int32_t get__nextUpdateProcessSlot_34() const { return ____nextUpdateProcessSlot_34; }
	inline int32_t* get_address_of__nextUpdateProcessSlot_34() { return &____nextUpdateProcessSlot_34; }
	inline void set__nextUpdateProcessSlot_34(int32_t value)
	{
		____nextUpdateProcessSlot_34 = value;
	}

	inline static int32_t get_offset_of__nextLateUpdateProcessSlot_35() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextLateUpdateProcessSlot_35)); }
	inline int32_t get__nextLateUpdateProcessSlot_35() const { return ____nextLateUpdateProcessSlot_35; }
	inline int32_t* get_address_of__nextLateUpdateProcessSlot_35() { return &____nextLateUpdateProcessSlot_35; }
	inline void set__nextLateUpdateProcessSlot_35(int32_t value)
	{
		____nextLateUpdateProcessSlot_35 = value;
	}

	inline static int32_t get_offset_of__nextFixedUpdateProcessSlot_36() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextFixedUpdateProcessSlot_36)); }
	inline int32_t get__nextFixedUpdateProcessSlot_36() const { return ____nextFixedUpdateProcessSlot_36; }
	inline int32_t* get_address_of__nextFixedUpdateProcessSlot_36() { return &____nextFixedUpdateProcessSlot_36; }
	inline void set__nextFixedUpdateProcessSlot_36(int32_t value)
	{
		____nextFixedUpdateProcessSlot_36 = value;
	}

	inline static int32_t get_offset_of__nextSlowUpdateProcessSlot_37() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextSlowUpdateProcessSlot_37)); }
	inline int32_t get__nextSlowUpdateProcessSlot_37() const { return ____nextSlowUpdateProcessSlot_37; }
	inline int32_t* get_address_of__nextSlowUpdateProcessSlot_37() { return &____nextSlowUpdateProcessSlot_37; }
	inline void set__nextSlowUpdateProcessSlot_37(int32_t value)
	{
		____nextSlowUpdateProcessSlot_37 = value;
	}

	inline static int32_t get_offset_of__nextRealtimeUpdateProcessSlot_38() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextRealtimeUpdateProcessSlot_38)); }
	inline int32_t get__nextRealtimeUpdateProcessSlot_38() const { return ____nextRealtimeUpdateProcessSlot_38; }
	inline int32_t* get_address_of__nextRealtimeUpdateProcessSlot_38() { return &____nextRealtimeUpdateProcessSlot_38; }
	inline void set__nextRealtimeUpdateProcessSlot_38(int32_t value)
	{
		____nextRealtimeUpdateProcessSlot_38 = value;
	}

	inline static int32_t get_offset_of__nextEditorUpdateProcessSlot_39() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextEditorUpdateProcessSlot_39)); }
	inline int32_t get__nextEditorUpdateProcessSlot_39() const { return ____nextEditorUpdateProcessSlot_39; }
	inline int32_t* get_address_of__nextEditorUpdateProcessSlot_39() { return &____nextEditorUpdateProcessSlot_39; }
	inline void set__nextEditorUpdateProcessSlot_39(int32_t value)
	{
		____nextEditorUpdateProcessSlot_39 = value;
	}

	inline static int32_t get_offset_of__nextEditorSlowUpdateProcessSlot_40() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextEditorSlowUpdateProcessSlot_40)); }
	inline int32_t get__nextEditorSlowUpdateProcessSlot_40() const { return ____nextEditorSlowUpdateProcessSlot_40; }
	inline int32_t* get_address_of__nextEditorSlowUpdateProcessSlot_40() { return &____nextEditorSlowUpdateProcessSlot_40; }
	inline void set__nextEditorSlowUpdateProcessSlot_40(int32_t value)
	{
		____nextEditorSlowUpdateProcessSlot_40 = value;
	}

	inline static int32_t get_offset_of__nextEndOfFrameProcessSlot_41() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextEndOfFrameProcessSlot_41)); }
	inline int32_t get__nextEndOfFrameProcessSlot_41() const { return ____nextEndOfFrameProcessSlot_41; }
	inline int32_t* get_address_of__nextEndOfFrameProcessSlot_41() { return &____nextEndOfFrameProcessSlot_41; }
	inline void set__nextEndOfFrameProcessSlot_41(int32_t value)
	{
		____nextEndOfFrameProcessSlot_41 = value;
	}

	inline static int32_t get_offset_of__nextManualTimeframeProcessSlot_42() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____nextManualTimeframeProcessSlot_42)); }
	inline int32_t get__nextManualTimeframeProcessSlot_42() const { return ____nextManualTimeframeProcessSlot_42; }
	inline int32_t* get_address_of__nextManualTimeframeProcessSlot_42() { return &____nextManualTimeframeProcessSlot_42; }
	inline void set__nextManualTimeframeProcessSlot_42(int32_t value)
	{
		____nextManualTimeframeProcessSlot_42 = value;
	}

	inline static int32_t get_offset_of__lastUpdateProcessSlot_43() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastUpdateProcessSlot_43)); }
	inline int32_t get__lastUpdateProcessSlot_43() const { return ____lastUpdateProcessSlot_43; }
	inline int32_t* get_address_of__lastUpdateProcessSlot_43() { return &____lastUpdateProcessSlot_43; }
	inline void set__lastUpdateProcessSlot_43(int32_t value)
	{
		____lastUpdateProcessSlot_43 = value;
	}

	inline static int32_t get_offset_of__lastLateUpdateProcessSlot_44() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastLateUpdateProcessSlot_44)); }
	inline int32_t get__lastLateUpdateProcessSlot_44() const { return ____lastLateUpdateProcessSlot_44; }
	inline int32_t* get_address_of__lastLateUpdateProcessSlot_44() { return &____lastLateUpdateProcessSlot_44; }
	inline void set__lastLateUpdateProcessSlot_44(int32_t value)
	{
		____lastLateUpdateProcessSlot_44 = value;
	}

	inline static int32_t get_offset_of__lastFixedUpdateProcessSlot_45() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastFixedUpdateProcessSlot_45)); }
	inline int32_t get__lastFixedUpdateProcessSlot_45() const { return ____lastFixedUpdateProcessSlot_45; }
	inline int32_t* get_address_of__lastFixedUpdateProcessSlot_45() { return &____lastFixedUpdateProcessSlot_45; }
	inline void set__lastFixedUpdateProcessSlot_45(int32_t value)
	{
		____lastFixedUpdateProcessSlot_45 = value;
	}

	inline static int32_t get_offset_of__lastSlowUpdateProcessSlot_46() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastSlowUpdateProcessSlot_46)); }
	inline int32_t get__lastSlowUpdateProcessSlot_46() const { return ____lastSlowUpdateProcessSlot_46; }
	inline int32_t* get_address_of__lastSlowUpdateProcessSlot_46() { return &____lastSlowUpdateProcessSlot_46; }
	inline void set__lastSlowUpdateProcessSlot_46(int32_t value)
	{
		____lastSlowUpdateProcessSlot_46 = value;
	}

	inline static int32_t get_offset_of__lastRealtimeUpdateProcessSlot_47() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastRealtimeUpdateProcessSlot_47)); }
	inline int32_t get__lastRealtimeUpdateProcessSlot_47() const { return ____lastRealtimeUpdateProcessSlot_47; }
	inline int32_t* get_address_of__lastRealtimeUpdateProcessSlot_47() { return &____lastRealtimeUpdateProcessSlot_47; }
	inline void set__lastRealtimeUpdateProcessSlot_47(int32_t value)
	{
		____lastRealtimeUpdateProcessSlot_47 = value;
	}

	inline static int32_t get_offset_of__lastEndOfFrameProcessSlot_48() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastEndOfFrameProcessSlot_48)); }
	inline int32_t get__lastEndOfFrameProcessSlot_48() const { return ____lastEndOfFrameProcessSlot_48; }
	inline int32_t* get_address_of__lastEndOfFrameProcessSlot_48() { return &____lastEndOfFrameProcessSlot_48; }
	inline void set__lastEndOfFrameProcessSlot_48(int32_t value)
	{
		____lastEndOfFrameProcessSlot_48 = value;
	}

	inline static int32_t get_offset_of__lastManualTimeframeProcessSlot_49() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastManualTimeframeProcessSlot_49)); }
	inline int32_t get__lastManualTimeframeProcessSlot_49() const { return ____lastManualTimeframeProcessSlot_49; }
	inline int32_t* get_address_of__lastManualTimeframeProcessSlot_49() { return &____lastManualTimeframeProcessSlot_49; }
	inline void set__lastManualTimeframeProcessSlot_49(int32_t value)
	{
		____lastManualTimeframeProcessSlot_49 = value;
	}

	inline static int32_t get_offset_of__lastUpdateTime_50() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastUpdateTime_50)); }
	inline float get__lastUpdateTime_50() const { return ____lastUpdateTime_50; }
	inline float* get_address_of__lastUpdateTime_50() { return &____lastUpdateTime_50; }
	inline void set__lastUpdateTime_50(float value)
	{
		____lastUpdateTime_50 = value;
	}

	inline static int32_t get_offset_of__lastLateUpdateTime_51() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastLateUpdateTime_51)); }
	inline float get__lastLateUpdateTime_51() const { return ____lastLateUpdateTime_51; }
	inline float* get_address_of__lastLateUpdateTime_51() { return &____lastLateUpdateTime_51; }
	inline void set__lastLateUpdateTime_51(float value)
	{
		____lastLateUpdateTime_51 = value;
	}

	inline static int32_t get_offset_of__lastFixedUpdateTime_52() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastFixedUpdateTime_52)); }
	inline float get__lastFixedUpdateTime_52() const { return ____lastFixedUpdateTime_52; }
	inline float* get_address_of__lastFixedUpdateTime_52() { return &____lastFixedUpdateTime_52; }
	inline void set__lastFixedUpdateTime_52(float value)
	{
		____lastFixedUpdateTime_52 = value;
	}

	inline static int32_t get_offset_of__lastSlowUpdateTime_53() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastSlowUpdateTime_53)); }
	inline float get__lastSlowUpdateTime_53() const { return ____lastSlowUpdateTime_53; }
	inline float* get_address_of__lastSlowUpdateTime_53() { return &____lastSlowUpdateTime_53; }
	inline void set__lastSlowUpdateTime_53(float value)
	{
		____lastSlowUpdateTime_53 = value;
	}

	inline static int32_t get_offset_of__lastRealtimeUpdateTime_54() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastRealtimeUpdateTime_54)); }
	inline float get__lastRealtimeUpdateTime_54() const { return ____lastRealtimeUpdateTime_54; }
	inline float* get_address_of__lastRealtimeUpdateTime_54() { return &____lastRealtimeUpdateTime_54; }
	inline void set__lastRealtimeUpdateTime_54(float value)
	{
		____lastRealtimeUpdateTime_54 = value;
	}

	inline static int32_t get_offset_of__lastEndOfFrameTime_55() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastEndOfFrameTime_55)); }
	inline float get__lastEndOfFrameTime_55() const { return ____lastEndOfFrameTime_55; }
	inline float* get_address_of__lastEndOfFrameTime_55() { return &____lastEndOfFrameTime_55; }
	inline void set__lastEndOfFrameTime_55(float value)
	{
		____lastEndOfFrameTime_55 = value;
	}

	inline static int32_t get_offset_of__lastManualTimeframeTime_56() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastManualTimeframeTime_56)); }
	inline float get__lastManualTimeframeTime_56() const { return ____lastManualTimeframeTime_56; }
	inline float* get_address_of__lastManualTimeframeTime_56() { return &____lastManualTimeframeTime_56; }
	inline void set__lastManualTimeframeTime_56(float value)
	{
		____lastManualTimeframeTime_56 = value;
	}

	inline static int32_t get_offset_of__lastSlowUpdateDeltaTime_57() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastSlowUpdateDeltaTime_57)); }
	inline float get__lastSlowUpdateDeltaTime_57() const { return ____lastSlowUpdateDeltaTime_57; }
	inline float* get_address_of__lastSlowUpdateDeltaTime_57() { return &____lastSlowUpdateDeltaTime_57; }
	inline void set__lastSlowUpdateDeltaTime_57(float value)
	{
		____lastSlowUpdateDeltaTime_57 = value;
	}

	inline static int32_t get_offset_of__lastEditorUpdateDeltaTime_58() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastEditorUpdateDeltaTime_58)); }
	inline float get__lastEditorUpdateDeltaTime_58() const { return ____lastEditorUpdateDeltaTime_58; }
	inline float* get_address_of__lastEditorUpdateDeltaTime_58() { return &____lastEditorUpdateDeltaTime_58; }
	inline void set__lastEditorUpdateDeltaTime_58(float value)
	{
		____lastEditorUpdateDeltaTime_58 = value;
	}

	inline static int32_t get_offset_of__lastEditorSlowUpdateDeltaTime_59() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastEditorSlowUpdateDeltaTime_59)); }
	inline float get__lastEditorSlowUpdateDeltaTime_59() const { return ____lastEditorSlowUpdateDeltaTime_59; }
	inline float* get_address_of__lastEditorSlowUpdateDeltaTime_59() { return &____lastEditorSlowUpdateDeltaTime_59; }
	inline void set__lastEditorSlowUpdateDeltaTime_59(float value)
	{
		____lastEditorSlowUpdateDeltaTime_59 = value;
	}

	inline static int32_t get_offset_of__lastManualTimeframeDeltaTime_60() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____lastManualTimeframeDeltaTime_60)); }
	inline float get__lastManualTimeframeDeltaTime_60() const { return ____lastManualTimeframeDeltaTime_60; }
	inline float* get_address_of__lastManualTimeframeDeltaTime_60() { return &____lastManualTimeframeDeltaTime_60; }
	inline void set__lastManualTimeframeDeltaTime_60(float value)
	{
		____lastManualTimeframeDeltaTime_60 = value;
	}

	inline static int32_t get_offset_of__framesSinceUpdate_61() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____framesSinceUpdate_61)); }
	inline uint16_t get__framesSinceUpdate_61() const { return ____framesSinceUpdate_61; }
	inline uint16_t* get_address_of__framesSinceUpdate_61() { return &____framesSinceUpdate_61; }
	inline void set__framesSinceUpdate_61(uint16_t value)
	{
		____framesSinceUpdate_61 = value;
	}

	inline static int32_t get_offset_of__expansions_62() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____expansions_62)); }
	inline uint16_t get__expansions_62() const { return ____expansions_62; }
	inline uint16_t* get_address_of__expansions_62() { return &____expansions_62; }
	inline void set__expansions_62(uint16_t value)
	{
		____expansions_62 = value;
	}

	inline static int32_t get_offset_of__instanceID_63() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____instanceID_63)); }
	inline uint8_t get__instanceID_63() const { return ____instanceID_63; }
	inline uint8_t* get_address_of__instanceID_63() { return &____instanceID_63; }
	inline void set__instanceID_63(uint8_t value)
	{
		____instanceID_63 = value;
	}

	inline static int32_t get_offset_of__EOFPumpRan_64() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____EOFPumpRan_64)); }
	inline bool get__EOFPumpRan_64() const { return ____EOFPumpRan_64; }
	inline bool* get_address_of__EOFPumpRan_64() { return &____EOFPumpRan_64; }
	inline void set__EOFPumpRan_64(bool value)
	{
		____EOFPumpRan_64 = value;
	}

	inline static int32_t get_offset_of__waitingTriggers_67() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____waitingTriggers_67)); }
	inline Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * get__waitingTriggers_67() const { return ____waitingTriggers_67; }
	inline Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA ** get_address_of__waitingTriggers_67() { return &____waitingTriggers_67; }
	inline void set__waitingTriggers_67(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * value)
	{
		____waitingTriggers_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitingTriggers_67), (void*)value);
	}

	inline static int32_t get_offset_of__allWaiting_68() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____allWaiting_68)); }
	inline HashSet_1_tACBCFC2C11B395B11BF68EE21B995927E0859512 * get__allWaiting_68() const { return ____allWaiting_68; }
	inline HashSet_1_tACBCFC2C11B395B11BF68EE21B995927E0859512 ** get_address_of__allWaiting_68() { return &____allWaiting_68; }
	inline void set__allWaiting_68(HashSet_1_tACBCFC2C11B395B11BF68EE21B995927E0859512 * value)
	{
		____allWaiting_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allWaiting_68), (void*)value);
	}

	inline static int32_t get_offset_of__handleToIndex_69() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____handleToIndex_69)); }
	inline Dictionary_2_tF4D7F70987404125561E6FDDE0B1DD7F143F2BB7 * get__handleToIndex_69() const { return ____handleToIndex_69; }
	inline Dictionary_2_tF4D7F70987404125561E6FDDE0B1DD7F143F2BB7 ** get_address_of__handleToIndex_69() { return &____handleToIndex_69; }
	inline void set__handleToIndex_69(Dictionary_2_tF4D7F70987404125561E6FDDE0B1DD7F143F2BB7 * value)
	{
		____handleToIndex_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handleToIndex_69), (void*)value);
	}

	inline static int32_t get_offset_of__indexToHandle_70() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____indexToHandle_70)); }
	inline Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * get__indexToHandle_70() const { return ____indexToHandle_70; }
	inline Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 ** get_address_of__indexToHandle_70() { return &____indexToHandle_70; }
	inline void set__indexToHandle_70(Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * value)
	{
		____indexToHandle_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexToHandle_70), (void*)value);
	}

	inline static int32_t get_offset_of__processTags_71() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____processTags_71)); }
	inline Dictionary_2_tD08FC78F679BCC220041C25A22BD3622D933B6E7 * get__processTags_71() const { return ____processTags_71; }
	inline Dictionary_2_tD08FC78F679BCC220041C25A22BD3622D933B6E7 ** get_address_of__processTags_71() { return &____processTags_71; }
	inline void set__processTags_71(Dictionary_2_tD08FC78F679BCC220041C25A22BD3622D933B6E7 * value)
	{
		____processTags_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processTags_71), (void*)value);
	}

	inline static int32_t get_offset_of__taggedProcesses_72() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____taggedProcesses_72)); }
	inline Dictionary_2_t4D4F3F33B4DFA1217F335D58E359F1224C07AD22 * get__taggedProcesses_72() const { return ____taggedProcesses_72; }
	inline Dictionary_2_t4D4F3F33B4DFA1217F335D58E359F1224C07AD22 ** get_address_of__taggedProcesses_72() { return &____taggedProcesses_72; }
	inline void set__taggedProcesses_72(Dictionary_2_t4D4F3F33B4DFA1217F335D58E359F1224C07AD22 * value)
	{
		____taggedProcesses_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____taggedProcesses_72), (void*)value);
	}

	inline static int32_t get_offset_of__processLayers_73() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____processLayers_73)); }
	inline Dictionary_2_tAAD13DE2380C73CD048F3616B2AC85A1136378F9 * get__processLayers_73() const { return ____processLayers_73; }
	inline Dictionary_2_tAAD13DE2380C73CD048F3616B2AC85A1136378F9 ** get_address_of__processLayers_73() { return &____processLayers_73; }
	inline void set__processLayers_73(Dictionary_2_tAAD13DE2380C73CD048F3616B2AC85A1136378F9 * value)
	{
		____processLayers_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processLayers_73), (void*)value);
	}

	inline static int32_t get_offset_of__layeredProcesses_74() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____layeredProcesses_74)); }
	inline Dictionary_2_t28F98B9784B492AA41EDD19D7F1AAF337B9C15D0 * get__layeredProcesses_74() const { return ____layeredProcesses_74; }
	inline Dictionary_2_t28F98B9784B492AA41EDD19D7F1AAF337B9C15D0 ** get_address_of__layeredProcesses_74() { return &____layeredProcesses_74; }
	inline void set__layeredProcesses_74(Dictionary_2_t28F98B9784B492AA41EDD19D7F1AAF337B9C15D0 * value)
	{
		____layeredProcesses_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layeredProcesses_74), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateProcesses_75() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___UpdateProcesses_75)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_UpdateProcesses_75() const { return ___UpdateProcesses_75; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_UpdateProcesses_75() { return &___UpdateProcesses_75; }
	inline void set_UpdateProcesses_75(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___UpdateProcesses_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateProcesses_75), (void*)value);
	}

	inline static int32_t get_offset_of_LateUpdateProcesses_76() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___LateUpdateProcesses_76)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_LateUpdateProcesses_76() const { return ___LateUpdateProcesses_76; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_LateUpdateProcesses_76() { return &___LateUpdateProcesses_76; }
	inline void set_LateUpdateProcesses_76(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___LateUpdateProcesses_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LateUpdateProcesses_76), (void*)value);
	}

	inline static int32_t get_offset_of_FixedUpdateProcesses_77() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___FixedUpdateProcesses_77)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_FixedUpdateProcesses_77() const { return ___FixedUpdateProcesses_77; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_FixedUpdateProcesses_77() { return &___FixedUpdateProcesses_77; }
	inline void set_FixedUpdateProcesses_77(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___FixedUpdateProcesses_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedUpdateProcesses_77), (void*)value);
	}

	inline static int32_t get_offset_of_SlowUpdateProcesses_78() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___SlowUpdateProcesses_78)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_SlowUpdateProcesses_78() const { return ___SlowUpdateProcesses_78; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_SlowUpdateProcesses_78() { return &___SlowUpdateProcesses_78; }
	inline void set_SlowUpdateProcesses_78(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___SlowUpdateProcesses_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowUpdateProcesses_78), (void*)value);
	}

	inline static int32_t get_offset_of_RealtimeUpdateProcesses_79() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___RealtimeUpdateProcesses_79)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_RealtimeUpdateProcesses_79() const { return ___RealtimeUpdateProcesses_79; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_RealtimeUpdateProcesses_79() { return &___RealtimeUpdateProcesses_79; }
	inline void set_RealtimeUpdateProcesses_79(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___RealtimeUpdateProcesses_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RealtimeUpdateProcesses_79), (void*)value);
	}

	inline static int32_t get_offset_of_EditorUpdateProcesses_80() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorUpdateProcesses_80)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_EditorUpdateProcesses_80() const { return ___EditorUpdateProcesses_80; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_EditorUpdateProcesses_80() { return &___EditorUpdateProcesses_80; }
	inline void set_EditorUpdateProcesses_80(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___EditorUpdateProcesses_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorUpdateProcesses_80), (void*)value);
	}

	inline static int32_t get_offset_of_EditorSlowUpdateProcesses_81() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorSlowUpdateProcesses_81)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_EditorSlowUpdateProcesses_81() const { return ___EditorSlowUpdateProcesses_81; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_EditorSlowUpdateProcesses_81() { return &___EditorSlowUpdateProcesses_81; }
	inline void set_EditorSlowUpdateProcesses_81(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___EditorSlowUpdateProcesses_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorSlowUpdateProcesses_81), (void*)value);
	}

	inline static int32_t get_offset_of_EndOfFrameProcesses_82() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EndOfFrameProcesses_82)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_EndOfFrameProcesses_82() const { return ___EndOfFrameProcesses_82; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_EndOfFrameProcesses_82() { return &___EndOfFrameProcesses_82; }
	inline void set_EndOfFrameProcesses_82(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___EndOfFrameProcesses_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndOfFrameProcesses_82), (void*)value);
	}

	inline static int32_t get_offset_of_ManualTimeframeProcesses_83() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___ManualTimeframeProcesses_83)); }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* get_ManualTimeframeProcesses_83() const { return ___ManualTimeframeProcesses_83; }
	inline IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8** get_address_of_ManualTimeframeProcesses_83() { return &___ManualTimeframeProcesses_83; }
	inline void set_ManualTimeframeProcesses_83(IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* value)
	{
		___ManualTimeframeProcesses_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManualTimeframeProcesses_83), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePaused_84() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___UpdatePaused_84)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_UpdatePaused_84() const { return ___UpdatePaused_84; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_UpdatePaused_84() { return &___UpdatePaused_84; }
	inline void set_UpdatePaused_84(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___UpdatePaused_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatePaused_84), (void*)value);
	}

	inline static int32_t get_offset_of_LateUpdatePaused_85() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___LateUpdatePaused_85)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_LateUpdatePaused_85() const { return ___LateUpdatePaused_85; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_LateUpdatePaused_85() { return &___LateUpdatePaused_85; }
	inline void set_LateUpdatePaused_85(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___LateUpdatePaused_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LateUpdatePaused_85), (void*)value);
	}

	inline static int32_t get_offset_of_FixedUpdatePaused_86() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___FixedUpdatePaused_86)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_FixedUpdatePaused_86() const { return ___FixedUpdatePaused_86; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_FixedUpdatePaused_86() { return &___FixedUpdatePaused_86; }
	inline void set_FixedUpdatePaused_86(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___FixedUpdatePaused_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedUpdatePaused_86), (void*)value);
	}

	inline static int32_t get_offset_of_SlowUpdatePaused_87() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___SlowUpdatePaused_87)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_SlowUpdatePaused_87() const { return ___SlowUpdatePaused_87; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_SlowUpdatePaused_87() { return &___SlowUpdatePaused_87; }
	inline void set_SlowUpdatePaused_87(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___SlowUpdatePaused_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowUpdatePaused_87), (void*)value);
	}

	inline static int32_t get_offset_of_RealtimeUpdatePaused_88() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___RealtimeUpdatePaused_88)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_RealtimeUpdatePaused_88() const { return ___RealtimeUpdatePaused_88; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_RealtimeUpdatePaused_88() { return &___RealtimeUpdatePaused_88; }
	inline void set_RealtimeUpdatePaused_88(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___RealtimeUpdatePaused_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RealtimeUpdatePaused_88), (void*)value);
	}

	inline static int32_t get_offset_of_EditorUpdatePaused_89() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorUpdatePaused_89)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EditorUpdatePaused_89() const { return ___EditorUpdatePaused_89; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EditorUpdatePaused_89() { return &___EditorUpdatePaused_89; }
	inline void set_EditorUpdatePaused_89(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EditorUpdatePaused_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorUpdatePaused_89), (void*)value);
	}

	inline static int32_t get_offset_of_EditorSlowUpdatePaused_90() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorSlowUpdatePaused_90)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EditorSlowUpdatePaused_90() const { return ___EditorSlowUpdatePaused_90; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EditorSlowUpdatePaused_90() { return &___EditorSlowUpdatePaused_90; }
	inline void set_EditorSlowUpdatePaused_90(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EditorSlowUpdatePaused_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorSlowUpdatePaused_90), (void*)value);
	}

	inline static int32_t get_offset_of_EndOfFramePaused_91() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EndOfFramePaused_91)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EndOfFramePaused_91() const { return ___EndOfFramePaused_91; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EndOfFramePaused_91() { return &___EndOfFramePaused_91; }
	inline void set_EndOfFramePaused_91(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EndOfFramePaused_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndOfFramePaused_91), (void*)value);
	}

	inline static int32_t get_offset_of_ManualTimeframePaused_92() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___ManualTimeframePaused_92)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_ManualTimeframePaused_92() const { return ___ManualTimeframePaused_92; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_ManualTimeframePaused_92() { return &___ManualTimeframePaused_92; }
	inline void set_ManualTimeframePaused_92(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___ManualTimeframePaused_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManualTimeframePaused_92), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHeld_93() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___UpdateHeld_93)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_UpdateHeld_93() const { return ___UpdateHeld_93; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_UpdateHeld_93() { return &___UpdateHeld_93; }
	inline void set_UpdateHeld_93(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___UpdateHeld_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateHeld_93), (void*)value);
	}

	inline static int32_t get_offset_of_LateUpdateHeld_94() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___LateUpdateHeld_94)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_LateUpdateHeld_94() const { return ___LateUpdateHeld_94; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_LateUpdateHeld_94() { return &___LateUpdateHeld_94; }
	inline void set_LateUpdateHeld_94(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___LateUpdateHeld_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LateUpdateHeld_94), (void*)value);
	}

	inline static int32_t get_offset_of_FixedUpdateHeld_95() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___FixedUpdateHeld_95)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_FixedUpdateHeld_95() const { return ___FixedUpdateHeld_95; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_FixedUpdateHeld_95() { return &___FixedUpdateHeld_95; }
	inline void set_FixedUpdateHeld_95(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___FixedUpdateHeld_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedUpdateHeld_95), (void*)value);
	}

	inline static int32_t get_offset_of_SlowUpdateHeld_96() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___SlowUpdateHeld_96)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_SlowUpdateHeld_96() const { return ___SlowUpdateHeld_96; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_SlowUpdateHeld_96() { return &___SlowUpdateHeld_96; }
	inline void set_SlowUpdateHeld_96(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___SlowUpdateHeld_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowUpdateHeld_96), (void*)value);
	}

	inline static int32_t get_offset_of_RealtimeUpdateHeld_97() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___RealtimeUpdateHeld_97)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_RealtimeUpdateHeld_97() const { return ___RealtimeUpdateHeld_97; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_RealtimeUpdateHeld_97() { return &___RealtimeUpdateHeld_97; }
	inline void set_RealtimeUpdateHeld_97(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___RealtimeUpdateHeld_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RealtimeUpdateHeld_97), (void*)value);
	}

	inline static int32_t get_offset_of_EditorUpdateHeld_98() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorUpdateHeld_98)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EditorUpdateHeld_98() const { return ___EditorUpdateHeld_98; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EditorUpdateHeld_98() { return &___EditorUpdateHeld_98; }
	inline void set_EditorUpdateHeld_98(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EditorUpdateHeld_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorUpdateHeld_98), (void*)value);
	}

	inline static int32_t get_offset_of_EditorSlowUpdateHeld_99() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EditorSlowUpdateHeld_99)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EditorSlowUpdateHeld_99() const { return ___EditorSlowUpdateHeld_99; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EditorSlowUpdateHeld_99() { return &___EditorSlowUpdateHeld_99; }
	inline void set_EditorSlowUpdateHeld_99(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EditorSlowUpdateHeld_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EditorSlowUpdateHeld_99), (void*)value);
	}

	inline static int32_t get_offset_of_EndOfFrameHeld_100() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___EndOfFrameHeld_100)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EndOfFrameHeld_100() const { return ___EndOfFrameHeld_100; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EndOfFrameHeld_100() { return &___EndOfFrameHeld_100; }
	inline void set_EndOfFrameHeld_100(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EndOfFrameHeld_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndOfFrameHeld_100), (void*)value);
	}

	inline static int32_t get_offset_of_ManualTimeframeHeld_101() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ___ManualTimeframeHeld_101)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_ManualTimeframeHeld_101() const { return ___ManualTimeframeHeld_101; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_ManualTimeframeHeld_101() { return &___ManualTimeframeHeld_101; }
	inline void set_ManualTimeframeHeld_101(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___ManualTimeframeHeld_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManualTimeframeHeld_101), (void*)value);
	}

	inline static int32_t get_offset_of__eofWatcherHandle_102() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1, ____eofWatcherHandle_102)); }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  get__eofWatcherHandle_102() const { return ____eofWatcherHandle_102; }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 * get_address_of__eofWatcherHandle_102() { return &____eofWatcherHandle_102; }
	inline void set__eofWatcherHandle_102(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  value)
	{
		____eofWatcherHandle_102 = value;
	}
};

struct Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields
{
public:
	// System.Func`3<System.Collections.Generic.IEnumerator`1<System.Single>,MEC.CoroutineHandle,System.Collections.Generic.IEnumerator`1<System.Single>> MEC.Timing::ReplacementFunction
	Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * ___ReplacementFunction_19;
	// System.Action MEC.Timing::OnPreExecute
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPreExecute_20;
	// System.Threading.Thread MEC.Timing::<MainThread>k__BackingField
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___U3CMainThreadU3Ek__BackingField_22;
	// System.Object MEC.Timing::_tmpRef
	RuntimeObject * ____tmpRef_24;
	// System.Int32 MEC.Timing::_tmpInt
	int32_t ____tmpInt_25;
	// System.Boolean MEC.Timing::_tmpBool
	bool ____tmpBool_26;
	// MEC.Segment MEC.Timing::_tmpSegment
	int32_t ____tmpSegment_27;
	// MEC.CoroutineHandle MEC.Timing::_tmpHandle
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ____tmpHandle_28;
	// System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>> MEC.Timing::Links
	Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * ___Links_65;
	// UnityEngine.WaitForEndOfFrame MEC.Timing::EofWaitObject
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ___EofWaitObject_66;
	// MEC.Timing[] MEC.Timing::ActiveInstances
	TimingU5BU5D_tE34E42498A1188497D0934C9337FCB890E9E9D10* ___ActiveInstances_108;
	// MEC.Timing MEC.Timing::_instance
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * ____instance_109;

public:
	inline static int32_t get_offset_of_ReplacementFunction_19() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___ReplacementFunction_19)); }
	inline Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * get_ReplacementFunction_19() const { return ___ReplacementFunction_19; }
	inline Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 ** get_address_of_ReplacementFunction_19() { return &___ReplacementFunction_19; }
	inline void set_ReplacementFunction_19(Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * value)
	{
		___ReplacementFunction_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReplacementFunction_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreExecute_20() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___OnPreExecute_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPreExecute_20() const { return ___OnPreExecute_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPreExecute_20() { return &___OnPreExecute_20; }
	inline void set_OnPreExecute_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPreExecute_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreExecute_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMainThreadU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___U3CMainThreadU3Ek__BackingField_22)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_U3CMainThreadU3Ek__BackingField_22() const { return ___U3CMainThreadU3Ek__BackingField_22; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_U3CMainThreadU3Ek__BackingField_22() { return &___U3CMainThreadU3Ek__BackingField_22; }
	inline void set_U3CMainThreadU3Ek__BackingField_22(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___U3CMainThreadU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMainThreadU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of__tmpRef_24() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____tmpRef_24)); }
	inline RuntimeObject * get__tmpRef_24() const { return ____tmpRef_24; }
	inline RuntimeObject ** get_address_of__tmpRef_24() { return &____tmpRef_24; }
	inline void set__tmpRef_24(RuntimeObject * value)
	{
		____tmpRef_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tmpRef_24), (void*)value);
	}

	inline static int32_t get_offset_of__tmpInt_25() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____tmpInt_25)); }
	inline int32_t get__tmpInt_25() const { return ____tmpInt_25; }
	inline int32_t* get_address_of__tmpInt_25() { return &____tmpInt_25; }
	inline void set__tmpInt_25(int32_t value)
	{
		____tmpInt_25 = value;
	}

	inline static int32_t get_offset_of__tmpBool_26() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____tmpBool_26)); }
	inline bool get__tmpBool_26() const { return ____tmpBool_26; }
	inline bool* get_address_of__tmpBool_26() { return &____tmpBool_26; }
	inline void set__tmpBool_26(bool value)
	{
		____tmpBool_26 = value;
	}

	inline static int32_t get_offset_of__tmpSegment_27() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____tmpSegment_27)); }
	inline int32_t get__tmpSegment_27() const { return ____tmpSegment_27; }
	inline int32_t* get_address_of__tmpSegment_27() { return &____tmpSegment_27; }
	inline void set__tmpSegment_27(int32_t value)
	{
		____tmpSegment_27 = value;
	}

	inline static int32_t get_offset_of__tmpHandle_28() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____tmpHandle_28)); }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  get__tmpHandle_28() const { return ____tmpHandle_28; }
	inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 * get_address_of__tmpHandle_28() { return &____tmpHandle_28; }
	inline void set__tmpHandle_28(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  value)
	{
		____tmpHandle_28 = value;
	}

	inline static int32_t get_offset_of_Links_65() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___Links_65)); }
	inline Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * get_Links_65() const { return ___Links_65; }
	inline Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA ** get_address_of_Links_65() { return &___Links_65; }
	inline void set_Links_65(Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * value)
	{
		___Links_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Links_65), (void*)value);
	}

	inline static int32_t get_offset_of_EofWaitObject_66() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___EofWaitObject_66)); }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * get_EofWaitObject_66() const { return ___EofWaitObject_66; }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 ** get_address_of_EofWaitObject_66() { return &___EofWaitObject_66; }
	inline void set_EofWaitObject_66(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * value)
	{
		___EofWaitObject_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EofWaitObject_66), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveInstances_108() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ___ActiveInstances_108)); }
	inline TimingU5BU5D_tE34E42498A1188497D0934C9337FCB890E9E9D10* get_ActiveInstances_108() const { return ___ActiveInstances_108; }
	inline TimingU5BU5D_tE34E42498A1188497D0934C9337FCB890E9E9D10** get_address_of_ActiveInstances_108() { return &___ActiveInstances_108; }
	inline void set_ActiveInstances_108(TimingU5BU5D_tE34E42498A1188497D0934C9337FCB890E9E9D10* value)
	{
		___ActiveInstances_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveInstances_108), (void*)value);
	}

	inline static int32_t get_offset_of__instance_109() { return static_cast<int32_t>(offsetof(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields, ____instance_109)); }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * get__instance_109() const { return ____instance_109; }
	inline Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 ** get_address_of__instance_109() { return &____instance_109; }
	inline void set__instance_109(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * value)
	{
		____instance_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_109), (void*)value);
	}
};


// SoundManager
struct SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C  : public Singleton_1_t636D9D49A7B46947B1AE26F7DE359B036D4462DD
{
public:
	// System.Boolean SoundManager::_viewAll
	bool ____viewAll_8;
	// System.Collections.Hashtable SoundManager::songStatus
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___songStatus_9;
	// System.Boolean SoundManager::helpOn
	bool ___helpOn_10;
	// System.Boolean SoundManager::showInfo
	bool ___showInfo_11;
	// System.Boolean SoundManager::showDev
	bool ___showDev_12;
	// System.Boolean SoundManager::showList
	bool ___showList_13;
	// System.Boolean SoundManager::showAdd
	bool ___showAdd_14;
	// System.Boolean SoundManager::showSFX
	bool ___showSFX_15;
	// System.Collections.Generic.List`1<System.Boolean> SoundManager::showSFXDetails
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___showSFXDetails_16;
	// System.Int32 SoundManager::groupAddIndex
	int32_t ___groupAddIndex_17;
	// System.Int32 SoundManager::autoPrepoolAmount
	int32_t ___autoPrepoolAmount_18;
	// System.Single SoundManager::autoBaseVolume
	float ___autoBaseVolume_19;
	// System.Single SoundManager::autoVolumeVariation
	float ___autoVolumeVariation_20;
	// System.Single SoundManager::autoPitchVariation
	float ___autoPitchVariation_21;
	// System.Boolean SoundManager::showAsGrouped
	bool ___showAsGrouped_22;
	// System.Collections.Generic.List`1<SoundConnection> SoundManager::soundConnections
	List_1_t9CDE5940C5A866335368E84D8EEBDCD97A7A9D6B * ___soundConnections_23;
	// UnityEngine.AudioSource[] SoundManager::audios
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___audios_24;
	// System.Boolean[] SoundManager::audiosPaused
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___audiosPaused_25;
	// System.String SoundManager::currentLevel
	String_t* ___currentLevel_26;
	// SoundConnection SoundManager::currentSoundConnection
	SoundConnection_t46E681E7341D873B21B1BD33995007C347CD8AAE * ___currentSoundConnection_27;
	// UnityEngine.AudioSource SoundManager::currentSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___currentSource_28;
	// System.Single SoundManager::crossDuration
	float ___crossDuration_29;
	// System.Single SoundManager::modifiedCrossDuration
	float ___modifiedCrossDuration_30;
	// System.Boolean SoundManager::showDebug
	bool ___showDebug_31;
	// System.Boolean SoundManager::offTheBGM
	bool ___offTheBGM_32;
	// System.Boolean SoundManager::ignoreCrossDuration
	bool ___ignoreCrossDuration_33;
	// System.Int32 SoundManager::currentPlaying
	int32_t ___currentPlaying_34;
	// System.Boolean SoundManager::silentLevel
	bool ___silentLevel_35;
	// System.Boolean SoundManager::isPaused
	bool ___isPaused_36;
	// System.Boolean SoundManager::skipSongs
	bool ___skipSongs_37;
	// System.Int32 SoundManager::skipAmount
	int32_t ___skipAmount_38;
	// System.Boolean[] SoundManager::inCrossing
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___inCrossing_39;
	// System.Boolean[] SoundManager::outCrossing
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___outCrossing_40;
	// System.Boolean SoundManager::movingOnFromSong
	bool ___movingOnFromSong_41;
	// System.Single SoundManager::lastLevelLoad
	float ___lastLevelLoad_42;
	// SoundManager/SongCallBack SoundManager::OnSongEnd
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___OnSongEnd_44;
	// SoundManager/SongCallBack SoundManager::OnSongBegin
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___OnSongBegin_45;
	// SoundManager/SongCallBack SoundManager::OnCrossOutBegin
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___OnCrossOutBegin_46;
	// SoundManager/SongCallBack SoundManager::OnCrossInBegin
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___OnCrossInBegin_47;
	// SoundManager/SongCallBack SoundManager::InternalCallback
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___InternalCallback_48;
	// System.Int32 SoundManager::currentSongIndex
	int32_t ___currentSongIndex_49;
	// System.Boolean SoundManager::ignoreFromLosingFocus
	bool ___ignoreFromLosingFocus_50;
	// System.Boolean SoundManager::ignoreLevelLoad
	bool ___ignoreLevelLoad_51;
	// System.Single SoundManager::_maxMusicVolume
	float ____maxMusicVolume_52;
	// System.Single SoundManager::_maxVolume
	float ____maxVolume_53;
	// System.Boolean SoundManager::_mutedMusic
	bool ____mutedMusic_54;
	// System.String SoundManager::resourcesPath
	String_t* ___resourcesPath_55;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SoundManager::storedSFXs
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___storedSFXs_56;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SoundManager::unOwnedSFXObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___unOwnedSFXObjects_57;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SoundManager::cappedSFXObjects
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___cappedSFXObjects_58;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,System.Single> SoundManager::delayedAudioSources
	Dictionary_2_t83F4FFD537394FE71A872D41344485D7C48A0081 * ___delayedAudioSources_59;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSource,SoundManager/SongCallBack> SoundManager::runOnEndFunctions
	Dictionary_2_tFFC47B14D97EEFF39F951FAFBF5418C816C5CDE4 * ___runOnEndFunctions_60;
	// UnityEngine.AudioSource SoundManager::duckSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___duckSource_61;
	// SoundManager/SongCallBack SoundManager::duckFunction
	SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * ___duckFunction_62;
	// System.Boolean SoundManager::isDucking
	bool ___isDucking_63;
	// System.Int32 SoundManager::duckNumber
	int32_t ___duckNumber_64;
	// System.Single SoundManager::preDuckVolume
	float ___preDuckVolume_65;
	// System.Single SoundManager::preDuckVolumeMusic
	float ___preDuckVolumeMusic_66;
	// System.Single SoundManager::preDuckVolumeSFX
	float ___preDuckVolumeSFX_67;
	// System.Single SoundManager::preDuckPitch
	float ___preDuckPitch_68;
	// System.Single SoundManager::preDuckPitchMusic
	float ___preDuckPitchMusic_69;
	// System.Single SoundManager::preDuckPitchSFX
	float ___preDuckPitchSFX_70;
	// System.Collections.Generic.List`1<SFXGroup> SoundManager::sfxGroups
	List_1_t26BEFA4C1DF646C11EF2BCFAB008BD9BE730DD0F * ___sfxGroups_73;
	// System.Collections.Generic.List`1<System.String> SoundManager::clipToGroupKeys
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___clipToGroupKeys_74;
	// System.Collections.Generic.List`1<System.String> SoundManager::clipToGroupValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___clipToGroupValues_75;
	// System.Collections.Generic.Dictionary`2<System.String,SFXGroup> SoundManager::groups
	Dictionary_2_t9F1B0D86EC74A838B805C454BC978D39B10736BF * ___groups_76;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SoundManager::clipsInGroups
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___clipsInGroups_77;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> SoundManager::allClips
	Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * ___allClips_78;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SoundManager::prepools
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___prepools_79;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> SoundManager::baseVolumes
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * ___baseVolumes_80;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> SoundManager::volumeVariations
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * ___volumeVariations_81;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> SoundManager::pitchVariations
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * ___pitchVariations_82;
	// System.Boolean SoundManager::offTheSFX
	bool ___offTheSFX_83;
	// System.Int32 SoundManager::capAmount
	int32_t ___capAmount_84;
	// System.Single SoundManager::_volumeSFX
	float ____volumeSFX_85;
	// System.Single SoundManager::_pitchSFX
	float ____pitchSFX_86;
	// System.Single SoundManager::_maxSFXVolume
	float ____maxSFXVolume_87;
	// System.Boolean SoundManager::_mutedSFX
	bool ____mutedSFX_88;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioClip,SFXPoolInfo> SoundManager::ownedPools
	Dictionary_2_tD2CF827E99853B263385DF85AB4994C0444E52B8 * ___ownedPools_89;
	// System.Collections.Generic.List`1<System.Int32> SoundManager::sfxPrePoolAmounts
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___sfxPrePoolAmounts_90;
	// System.Collections.Generic.List`1<System.Single> SoundManager::sfxBaseVolumes
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___sfxBaseVolumes_91;
	// System.Collections.Generic.List`1<System.Single> SoundManager::sfxVolumeVariations
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___sfxVolumeVariations_92;
	// System.Collections.Generic.List`1<System.Single> SoundManager::sfxPitchVariations
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___sfxPitchVariations_93;
	// System.Single SoundManager::SFXObjectLifetime
	float ___SFXObjectLifetime_94;
	// System.Collections.Generic.List`1<System.String> SoundManager::currentPockets
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___currentPockets_95;
	// System.Single SoundManager::defaultSFXSpatialBlend
	float ___defaultSFXSpatialBlend_96;

public:
	inline static int32_t get_offset_of__viewAll_8() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____viewAll_8)); }
	inline bool get__viewAll_8() const { return ____viewAll_8; }
	inline bool* get_address_of__viewAll_8() { return &____viewAll_8; }
	inline void set__viewAll_8(bool value)
	{
		____viewAll_8 = value;
	}

	inline static int32_t get_offset_of_songStatus_9() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___songStatus_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_songStatus_9() const { return ___songStatus_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_songStatus_9() { return &___songStatus_9; }
	inline void set_songStatus_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___songStatus_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___songStatus_9), (void*)value);
	}

	inline static int32_t get_offset_of_helpOn_10() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___helpOn_10)); }
	inline bool get_helpOn_10() const { return ___helpOn_10; }
	inline bool* get_address_of_helpOn_10() { return &___helpOn_10; }
	inline void set_helpOn_10(bool value)
	{
		___helpOn_10 = value;
	}

	inline static int32_t get_offset_of_showInfo_11() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showInfo_11)); }
	inline bool get_showInfo_11() const { return ___showInfo_11; }
	inline bool* get_address_of_showInfo_11() { return &___showInfo_11; }
	inline void set_showInfo_11(bool value)
	{
		___showInfo_11 = value;
	}

	inline static int32_t get_offset_of_showDev_12() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showDev_12)); }
	inline bool get_showDev_12() const { return ___showDev_12; }
	inline bool* get_address_of_showDev_12() { return &___showDev_12; }
	inline void set_showDev_12(bool value)
	{
		___showDev_12 = value;
	}

	inline static int32_t get_offset_of_showList_13() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showList_13)); }
	inline bool get_showList_13() const { return ___showList_13; }
	inline bool* get_address_of_showList_13() { return &___showList_13; }
	inline void set_showList_13(bool value)
	{
		___showList_13 = value;
	}

	inline static int32_t get_offset_of_showAdd_14() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showAdd_14)); }
	inline bool get_showAdd_14() const { return ___showAdd_14; }
	inline bool* get_address_of_showAdd_14() { return &___showAdd_14; }
	inline void set_showAdd_14(bool value)
	{
		___showAdd_14 = value;
	}

	inline static int32_t get_offset_of_showSFX_15() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showSFX_15)); }
	inline bool get_showSFX_15() const { return ___showSFX_15; }
	inline bool* get_address_of_showSFX_15() { return &___showSFX_15; }
	inline void set_showSFX_15(bool value)
	{
		___showSFX_15 = value;
	}

	inline static int32_t get_offset_of_showSFXDetails_16() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showSFXDetails_16)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_showSFXDetails_16() const { return ___showSFXDetails_16; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_showSFXDetails_16() { return &___showSFXDetails_16; }
	inline void set_showSFXDetails_16(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___showSFXDetails_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showSFXDetails_16), (void*)value);
	}

	inline static int32_t get_offset_of_groupAddIndex_17() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___groupAddIndex_17)); }
	inline int32_t get_groupAddIndex_17() const { return ___groupAddIndex_17; }
	inline int32_t* get_address_of_groupAddIndex_17() { return &___groupAddIndex_17; }
	inline void set_groupAddIndex_17(int32_t value)
	{
		___groupAddIndex_17 = value;
	}

	inline static int32_t get_offset_of_autoPrepoolAmount_18() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___autoPrepoolAmount_18)); }
	inline int32_t get_autoPrepoolAmount_18() const { return ___autoPrepoolAmount_18; }
	inline int32_t* get_address_of_autoPrepoolAmount_18() { return &___autoPrepoolAmount_18; }
	inline void set_autoPrepoolAmount_18(int32_t value)
	{
		___autoPrepoolAmount_18 = value;
	}

	inline static int32_t get_offset_of_autoBaseVolume_19() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___autoBaseVolume_19)); }
	inline float get_autoBaseVolume_19() const { return ___autoBaseVolume_19; }
	inline float* get_address_of_autoBaseVolume_19() { return &___autoBaseVolume_19; }
	inline void set_autoBaseVolume_19(float value)
	{
		___autoBaseVolume_19 = value;
	}

	inline static int32_t get_offset_of_autoVolumeVariation_20() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___autoVolumeVariation_20)); }
	inline float get_autoVolumeVariation_20() const { return ___autoVolumeVariation_20; }
	inline float* get_address_of_autoVolumeVariation_20() { return &___autoVolumeVariation_20; }
	inline void set_autoVolumeVariation_20(float value)
	{
		___autoVolumeVariation_20 = value;
	}

	inline static int32_t get_offset_of_autoPitchVariation_21() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___autoPitchVariation_21)); }
	inline float get_autoPitchVariation_21() const { return ___autoPitchVariation_21; }
	inline float* get_address_of_autoPitchVariation_21() { return &___autoPitchVariation_21; }
	inline void set_autoPitchVariation_21(float value)
	{
		___autoPitchVariation_21 = value;
	}

	inline static int32_t get_offset_of_showAsGrouped_22() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showAsGrouped_22)); }
	inline bool get_showAsGrouped_22() const { return ___showAsGrouped_22; }
	inline bool* get_address_of_showAsGrouped_22() { return &___showAsGrouped_22; }
	inline void set_showAsGrouped_22(bool value)
	{
		___showAsGrouped_22 = value;
	}

	inline static int32_t get_offset_of_soundConnections_23() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___soundConnections_23)); }
	inline List_1_t9CDE5940C5A866335368E84D8EEBDCD97A7A9D6B * get_soundConnections_23() const { return ___soundConnections_23; }
	inline List_1_t9CDE5940C5A866335368E84D8EEBDCD97A7A9D6B ** get_address_of_soundConnections_23() { return &___soundConnections_23; }
	inline void set_soundConnections_23(List_1_t9CDE5940C5A866335368E84D8EEBDCD97A7A9D6B * value)
	{
		___soundConnections_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundConnections_23), (void*)value);
	}

	inline static int32_t get_offset_of_audios_24() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___audios_24)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_audios_24() const { return ___audios_24; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_audios_24() { return &___audios_24; }
	inline void set_audios_24(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___audios_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audios_24), (void*)value);
	}

	inline static int32_t get_offset_of_audiosPaused_25() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___audiosPaused_25)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_audiosPaused_25() const { return ___audiosPaused_25; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_audiosPaused_25() { return &___audiosPaused_25; }
	inline void set_audiosPaused_25(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___audiosPaused_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiosPaused_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_26() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentLevel_26)); }
	inline String_t* get_currentLevel_26() const { return ___currentLevel_26; }
	inline String_t** get_address_of_currentLevel_26() { return &___currentLevel_26; }
	inline void set_currentLevel_26(String_t* value)
	{
		___currentLevel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLevel_26), (void*)value);
	}

	inline static int32_t get_offset_of_currentSoundConnection_27() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentSoundConnection_27)); }
	inline SoundConnection_t46E681E7341D873B21B1BD33995007C347CD8AAE * get_currentSoundConnection_27() const { return ___currentSoundConnection_27; }
	inline SoundConnection_t46E681E7341D873B21B1BD33995007C347CD8AAE ** get_address_of_currentSoundConnection_27() { return &___currentSoundConnection_27; }
	inline void set_currentSoundConnection_27(SoundConnection_t46E681E7341D873B21B1BD33995007C347CD8AAE * value)
	{
		___currentSoundConnection_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSoundConnection_27), (void*)value);
	}

	inline static int32_t get_offset_of_currentSource_28() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentSource_28)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_currentSource_28() const { return ___currentSource_28; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_currentSource_28() { return &___currentSource_28; }
	inline void set_currentSource_28(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___currentSource_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSource_28), (void*)value);
	}

	inline static int32_t get_offset_of_crossDuration_29() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___crossDuration_29)); }
	inline float get_crossDuration_29() const { return ___crossDuration_29; }
	inline float* get_address_of_crossDuration_29() { return &___crossDuration_29; }
	inline void set_crossDuration_29(float value)
	{
		___crossDuration_29 = value;
	}

	inline static int32_t get_offset_of_modifiedCrossDuration_30() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___modifiedCrossDuration_30)); }
	inline float get_modifiedCrossDuration_30() const { return ___modifiedCrossDuration_30; }
	inline float* get_address_of_modifiedCrossDuration_30() { return &___modifiedCrossDuration_30; }
	inline void set_modifiedCrossDuration_30(float value)
	{
		___modifiedCrossDuration_30 = value;
	}

	inline static int32_t get_offset_of_showDebug_31() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___showDebug_31)); }
	inline bool get_showDebug_31() const { return ___showDebug_31; }
	inline bool* get_address_of_showDebug_31() { return &___showDebug_31; }
	inline void set_showDebug_31(bool value)
	{
		___showDebug_31 = value;
	}

	inline static int32_t get_offset_of_offTheBGM_32() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___offTheBGM_32)); }
	inline bool get_offTheBGM_32() const { return ___offTheBGM_32; }
	inline bool* get_address_of_offTheBGM_32() { return &___offTheBGM_32; }
	inline void set_offTheBGM_32(bool value)
	{
		___offTheBGM_32 = value;
	}

	inline static int32_t get_offset_of_ignoreCrossDuration_33() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___ignoreCrossDuration_33)); }
	inline bool get_ignoreCrossDuration_33() const { return ___ignoreCrossDuration_33; }
	inline bool* get_address_of_ignoreCrossDuration_33() { return &___ignoreCrossDuration_33; }
	inline void set_ignoreCrossDuration_33(bool value)
	{
		___ignoreCrossDuration_33 = value;
	}

	inline static int32_t get_offset_of_currentPlaying_34() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentPlaying_34)); }
	inline int32_t get_currentPlaying_34() const { return ___currentPlaying_34; }
	inline int32_t* get_address_of_currentPlaying_34() { return &___currentPlaying_34; }
	inline void set_currentPlaying_34(int32_t value)
	{
		___currentPlaying_34 = value;
	}

	inline static int32_t get_offset_of_silentLevel_35() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___silentLevel_35)); }
	inline bool get_silentLevel_35() const { return ___silentLevel_35; }
	inline bool* get_address_of_silentLevel_35() { return &___silentLevel_35; }
	inline void set_silentLevel_35(bool value)
	{
		___silentLevel_35 = value;
	}

	inline static int32_t get_offset_of_isPaused_36() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___isPaused_36)); }
	inline bool get_isPaused_36() const { return ___isPaused_36; }
	inline bool* get_address_of_isPaused_36() { return &___isPaused_36; }
	inline void set_isPaused_36(bool value)
	{
		___isPaused_36 = value;
	}

	inline static int32_t get_offset_of_skipSongs_37() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___skipSongs_37)); }
	inline bool get_skipSongs_37() const { return ___skipSongs_37; }
	inline bool* get_address_of_skipSongs_37() { return &___skipSongs_37; }
	inline void set_skipSongs_37(bool value)
	{
		___skipSongs_37 = value;
	}

	inline static int32_t get_offset_of_skipAmount_38() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___skipAmount_38)); }
	inline int32_t get_skipAmount_38() const { return ___skipAmount_38; }
	inline int32_t* get_address_of_skipAmount_38() { return &___skipAmount_38; }
	inline void set_skipAmount_38(int32_t value)
	{
		___skipAmount_38 = value;
	}

	inline static int32_t get_offset_of_inCrossing_39() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___inCrossing_39)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_inCrossing_39() const { return ___inCrossing_39; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_inCrossing_39() { return &___inCrossing_39; }
	inline void set_inCrossing_39(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___inCrossing_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inCrossing_39), (void*)value);
	}

	inline static int32_t get_offset_of_outCrossing_40() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___outCrossing_40)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_outCrossing_40() const { return ___outCrossing_40; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_outCrossing_40() { return &___outCrossing_40; }
	inline void set_outCrossing_40(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___outCrossing_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outCrossing_40), (void*)value);
	}

	inline static int32_t get_offset_of_movingOnFromSong_41() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___movingOnFromSong_41)); }
	inline bool get_movingOnFromSong_41() const { return ___movingOnFromSong_41; }
	inline bool* get_address_of_movingOnFromSong_41() { return &___movingOnFromSong_41; }
	inline void set_movingOnFromSong_41(bool value)
	{
		___movingOnFromSong_41 = value;
	}

	inline static int32_t get_offset_of_lastLevelLoad_42() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___lastLevelLoad_42)); }
	inline float get_lastLevelLoad_42() const { return ___lastLevelLoad_42; }
	inline float* get_address_of_lastLevelLoad_42() { return &___lastLevelLoad_42; }
	inline void set_lastLevelLoad_42(float value)
	{
		___lastLevelLoad_42 = value;
	}

	inline static int32_t get_offset_of_OnSongEnd_44() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___OnSongEnd_44)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_OnSongEnd_44() const { return ___OnSongEnd_44; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_OnSongEnd_44() { return &___OnSongEnd_44; }
	inline void set_OnSongEnd_44(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___OnSongEnd_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSongEnd_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnSongBegin_45() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___OnSongBegin_45)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_OnSongBegin_45() const { return ___OnSongBegin_45; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_OnSongBegin_45() { return &___OnSongBegin_45; }
	inline void set_OnSongBegin_45(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___OnSongBegin_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSongBegin_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnCrossOutBegin_46() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___OnCrossOutBegin_46)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_OnCrossOutBegin_46() const { return ___OnCrossOutBegin_46; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_OnCrossOutBegin_46() { return &___OnCrossOutBegin_46; }
	inline void set_OnCrossOutBegin_46(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___OnCrossOutBegin_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCrossOutBegin_46), (void*)value);
	}

	inline static int32_t get_offset_of_OnCrossInBegin_47() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___OnCrossInBegin_47)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_OnCrossInBegin_47() const { return ___OnCrossInBegin_47; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_OnCrossInBegin_47() { return &___OnCrossInBegin_47; }
	inline void set_OnCrossInBegin_47(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___OnCrossInBegin_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCrossInBegin_47), (void*)value);
	}

	inline static int32_t get_offset_of_InternalCallback_48() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___InternalCallback_48)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_InternalCallback_48() const { return ___InternalCallback_48; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_InternalCallback_48() { return &___InternalCallback_48; }
	inline void set_InternalCallback_48(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___InternalCallback_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalCallback_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSongIndex_49() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentSongIndex_49)); }
	inline int32_t get_currentSongIndex_49() const { return ___currentSongIndex_49; }
	inline int32_t* get_address_of_currentSongIndex_49() { return &___currentSongIndex_49; }
	inline void set_currentSongIndex_49(int32_t value)
	{
		___currentSongIndex_49 = value;
	}

	inline static int32_t get_offset_of_ignoreFromLosingFocus_50() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___ignoreFromLosingFocus_50)); }
	inline bool get_ignoreFromLosingFocus_50() const { return ___ignoreFromLosingFocus_50; }
	inline bool* get_address_of_ignoreFromLosingFocus_50() { return &___ignoreFromLosingFocus_50; }
	inline void set_ignoreFromLosingFocus_50(bool value)
	{
		___ignoreFromLosingFocus_50 = value;
	}

	inline static int32_t get_offset_of_ignoreLevelLoad_51() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___ignoreLevelLoad_51)); }
	inline bool get_ignoreLevelLoad_51() const { return ___ignoreLevelLoad_51; }
	inline bool* get_address_of_ignoreLevelLoad_51() { return &___ignoreLevelLoad_51; }
	inline void set_ignoreLevelLoad_51(bool value)
	{
		___ignoreLevelLoad_51 = value;
	}

	inline static int32_t get_offset_of__maxMusicVolume_52() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____maxMusicVolume_52)); }
	inline float get__maxMusicVolume_52() const { return ____maxMusicVolume_52; }
	inline float* get_address_of__maxMusicVolume_52() { return &____maxMusicVolume_52; }
	inline void set__maxMusicVolume_52(float value)
	{
		____maxMusicVolume_52 = value;
	}

	inline static int32_t get_offset_of__maxVolume_53() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____maxVolume_53)); }
	inline float get__maxVolume_53() const { return ____maxVolume_53; }
	inline float* get_address_of__maxVolume_53() { return &____maxVolume_53; }
	inline void set__maxVolume_53(float value)
	{
		____maxVolume_53 = value;
	}

	inline static int32_t get_offset_of__mutedMusic_54() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____mutedMusic_54)); }
	inline bool get__mutedMusic_54() const { return ____mutedMusic_54; }
	inline bool* get_address_of__mutedMusic_54() { return &____mutedMusic_54; }
	inline void set__mutedMusic_54(bool value)
	{
		____mutedMusic_54 = value;
	}

	inline static int32_t get_offset_of_resourcesPath_55() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___resourcesPath_55)); }
	inline String_t* get_resourcesPath_55() const { return ___resourcesPath_55; }
	inline String_t** get_address_of_resourcesPath_55() { return &___resourcesPath_55; }
	inline void set_resourcesPath_55(String_t* value)
	{
		___resourcesPath_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourcesPath_55), (void*)value);
	}

	inline static int32_t get_offset_of_storedSFXs_56() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___storedSFXs_56)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_storedSFXs_56() const { return ___storedSFXs_56; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_storedSFXs_56() { return &___storedSFXs_56; }
	inline void set_storedSFXs_56(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___storedSFXs_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storedSFXs_56), (void*)value);
	}

	inline static int32_t get_offset_of_unOwnedSFXObjects_57() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___unOwnedSFXObjects_57)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_unOwnedSFXObjects_57() const { return ___unOwnedSFXObjects_57; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_unOwnedSFXObjects_57() { return &___unOwnedSFXObjects_57; }
	inline void set_unOwnedSFXObjects_57(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___unOwnedSFXObjects_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unOwnedSFXObjects_57), (void*)value);
	}

	inline static int32_t get_offset_of_cappedSFXObjects_58() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___cappedSFXObjects_58)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_cappedSFXObjects_58() const { return ___cappedSFXObjects_58; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_cappedSFXObjects_58() { return &___cappedSFXObjects_58; }
	inline void set_cappedSFXObjects_58(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___cappedSFXObjects_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cappedSFXObjects_58), (void*)value);
	}

	inline static int32_t get_offset_of_delayedAudioSources_59() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___delayedAudioSources_59)); }
	inline Dictionary_2_t83F4FFD537394FE71A872D41344485D7C48A0081 * get_delayedAudioSources_59() const { return ___delayedAudioSources_59; }
	inline Dictionary_2_t83F4FFD537394FE71A872D41344485D7C48A0081 ** get_address_of_delayedAudioSources_59() { return &___delayedAudioSources_59; }
	inline void set_delayedAudioSources_59(Dictionary_2_t83F4FFD537394FE71A872D41344485D7C48A0081 * value)
	{
		___delayedAudioSources_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedAudioSources_59), (void*)value);
	}

	inline static int32_t get_offset_of_runOnEndFunctions_60() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___runOnEndFunctions_60)); }
	inline Dictionary_2_tFFC47B14D97EEFF39F951FAFBF5418C816C5CDE4 * get_runOnEndFunctions_60() const { return ___runOnEndFunctions_60; }
	inline Dictionary_2_tFFC47B14D97EEFF39F951FAFBF5418C816C5CDE4 ** get_address_of_runOnEndFunctions_60() { return &___runOnEndFunctions_60; }
	inline void set_runOnEndFunctions_60(Dictionary_2_tFFC47B14D97EEFF39F951FAFBF5418C816C5CDE4 * value)
	{
		___runOnEndFunctions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runOnEndFunctions_60), (void*)value);
	}

	inline static int32_t get_offset_of_duckSource_61() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___duckSource_61)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_duckSource_61() const { return ___duckSource_61; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_duckSource_61() { return &___duckSource_61; }
	inline void set_duckSource_61(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___duckSource_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___duckSource_61), (void*)value);
	}

	inline static int32_t get_offset_of_duckFunction_62() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___duckFunction_62)); }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * get_duckFunction_62() const { return ___duckFunction_62; }
	inline SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 ** get_address_of_duckFunction_62() { return &___duckFunction_62; }
	inline void set_duckFunction_62(SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * value)
	{
		___duckFunction_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___duckFunction_62), (void*)value);
	}

	inline static int32_t get_offset_of_isDucking_63() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___isDucking_63)); }
	inline bool get_isDucking_63() const { return ___isDucking_63; }
	inline bool* get_address_of_isDucking_63() { return &___isDucking_63; }
	inline void set_isDucking_63(bool value)
	{
		___isDucking_63 = value;
	}

	inline static int32_t get_offset_of_duckNumber_64() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___duckNumber_64)); }
	inline int32_t get_duckNumber_64() const { return ___duckNumber_64; }
	inline int32_t* get_address_of_duckNumber_64() { return &___duckNumber_64; }
	inline void set_duckNumber_64(int32_t value)
	{
		___duckNumber_64 = value;
	}

	inline static int32_t get_offset_of_preDuckVolume_65() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckVolume_65)); }
	inline float get_preDuckVolume_65() const { return ___preDuckVolume_65; }
	inline float* get_address_of_preDuckVolume_65() { return &___preDuckVolume_65; }
	inline void set_preDuckVolume_65(float value)
	{
		___preDuckVolume_65 = value;
	}

	inline static int32_t get_offset_of_preDuckVolumeMusic_66() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckVolumeMusic_66)); }
	inline float get_preDuckVolumeMusic_66() const { return ___preDuckVolumeMusic_66; }
	inline float* get_address_of_preDuckVolumeMusic_66() { return &___preDuckVolumeMusic_66; }
	inline void set_preDuckVolumeMusic_66(float value)
	{
		___preDuckVolumeMusic_66 = value;
	}

	inline static int32_t get_offset_of_preDuckVolumeSFX_67() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckVolumeSFX_67)); }
	inline float get_preDuckVolumeSFX_67() const { return ___preDuckVolumeSFX_67; }
	inline float* get_address_of_preDuckVolumeSFX_67() { return &___preDuckVolumeSFX_67; }
	inline void set_preDuckVolumeSFX_67(float value)
	{
		___preDuckVolumeSFX_67 = value;
	}

	inline static int32_t get_offset_of_preDuckPitch_68() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckPitch_68)); }
	inline float get_preDuckPitch_68() const { return ___preDuckPitch_68; }
	inline float* get_address_of_preDuckPitch_68() { return &___preDuckPitch_68; }
	inline void set_preDuckPitch_68(float value)
	{
		___preDuckPitch_68 = value;
	}

	inline static int32_t get_offset_of_preDuckPitchMusic_69() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckPitchMusic_69)); }
	inline float get_preDuckPitchMusic_69() const { return ___preDuckPitchMusic_69; }
	inline float* get_address_of_preDuckPitchMusic_69() { return &___preDuckPitchMusic_69; }
	inline void set_preDuckPitchMusic_69(float value)
	{
		___preDuckPitchMusic_69 = value;
	}

	inline static int32_t get_offset_of_preDuckPitchSFX_70() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___preDuckPitchSFX_70)); }
	inline float get_preDuckPitchSFX_70() const { return ___preDuckPitchSFX_70; }
	inline float* get_address_of_preDuckPitchSFX_70() { return &___preDuckPitchSFX_70; }
	inline void set_preDuckPitchSFX_70(float value)
	{
		___preDuckPitchSFX_70 = value;
	}

	inline static int32_t get_offset_of_sfxGroups_73() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___sfxGroups_73)); }
	inline List_1_t26BEFA4C1DF646C11EF2BCFAB008BD9BE730DD0F * get_sfxGroups_73() const { return ___sfxGroups_73; }
	inline List_1_t26BEFA4C1DF646C11EF2BCFAB008BD9BE730DD0F ** get_address_of_sfxGroups_73() { return &___sfxGroups_73; }
	inline void set_sfxGroups_73(List_1_t26BEFA4C1DF646C11EF2BCFAB008BD9BE730DD0F * value)
	{
		___sfxGroups_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfxGroups_73), (void*)value);
	}

	inline static int32_t get_offset_of_clipToGroupKeys_74() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___clipToGroupKeys_74)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_clipToGroupKeys_74() const { return ___clipToGroupKeys_74; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_clipToGroupKeys_74() { return &___clipToGroupKeys_74; }
	inline void set_clipToGroupKeys_74(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___clipToGroupKeys_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipToGroupKeys_74), (void*)value);
	}

	inline static int32_t get_offset_of_clipToGroupValues_75() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___clipToGroupValues_75)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_clipToGroupValues_75() const { return ___clipToGroupValues_75; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_clipToGroupValues_75() { return &___clipToGroupValues_75; }
	inline void set_clipToGroupValues_75(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___clipToGroupValues_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipToGroupValues_75), (void*)value);
	}

	inline static int32_t get_offset_of_groups_76() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___groups_76)); }
	inline Dictionary_2_t9F1B0D86EC74A838B805C454BC978D39B10736BF * get_groups_76() const { return ___groups_76; }
	inline Dictionary_2_t9F1B0D86EC74A838B805C454BC978D39B10736BF ** get_address_of_groups_76() { return &___groups_76; }
	inline void set_groups_76(Dictionary_2_t9F1B0D86EC74A838B805C454BC978D39B10736BF * value)
	{
		___groups_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groups_76), (void*)value);
	}

	inline static int32_t get_offset_of_clipsInGroups_77() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___clipsInGroups_77)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_clipsInGroups_77() const { return ___clipsInGroups_77; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_clipsInGroups_77() { return &___clipsInGroups_77; }
	inline void set_clipsInGroups_77(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___clipsInGroups_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipsInGroups_77), (void*)value);
	}

	inline static int32_t get_offset_of_allClips_78() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___allClips_78)); }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * get_allClips_78() const { return ___allClips_78; }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E ** get_address_of_allClips_78() { return &___allClips_78; }
	inline void set_allClips_78(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * value)
	{
		___allClips_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allClips_78), (void*)value);
	}

	inline static int32_t get_offset_of_prepools_79() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___prepools_79)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_prepools_79() const { return ___prepools_79; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_prepools_79() { return &___prepools_79; }
	inline void set_prepools_79(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___prepools_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepools_79), (void*)value);
	}

	inline static int32_t get_offset_of_baseVolumes_80() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___baseVolumes_80)); }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * get_baseVolumes_80() const { return ___baseVolumes_80; }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 ** get_address_of_baseVolumes_80() { return &___baseVolumes_80; }
	inline void set_baseVolumes_80(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * value)
	{
		___baseVolumes_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseVolumes_80), (void*)value);
	}

	inline static int32_t get_offset_of_volumeVariations_81() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___volumeVariations_81)); }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * get_volumeVariations_81() const { return ___volumeVariations_81; }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 ** get_address_of_volumeVariations_81() { return &___volumeVariations_81; }
	inline void set_volumeVariations_81(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * value)
	{
		___volumeVariations_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeVariations_81), (void*)value);
	}

	inline static int32_t get_offset_of_pitchVariations_82() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___pitchVariations_82)); }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * get_pitchVariations_82() const { return ___pitchVariations_82; }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 ** get_address_of_pitchVariations_82() { return &___pitchVariations_82; }
	inline void set_pitchVariations_82(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * value)
	{
		___pitchVariations_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pitchVariations_82), (void*)value);
	}

	inline static int32_t get_offset_of_offTheSFX_83() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___offTheSFX_83)); }
	inline bool get_offTheSFX_83() const { return ___offTheSFX_83; }
	inline bool* get_address_of_offTheSFX_83() { return &___offTheSFX_83; }
	inline void set_offTheSFX_83(bool value)
	{
		___offTheSFX_83 = value;
	}

	inline static int32_t get_offset_of_capAmount_84() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___capAmount_84)); }
	inline int32_t get_capAmount_84() const { return ___capAmount_84; }
	inline int32_t* get_address_of_capAmount_84() { return &___capAmount_84; }
	inline void set_capAmount_84(int32_t value)
	{
		___capAmount_84 = value;
	}

	inline static int32_t get_offset_of__volumeSFX_85() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____volumeSFX_85)); }
	inline float get__volumeSFX_85() const { return ____volumeSFX_85; }
	inline float* get_address_of__volumeSFX_85() { return &____volumeSFX_85; }
	inline void set__volumeSFX_85(float value)
	{
		____volumeSFX_85 = value;
	}

	inline static int32_t get_offset_of__pitchSFX_86() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____pitchSFX_86)); }
	inline float get__pitchSFX_86() const { return ____pitchSFX_86; }
	inline float* get_address_of__pitchSFX_86() { return &____pitchSFX_86; }
	inline void set__pitchSFX_86(float value)
	{
		____pitchSFX_86 = value;
	}

	inline static int32_t get_offset_of__maxSFXVolume_87() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____maxSFXVolume_87)); }
	inline float get__maxSFXVolume_87() const { return ____maxSFXVolume_87; }
	inline float* get_address_of__maxSFXVolume_87() { return &____maxSFXVolume_87; }
	inline void set__maxSFXVolume_87(float value)
	{
		____maxSFXVolume_87 = value;
	}

	inline static int32_t get_offset_of__mutedSFX_88() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ____mutedSFX_88)); }
	inline bool get__mutedSFX_88() const { return ____mutedSFX_88; }
	inline bool* get_address_of__mutedSFX_88() { return &____mutedSFX_88; }
	inline void set__mutedSFX_88(bool value)
	{
		____mutedSFX_88 = value;
	}

	inline static int32_t get_offset_of_ownedPools_89() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___ownedPools_89)); }
	inline Dictionary_2_tD2CF827E99853B263385DF85AB4994C0444E52B8 * get_ownedPools_89() const { return ___ownedPools_89; }
	inline Dictionary_2_tD2CF827E99853B263385DF85AB4994C0444E52B8 ** get_address_of_ownedPools_89() { return &___ownedPools_89; }
	inline void set_ownedPools_89(Dictionary_2_tD2CF827E99853B263385DF85AB4994C0444E52B8 * value)
	{
		___ownedPools_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownedPools_89), (void*)value);
	}

	inline static int32_t get_offset_of_sfxPrePoolAmounts_90() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___sfxPrePoolAmounts_90)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_sfxPrePoolAmounts_90() const { return ___sfxPrePoolAmounts_90; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_sfxPrePoolAmounts_90() { return &___sfxPrePoolAmounts_90; }
	inline void set_sfxPrePoolAmounts_90(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___sfxPrePoolAmounts_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfxPrePoolAmounts_90), (void*)value);
	}

	inline static int32_t get_offset_of_sfxBaseVolumes_91() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___sfxBaseVolumes_91)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_sfxBaseVolumes_91() const { return ___sfxBaseVolumes_91; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_sfxBaseVolumes_91() { return &___sfxBaseVolumes_91; }
	inline void set_sfxBaseVolumes_91(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___sfxBaseVolumes_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfxBaseVolumes_91), (void*)value);
	}

	inline static int32_t get_offset_of_sfxVolumeVariations_92() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___sfxVolumeVariations_92)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_sfxVolumeVariations_92() const { return ___sfxVolumeVariations_92; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_sfxVolumeVariations_92() { return &___sfxVolumeVariations_92; }
	inline void set_sfxVolumeVariations_92(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___sfxVolumeVariations_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfxVolumeVariations_92), (void*)value);
	}

	inline static int32_t get_offset_of_sfxPitchVariations_93() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___sfxPitchVariations_93)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_sfxPitchVariations_93() const { return ___sfxPitchVariations_93; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_sfxPitchVariations_93() { return &___sfxPitchVariations_93; }
	inline void set_sfxPitchVariations_93(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___sfxPitchVariations_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfxPitchVariations_93), (void*)value);
	}

	inline static int32_t get_offset_of_SFXObjectLifetime_94() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___SFXObjectLifetime_94)); }
	inline float get_SFXObjectLifetime_94() const { return ___SFXObjectLifetime_94; }
	inline float* get_address_of_SFXObjectLifetime_94() { return &___SFXObjectLifetime_94; }
	inline void set_SFXObjectLifetime_94(float value)
	{
		___SFXObjectLifetime_94 = value;
	}

	inline static int32_t get_offset_of_currentPockets_95() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___currentPockets_95)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_currentPockets_95() const { return ___currentPockets_95; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_currentPockets_95() { return &___currentPockets_95; }
	inline void set_currentPockets_95(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___currentPockets_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPockets_95), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSFXSpatialBlend_96() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C, ___defaultSFXSpatialBlend_96)); }
	inline float get_defaultSFXSpatialBlend_96() const { return ___defaultSFXSpatialBlend_96; }
	inline float* get_address_of_defaultSFXSpatialBlend_96() { return &___defaultSFXSpatialBlend_96; }
	inline void set_defaultSFXSpatialBlend_96(float value)
	{
		___defaultSFXSpatialBlend_96 = value;
	}
};

struct SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C_StaticFields
{
public:
	// System.Single SoundManager::duckStartSpeed
	float ___duckStartSpeed_71;
	// System.Single SoundManager::duckEndSpeed
	float ___duckEndSpeed_72;

public:
	inline static int32_t get_offset_of_duckStartSpeed_71() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C_StaticFields, ___duckStartSpeed_71)); }
	inline float get_duckStartSpeed_71() const { return ___duckStartSpeed_71; }
	inline float* get_address_of_duckStartSpeed_71() { return &___duckStartSpeed_71; }
	inline void set_duckStartSpeed_71(float value)
	{
		___duckStartSpeed_71 = value;
	}

	inline static int32_t get_offset_of_duckEndSpeed_72() { return static_cast<int32_t>(offsetof(SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C_StaticFields, ___duckEndSpeed_72)); }
	inline float get_duckEndSpeed_72() const { return ___duckEndSpeed_72; }
	inline float* get_address_of_duckEndSpeed_72() { return &___duckEndSpeed_72; }
	inline void set_duckEndSpeed_72(float value)
	{
		___duckEndSpeed_72 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.IEnumerator`1<System.Single>[]
struct IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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


// !1 System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_gshared (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_gshared (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___key0, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,MEC.CoroutineHandle,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_mADC8C54114016CB5F2D5D276AE874CF5FA1ACFD1_gshared (Func_3_t73FCD9B381EEF91160D41FA9D2C37DACE0D988D0 * __this, RuntimeObject * ___arg10, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___arg21, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,MEC.CoroutineHandle,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m8B1400372FEDFCF7634F7E5CE7E1F5BCEF027EC2_gshared (Func_3_t73FCD9B381EEF91160D41FA9D2C37DACE0D988D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD7538859C56752442E01C1A27D4492B484E41F77_gshared (Dictionary_2_t2DAE84DC3402583279874CE6BA493DEE0C3AC849 * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___key0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36 (const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SoundManager/SongCallBack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongCallBack_Invoke_mB7888C604625D76A1CAC806B1471FFC12774AF13 (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// System.Boolean SoundManager::ShouldContinueLoop(UnityEngine.GameObject,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_ShouldContinueLoop_m5C8843365C72AAE8CCBFF28E68AE8007A308A719 (SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gO0, bool ___trackEndTime1, float ___endTime2, const RuntimeMethod* method);
// System.Void SoundManagerTools/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1C85C4C04B901054BA7D01300CA2BFA430DC2E74 (U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Single MEC.Timing::WaitForSecondsOnInstance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Timing_WaitForSecondsOnInstance_mDC332C6C00E881A667800F1081C3C2B8E6D90BD4 (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, float ___waitTime0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean MEC.Timing::UpdateTimeValues(MEC.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timing_UpdateTimeValues_m795630A483508AD0D37129108E76536186B51A97 (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, int32_t ___segment0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>::get_Item(!0)
inline CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___key0, const RuntimeMethod* method)
{
	return ((  CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  (*) (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 *, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D , const RuntimeMethod*))Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_gshared)(__this, ___key0, method);
}
// System.Void MEC.Timing::set_currentCoroutine(MEC.CoroutineHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Timing_set_currentCoroutine_m16986A28D7C1695C7DA95BC9AD92AB3DAA92748B_inline (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MEC.Timing/ProcessIndex,MEC.CoroutineHandle>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5 (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 *, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D , const RuntimeMethod*))Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_gshared)(__this, ___key0, method);
}
// System.Int32 MEC.Timing::KillCoroutinesOnInstance(MEC.CoroutineHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timing_KillCoroutinesOnInstance_m5E8AA507DA3263C86FC57AC06861297B3F2619C6 (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m2A3E69F652264AF9420D0A313FF3F28344CD9A2A (float ___f0, const RuntimeMethod* method);
// !2 System.Func`3<System.Collections.Generic.IEnumerator`1<System.Single>,MEC.CoroutineHandle,System.Collections.Generic.IEnumerator`1<System.Single>>::Invoke(!0,!1)
inline RuntimeObject* Func_3_Invoke_m6D936C5E9DB4BCD23082FCA5E21379A3663158FB (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * __this, RuntimeObject* ___arg10, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___arg21, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *, RuntimeObject*, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 , const RuntimeMethod*))Func_3_Invoke_mADC8C54114016CB5F2D5D276AE874CF5FA1ACFD1_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m418B8879895C54AF03169B53DAA24EE9067E3DC7 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.IEnumerator MEC.Timing::_EOFPump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timing__EOFPump_mEEB4C6C0FF60E60CCA8519DE75FBEC3AE0A51C54 (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Collections.Generic.IEnumerator`1<System.Single>,MEC.CoroutineHandle,System.Collections.Generic.IEnumerator`1<System.Single>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154 (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m8B1400372FEDFCF7634F7E5CE7E1F5BCEF027EC2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MEC.Timing/<_StartWhenDone>d__275::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275_U3CU3Em__Finally1_mBF9293A5406A54230DC92D86D47B2F596288E17D (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MEC.CoroutineHandle,System.Collections.Generic.HashSet`1<MEC.CoroutineHandle>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6B3C263FFB5EFCB6DF7293F2B11527148C4B496F (Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA *, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 , const RuntimeMethod*))Dictionary_2_ContainsKey_mD7538859C56752442E01C1A27D4492B484E41F77_gshared)(__this, ___key0, method);
}
// System.Void MEC.Timing/<_StartWhenDone>d__275::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275_System_IDisposable_Dispose_mB0A0C2F043B386D16624F7211E31E01EC92BF489 (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method);
// System.Void MEC.Timing::CloseWaitingProcess(MEC.CoroutineHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timing_CloseWaitingProcess_mC30FFDFCE9E58C37B98C6CCB779E0A0C6A5C4F60 (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Boolean MEC.Timing/ProcessIndex::Equals(MEC.Timing/ProcessIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_Equals_m9D3372D2EF3EC9D0406BBCE706055CDB1A8A02CD (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___other0, const RuntimeMethod* method);
// System.Boolean MEC.Timing/ProcessIndex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_Equals_mC04D7568DC69CFD8180DE7F6FF29B06088922DA8 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 MEC.Timing/ProcessIndex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProcessIndex_GetHashCode_m5975AB3FB2A954EC2B59AA4135145EE12D30F093 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager/<XOut>d__191::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CXOutU3Ed__191__ctor_m9A2598BC02D13E536401CFF8BA39CC489B1B07F7 (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundManager/<XOut>d__191::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CXOutU3Ed__191_System_IDisposable_Dispose_mB04DA644C9E51B17BC0A37CD5C6DA6507C32DBC1 (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SoundManager/<XOut>d__191::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CXOutU3Ed__191_MoveNext_m81702D68A3EB26084646E41F35313EF79C2FE00A (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c6;
			}
			case 2:
			{
				goto IL_0195;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startTime = Time.realtimeSinceStartup;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__2_6(L_3);
		// var endTime = startTime + duration;
		float L_4 = __this->get_U3CstartTimeU3E5__2_6();
		float L_5 = __this->get_duration_2();
		__this->set_U3CendTimeU3E5__3_7(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// float maxVolume = a1.volume, deltaVolume = 0f, volumePercent = 1f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_a1_3();
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_6, /*hidden argument*/NULL);
		__this->set_U3CmaxVolumeU3E5__4_8(L_7);
		// float maxVolume = a1.volume, deltaVolume = 0f, volumePercent = 1f;
		V_2 = (0.0f);
		// float maxVolume = a1.volume, deltaVolume = 0f, volumePercent = 1f;
		V_3 = (1.0f);
		// bool passedFirstPause = false, passedFirstUnpause = true;
		__this->set_U3CpassedFirstPauseU3E5__5_9((bool)0);
		// bool passedFirstPause = false, passedFirstUnpause = true;
		__this->set_U3CpassedFirstUnpauseU3E5__6_10((bool)1);
		// float pauseTimeRemaining = 0f;
		__this->set_U3CpauseTimeRemainingU3E5__7_11((0.0f));
		goto IL_019c;
	}

IL_0082:
	{
		// if(isPaused)
		SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_isPaused_36();
		if (!L_9)
		{
			goto IL_00d2;
		}
	}
	{
		// if(!passedFirstPause)
		bool L_10 = __this->get_U3CpassedFirstPauseU3E5__5_9();
		if (L_10)
		{
			goto IL_00b2;
		}
	}
	{
		// pauseTimeRemaining = endTime - Time.realtimeSinceStartup;
		float L_11 = __this->get_U3CendTimeU3E5__3_7();
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		__this->set_U3CpauseTimeRemainingU3E5__7_11(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)));
		// passedFirstPause = true;
		__this->set_U3CpassedFirstPauseU3E5__5_9((bool)1);
		// passedFirstUnpause = false;
		__this->set_U3CpassedFirstUnpauseU3E5__6_10((bool)0);
	}

IL_00b2:
	{
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_13 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_019c;
	}

IL_00d2:
	{
		// if(!passedFirstUnpause)
		bool L_14 = __this->get_U3CpassedFirstUnpauseU3E5__6_10();
		if (L_14)
		{
			goto IL_0118;
		}
	}
	{
		// float oldEndTime = endTime;
		float L_15 = __this->get_U3CendTimeU3E5__3_7();
		V_4 = L_15;
		// endTime = Time.realtimeSinceStartup + pauseTimeRemaining;
		float L_16;
		L_16 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		float L_17 = __this->get_U3CpauseTimeRemainingU3E5__7_11();
		__this->set_U3CendTimeU3E5__3_7(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// startTime += (endTime - oldEndTime);
		float L_18 = __this->get_U3CstartTimeU3E5__2_6();
		float L_19 = __this->get_U3CendTimeU3E5__3_7();
		float L_20 = V_4;
		__this->set_U3CstartTimeU3E5__2_6(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)))));
		// passedFirstPause = false;
		__this->set_U3CpassedFirstPauseU3E5__5_9((bool)0);
		// passedFirstUnpause = true;
		__this->set_U3CpassedFirstUnpauseU3E5__6_10((bool)1);
	}

IL_0118:
	{
		// volumePercent = 1f;
		V_3 = (1.0f);
		// if(endTime - Time.realtimeSinceStartup > duration)
		float L_21 = __this->get_U3CendTimeU3E5__3_7();
		float L_22;
		L_22 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		float L_23 = __this->get_duration_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))) > ((float)L_23))))
		{
			goto IL_0150;
		}
	}
	{
		// startTime = Time.realtimeSinceStartup;
		float L_24;
		L_24 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__2_6(L_24);
		// endTime = startTime + duration;
		float L_25 = __this->get_U3CstartTimeU3E5__2_6();
		float L_26 = __this->get_duration_2();
		__this->set_U3CendTimeU3E5__3_7(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_0150:
	{
		// deltaVolume = ((Time.realtimeSinceStartup - startTime) / duration) * maxVolume;
		float L_27;
		L_27 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		float L_28 = __this->get_U3CstartTimeU3E5__2_6();
		float L_29 = __this->get_duration_2();
		float L_30 = __this->get_U3CmaxVolumeU3E5__4_8();
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_28))/(float)L_29)), (float)L_30));
		// a1.volume = Mathf.Clamp01((maxVolume - deltaVolume) * volumePercent);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31 = __this->get_a1_3();
		float L_32 = __this->get_U3CmaxVolumeU3E5__4_8();
		float L_33 = V_2;
		float L_34 = V_3;
		float L_35;
		L_35 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)), (float)L_34)), /*hidden argument*/NULL);
		NullCheck(L_31);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_31, L_35, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0195:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_019c:
	{
		// while (isPaused || passedFirstPause || Time.realtimeSinceStartup < endTime) {
		SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * L_36 = V_1;
		NullCheck(L_36);
		bool L_37 = L_36->get_isPaused_36();
		bool L_38 = __this->get_U3CpassedFirstPauseU3E5__5_9();
		if (((int32_t)((int32_t)L_37|(int32_t)L_38)))
		{
			goto IL_0082;
		}
	}
	{
		float L_39;
		L_39 = Time_get_realtimeSinceStartup_mA52B7B2C92FF893E5EAB8264B017E7464792BB36(/*hidden argument*/NULL);
		float L_40 = __this->get_U3CendTimeU3E5__3_7();
		if ((((float)L_39) < ((float)L_40)))
		{
			goto IL_0082;
		}
	}
	{
		// a1.volume = 0f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_41 = __this->get_a1_3();
		NullCheck(L_41);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_41, (0.0f), /*hidden argument*/NULL);
		// a1.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_42 = __this->get_a1_3();
		NullCheck(L_42);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_42, /*hidden argument*/NULL);
		// a1.timeSamples = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_43 = __this->get_a1_3();
		NullCheck(L_43);
		AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33(L_43, 0, /*hidden argument*/NULL);
		// if(runOnEndFunction != null)
		SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * L_44 = __this->get_runOnEndFunction_5();
		if (!L_44)
		{
			goto IL_01f8;
		}
	}
	{
		// runOnEndFunction();
		SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * L_45 = __this->get_runOnEndFunction_5();
		NullCheck(L_45);
		SongCallBack_Invoke_mB7888C604625D76A1CAC806B1471FFC12774AF13(L_45, /*hidden argument*/NULL);
	}

IL_01f8:
	{
		// }
		return (bool)0;
	}
}
// System.Object SoundManager/<XOut>d__191::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CXOutU3Ed__191_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCEBD13D72962F4AF194E7E136FF3D624435A9C53 (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundManager/<XOut>d__191::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CXOutU3Ed__191_System_Collections_IEnumerator_Reset_m011440E019CD1E58AB110E5A88012F5A903D0668 (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CXOutU3Ed__191_System_Collections_IEnumerator_Reset_m011440E019CD1E58AB110E5A88012F5A903D0668_RuntimeMethod_var)));
	}
}
// System.Object SoundManager/<XOut>d__191::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CXOutU3Ed__191_System_Collections_IEnumerator_get_Current_m87992DDB07FF4C20BE523B640647B222DC68E1BC (U3CXOutU3Ed__191_tCEB92B94A6E7E5843730EEE2A50A513F3262D06C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SoundManager/<_PlaySFXLoopTillDestroy>d__181::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PlaySFXLoopTillDestroyU3Ed__181__ctor_m66316D5B5AA4E4417C2916C0E5AC9BAD495BFAA6 (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundManager/<_PlaySFXLoopTillDestroy>d__181::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PlaySFXLoopTillDestroyU3Ed__181_System_IDisposable_Dispose_mC8ED593F0753F54D44A2BA6573DBCF83E5CB2BEA (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SoundManager/<_PlaySFXLoopTillDestroy>d__181::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_PlaySFXLoopTillDestroyU3Ed__181_MoveNext_m234FFE0F069F64E4BD7FE3043E8D9239E1453F09 (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool trackEndTime = false;
		__this->set_U3CtrackEndTimeU3E5__2_7((bool)0);
		// float endTime = Time.time + maxDuration;
		float L_4;
		L_4 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_5 = __this->get_maxDuration_2();
		__this->set_U3CendTimeU3E5__3_8(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// if(!tillDestroy || maxDuration > 0.0f)
		bool L_6 = __this->get_tillDestroy_3();
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		float L_7 = __this->get_maxDuration_2();
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}

IL_004c:
	{
		// trackEndTime = true;
		__this->set_U3CtrackEndTimeU3E5__2_7((bool)1);
		goto IL_006c;
	}

IL_0055:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006c:
	{
		// while(ShouldContinueLoop(gO, trackEndTime, endTime))
		SoundManager_t3C48B93F0DF071E1FA0A50A1C01DF395D018431C * L_8 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_gO_5();
		bool L_10 = __this->get_U3CtrackEndTimeU3E5__2_7();
		float L_11 = __this->get_U3CendTimeU3E5__3_8();
		NullCheck(L_8);
		bool L_12;
		L_12 = SoundManager_ShouldContinueLoop_m5C8843365C72AAE8CCBFF28E68AE8007A308A719(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		// source.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_source_6();
		NullCheck(L_13);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SoundManager/<_PlaySFXLoopTillDestroy>d__181::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_PlaySFXLoopTillDestroyU3Ed__181_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE6224F2C4A785BD425FAFAFFE01F5BA2785194D2 (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundManager/<_PlaySFXLoopTillDestroy>d__181::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PlaySFXLoopTillDestroyU3Ed__181_System_Collections_IEnumerator_Reset_m195D7E53D80A9DF7089948ABEC3C83951C0FBFA1 (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_PlaySFXLoopTillDestroyU3Ed__181_System_Collections_IEnumerator_Reset_m195D7E53D80A9DF7089948ABEC3C83951C0FBFA1_RuntimeMethod_var)));
	}
}
// System.Object SoundManager/<_PlaySFXLoopTillDestroy>d__181::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_PlaySFXLoopTillDestroyU3Ed__181_System_Collections_IEnumerator_get_Current_m59D981435FD4B10418B85B95BAE060BD93701D7D (U3C_PlaySFXLoopTillDestroyU3Ed__181_t947FFBBCB036916920B7B4B369EFC50DC8E4F2F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SoundManager/SongCallBack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongCallBack__ctor_mE3B5340725C423645EA9A052A9DCA6E8E0F05FAE (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SoundManager/SongCallBack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongCallBack_Invoke_mB7888C604625D76A1CAC806B1471FFC12774AF13 (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SoundManager/SongCallBack::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongCallBack_BeginInvoke_mBBD3D16A9D6C853D138A9DB2685A746EA79FE62D (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void SoundManager/SongCallBack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongCallBack_EndInvoke_mFAC71EDE744AADCA1220ADCC205C480F9897907D (SongCallBack_tC3B496EC000776E61C69FCACD2A634B1988C8B43 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManagerTools/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1BC699416A1B3D3A94E566E4862650DCC1F02053 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * L_0 = (U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC *)il2cpp_codegen_object_new(U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1C85C4C04B901054BA7D01300CA2BFA430DC2E74(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SoundManagerTools/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1C85C4C04B901054BA7D01300CA2BFA430DC2E74 (U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SoundManagerTools/<>c::<GetAllFieldInfos>b__7_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllFieldInfosU3Eb__7_0_m618950732D769F2C0A7456AD8CA1E724619D7348 (U3CU3Ec_t85CD8854A6E47766FCA559C145B4B26F5A70FECC * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(f => !f.IsDefined(typeof(HideInInspector), true))
		FieldInfo_t * L_0 = ___f0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
// System.Void MEC.Timing/<_CallContinuously>d__335::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_CallContinuouslyU3Ed__335__ctor_mCA4CFBC9D4ED30231FEA6E3FAEC03727E2186148 (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_CallContinuously>d__335::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_CallContinuouslyU3Ed__335_System_IDisposable_Dispose_mD2EB4BBF33F7EF85DFE02F3F8A8DF1DF4F513AFE (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_CallContinuously>d__335::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_CallContinuouslyU3Ed__335_MoveNext_m13ED0F08128958FF8FBE516CC8D6191E45EE32A9 (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0070;
	}

IL_0020:
	{
		// yield return WaitForSecondsOnInstance(period);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_4 = V_1;
		float L_5 = __this->get_period_3();
		NullCheck(L_4);
		float L_6;
		L_6 = Timing_WaitForSecondsOnInstance_mDC332C6C00E881A667800F1081C3C2B8E6D90BD4(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (ReferenceEquals(gObject, null) || (gObject != null && gObject.activeInHierarchy))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_gObject_4();
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_gObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_gObject_4();
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0070;
		}
	}

IL_0065:
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_action_5();
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// while (ReferenceEquals(gObject, null) || gObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_gObject_4();
		if (!L_13)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_gObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_CallContinuously>d__335::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_CallContinuouslyU3Ed__335_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m439C300A981D51BF7E46A8BAAB73D6A4BA20B06B (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_CallContinuously>d__335::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_CallContinuouslyU3Ed__335_System_Collections_IEnumerator_Reset_m6C39B8690105DF7FE33407E4F670F007C1F76B3C (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_CallContinuouslyU3Ed__335_System_Collections_IEnumerator_Reset_m6C39B8690105DF7FE33407E4F670F007C1F76B3C_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_CallContinuously>d__335::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_CallContinuouslyU3Ed__335_System_Collections_IEnumerator_get_Current_m7DEC84281CB0650BEFFF5D60BB071D1CFBF9C501 (U3C_CallContinuouslyU3Ed__335_t58E62AFD476D06096387E03B2553CAC0AE54B2DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_DelayedCall>d__313::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DelayedCallU3Ed__313__ctor_mFC388205A45A4BA61A0FA829322A93919941153D (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_DelayedCall>d__313::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DelayedCallU3Ed__313_System_IDisposable_Dispose_m93028103D4459C2DB83BB2681C8E213610E8CA59 (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_DelayedCall>d__313::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_DelayedCallU3Ed__313_MoveNext_mB352A38E16FC0086C9EF7D0866BEC9A12511FC8D (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return WaitForSecondsOnInstance(delay);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_4 = V_1;
		float L_5 = __this->get_delay_3();
		NullCheck(L_4);
		float L_6;
		L_6 = Timing_WaitForSecondsOnInstance_mDC332C6C00E881A667800F1081C3C2B8E6D90BD4(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (ReferenceEquals(cancelWith, null) || cancelWith != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_cancelWith_4();
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_cancelWith_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_0056:
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = __this->get_action_5();
		NullCheck(L_10);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_10, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_DelayedCall>d__313::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_DelayedCallU3Ed__313_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_mA65C179DE1E1122F66200B4892DC427FC8F57342 (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_DelayedCall>d__313::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_DelayedCallU3Ed__313_System_Collections_IEnumerator_Reset_m0F5E756070BA07B3E3AC8703FFECB25D5B808D84 (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_DelayedCallU3Ed__313_System_Collections_IEnumerator_Reset_m0F5E756070BA07B3E3AC8703FFECB25D5B808D84_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_DelayedCall>d__313::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_DelayedCallU3Ed__313_System_Collections_IEnumerator_get_Current_mECD4BF3DE733E29511FFF1A62AD1D0A8435B9C62 (U3C_DelayedCallU3Ed__313_t11722F30D759F2BFBC19FB2A51DCA09D496E4A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_EOFPump>d__133::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpU3Ed__133__ctor_mCF3119A0EA06DE77AA3BF471DB729456C0854D48 (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_EOFPump>d__133::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpU3Ed__133_System_IDisposable_Dispose_m236C12A87E119E5E495826A3CCE1091021ED6C34 (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_EOFPump>d__133::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_EOFPumpU3Ed__133_MoveNext_mC85CBCC3CFEC8ADC6A7C5765C25AE0355EC53B17 (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m6D936C5E9DB4BCD23082FCA5E21379A3663158FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_01f4;
	}

IL_0023:
	{
		// yield return EofWaitObject;
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = ((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->get_EofWaitObject_66();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (OnPreExecute != null)
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->get_OnPreExecute_20();
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// OnPreExecute();
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->get_OnPreExecute_20();
		NullCheck(L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// ProcessIndex coindex = new ProcessIndex { seg = Segment.EndOfFrame };
		il2cpp_codegen_initobj((&V_3), sizeof(ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D ));
		(&V_3)->set_seg_0(7);
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_7 = V_3;
		V_2 = L_7;
		// _EOFPumpRan = true;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_8 = V_1;
		NullCheck(L_8);
		L_8->set__EOFPumpRan_64((bool)1);
		// if (UpdateTimeValues(coindex.seg))
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_9 = V_1;
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_10 = V_2;
		int32_t L_11 = L_10.get_seg_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Timing_UpdateTimeValues_m795630A483508AD0D37129108E76536186B51A97(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// _lastEndOfFrameProcessSlot = _nextEndOfFrameProcessSlot;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_13 = V_1;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->get__nextEndOfFrameProcessSlot_41();
		NullCheck(L_13);
		L_13->set__lastEndOfFrameProcessSlot_48(L_15);
	}

IL_0082:
	{
		// for (coindex.i = 0; coindex.i < _lastEndOfFrameProcessSlot; coindex.i++)
		(&V_2)->set_i_1(0);
		goto IL_01e3;
	}

IL_008f:
	{
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			// if (!EndOfFramePaused[coindex.i] && !EndOfFrameHeld[coindex.i] && EndOfFrameProcesses[coindex.i] != null && !(localTime < EndOfFrameProcesses[coindex.i].Current))
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_16 = V_1;
			NullCheck(L_16);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = L_16->get_EndOfFramePaused_91();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_18 = V_2;
			int32_t L_19 = L_18.get_i_1();
			NullCheck(L_17);
			int32_t L_20 = L_19;
			uint8_t L_21 = (uint8_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			if (L_21)
			{
				goto IL_01bc;
			}
		}

IL_00a2:
		{
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_22 = V_1;
			NullCheck(L_22);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_23 = L_22->get_EndOfFrameHeld_100();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_24 = V_2;
			int32_t L_25 = L_24.get_i_1();
			NullCheck(L_23);
			int32_t L_26 = L_25;
			uint8_t L_27 = (uint8_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			if (L_27)
			{
				goto IL_01bc;
			}
		}

IL_00b4:
		{
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_28 = V_1;
			NullCheck(L_28);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_29 = L_28->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_30 = V_2;
			int32_t L_31 = L_30.get_i_1();
			NullCheck(L_29);
			int32_t L_32 = L_31;
			RuntimeObject* L_33 = (RuntimeObject*)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			if (!L_33)
			{
				goto IL_01bc;
			}
		}

IL_00c6:
		{
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_34 = V_1;
			NullCheck(L_34);
			float L_35 = L_34->get_localTime_16();
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_36 = V_1;
			NullCheck(L_36);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_37 = L_36->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_38 = V_2;
			int32_t L_39 = L_38.get_i_1();
			NullCheck(L_37);
			int32_t L_40 = L_39;
			RuntimeObject* L_41 = (RuntimeObject*)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
			NullCheck(L_41);
			float L_42;
			L_42 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_41);
			if ((((float)L_35) < ((float)L_42)))
			{
				goto IL_01bc;
			}
		}

IL_00e3:
		{
			// currentCoroutine = _indexToHandle[coindex];
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_43 = V_1;
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_44 = V_1;
			NullCheck(L_44);
			Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * L_45 = L_44->get__indexToHandle_70();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_46 = V_2;
			NullCheck(L_45);
			CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_47;
			L_47 = Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D(L_45, L_46, /*hidden argument*/Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_RuntimeMethod_var);
			NullCheck(L_43);
			Timing_set_currentCoroutine_m16986A28D7C1695C7DA95BC9AD92AB3DAA92748B_inline(L_43, L_47, /*hidden argument*/NULL);
			// if (ProfilerDebugAmount != DebugInfoType.None && _indexToHandle.ContainsKey(coindex))
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_48 = V_1;
			NullCheck(L_48);
			int32_t L_49 = L_48->get_ProfilerDebugAmount_5();
			if (!L_49)
			{
				goto IL_010a;
			}
		}

IL_00fd:
		{
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_50 = V_1;
			NullCheck(L_50);
			Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * L_51 = L_50->get__indexToHandle_70();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_52 = V_2;
			NullCheck(L_51);
			bool L_53;
			L_53 = Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5(L_51, L_52, /*hidden argument*/Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_RuntimeMethod_var);
		}

IL_010a:
		{
			// if (!EndOfFrameProcesses[coindex.i].MoveNext())
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_54 = V_1;
			NullCheck(L_54);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_55 = L_54->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_56 = V_2;
			int32_t L_57 = L_56.get_i_1();
			NullCheck(L_55);
			int32_t L_58 = L_57;
			RuntimeObject* L_59 = (RuntimeObject*)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			NullCheck(L_59);
			bool L_60;
			L_60 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_59);
			if (L_60)
			{
				goto IL_0144;
			}
		}

IL_011e:
		{
			// if (_indexToHandle.ContainsKey(coindex))
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_61 = V_1;
			NullCheck(L_61);
			Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * L_62 = L_61->get__indexToHandle_70();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_63 = V_2;
			NullCheck(L_62);
			bool L_64;
			L_64 = Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5(L_62, L_63, /*hidden argument*/Dictionary_2_ContainsKey_m985EE3FC2177B870952F0517663255BBC47E04F5_RuntimeMethod_var);
			if (!L_64)
			{
				goto IL_01b5;
			}
		}

IL_012f:
		{
			// KillCoroutinesOnInstance(_indexToHandle[coindex]);
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_65 = V_1;
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_66 = V_1;
			NullCheck(L_66);
			Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * L_67 = L_66->get__indexToHandle_70();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_68 = V_2;
			NullCheck(L_67);
			CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_69;
			L_69 = Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D(L_67, L_68, /*hidden argument*/Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_RuntimeMethod_var);
			NullCheck(L_65);
			int32_t L_70;
			L_70 = Timing_KillCoroutinesOnInstance_m5E8AA507DA3263C86FC57AC06861297B3F2619C6(L_65, L_69, /*hidden argument*/NULL);
			// }
			goto IL_01b5;
		}

IL_0144:
		{
			// else if (EndOfFrameProcesses[coindex.i] != null && float.IsNaN(EndOfFrameProcesses[coindex.i].Current))
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_71 = V_1;
			NullCheck(L_71);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_72 = L_71->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_73 = V_2;
			int32_t L_74 = L_73.get_i_1();
			NullCheck(L_72);
			int32_t L_75 = L_74;
			RuntimeObject* L_76 = (RuntimeObject*)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
			if (!L_76)
			{
				goto IL_01b5;
			}
		}

IL_0153:
		{
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_77 = V_1;
			NullCheck(L_77);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_78 = L_77->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_79 = V_2;
			int32_t L_80 = L_79.get_i_1();
			NullCheck(L_78);
			int32_t L_81 = L_80;
			RuntimeObject* L_82 = (RuntimeObject*)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
			NullCheck(L_82);
			float L_83;
			L_83 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_82);
			bool L_84;
			L_84 = Single_IsNaN_m2A3E69F652264AF9420D0A313FF3F28344CD9A2A(L_83, /*hidden argument*/NULL);
			if (!L_84)
			{
				goto IL_01b5;
			}
		}

IL_016c:
		{
			// if (ReplacementFunction != null)
			IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
			Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_85 = ((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->get_ReplacementFunction_19();
			if (!L_85)
			{
				goto IL_01a9;
			}
		}

IL_0173:
		{
			// EndOfFrameProcesses[coindex.i] = ReplacementFunction(EndOfFrameProcesses[coindex.i], _indexToHandle[coindex]);
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_86 = V_1;
			NullCheck(L_86);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_87 = L_86->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_88 = V_2;
			int32_t L_89 = L_88.get_i_1();
			IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
			Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_90 = ((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->get_ReplacementFunction_19();
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_91 = V_1;
			NullCheck(L_91);
			IEnumerator_1U5BU5D_tE001110A5E9F31B289E7F50861009D82BA0A8AA8* L_92 = L_91->get_EndOfFrameProcesses_82();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_93 = V_2;
			int32_t L_94 = L_93.get_i_1();
			NullCheck(L_92);
			int32_t L_95 = L_94;
			RuntimeObject* L_96 = (RuntimeObject*)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_97 = V_1;
			NullCheck(L_97);
			Dictionary_2_tBCF979B7BF0429F9F1C390C25D5439A60CD65356 * L_98 = L_97->get__indexToHandle_70();
			ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_99 = V_2;
			NullCheck(L_98);
			CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_100;
			L_100 = Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D(L_98, L_99, /*hidden argument*/Dictionary_2_get_Item_m280A6C2C06EE7822B4C0A77F976A4627B1F7770D_RuntimeMethod_var);
			NullCheck(L_90);
			RuntimeObject* L_101;
			L_101 = Func_3_Invoke_m6D936C5E9DB4BCD23082FCA5E21379A3663158FB(L_90, L_96, L_100, /*hidden argument*/Func_3_Invoke_m6D936C5E9DB4BCD23082FCA5E21379A3663158FB_RuntimeMethod_var);
			NullCheck(L_87);
			ArrayElementTypeCheck (L_87, L_101);
			(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (RuntimeObject*)L_101);
			// ReplacementFunction = null;
			((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set_ReplacementFunction_19((Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *)NULL);
		}

IL_01a9:
		{
			// coindex.i--;
			int32_t* L_102 = (&V_2)->get_address_of_i_1();
			int32_t* L_103 = L_102;
			int32_t L_104 = *((int32_t*)L_103);
			*((int32_t*)L_103) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1));
		}

IL_01b5:
		{
			// if (ProfilerDebugAmount != DebugInfoType.None)
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_105 = V_1;
			NullCheck(L_105);
			int32_t L_106 = L_105->get_ProfilerDebugAmount_5();
		}

IL_01bc:
		{
			// }
			goto IL_01d7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01be;
		}
		throw e;
	}

CATCH_01be:
	{ // begin catch(System.Exception)
		{
			// Debug.LogException(ex);
			Exception_t * L_107 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m418B8879895C54AF03169B53DAA24EE9067E3DC7(L_107, /*hidden argument*/NULL);
			// if (ex is MissingReferenceException)
			if (!((MissingReferenceException_t0957F7F403A0B9249CE6AB66FAD46E626F787EE8 *)IsInstClass((RuntimeObject*)L_107, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingReferenceException_t0957F7F403A0B9249CE6AB66FAD46E626F787EE8_il2cpp_TypeInfo_var)))))
			{
				goto IL_01d5;
			}
		}

IL_01cb:
		{
			// Debug.LogError("This exception can probably be fixed by adding \"CancelWith(gameObject)\" when you run the coroutine.\n"
			//     + "Example: Timing.RunCoroutine(_foo().CancelWith(gameObject), Segment.EndOfFrame);");
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37407E1CCD62BFCCE0980D9087E09AE63E8534D2)), /*hidden argument*/NULL);
		}

IL_01d5:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01d7;
		}
	} // end catch (depth: 1)

IL_01d7:
	{
		// for (coindex.i = 0; coindex.i < _lastEndOfFrameProcessSlot; coindex.i++)
		int32_t* L_108 = (&V_2)->get_address_of_i_1();
		int32_t* L_109 = L_108;
		int32_t L_110 = *((int32_t*)L_109);
		*((int32_t*)L_109) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01e3:
	{
		// for (coindex.i = 0; coindex.i < _lastEndOfFrameProcessSlot; coindex.i++)
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_111 = V_2;
		int32_t L_112 = L_111.get_i_1();
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_113 = V_1;
		NullCheck(L_113);
		int32_t L_114 = L_113->get__lastEndOfFrameProcessSlot_48();
		if ((((int32_t)L_112) < ((int32_t)L_114)))
		{
			goto IL_008f;
		}
	}

IL_01f4:
	{
		// while (_nextEndOfFrameProcessSlot > 0)
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_115 = V_1;
		NullCheck(L_115);
		int32_t L_116 = L_115->get__nextEndOfFrameProcessSlot_41();
		if ((((int32_t)L_116) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// currentCoroutine = default(CoroutineHandle);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_117 = V_1;
		il2cpp_codegen_initobj((&V_4), sizeof(CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290 ));
		CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_118 = V_4;
		NullCheck(L_117);
		Timing_set_currentCoroutine_m16986A28D7C1695C7DA95BC9AD92AB3DAA92748B_inline(L_117, L_118, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object MEC.Timing/<_EOFPump>d__133::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_EOFPumpU3Ed__133_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m289C429750F3F360230FB24784D37468A8B70658 (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_EOFPump>d__133::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpU3Ed__133_System_Collections_IEnumerator_Reset_m76045220FEB5D67B1AC2803CA6E40DBF8AE4EBC5 (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_EOFPumpU3Ed__133_System_Collections_IEnumerator_Reset_m76045220FEB5D67B1AC2803CA6E40DBF8AE4EBC5_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_EOFPump>d__133::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_EOFPumpU3Ed__133_System_Collections_IEnumerator_get_Current_m467AEE85049C27D57D78CB077F078528D3A3FCEC (U3C_EOFPumpU3Ed__133_tC03DBF30CB6373E4FF5F295C17CFA97036C35131 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MEC.Timing/<_EOFPumpWatcher>d__132::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpWatcherU3Ed__132__ctor_mEE306141C4B93BBC229CD41732A328D1277FE784 (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_EOFPumpWatcher>d__132::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpWatcherU3Ed__132_System_IDisposable_Dispose_m4EE88F279DCFE22699E9195F5F117488CB6AA09D (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_EOFPumpWatcher>d__132::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_EOFPumpWatcherU3Ed__132_MoveNext_m414AC25F98A0FE142A398118173351163C1AA92B (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0057;
	}

IL_0020:
	{
		// if (!_EOFPumpRan)
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get__EOFPumpRan_64();
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		// base.StartCoroutine(_EOFPump());
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_6 = V_1;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Timing__EOFPump_mEEB4C6C0FF60E60CCA8519DE75FBEC3AE0A51C54(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// _EOFPumpRan = false;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set__EOFPumpRan_64((bool)0);
		// yield return WaitForOneFrame;
		__this->set_U3CU3E2__current_1((-std::numeric_limits<float>::infinity()));
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0057:
	{
		// while (_nextEndOfFrameProcessSlot > 0)
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get__nextEndOfFrameProcessSlot_41();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// _EOFPumpRan = false;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_13 = V_1;
		NullCheck(L_13);
		L_13->set__EOFPumpRan_64((bool)0);
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_EOFPumpWatcher>d__132::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_EOFPumpWatcherU3Ed__132_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m3186E3F0054AF6BA3B357B75F6FF80368D4691F8 (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_EOFPumpWatcher>d__132::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_EOFPumpWatcherU3Ed__132_System_Collections_IEnumerator_Reset_m6E32C5B57F7CBAE3833560A7A48BDBE012AF4DA4 (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_EOFPumpWatcherU3Ed__132_System_Collections_IEnumerator_Reset_m6E32C5B57F7CBAE3833560A7A48BDBE012AF4DA4_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_EOFPumpWatcher>d__132::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_EOFPumpWatcherU3Ed__132_System_Collections_IEnumerator_get_Current_m6E8DB5C88E8F980C301B17E3CB5F28C4F7AAD19C (U3C_EOFPumpWatcherU3Ed__132_tE14B7D53F6FCC958F83C6CCEF5862952B2474DC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_InjectDelay>d__288::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_InjectDelayU3Ed__288__ctor_m8467D69A133EE479B3A0272C461C31A5AF08ECCA (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_InjectDelay>d__288::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_InjectDelayU3Ed__288_System_IDisposable_Dispose_m04B9F3F7021EA500A9C2E312DA6606629199D6EF (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_InjectDelay>d__288::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_InjectDelayU3Ed__288_MoveNext_m5D1CABDBDAA3CC5A0945F309FB19FC9AC0A79994 (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_007b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return WaitForSecondsOnInstance(waitTime);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_3 = V_1;
		float L_4 = __this->get_waitTime_3();
		NullCheck(L_3);
		float L_5;
		L_5 = Timing_WaitForSecondsOnInstance_mDC332C6C00E881A667800F1081C3C2B8E6D90BD4(L_3, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _tmpRef = proc;
		RuntimeObject* L_6 = __this->get_proc_4();
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set__tmpRef_24(L_6);
		// ReplacementFunction = ReturnTmpRefForRepFunc;
		Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_7 = (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *)il2cpp_codegen_object_new(Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154(L_7, NULL, (intptr_t)((intptr_t)Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set_ReplacementFunction_19(L_7);
		// yield return float.NaN;
		__this->set_U3CU3E2__current_1((std::numeric_limits<float>::quiet_NaN()));
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_InjectDelay>d__288::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_InjectDelayU3Ed__288_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m1470D91E4A6C3EC4F808B8094A67F8EB5A0AEAA0 (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_InjectDelay>d__288::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_InjectDelayU3Ed__288_System_Collections_IEnumerator_Reset_m8A5B703CA36411E7CA0901FF5411DB30CA314E46 (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_InjectDelayU3Ed__288_System_Collections_IEnumerator_Reset_m8A5B703CA36411E7CA0901FF5411DB30CA314E46_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_InjectDelay>d__288::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_InjectDelayU3Ed__288_System_Collections_IEnumerator_get_Current_mE056783970BE8692E2C1BB28DC81F66D50FA6C1E (U3C_InjectDelayU3Ed__288_tDA3B9A6D31D7EFEA0C55B1208C6E05C3701796D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_StartWhenDone>d__275::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275__ctor_mBFAF44F119D0BC9F773D315A843FE6E571E16406 (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__275::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275_System_IDisposable_Dispose_mB0A0C2F043B386D16624F7211E31E01EC92BF489 (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3C_StartWhenDoneU3Ed__275_U3CU3Em__Finally1_mBF9293A5406A54230DC92D86D47B2F596288E17D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_StartWhenDone>d__275::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_StartWhenDoneU3Ed__275_MoveNext_mED390A64F48CB2A8C086772D2A2317CEDD4932FF (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6B3C263FFB5EFCB6DF7293F2B11527148C4B496F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_007f;
				}
				case 2:
				{
					goto IL_00a5;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00cb;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (!_waitingTriggers.ContainsKey(handle)) yield break;
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_3 = V_2;
			NullCheck(L_3);
			Dictionary_2_tFD3CD25C34440732FD544C417D2826A7191578FA * L_4 = L_3->get__waitingTriggers_67();
			CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_5 = __this->get_handle_3();
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_ContainsKey_m6B3C263FFB5EFCB6DF7293F2B11527148C4B496F(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m6B3C263FFB5EFCB6DF7293F2B11527148C4B496F_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0048;
			}
		}

IL_0041:
		{
			// if (!_waitingTriggers.ContainsKey(handle)) yield break;
			V_0 = (bool)0;
			goto IL_00cb;
		}

IL_0048:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (proc.Current > localTime)
			RuntimeObject* L_7 = __this->get_proc_4();
			NullCheck(L_7);
			float L_8;
			L_8 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_7);
			Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_9 = V_2;
			NullCheck(L_9);
			float L_10 = L_9->get_localTime_16();
			if ((!(((float)L_8) > ((float)L_10))))
			{
				goto IL_00ad;
			}
		}

IL_0063:
		{
			// yield return proc.Current;
			RuntimeObject* L_11 = __this->get_proc_4();
			NullCheck(L_11);
			float L_12;
			L_12 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_11);
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00cb;
		}

IL_007f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00ad;
		}

IL_0089:
		{
			// yield return proc.Current;
			RuntimeObject* L_13 = __this->get_proc_4();
			NullCheck(L_13);
			float L_14;
			L_14 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_13);
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00cb;
		}

IL_00a5:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00ad:
		{
			// while (proc.MoveNext())
			RuntimeObject* L_15 = __this->get_proc_4();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0089;
			}
		}

IL_00ba:
		{
			// }
			U3C_StartWhenDoneU3Ed__275_U3CU3Em__Finally1_mBF9293A5406A54230DC92D86D47B2F596288E17D(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_00cb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c4;
	}

FAULT_00c4:
	{ // begin fault (depth: 1)
		U3C_StartWhenDoneU3Ed__275_System_IDisposable_Dispose_mB0A0C2F043B386D16624F7211E31E01EC92BF489(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(196)
	} // end fault
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cb:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__275::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275_U3CU3Em__Finally1_mBF9293A5406A54230DC92D86D47B2F596288E17D (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	{
		__this->set_U3CU3E1__state_0((-1));
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_0 = __this->get_U3CU3E4__this_2();
		// CloseWaitingProcess(handle);
		CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_1 = __this->get_handle_3();
		NullCheck(L_0);
		Timing_CloseWaitingProcess_mC30FFDFCE9E58C37B98C6CCB779E0A0C6A5C4F60(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single MEC.Timing/<_StartWhenDone>d__275::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_StartWhenDoneU3Ed__275_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m62A287F8676F31AE18C535E713FE2549FC0D1E0E (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__275::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__275_System_Collections_IEnumerator_Reset_mA6B62935E0B21F842831193E739AE5142AE71186 (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_StartWhenDoneU3Ed__275_System_Collections_IEnumerator_Reset_mA6B62935E0B21F842831193E739AE5142AE71186_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_StartWhenDone>d__275::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_StartWhenDoneU3Ed__275_System_Collections_IEnumerator_get_Current_m4413E234AE35CEBC1A11152CD500059C0B44876F (U3C_StartWhenDoneU3Ed__275_tF91FB23A4BC954EE5817690001C99AB10528E23A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_StartWhenDone>d__280::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__280__ctor_m8A6AF65FCDC9BBF0010E3A3625B4A9074EB033BC (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__280::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__280_System_IDisposable_Dispose_m5B862B6BCEBD9AB5D1C5BA9E347CE5521C950CC8 (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_StartWhenDone>d__280::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_StartWhenDoneU3Ed__280_MoveNext_m923F0728FF4EFCD5CFE0E475DB8BA5D73364CAE7 (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003f;
	}

IL_0024:
	{
		// yield return WaitForOneFrame;
		__this->set_U3CU3E2__current_1((-std::numeric_limits<float>::infinity()));
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003f:
	{
		// while (!operation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_2 = __this->get_operation_2();
		NullCheck(L_2);
		bool L_3;
		L_3 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _tmpRef = pausedProc;
		RuntimeObject* L_4 = __this->get_pausedProc_3();
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set__tmpRef_24(L_4);
		// ReplacementFunction = ReturnTmpRefForRepFunc;
		Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_5 = (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *)il2cpp_codegen_object_new(Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154(L_5, NULL, (intptr_t)((intptr_t)Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set_ReplacementFunction_19(L_5);
		// yield return float.NaN;
		__this->set_U3CU3E2__current_1((std::numeric_limits<float>::quiet_NaN()));
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_StartWhenDone>d__280::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_StartWhenDoneU3Ed__280_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m81E77A1221ACEFF35AE6FFDED92AABB975244034 (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__280::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__280_System_Collections_IEnumerator_Reset_m81D27865BEEC35D8DD0721C9D359B23A70027F48 (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_StartWhenDoneU3Ed__280_System_Collections_IEnumerator_Reset_m81D27865BEEC35D8DD0721C9D359B23A70027F48_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_StartWhenDone>d__280::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_StartWhenDoneU3Ed__280_System_Collections_IEnumerator_get_Current_mE21C3440637D20ABAA394A7C1604FD82106C86B9 (U3C_StartWhenDoneU3Ed__280_tBB4C146EA5894FF941313E31224E85A945D3AF5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_StartWhenDone>d__282::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__282__ctor_m51B97B061C9E520D371A421C6DECE6F0C5015E01 (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__282::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__282_System_IDisposable_Dispose_m8839848C5B53A73BDE9F50B1E66B35F74BBCC9E6 (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_StartWhenDone>d__282::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_StartWhenDoneU3Ed__282_MoveNext_m50CC78416FDA7D309B412062BE09C59E53D5115F (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003f;
	}

IL_0024:
	{
		// yield return WaitForOneFrame;
		__this->set_U3CU3E2__current_1((-std::numeric_limits<float>::infinity()));
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003f:
	{
		// while (operation.keepWaiting)
		CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * L_2 = __this->get_operation_2();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.CustomYieldInstruction::get_keepWaiting() */, L_2);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _tmpRef = pausedProc;
		RuntimeObject* L_4 = __this->get_pausedProc_3();
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set__tmpRef_24(L_4);
		// ReplacementFunction = ReturnTmpRefForRepFunc;
		Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_5 = (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *)il2cpp_codegen_object_new(Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154(L_5, NULL, (intptr_t)((intptr_t)Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set_ReplacementFunction_19(L_5);
		// yield return float.NaN;
		__this->set_U3CU3E2__current_1((std::numeric_limits<float>::quiet_NaN()));
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_StartWhenDone>d__282::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_StartWhenDoneU3Ed__282_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m094FEB94ADDB289D1E8A2B7CCCC84980BDEF19EF (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__282::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__282_System_Collections_IEnumerator_Reset_m05688AFABE0D2FD0F134D24C2814348E2C61D220 (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_StartWhenDoneU3Ed__282_System_Collections_IEnumerator_Reset_m05688AFABE0D2FD0F134D24C2814348E2C61D220_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_StartWhenDone>d__282::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_StartWhenDoneU3Ed__282_System_Collections_IEnumerator_get_Current_mDA3027A80F6D83B273426F9EEBA8A9F40010FDD4 (U3C_StartWhenDoneU3Ed__282_tEA544C69A7628635D2D6B103ED4C14D77938C357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_StartWhenDone>d__287::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__287__ctor_mE9003C21BD181D90E4DFEE9205E9D225C974CFF4 (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__287::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__287_System_IDisposable_Dispose_mB8FE6F8423C9A758CF18C56BC78BAE46712C5EB6 (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_StartWhenDone>d__287::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_StartWhenDoneU3Ed__287_MoveNext_mF0A2A531DF4A667FA4AA0C6A7B8C28F75145FF2E (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003f;
	}

IL_0024:
	{
		// yield return WaitForOneFrame;
		__this->set_U3CU3E2__current_1((-std::numeric_limits<float>::infinity()));
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003f:
	{
		// while (evaluatorFunc() == continueOn)
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = __this->get_evaluatorFunc_2();
		NullCheck(L_2);
		bool L_3;
		L_3 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_2, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		bool L_4 = __this->get_continueOn_3();
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		// _tmpRef = pausedProc;
		RuntimeObject* L_5 = __this->get_pausedProc_4();
		IL2CPP_RUNTIME_CLASS_INIT(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set__tmpRef_24(L_5);
		// ReplacementFunction = ReturnTmpRefForRepFunc;
		Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 * L_6 = (Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0 *)il2cpp_codegen_object_new(Func_3_t130EB885CA83086666CDFC70DFA74E3C1600D7C0_il2cpp_TypeInfo_var);
		Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154(L_6, NULL, (intptr_t)((intptr_t)Timing_ReturnTmpRefForRepFunc_m2A637F294C298DC9517D267C856B25522162DB1A_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF46F693DDED27F7CF91ADA9E94832916BD1FB154_RuntimeMethod_var);
		((Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_StaticFields*)il2cpp_codegen_static_fields_for(Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1_il2cpp_TypeInfo_var))->set_ReplacementFunction_19(L_6);
		// yield return float.NaN;
		__this->set_U3CU3E2__current_1((std::numeric_limits<float>::quiet_NaN()));
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_StartWhenDone>d__287::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_StartWhenDoneU3Ed__287_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_m4C40EACDCA5CF6A9F2586FEE037208C9AA371089 (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_StartWhenDone>d__287::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_StartWhenDoneU3Ed__287_System_Collections_IEnumerator_Reset_mE605459835F11C35DD9C5D7877D1D69E4BD339E1 (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_StartWhenDoneU3Ed__287_System_Collections_IEnumerator_Reset_mE605459835F11C35DD9C5D7877D1D69E4BD339E1_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_StartWhenDone>d__287::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_StartWhenDoneU3Ed__287_System_Collections_IEnumerator_get_Current_mF4033C6242BBCFAF7FD73C94A991C3BE84F35672 (U3C_StartWhenDoneU3Ed__287_tB5058157AB2D0F13E929AFB1E8C15534069180C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Void MEC.Timing/<_WatchCall>d__334::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WatchCallU3Ed__334__ctor_m85188B3144A2C62C01D92BBD3BA472ACABC78EF2 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MEC.Timing/<_WatchCall>d__334::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WatchCallU3Ed__334_System_IDisposable_Dispose_m412AC9352607A09337A47926DA70D4C70A952BE8 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MEC.Timing/<_WatchCall>d__334::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_WatchCallU3Ed__334_MoveNext_m7619C6E5BA5184D32B9A2B9037F3A626918EDCE5 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return WaitForSecondsOnInstance(timeframe);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_4 = V_1;
		float L_5 = __this->get_timeframe_3();
		NullCheck(L_4);
		float L_6;
		L_6 = Timing_WaitForSecondsOnInstance_mDC332C6C00E881A667800F1081C3C2B8E6D90BD4(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// KillCoroutinesOnInstance(handle);
		Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * L_7 = V_1;
		CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_8 = __this->get_handle_4();
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Timing_KillCoroutinesOnInstance_m5E8AA507DA3263C86FC57AC06861297B3F2619C6(L_7, L_8, /*hidden argument*/NULL);
		// if (onDone != null && (ReferenceEquals(gObject, null) || gObject != null))
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = __this->get_onDone_5();
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_gObject_6();
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_gObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0076;
		}
	}

IL_006b:
	{
		// onDone();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = __this->get_onDone_5();
		NullCheck(L_14);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_14, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return (bool)0;
	}
}
// System.Single MEC.Timing/<_WatchCall>d__334::System.Collections.Generic.IEnumerator<System.Single>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3C_WatchCallU3Ed__334_System_Collections_Generic_IEnumeratorU3CSystem_SingleU3E_get_Current_mAA87F73BDF172B79A03BA5A198EE7BC7539B4291 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MEC.Timing/<_WatchCall>d__334::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WatchCallU3Ed__334_System_Collections_IEnumerator_Reset_mCC8F7898A1A3029B9C8DED0062B513928FB1F375 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_WatchCallU3Ed__334_System_Collections_IEnumerator_Reset_mCC8F7898A1A3029B9C8DED0062B513928FB1F375_RuntimeMethod_var)));
	}
}
// System.Object MEC.Timing/<_WatchCall>d__334::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_WatchCallU3Ed__334_System_Collections_IEnumerator_get_Current_mFC42851E64A77CDFA4C64C2489CD74CDE80D8741 (U3C_WatchCallU3Ed__334_t1669FEA83921F7FC0733C07E31585CA57665C145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_U3CU3E2__current_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
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
// System.Boolean MEC.Timing/ProcessIndex::Equals(MEC.Timing/ProcessIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_Equals_m9D3372D2EF3EC9D0406BBCE706055CDB1A8A02CD (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___other0, const RuntimeMethod* method)
{
	{
		// return seg == other.seg && i == other.i;
		int32_t L_0 = __this->get_seg_0();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_1 = ___other0;
		int32_t L_2 = L_1.get_seg_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->get_i_1();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_4 = ___other0;
		int32_t L_5 = L_4.get_i_1();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ProcessIndex_Equals_m9D3372D2EF3EC9D0406BBCE706055CDB1A8A02CD_AdjustorThunk (RuntimeObject * __this, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * _thisAdjusted = reinterpret_cast<ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *>(__this + _offset);
	bool _returnValue;
	_returnValue = ProcessIndex_Equals_m9D3372D2EF3EC9D0406BBCE706055CDB1A8A02CD(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean MEC.Timing/ProcessIndex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_Equals_mC04D7568DC69CFD8180DE7F6FF29B06088922DA8 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is ProcessIndex)
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return Equals((ProcessIndex)other);
		RuntimeObject * L_1 = ___other0;
		bool L_2;
		L_2 = ProcessIndex_Equals_m9D3372D2EF3EC9D0406BBCE706055CDB1A8A02CD((ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *)__this, ((*(ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *)((ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *)UnBox(L_1, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ProcessIndex_Equals_mC04D7568DC69CFD8180DE7F6FF29B06088922DA8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * _thisAdjusted = reinterpret_cast<ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *>(__this + _offset);
	bool _returnValue;
	_returnValue = ProcessIndex_Equals_mC04D7568DC69CFD8180DE7F6FF29B06088922DA8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean MEC.Timing/ProcessIndex::op_Equality(MEC.Timing/ProcessIndex,MEC.Timing/ProcessIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_op_Equality_m600A7D2E8B0F0A4B4941E3592216E19040AD0706 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___a0, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___b1, const RuntimeMethod* method)
{
	{
		// return a.seg == b.seg && a.i == b.i;
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_0 = ___a0;
		int32_t L_1 = L_0.get_seg_0();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_2 = ___b1;
		int32_t L_3 = L_2.get_seg_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_4 = ___a0;
		int32_t L_5 = L_4.get_i_1();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_6 = ___b1;
		int32_t L_7 = L_6.get_i_1();
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean MEC.Timing/ProcessIndex::op_Inequality(MEC.Timing/ProcessIndex,MEC.Timing/ProcessIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessIndex_op_Inequality_mE0B1DEE1990EE6830F31B141A95ED194CCB962D9 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___a0, ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  ___b1, const RuntimeMethod* method)
{
	{
		// return a.seg != b.seg || a.i != b.i;
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_0 = ___a0;
		int32_t L_1 = L_0.get_seg_0();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_2 = ___b1;
		int32_t L_3 = L_2.get_seg_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_4 = ___a0;
		int32_t L_5 = L_4.get_i_1();
		ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D  L_6 = ___b1;
		int32_t L_7 = L_6.get_i_1();
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Int32 MEC.Timing/ProcessIndex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProcessIndex_GetHashCode_m5975AB3FB2A954EC2B59AA4135145EE12D30F093 (ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * __this, const RuntimeMethod* method)
{
	{
		// return (((int)seg - 4) * (int.MaxValue / 7)) + i;
		int32_t L_0 = __this->get_seg_0();
		int32_t L_1 = __this->get_i_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)4)), (int32_t)((int32_t)306783378))), (int32_t)L_1));
	}
}
IL2CPP_EXTERN_C  int32_t ProcessIndex_GetHashCode_m5975AB3FB2A954EC2B59AA4135145EE12D30F093_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D * _thisAdjusted = reinterpret_cast<ProcessIndex_t010862FCDA438AA8EE1475C08A14BC7F054BB08D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ProcessIndex_GetHashCode_m5975AB3FB2A954EC2B59AA4135145EE12D30F093(_thisAdjusted, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Timing_set_currentCoroutine_m16986A28D7C1695C7DA95BC9AD92AB3DAA92748B_inline (Timing_t3FD14C4EBD7FF50307373DA3B32EE06EB21973C1 * __this, CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  ___value0, const RuntimeMethod* method)
{
	{
		// public CoroutineHandle currentCoroutine { get; private set; }
		CoroutineHandle_tCE47BA85C90639C38C254653CA1DC4BD2AD41290  L_0 = ___value0;
		__this->set_U3CcurrentCoroutineU3Ek__BackingField_23(L_0);
		return;
	}
}
