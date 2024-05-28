#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>
struct IStateMachineRunnerPromise_1_t6809CB70579BC8750C17564234AB4FF808BFB9CC;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Int64>
struct IStateMachineRunnerPromise_1_tD939EFE354C976647D78F28717AA1FD8B0E77706;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Single>
struct IStateMachineRunnerPromise_1_t55737F2E94D4CEC58EE6A46824D3C99D7D5BE130;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>>
struct IUniTaskAsyncEnumerable_1_t8ABBA7783A54CC5568F72F3A028D8AC8FFA9F70A;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Int64>
struct IUniTaskAsyncEnumerable_1_t813A352393FDAB0DBD0D685204DAAB13031A1A62;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Single>
struct IUniTaskAsyncEnumerable_1_tB836FBDDF4D15D2FD0FE1A2F2FA11BF597961B55;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>
struct IUniTaskAsyncEnumerator_1_t0E349E2BB0389236B4D5B7A3FC7704FCFEC7CCCF;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Int64>
struct IUniTaskAsyncEnumerator_1_tAC269E0AC70D1CFB42E600E6768F70EF4ACC12AE;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Single>
struct IUniTaskAsyncEnumerator_1_t818D2F2A5318E2779B1D4243A49F3E5EE5826CFF;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Cysharp.Threading.Tasks.AsyncUnit>
struct IUniTaskSource_1_t45DBD4D64B89727EC3176490F1B77B52B7A417E6;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_t35BC53B57A9D4ACCD139841E4165831832EC7874;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>
struct IUniTaskSource_1_tD8C956AD7072D1BC46FD656079F65C2771B67EE3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Cysharp.Threading.Tasks.IPlayerLoopItem
struct IPlayerLoopItem_t1C0783E91643C28658646CBCBA0965E9B1197EE1;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36
struct U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119;
// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4
struct U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6;
// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8
struct U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3;
// Cysharp.Threading.Tasks.Linq.Timer/_Timer
struct _Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F;
// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame
struct _TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72;

IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_t813A352393FDAB0DBD0D685204DAAB13031A1A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_t8ABBA7783A54CC5568F72F3A028D8AC8FFA9F70A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_tB836FBDDF4D15D2FD0FE1A2F2FA11BF597961B55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_t0E349E2BB0389236B4D5B7A3FC7704FCFEC7CCCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_t818D2F2A5318E2779B1D4243A49F3E5EE5826CFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_tAC269E0AC70D1CFB42E600E6768F70EF4ACC12AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_m9005316E14F847F7A5340557B329749A6F440B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mA392885050744072218E317040BBFD2CC58F09B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_m156F5A981E6770E93B9177A2FC7B8CF40975C9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_mD931B90F3398ABCBD040902D2DE21E4D7D2B29DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mDD36F2E9A7291A7125F85F67B5F94D32AE29B241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_mC3B56811EF048A9A2B8DE03131C550CC3E04BEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSumAsyncU3Ed__36_MoveNext_m1673DE6F5BD6B8DE97D7840044082423356138E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSumAsyncU3Ed__4_MoveNext_m4BB3EA9D6E45F5A5F911920992B5F60D0AFBC185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSumAsyncU3Ed__8_MoveNext_m2D37E911925E601042BD56CDE8716B353E03A4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD  : public RuntimeObject
{
public:

public:
};

struct AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___InvokeContinuationDelegate_0;

public:
	inline static int32_t get_offset_of_InvokeContinuationDelegate_0() { return static_cast<int32_t>(offsetof(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields, ___InvokeContinuationDelegate_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_InvokeContinuationDelegate_0() const { return ___InvokeContinuationDelegate_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_InvokeContinuationDelegate_0() { return &___InvokeContinuationDelegate_0; }
	inline void set_InvokeContinuationDelegate_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___InvokeContinuationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvokeContinuationDelegate_0), (void*)value);
	}
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
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

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>
struct AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t * ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	int64_t ___result_2;

public:
	inline static int32_t get_offset_of_runnerPromise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E, ___runnerPromise_0)); }
	inline RuntimeObject* get_runnerPromise_0() const { return ___runnerPromise_0; }
	inline RuntimeObject** get_address_of_runnerPromise_0() { return &___runnerPromise_0; }
	inline void set_runnerPromise_0(RuntimeObject* value)
	{
		___runnerPromise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerPromise_0), (void*)value);
	}

	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E, ___ex_1)); }
	inline Exception_t * get_ex_1() const { return ___ex_1; }
	inline Exception_t ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(Exception_t * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ex_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E, ___result_2)); }
	inline int64_t get_result_2() const { return ___result_2; }
	inline int64_t* get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(int64_t value)
	{
		___result_2 = value;
	}
};


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>
struct AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t * ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	float ___result_2;

public:
	inline static int32_t get_offset_of_runnerPromise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435, ___runnerPromise_0)); }
	inline RuntimeObject* get_runnerPromise_0() const { return ___runnerPromise_0; }
	inline RuntimeObject** get_address_of_runnerPromise_0() { return &___runnerPromise_0; }
	inline void set_runnerPromise_0(RuntimeObject* value)
	{
		___runnerPromise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerPromise_0), (void*)value);
	}

	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435, ___ex_1)); }
	inline Exception_t * get_ex_1() const { return ___ex_1; }
	inline Exception_t ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(Exception_t * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ex_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435, ___result_2)); }
	inline float get_result_2() const { return ___result_2; }
	inline float* get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(float value)
	{
		___result_2 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___result_0)); }
	inline bool get_result_0() const { return ___result_0; }
	inline bool* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(bool value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___result_1)); }
	inline bool get_result_1() const { return ___result_1; }
	inline bool* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(bool value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask`1<System.Int32>
struct UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int32_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210__padding[1];
	};

public:
};

struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields
{
public:
	// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.AsyncUnit::Default
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields, ___Default_0)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_Default_0() const { return ___Default_0; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___Default_0 = value;
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Cysharp.Threading.Tasks.UniTask
struct UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_2;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_3;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F, ___token_3)); }
	inline int16_t get_token_3() const { return ___token_3; }
	inline int16_t* get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(int16_t value)
	{
		___token_3 = value;
	}
};

struct UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___CanceledUniTask_0;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___CompletedTask_1;

public:
	inline static int32_t get_offset_of_CanceledUniTask_0() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields, ___CanceledUniTask_0)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_CanceledUniTask_0() const { return ___CanceledUniTask_0; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_CanceledUniTask_0() { return &___CanceledUniTask_0; }
	inline void set_CanceledUniTask_0(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___CanceledUniTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CanceledUniTask_0))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_CompletedTask_1() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields, ___CompletedTask_1)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_CompletedTask_1() const { return ___CompletedTask_1; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_CompletedTask_1() { return &___CompletedTask_1; }
	inline void set_CompletedTask_1(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___CompletedTask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CompletedTask_1))->___source_2), (void*)NULL);
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


// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C 
{
public:
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C, ___task_0)); }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  get_task_0() const { return ___task_0; }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___source_0), (void*)NULL);
	}
};


// System.Nullable`1<System.Decimal>
struct Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E 
{
public:
	// T System.Nullable`1::value
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___value_0)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_value_0() const { return ___value_0; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80, ___result_1)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_result_1() const { return ___result_1; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
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

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  ___completionSource_0;

public:
	inline static int32_t get_offset_of_completionSource_0() { return static_cast<int32_t>(offsetof(MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF, ___completionSource_0)); }
	inline UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  get_completionSource_0() const { return ___completionSource_0; }
	inline UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * get_address_of_completionSource_0() { return &___completionSource_0; }
	inline void set_completionSource_0(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  value)
	{
		___completionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___completionSource_0))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___completionSource_0))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___completionSource_0))->___continuationState_6), (void*)NULL);
		#endif
	}
};


// Cysharp.Threading.Tasks.PlayerLoopTiming
struct PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.PlayerLoopTiming::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskStatus
struct UniTaskStatus_t3D56DC8D2C47DC83E395CBC04D14FE3DA0A86B13 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTaskStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniTaskStatus_t3D56DC8D2C47DC83E395CBC04D14FE3DA0A86B13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 
{
public:
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0, ___task_0)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_task_0() const { return ___task_0; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___source_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_marshaled_pinvoke
{
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_marshaled_com
{
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>
struct AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t * ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___result_2;

public:
	inline static int32_t get_offset_of_runnerPromise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A, ___runnerPromise_0)); }
	inline RuntimeObject* get_runnerPromise_0() const { return ___runnerPromise_0; }
	inline RuntimeObject** get_address_of_runnerPromise_0() { return &___runnerPromise_0; }
	inline void set_runnerPromise_0(RuntimeObject* value)
	{
		___runnerPromise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerPromise_0), (void*)value);
	}

	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A, ___ex_1)); }
	inline Exception_t * get_ex_1() const { return ___ex_1; }
	inline Exception_t ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(Exception_t * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ex_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A, ___result_2)); }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  get_result_2() const { return ___result_2; }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  value)
	{
		___result_2 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0  : public RuntimeObject
{
public:

public:
};

struct CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.CompletedTasks::AsyncUnit
	UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80  ___AsyncUnit_0;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::True
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  ___True_1;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::False
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  ___False_2;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::Zero
	UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  ___Zero_3;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::MinusOne
	UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  ___MinusOne_4;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::One
	UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  ___One_5;

public:
	inline static int32_t get_offset_of_AsyncUnit_0() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___AsyncUnit_0)); }
	inline UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80  get_AsyncUnit_0() const { return ___AsyncUnit_0; }
	inline UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80 * get_address_of_AsyncUnit_0() { return &___AsyncUnit_0; }
	inline void set_AsyncUnit_0(UniTask_1_tFA4D80BB30957B8735A3CD1696129A24A228CD80  value)
	{
		___AsyncUnit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AsyncUnit_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_True_1() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___True_1)); }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  get_True_1() const { return ___True_1; }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * get_address_of_True_1() { return &___True_1; }
	inline void set_True_1(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  value)
	{
		___True_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___True_1))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___False_2)); }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  get_False_2() const { return ___False_2; }
	inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  value)
	{
		___False_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___False_2))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___Zero_3)); }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  get_Zero_3() const { return ___Zero_3; }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6 * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  value)
	{
		___Zero_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Zero_3))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_MinusOne_4() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___MinusOne_4)); }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  get_MinusOne_4() const { return ___MinusOne_4; }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6 * get_address_of_MinusOne_4() { return &___MinusOne_4; }
	inline void set_MinusOne_4(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  value)
	{
		___MinusOne_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MinusOne_4))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_One_5() { return static_cast<int32_t>(offsetof(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields, ___One_5)); }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  get_One_5() const { return ___One_5; }
	inline UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6 * get_address_of_One_5() { return &___One_5; }
	inline void set_One_5(UniTask_1_tE332553FF85E095479767551041B2749BE5C1BC6  value)
	{
		___One_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___One_5))->___source_0), (void*)NULL);
	}
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

// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4
struct U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>t__builder
	AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Int64> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int64 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<sum>5__1
	int64_t ___U3CsumU3E5__1_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Int64> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_5;
	// System.Object Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>s__3
	RuntimeObject * ___U3CU3Es__3_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>s__4
	int32_t ___U3CU3Es__4_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>s__5
	bool ___U3CU3Es__5_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>u__1
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___U3CU3Eu__1_9;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::<>u__2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CsumU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CsumU3E5__1_4)); }
	inline int64_t get_U3CsumU3E5__1_4() const { return ___U3CsumU3E5__1_4; }
	inline int64_t* get_address_of_U3CsumU3E5__1_4() { return &___U3CsumU3E5__1_4; }
	inline void set_U3CsumU3E5__1_4(int64_t value)
	{
		___U3CsumU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CeU3E5__2_5)); }
	inline RuntimeObject* get_U3CeU3E5__2_5() const { return ___U3CeU3E5__2_5; }
	inline RuntimeObject** get_address_of_U3CeU3E5__2_5() { return &___U3CeU3E5__2_5; }
	inline void set_U3CeU3E5__2_5(RuntimeObject* value)
	{
		___U3CeU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_6() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Es__3_6)); }
	inline RuntimeObject * get_U3CU3Es__3_6() const { return ___U3CU3Es__3_6; }
	inline RuntimeObject ** get_address_of_U3CU3Es__3_6() { return &___U3CU3Es__3_6; }
	inline void set_U3CU3Es__3_6(RuntimeObject * value)
	{
		___U3CU3Es__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_7() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Es__4_7)); }
	inline int32_t get_U3CU3Es__4_7() const { return ___U3CU3Es__4_7; }
	inline int32_t* get_address_of_U3CU3Es__4_7() { return &___U3CU3Es__4_7; }
	inline void set_U3CU3Es__4_7(int32_t value)
	{
		___U3CU3Es__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__5_8() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Es__5_8)); }
	inline bool get_U3CU3Es__5_8() const { return ___U3CU3Es__5_8; }
	inline bool* get_address_of_U3CU3Es__5_8() { return &___U3CU3Es__5_8; }
	inline void set_U3CU3Es__5_8(bool value)
	{
		___U3CU3Es__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Eu__1_9)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6, ___U3CU3Eu__2_10)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_10))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8
struct U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>t__builder
	AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Single> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Single Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<sum>5__1
	float ___U3CsumU3E5__1_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Single> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_5;
	// System.Object Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>s__3
	RuntimeObject * ___U3CU3Es__3_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>s__4
	int32_t ___U3CU3Es__4_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>s__5
	bool ___U3CU3Es__5_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>u__1
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___U3CU3Eu__1_9;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::<>u__2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CsumU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CsumU3E5__1_4)); }
	inline float get_U3CsumU3E5__1_4() const { return ___U3CsumU3E5__1_4; }
	inline float* get_address_of_U3CsumU3E5__1_4() { return &___U3CsumU3E5__1_4; }
	inline void set_U3CsumU3E5__1_4(float value)
	{
		___U3CsumU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CeU3E5__2_5)); }
	inline RuntimeObject* get_U3CeU3E5__2_5() const { return ___U3CeU3E5__2_5; }
	inline RuntimeObject** get_address_of_U3CeU3E5__2_5() { return &___U3CeU3E5__2_5; }
	inline void set_U3CeU3E5__2_5(RuntimeObject* value)
	{
		___U3CeU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_6() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Es__3_6)); }
	inline RuntimeObject * get_U3CU3Es__3_6() const { return ___U3CU3Es__3_6; }
	inline RuntimeObject ** get_address_of_U3CU3Es__3_6() { return &___U3CU3Es__3_6; }
	inline void set_U3CU3Es__3_6(RuntimeObject * value)
	{
		___U3CU3Es__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_7() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Es__4_7)); }
	inline int32_t get_U3CU3Es__4_7() const { return ___U3CU3Es__4_7; }
	inline int32_t* get_address_of_U3CU3Es__4_7() { return &___U3CU3Es__4_7; }
	inline void set_U3CU3Es__4_7(int32_t value)
	{
		___U3CU3Es__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__5_8() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Es__5_8)); }
	inline bool get_U3CU3Es__5_8() const { return ___U3CU3Es__5_8; }
	inline bool* get_address_of_U3CU3Es__5_8() { return &___U3CU3Es__5_8; }
	inline void set_U3CU3Es__5_8(bool value)
	{
		___U3CU3Es__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Eu__1_9)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3, ___U3CU3Eu__2_10)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_10))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.Timer/_Timer
struct _Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// System.Single Cysharp.Threading.Tasks.Linq.Timer/_Timer::dueTime
	float ___dueTime_1;
	// System.Nullable`1<System.Single> Cysharp.Threading.Tasks.Linq.Timer/_Timer::period
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___period_2;
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.Timer/_Timer::updateTiming
	int32_t ___updateTiming_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Timer/_Timer::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_5;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Timer/_Timer::initialFrame
	int32_t ___initialFrame_6;
	// System.Single Cysharp.Threading.Tasks.Linq.Timer/_Timer::elapsed
	float ___elapsed_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::dueTimePhase
	bool ___dueTimePhase_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::completed
	bool ___completed_9;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::disposed
	bool ___disposed_10;

public:
	inline static int32_t get_offset_of_dueTime_1() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___dueTime_1)); }
	inline float get_dueTime_1() const { return ___dueTime_1; }
	inline float* get_address_of_dueTime_1() { return &___dueTime_1; }
	inline void set_dueTime_1(float value)
	{
		___dueTime_1 = value;
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___period_2)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_period_2() const { return ___period_2; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_updateTiming_3() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___updateTiming_3)); }
	inline int32_t get_updateTiming_3() const { return ___updateTiming_3; }
	inline int32_t* get_address_of_updateTiming_3() { return &___updateTiming_3; }
	inline void set_updateTiming_3(int32_t value)
	{
		___updateTiming_3 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_4() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___ignoreTimeScale_4)); }
	inline bool get_ignoreTimeScale_4() const { return ___ignoreTimeScale_4; }
	inline bool* get_address_of_ignoreTimeScale_4() { return &___ignoreTimeScale_4; }
	inline void set_ignoreTimeScale_4(bool value)
	{
		___ignoreTimeScale_4 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_5() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___cancellationToken_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_5() const { return ___cancellationToken_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_5() { return &___cancellationToken_5; }
	inline void set_cancellationToken_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_initialFrame_6() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___initialFrame_6)); }
	inline int32_t get_initialFrame_6() const { return ___initialFrame_6; }
	inline int32_t* get_address_of_initialFrame_6() { return &___initialFrame_6; }
	inline void set_initialFrame_6(int32_t value)
	{
		___initialFrame_6 = value;
	}

	inline static int32_t get_offset_of_elapsed_7() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___elapsed_7)); }
	inline float get_elapsed_7() const { return ___elapsed_7; }
	inline float* get_address_of_elapsed_7() { return &___elapsed_7; }
	inline void set_elapsed_7(float value)
	{
		___elapsed_7 = value;
	}

	inline static int32_t get_offset_of_dueTimePhase_8() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___dueTimePhase_8)); }
	inline bool get_dueTimePhase_8() const { return ___dueTimePhase_8; }
	inline bool* get_address_of_dueTimePhase_8() { return &___dueTimePhase_8; }
	inline void set_dueTimePhase_8(bool value)
	{
		___dueTimePhase_8 = value;
	}

	inline static int32_t get_offset_of_completed_9() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___completed_9)); }
	inline bool get_completed_9() const { return ___completed_9; }
	inline bool* get_address_of_completed_9() { return &___completed_9; }
	inline void set_completed_9(bool value)
	{
		___completed_9 = value;
	}

	inline static int32_t get_offset_of_disposed_10() { return static_cast<int32_t>(offsetof(_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F, ___disposed_10)); }
	inline bool get_disposed_10() const { return ___disposed_10; }
	inline bool* get_address_of_disposed_10() { return &___disposed_10; }
	inline void set_disposed_10(bool value)
	{
		___disposed_10 = value;
	}
};


// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame
struct _TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_1;
	// System.Nullable`1<System.Int32> Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::periodFrameCount
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___periodFrameCount_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::initialFrame
	int32_t ___initialFrame_4;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::currentFrame
	int32_t ___currentFrame_5;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::dueTimePhase
	bool ___dueTimePhase_6;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::completed
	bool ___completed_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::disposed
	bool ___disposed_8;

public:
	inline static int32_t get_offset_of_dueTimeFrameCount_1() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___dueTimeFrameCount_1)); }
	inline int32_t get_dueTimeFrameCount_1() const { return ___dueTimeFrameCount_1; }
	inline int32_t* get_address_of_dueTimeFrameCount_1() { return &___dueTimeFrameCount_1; }
	inline void set_dueTimeFrameCount_1(int32_t value)
	{
		___dueTimeFrameCount_1 = value;
	}

	inline static int32_t get_offset_of_periodFrameCount_2() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___periodFrameCount_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_periodFrameCount_2() const { return ___periodFrameCount_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_periodFrameCount_2() { return &___periodFrameCount_2; }
	inline void set_periodFrameCount_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___periodFrameCount_2 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_initialFrame_4() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___initialFrame_4)); }
	inline int32_t get_initialFrame_4() const { return ___initialFrame_4; }
	inline int32_t* get_address_of_initialFrame_4() { return &___initialFrame_4; }
	inline void set_initialFrame_4(int32_t value)
	{
		___initialFrame_4 = value;
	}

	inline static int32_t get_offset_of_currentFrame_5() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___currentFrame_5)); }
	inline int32_t get_currentFrame_5() const { return ___currentFrame_5; }
	inline int32_t* get_address_of_currentFrame_5() { return &___currentFrame_5; }
	inline void set_currentFrame_5(int32_t value)
	{
		___currentFrame_5 = value;
	}

	inline static int32_t get_offset_of_dueTimePhase_6() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___dueTimePhase_6)); }
	inline bool get_dueTimePhase_6() const { return ___dueTimePhase_6; }
	inline bool* get_address_of_dueTimePhase_6() { return &___dueTimePhase_6; }
	inline void set_dueTimePhase_6(bool value)
	{
		___dueTimePhase_6 = value;
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
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


// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36
struct U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>t__builder
	AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Nullable`1<System.Decimal> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<sum>5__1
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___U3CsumU3E5__1_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_5;
	// System.Object Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>s__3
	RuntimeObject * ___U3CU3Es__3_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>s__4
	int32_t ___U3CU3Es__4_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>s__5
	bool ___U3CU3Es__5_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>u__1
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___U3CU3Eu__1_9;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>u__2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CsumU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CsumU3E5__1_4)); }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  get_U3CsumU3E5__1_4() const { return ___U3CsumU3E5__1_4; }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * get_address_of_U3CsumU3E5__1_4() { return &___U3CsumU3E5__1_4; }
	inline void set_U3CsumU3E5__1_4(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  value)
	{
		___U3CsumU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CeU3E5__2_5)); }
	inline RuntimeObject* get_U3CeU3E5__2_5() const { return ___U3CeU3E5__2_5; }
	inline RuntimeObject** get_address_of_U3CeU3E5__2_5() { return &___U3CeU3E5__2_5; }
	inline void set_U3CeU3E5__2_5(RuntimeObject* value)
	{
		___U3CeU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_6() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Es__3_6)); }
	inline RuntimeObject * get_U3CU3Es__3_6() const { return ___U3CU3Es__3_6; }
	inline RuntimeObject ** get_address_of_U3CU3Es__3_6() { return &___U3CU3Es__3_6; }
	inline void set_U3CU3Es__3_6(RuntimeObject * value)
	{
		___U3CU3Es__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_7() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Es__4_7)); }
	inline int32_t get_U3CU3Es__4_7() const { return ___U3CU3Es__4_7; }
	inline int32_t* get_address_of_U3CU3Es__4_7() { return &___U3CU3Es__4_7; }
	inline void set_U3CU3Es__4_7(int32_t value)
	{
		___U3CU3Es__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__5_8() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Es__5_8)); }
	inline bool get_U3CU3Es__5_8() const { return ___U3CU3Es__5_8; }
	inline bool* get_address_of_U3CU3Es__5_8() { return &___U3CU3Es__5_8; }
	inline void set_U3CU3Es__5_8(bool value)
	{
		___U3CU3Es__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Eu__1_9)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119, ___U3CU3Eu__2_10)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_10))->___task_0))->___source_2), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !0 System.Nullable`1<System.Decimal>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_gshared_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Decimal>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_gshared_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Decimal>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF_gshared (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mFA5E10E120429081BF0A7EF5044FA624717A08DA_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m09571A7B871B5A3E392C8C0A52EC10E09F311321_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetResult(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___result0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mA58305DF8CF25694959685881BC16A2E81FE3C26_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m07B58B3AF4A9FF15D350B3DE79387D840A89D6D8_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::SetResult(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, int64_t ___result0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_m3E4C2AB3AC91C4BF0EC7B54082817D2E2A1ED36A_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_mBA3250A2EE036B6C60FBCA21D72515DFEFF8DE3C_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::SetResult(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, float ___result0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method);
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_gshared_inline (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<!0>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, bool ___result0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Decimal>::GetValueOrDefault()
inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method)
{
	return ((  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  (*) (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Decimal>::get_HasValue()
inline bool Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *, const RuntimeMethod*))Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_gshared_inline)(__this, method);
}
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Addition_mD022BE5E17D2C45BBD4FEF94CB00D71B90D74FB4 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Decimal>::.ctor(!0)
inline void Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF_gshared)(__this, ___value0, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  (*) (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *, const RuntimeMethod*))UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, const RuntimeMethod*))Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_m9005316E14F847F7A5340557B329749A6F440B65_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mFA5E10E120429081BF0A7EF5044FA624717A08DA_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, const RuntimeMethod*))Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_mD931B90F3398ABCBD040902D2DE21E4D7D2B29DF_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m09571A7B871B5A3E392C8C0A52EC10E09F311321_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1 (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_gshared_inline)(__this, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *, Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E , const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_gshared_inline)(__this, ___result0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mA392885050744072218E317040BBFD2CC58F09B7_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mA58305DF8CF25694959685881BC16A2E81FE3C26_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mDD36F2E9A7291A7125F85F67B5F94D32AE29B241_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m07B58B3AF4A9FF15D350B3DE79387D840A89D6D8_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_gshared_inline)(__this, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Int64>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, int64_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *, int64_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_gshared_inline)(__this, ___result0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_m156F5A981E6770E93B9177A2FC7B8CF40975C9FF_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_m3E4C2AB3AC91C4BF0EC7B54082817D2E2A1ED36A_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_mC3B56811EF048A9A2B8DE03131C550CC3E04BEF0_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 **, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_mBA3250A2EE036B6C60FBCA21D72515DFEFF8DE3C_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_gshared_inline)(__this, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Single>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, float ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_gshared_inline)(__this, ___result0, method);
}
// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.PlayerLoopHelper::get_IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerLoopHelper_get_IsMainThread_mCF13B31054076DAAD91485FCD05192C0E593F39F (const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m9CEBDC44BB970B7F8DA5C7AA695F9652B459C139 (const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddAction(Cysharp.Threading.Tasks.PlayerLoopTiming,Cysharp.Threading.Tasks.IPlayerLoopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddAction_mEB8DAB8E77EA325CF685800572B14FF6F4B72FF0 (int32_t ___timing0, RuntimeObject* ___action1, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3 (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_gshared)(__this, method);
}
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<!0>,System.Int16)
inline void UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_gshared_inline)(__this, ___source0, ___token1, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(!0)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5 (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_gshared)(__this, ___result0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mAC1F2C20477335AD7D36AB7E6BE420C10C2B6419 (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline (int32_t ___status0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *, const RuntimeMethod*))Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *, const RuntimeMethod*))UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36__ctor_mE0D2832C21A6157F8FC7CFD9B5B715F8C47E16F7 (U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_MoveNext_m1673DE6F5BD6B8DE97D7840044082423356138E5 (U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_m9005316E14F847F7A5340557B329749A6F440B65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_mD931B90F3398ABCBD040902D2DE21E4D7D2B29DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_t8ABBA7783A54CC5568F72F3A028D8AC8FFA9F70A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_t0E349E2BB0389236B4D5B7A3FC7704FCFEC7CCCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * V_8 = NULL;
	RuntimeObject * V_9 = NULL;
	bool V_10 = false;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * G_B15_0 = NULL;
	U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * G_B14_0 = NULL;
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * G_B16_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_004b;
		}

IL_0014:
		{
			goto IL_018d;
		}

IL_0019:
		{
			// Decimal? sum = default;
			Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * L_3 = __this->get_address_of_U3CsumU3E5__1_4();
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E ));
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_4 = __this->get_source_2();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5 = __this->get_cancellationToken_3();
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_t8ABBA7783A54CC5568F72F3A028D8AC8FFA9F70A_il2cpp_TypeInfo_var, L_4, L_5);
			__this->set_U3CeU3E5__2_5(L_6);
			__this->set_U3CU3Es__3_6(NULL);
			__this->set_U3CU3Es__4_7(0);
		}

IL_004b:
		{
		}

IL_004c:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051;
				}
			}

IL_004f:
			{
				goto IL_0056;
			}

IL_0051:
			{
				goto IL_00ec;
			}

IL_0056:
			{
				goto IL_00a4;
			}

IL_0059:
			{
				// sum += e.Current.GetValueOrDefault();
				Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_8 = __this->get_U3CsumU3E5__1_4();
				V_2 = L_8;
				RuntimeObject* L_9 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_9);
				Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_10;
				L_10 = InterfaceFuncInvoker0< Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>::get_Current() */, IUniTaskAsyncEnumerator_1_t0E349E2BB0389236B4D5B7A3FC7704FCFEC7CCCF_il2cpp_TypeInfo_var, L_9);
				V_4 = L_10;
				Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_11;
				L_11 = Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_inline((Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_RuntimeMethod_var);
				V_3 = L_11;
				bool L_12;
				L_12 = Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_inline((Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_RuntimeMethod_var);
				G_B14_0 = __this;
				if (L_12)
				{
					G_B15_0 = __this;
					goto IL_008c;
				}
			}

IL_0080:
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E ));
				Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_13 = V_4;
				G_B16_0 = L_13;
				G_B16_1 = G_B14_0;
				goto IL_009e;
			}

IL_008c:
			{
				Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_14;
				L_14 = Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_inline((Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_RuntimeMethod_var);
				Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_15 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
				Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_16;
				L_16 = Decimal_op_Addition_mD022BE5E17D2C45BBD4FEF94CB00D71B90D74FB4(L_14, L_15, /*hidden argument*/NULL);
				Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_17;
				memset((&L_17), 0, sizeof(L_17));
				Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_mC759A540018D78E740125E6F49218B66A5F412FF_RuntimeMethod_var);
				G_B16_0 = L_17;
				G_B16_1 = G_B15_0;
			}

IL_009e:
			{
				NullCheck(G_B16_1);
				G_B16_1->set_U3CsumU3E5__1_4(G_B16_0);
			}

IL_00a4:
			{
				// while (await e.MoveNextAsync())
				RuntimeObject* L_18 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_18);
				UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_19;
				L_19 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_t0E349E2BB0389236B4D5B7A3FC7704FCFEC7CCCF_il2cpp_TypeInfo_var, L_18);
				V_7 = L_19;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_20;
				L_20 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_7), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
				V_6 = L_20;
				bool L_21;
				L_21 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_6), /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0109;
				}
			}

IL_00c3:
			{
				int32_t L_22 = 0;
				V_0 = L_22;
				__this->set_U3CU3E1__state_0(L_22);
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_23 = V_6;
				__this->set_U3CU3Eu__1_9(L_23);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * L_24 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_m9005316E14F847F7A5340557B329749A6F440B65_inline((AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *)L_24, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_6), (U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 **)(&V_8), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_m9005316E14F847F7A5340557B329749A6F440B65_RuntimeMethod_var);
				goto IL_0231;
			}

IL_00ec:
			{
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_25 = __this->get_U3CU3Eu__1_9();
				V_6 = L_25;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_26 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_26, sizeof(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C ));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->set_U3CU3E1__state_0(L_27);
			}

IL_0109:
			{
				bool L_28;
				L_28 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_6), /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
				__this->set_U3CU3Es__5_8(L_28);
				bool L_29 = __this->get_U3CU3Es__5_8();
				V_5 = L_29;
				bool L_30 = V_5;
				if (L_30)
				{
					goto IL_0059;
				}
			}

IL_0125:
			{
				goto IL_0134;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0128;
			}
			throw e;
		}

CATCH_0128:
		{ // begin catch(System.Object)
			V_9 = ((RuntimeObject *)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject *));
			RuntimeObject * L_31 = V_9;
			__this->set_U3CU3Es__3_6(L_31);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0134;
		} // end catch (depth: 2)

IL_0134:
		{
			// if (e != null)
			RuntimeObject* L_32 = __this->get_U3CeU3E5__2_5();
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_32) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_33 = V_10;
			if (!L_33)
			{
				goto IL_01b3;
			}
		}

IL_0144:
		{
			// await e.DisposeAsync();
			RuntimeObject* L_34 = __this->get_U3CeU3E5__2_5();
			NullCheck(L_34);
			UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var, L_34);
			V_12 = L_35;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_36;
			L_36 = UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)(&V_12), /*hidden argument*/NULL);
			V_11 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_11), /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_01aa;
			}
		}

IL_0164:
		{
			int32_t L_38 = 1;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_39 = V_11;
			__this->set_U3CU3Eu__2_10(L_39);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_mD931B90F3398ABCBD040902D2DE21E4D7D2B29DF_inline((AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *)L_40, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_11), (U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 **)(&V_8), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119_mD931B90F3398ABCBD040902D2DE21E4D7D2B29DF_RuntimeMethod_var);
			goto IL_0231;
		}

IL_018d:
		{
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_41 = __this->get_U3CU3Eu__2_10();
			V_11 = L_41;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_42 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_01aa:
		{
			Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_11), /*hidden argument*/NULL);
		}

IL_01b3:
		{
			RuntimeObject * L_44 = __this->get_U3CU3Es__3_6();
			V_9 = L_44;
			RuntimeObject * L_45 = V_9;
			if (!L_45)
			{
				goto IL_01dd;
			}
		}

IL_01c0:
		{
			RuntimeObject * L_46 = V_9;
			V_13 = ((Exception_t *)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			Exception_t * L_47 = V_13;
			if (L_47)
			{
				goto IL_01d0;
			}
		}

IL_01cd:
		{
			RuntimeObject * L_48 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSumAsyncU3Ed__36_MoveNext_m1673DE6F5BD6B8DE97D7840044082423356138E5_RuntimeMethod_var)));
		}

IL_01d0:
		{
			Exception_t * L_49 = V_13;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_50;
			L_50 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_50, /*hidden argument*/NULL);
		}

IL_01dd:
		{
			int32_t L_51 = __this->get_U3CU3Es__4_7();
			__this->set_U3CU3Es__3_6(NULL);
			// return sum;
			Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_52 = __this->get_U3CsumU3E5__1_4();
			V_1 = L_52;
			goto IL_0215;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01f4;
		}
		throw e;
	}

CATCH_01f4:
	{ // begin catch(System.Exception)
		V_13 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_54 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_inline((AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *)L_53, L_54, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0231;
	} // end catch (depth: 1)

IL_0215:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_56 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_inline((AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A *)L_55, L_56, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_RuntimeMethod_var);
	}

IL_0231:
	{
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_SetStateMachine_mBA075823087AABD85048BBB18E4227AC99ADFD5C (U3CSumAsyncU3Ed__36_t6C02917B3500428359146B1A9C540D09B720E119 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__4__ctor_m09C72DD097E91EE76ACC8F11F3FF3E93F9A2BAB4 (U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__4_MoveNext_m4BB3EA9D6E45F5A5F911920992B5F60D0AFBC185 (U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mA392885050744072218E317040BBFD2CC58F09B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mDD36F2E9A7291A7125F85F67B5F94D32AE29B241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_t813A352393FDAB0DBD0D685204DAAB13031A1A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_tAC269E0AC70D1CFB42E600E6768F70EF4ACC12AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_0047;
		}

IL_0014:
		{
			goto IL_0150;
		}

IL_0019:
		{
			// Int64 sum = default;
			__this->set_U3CsumU3E5__1_4(((int64_t)((int64_t)0)));
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_3 = __this->get_source_2();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = __this->get_cancellationToken_3();
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Int64>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_t813A352393FDAB0DBD0D685204DAAB13031A1A62_il2cpp_TypeInfo_var, L_3, L_4);
			__this->set_U3CeU3E5__2_5(L_5);
			__this->set_U3CU3Es__3_6(NULL);
			__this->set_U3CU3Es__4_7(0);
		}

IL_0047:
		{
		}

IL_0048:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004d;
				}
			}

IL_004b:
			{
				goto IL_004f;
			}

IL_004d:
			{
				goto IL_00b2;
			}

IL_004f:
			{
				goto IL_006c;
			}

IL_0052:
			{
				// sum += e.Current;
				int64_t L_7 = __this->get_U3CsumU3E5__1_4();
				RuntimeObject* L_8 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_8);
				int64_t L_9;
				L_9 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Int64>::get_Current() */, IUniTaskAsyncEnumerator_1_tAC269E0AC70D1CFB42E600E6768F70EF4ACC12AE_il2cpp_TypeInfo_var, L_8);
				__this->set_U3CsumU3E5__1_4(((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)L_9)));
			}

IL_006c:
			{
				// while (await e.MoveNextAsync())
				RuntimeObject* L_10 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_10);
				UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_11;
				L_11 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Int64>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_tAC269E0AC70D1CFB42E600E6768F70EF4ACC12AE_il2cpp_TypeInfo_var, L_10);
				V_4 = L_11;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_12;
				L_12 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
				V_3 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ce;
				}
			}

IL_008a:
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_15 = V_3;
				__this->set_U3CU3Eu__1_9(L_15);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * L_16 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mA392885050744072218E317040BBFD2CC58F09B7_inline((AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *)L_16, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), (U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 **)(&V_5), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mA392885050744072218E317040BBFD2CC58F09B7_RuntimeMethod_var);
				goto IL_01f4;
			}

IL_00b2:
			{
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_17 = __this->get_U3CU3Eu__1_9();
				V_3 = L_17;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_18 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C ));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
			}

IL_00ce:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
				__this->set_U3CU3Es__5_8(L_20);
				bool L_21 = __this->get_U3CU3Es__5_8();
				V_2 = L_21;
				bool L_22 = V_2;
				if (L_22)
				{
					goto IL_0052;
				}
			}

IL_00e8:
			{
				goto IL_00f7;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00eb;
			}
			throw e;
		}

CATCH_00eb:
		{ // begin catch(System.Object)
			V_6 = ((RuntimeObject *)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject *));
			RuntimeObject * L_23 = V_6;
			__this->set_U3CU3Es__3_6(L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f7;
		} // end catch (depth: 2)

IL_00f7:
		{
			// if (e != null)
			RuntimeObject* L_24 = __this->get_U3CeU3E5__2_5();
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_25 = V_7;
			if (!L_25)
			{
				goto IL_0176;
			}
		}

IL_0107:
		{
			// await e.DisposeAsync();
			RuntimeObject* L_26 = __this->get_U3CeU3E5__2_5();
			NullCheck(L_26);
			UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_27;
			L_27 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var, L_26);
			V_9 = L_27;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_28;
			L_28 = UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)(&V_9), /*hidden argument*/NULL);
			V_8 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_016d;
			}
		}

IL_0127:
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_31 = V_8;
			__this->set_U3CU3Eu__2_10(L_31);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mDD36F2E9A7291A7125F85F67B5F94D32AE29B241_inline((AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *)L_32, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), (U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 **)(&V_5), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6_mDD36F2E9A7291A7125F85F67B5F94D32AE29B241_RuntimeMethod_var);
			goto IL_01f4;
		}

IL_0150:
		{
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_33 = __this->get_U3CU3Eu__2_10();
			V_8 = L_33;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_34 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_016d:
		{
			Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), /*hidden argument*/NULL);
		}

IL_0176:
		{
			RuntimeObject * L_36 = __this->get_U3CU3Es__3_6();
			V_6 = L_36;
			RuntimeObject * L_37 = V_6;
			if (!L_37)
			{
				goto IL_01a0;
			}
		}

IL_0183:
		{
			RuntimeObject * L_38 = V_6;
			V_10 = ((Exception_t *)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t * L_39 = V_10;
			if (L_39)
			{
				goto IL_0193;
			}
		}

IL_0190:
		{
			RuntimeObject * L_40 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSumAsyncU3Ed__4_MoveNext_m4BB3EA9D6E45F5A5F911920992B5F60D0AFBC185_RuntimeMethod_var)));
		}

IL_0193:
		{
			Exception_t * L_41 = V_10;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_42;
			L_42 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_41, /*hidden argument*/NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_42, /*hidden argument*/NULL);
		}

IL_01a0:
		{
			int32_t L_43 = __this->get_U3CU3Es__4_7();
			__this->set_U3CU3Es__3_6(NULL);
			// return sum;
			int64_t L_44 = __this->get_U3CsumU3E5__1_4();
			V_1 = L_44;
			goto IL_01d8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b7;
		}
		throw e;
	}

CATCH_01b7:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_inline((AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *)L_45, L_46, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f4;
	} // end catch (depth: 1)

IL_01d8:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		int64_t L_48 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_inline((AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E *)L_47, L_48, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_RuntimeMethod_var);
	}

IL_01f4:
	{
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__4_SetStateMachine_m8BCA577D8D2A829363DC812828A76BF143A09D62 (U3CSumAsyncU3Ed__4_tFE82FFA7C203B0C042D00F29B1412D8BF799FDB6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__8__ctor_m17AA0553B63C796E57CD98352F725CDF90B67548 (U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__8_MoveNext_m2D37E911925E601042BD56CDE8716B353E03A4E0 (U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_m156F5A981E6770E93B9177A2FC7B8CF40975C9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_mC3B56811EF048A9A2B8DE03131C550CC3E04BEF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_tB836FBDDF4D15D2FD0FE1A2F2FA11BF597961B55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_t818D2F2A5318E2779B1D4243A49F3E5EE5826CFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_004a;
		}

IL_0014:
		{
			goto IL_0153;
		}

IL_0019:
		{
			// Single sum = default;
			__this->set_U3CsumU3E5__1_4((0.0f));
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_3 = __this->get_source_2();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = __this->get_cancellationToken_3();
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Single>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_tB836FBDDF4D15D2FD0FE1A2F2FA11BF597961B55_il2cpp_TypeInfo_var, L_3, L_4);
			__this->set_U3CeU3E5__2_5(L_5);
			__this->set_U3CU3Es__3_6(NULL);
			__this->set_U3CU3Es__4_7(0);
		}

IL_004a:
		{
		}

IL_004b:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0050;
				}
			}

IL_004e:
			{
				goto IL_0052;
			}

IL_0050:
			{
				goto IL_00b5;
			}

IL_0052:
			{
				goto IL_006f;
			}

IL_0055:
			{
				// sum += e.Current;
				float L_7 = __this->get_U3CsumU3E5__1_4();
				RuntimeObject* L_8 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_8);
				float L_9;
				L_9 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Single>::get_Current() */, IUniTaskAsyncEnumerator_1_t818D2F2A5318E2779B1D4243A49F3E5EE5826CFF_il2cpp_TypeInfo_var, L_8);
				__this->set_U3CsumU3E5__1_4(((float)il2cpp_codegen_add((float)L_7, (float)L_9)));
			}

IL_006f:
			{
				// while (await e.MoveNextAsync())
				RuntimeObject* L_10 = __this->get_U3CeU3E5__2_5();
				NullCheck(L_10);
				UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_11;
				L_11 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Single>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_t818D2F2A5318E2779B1D4243A49F3E5EE5826CFF_il2cpp_TypeInfo_var, L_10);
				V_4 = L_11;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_12;
				L_12 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
				V_3 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00d1;
				}
			}

IL_008d:
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_15 = V_3;
				__this->set_U3CU3Eu__1_9(L_15);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_m156F5A981E6770E93B9177A2FC7B8CF40975C9FF_inline((AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *)L_16, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), (U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 **)(&V_5), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_m156F5A981E6770E93B9177A2FC7B8CF40975C9FF_RuntimeMethod_var);
				goto IL_01f7;
			}

IL_00b5:
			{
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_17 = __this->get_U3CU3Eu__1_9();
				V_3 = L_17;
				Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_18 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C ));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
			}

IL_00d1:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_3), /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
				__this->set_U3CU3Es__5_8(L_20);
				bool L_21 = __this->get_U3CU3Es__5_8();
				V_2 = L_21;
				bool L_22 = V_2;
				if (L_22)
				{
					goto IL_0055;
				}
			}

IL_00eb:
			{
				goto IL_00fa;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ee;
			}
			throw e;
		}

CATCH_00ee:
		{ // begin catch(System.Object)
			V_6 = ((RuntimeObject *)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject *));
			RuntimeObject * L_23 = V_6;
			__this->set_U3CU3Es__3_6(L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00fa;
		} // end catch (depth: 2)

IL_00fa:
		{
			// if (e != null)
			RuntimeObject* L_24 = __this->get_U3CeU3E5__2_5();
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_25 = V_7;
			if (!L_25)
			{
				goto IL_0179;
			}
		}

IL_010a:
		{
			// await e.DisposeAsync();
			RuntimeObject* L_26 = __this->get_U3CeU3E5__2_5();
			NullCheck(L_26);
			UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_27;
			L_27 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var, L_26);
			V_9 = L_27;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_28;
			L_28 = UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)(&V_9), /*hidden argument*/NULL);
			V_8 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_0170;
			}
		}

IL_012a:
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_31 = V_8;
			__this->set_U3CU3Eu__2_10(L_31);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_mC3B56811EF048A9A2B8DE03131C550CC3E04BEF0_inline((AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *)L_32, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), (U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 **)(&V_5), /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3_mC3B56811EF048A9A2B8DE03131C550CC3E04BEF0_RuntimeMethod_var);
			goto IL_01f7;
		}

IL_0153:
		{
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_33 = __this->get_U3CU3Eu__2_10();
			V_8 = L_33;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_34 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_0170:
		{
			Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_8), /*hidden argument*/NULL);
		}

IL_0179:
		{
			RuntimeObject * L_36 = __this->get_U3CU3Es__3_6();
			V_6 = L_36;
			RuntimeObject * L_37 = V_6;
			if (!L_37)
			{
				goto IL_01a3;
			}
		}

IL_0186:
		{
			RuntimeObject * L_38 = V_6;
			V_10 = ((Exception_t *)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t * L_39 = V_10;
			if (L_39)
			{
				goto IL_0196;
			}
		}

IL_0193:
		{
			RuntimeObject * L_40 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSumAsyncU3Ed__8_MoveNext_m2D37E911925E601042BD56CDE8716B353E03A4E0_RuntimeMethod_var)));
		}

IL_0196:
		{
			Exception_t * L_41 = V_10;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_42;
			L_42 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_41, /*hidden argument*/NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_42, /*hidden argument*/NULL);
		}

IL_01a3:
		{
			int32_t L_43 = __this->get_U3CU3Es__4_7();
			__this->set_U3CU3Es__3_6(NULL);
			// return sum;
			float L_44 = __this->get_U3CsumU3E5__1_4();
			V_1 = L_44;
			goto IL_01db;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ba;
		}
		throw e;
	}

CATCH_01ba:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_inline((AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *)L_45, L_46, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f7;
	} // end catch (depth: 1)

IL_01db:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_5((RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		float L_48 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_inline((AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 *)L_47, L_48, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_RuntimeMethod_var);
	}

IL_01f7:
	{
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__8_SetStateMachine_mC1D5BFAD5D2950A114A2D0C045EC65A4249F8AEF (U3CSumAsyncU3Ed__8_t2880EA263895B60ECBCE4A976DA7303E7EDAF9A3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer::.ctor(System.TimeSpan,System.Nullable`1<System.TimeSpan>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Timer__ctor_mDA32EC803A010E216BB236F18F08B53DC617C70A (_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime0, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___period1, int32_t ___updateTiming2, bool ___ignoreTimeScale3, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B2_0 = NULL;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B1_0 = NULL;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B3_1 = NULL;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B11_0 = NULL;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B12_1 = NULL;
	{
		// public _Timer(TimeSpan dueTime, TimeSpan? period, PlayerLoopTiming updateTiming, bool ignoreTimeScale, CancellationToken cancellationToken)
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A(__this, /*hidden argument*/NULL);
		// this.dueTime = (float)dueTime.TotalSeconds;
		double L_0;
		L_0 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___dueTime0), /*hidden argument*/NULL);
		__this->set_dueTime_1(((float)((float)L_0)));
		// this.period = (period == null) ? null : (float?)period.Value.TotalSeconds;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___period1), /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0037;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___period1), /*hidden argument*/Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_4), ((float)((float)L_3)), /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_0037:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_5 = V_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_period_2(G_B3_0);
		// if (this.dueTime <= 0) this.dueTime = 0;
		float L_6 = __this->get_dueTime_1();
		V_2 = (bool)((((int32_t)((!(((float)L_6) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.dueTime <= 0) this.dueTime = 0;
		__this->set_dueTime_1((0.0f));
	}

IL_0064:
	{
		// if (this.period != null)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_8 = __this->get_address_of_period_2();
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_8, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// if (this.period <= 0) this.period = 1;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_11 = __this->get_period_2();
		V_1 = L_11;
		V_5 = (0.0f);
		float L_12;
		L_12 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		float L_13 = V_5;
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		V_4 = (bool)((int32_t)((int32_t)((((int32_t)((!(((float)L_12) <= ((float)L_13)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_14));
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00ab;
		}
	}
	{
		// if (this.period <= 0) this.period = 1;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_16), ((float)((float)1)), /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_period_2(L_16);
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		// this.initialFrame = PlayerLoopHelper.IsMainThread ? Time.frameCount : -1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = PlayerLoopHelper_get_IsMainThread_mCF13B31054076DAAD91485FCD05192C0E593F39F(/*hidden argument*/NULL);
		G_B10_0 = __this;
		if (L_17)
		{
			G_B11_0 = __this;
			goto IL_00b7;
		}
	}
	{
		G_B12_0 = (-1);
		G_B12_1 = G_B10_0;
		goto IL_00bc;
	}

IL_00b7:
	{
		int32_t L_18;
		L_18 = Time_get_frameCount_m9CEBDC44BB970B7F8DA5C7AA695F9652B459C139(/*hidden argument*/NULL);
		G_B12_0 = L_18;
		G_B12_1 = G_B11_0;
	}

IL_00bc:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_initialFrame_6(G_B12_0);
		// this.dueTimePhase = true;
		__this->set_dueTimePhase_8((bool)1);
		// this.updateTiming = updateTiming;
		int32_t L_19 = ___updateTiming2;
		__this->set_updateTiming_3(L_19);
		// this.ignoreTimeScale = ignoreTimeScale;
		bool L_20 = ___ignoreTimeScale3;
		__this->set_ignoreTimeScale_4(L_20);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_21 = ___cancellationToken4;
		__this->set_cancellationToken_5(L_21);
		// PlayerLoopHelper.AddAction(updateTiming, this);
		int32_t L_22 = ___updateTiming2;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddAction_mEB8DAB8E77EA325CF685800572B14FF6F4B72FF0(L_22, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.Linq.Timer/_Timer::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  _Timer_get_Current_mEC267AFABE760B5FE1F9DF55212CACC380A77BF6 (_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * __this, const RuntimeMethod* method)
{
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public AsyncUnit Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 ));
		AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Timer/_Timer::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _Timer_MoveNextAsync_m46B2D716AAB7DE51CFA501D554278C7602FC5F68 (_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// if (disposed || cancellationToken.IsCancellationRequested || completed) return CompletedTasks.False;
		bool L_0 = __this->get_disposed_10();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_1 = __this->get_address_of_cancellationToken_5();
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_completed_9();
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (disposed || cancellationToken.IsCancellationRequested || completed) return CompletedTasks.False;
		IL2CPP_RUNTIME_CLASS_INIT(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_5 = ((CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var))->get_False_2();
		V_1 = L_5;
		goto IL_0056;
	}

IL_002b:
	{
		// this.elapsed = 0;
		__this->set_elapsed_7((0.0f));
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_6 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_6, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_7 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_8;
		L_8 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_7, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		memset((&L_9), 0, sizeof(L_9));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_9), __this, L_8, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_10 = V_1;
		return L_10;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Timer/_Timer::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _Timer_DisposeAsync_m40E24D7A4446D45748623E2826857F9AF10AF894 (_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!disposed)
		bool L_0 = __this->get_disposed_10();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// disposed = true;
		__this->set_disposed_10((bool)1);
	}

IL_0017:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F ));
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_2 = V_1;
		V_2 = L_2;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_3 = V_2;
		return L_3;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Timer_MoveNext_m12A55EE77389F676A37EAFC83DED0F070B7D4A2C (_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B3_0 = 0;
	float G_B12_0 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B13_2 = NULL;
	float G_B20_0 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B20_1 = NULL;
	float G_B19_0 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B19_1 = NULL;
	float G_B21_0 = 0.0f;
	float G_B21_1 = 0.0f;
	_Timer_tD3BEED8360E328296CB5E2FCDBC372256F80411F * G_B21_2 = NULL;
	{
		// if (disposed || cancellationToken.IsCancellationRequested)
		bool L_0 = __this->get_disposed_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_1 = __this->get_address_of_cancellationToken_5();
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_4 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_4, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return false;
		V_1 = (bool)0;
		goto IL_014b;
	}

IL_0030:
	{
		// if (dueTimePhase)
		bool L_6 = __this->get_dueTimePhase_8();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00c0;
		}
	}
	{
		// if (elapsed == 0)
		float L_8 = __this->get_elapsed_7();
		V_3 = (bool)((((float)L_8) == ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// if (initialFrame == Time.frameCount)
		int32_t L_10 = __this->get_initialFrame_6();
		int32_t L_11;
		L_11 = Time_get_frameCount_m9CEBDC44BB970B7F8DA5C7AA695F9652B459C139(/*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_014b;
	}

IL_006b:
	{
	}

IL_006c:
	{
		// elapsed += (ignoreTimeScale) ? UnityEngine.Time.unscaledDeltaTime : UnityEngine.Time.deltaTime;
		float L_13 = __this->get_elapsed_7();
		bool L_14 = __this->get_ignoreTimeScale_4();
		G_B11_0 = L_13;
		G_B11_1 = __this;
		if (L_14)
		{
			G_B12_0 = L_13;
			G_B12_1 = __this;
			goto IL_0082;
		}
	}
	{
		float L_15;
		L_15 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		G_B13_0 = L_15;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0087;
	}

IL_0082:
	{
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_mAC1F2C20477335AD7D36AB7E6BE420C10C2B6419(/*hidden argument*/NULL);
		G_B13_0 = L_16;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0087:
	{
		NullCheck(G_B13_2);
		G_B13_2->set_elapsed_7(((float)il2cpp_codegen_add((float)G_B13_1, (float)G_B13_0)));
		// if (elapsed >= dueTime)
		float L_17 = __this->get_elapsed_7();
		float L_18 = __this->get_dueTime_1();
		V_5 = (bool)((((int32_t)((!(((float)L_17) >= ((float)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		// dueTimePhase = false;
		__this->set_dueTimePhase_8((bool)0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_20 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_21;
		L_21 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_20, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_00ba:
	{
		goto IL_0147;
	}

IL_00c0:
	{
		// if (period == null)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_22 = __this->get_address_of_period_2();
		bool L_23;
		L_23 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_22, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00ee;
		}
	}
	{
		// completed = true;
		__this->set_completed_9((bool)1);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_25 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_25, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return false;
		V_1 = (bool)0;
		goto IL_014b;
	}

IL_00ee:
	{
		// elapsed += (ignoreTimeScale) ? UnityEngine.Time.unscaledDeltaTime : UnityEngine.Time.deltaTime;
		float L_27 = __this->get_elapsed_7();
		bool L_28 = __this->get_ignoreTimeScale_4();
		G_B19_0 = L_27;
		G_B19_1 = __this;
		if (L_28)
		{
			G_B20_0 = L_27;
			G_B20_1 = __this;
			goto IL_0104;
		}
	}
	{
		float L_29;
		L_29 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		G_B21_0 = L_29;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_0109;
	}

IL_0104:
	{
		float L_30;
		L_30 = Time_get_unscaledDeltaTime_mAC1F2C20477335AD7D36AB7E6BE420C10C2B6419(/*hidden argument*/NULL);
		G_B21_0 = L_30;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_0109:
	{
		NullCheck(G_B21_2);
		G_B21_2->set_elapsed_7(((float)il2cpp_codegen_add((float)G_B21_1, (float)G_B21_0)));
		// if (elapsed >= period)
		float L_31 = __this->get_elapsed_7();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_32 = __this->get_period_2();
		V_8 = L_32;
		float L_33;
		L_33 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		bool L_34;
		L_34 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		V_7 = (bool)((int32_t)((int32_t)((((int32_t)((!(((float)L_31) >= ((float)L_33)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_34));
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_0146;
		}
	}
	{
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_36 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_37;
		L_37 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_36, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0146:
	{
	}

IL_0147:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_014b;
	}

IL_014b:
	{
		// }
		bool L_38 = V_1;
		return L_38;
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
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::.ctor(System.Int32,System.Nullable`1<System.Int32>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TimerFrame__ctor_mC1AC8A1875080523C7B27178057E2F12CDFDA7D3 (_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * __this, int32_t ___dueTimeFrameCount0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___periodFrameCount1, int32_t ___updateTiming2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * G_B8_0 = NULL;
	_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * G_B9_1 = NULL;
	{
		// public _TimerFrame(int dueTimeFrameCount, int? periodFrameCount, PlayerLoopTiming updateTiming, CancellationToken cancellationToken)
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A(__this, /*hidden argument*/NULL);
		// if (dueTimeFrameCount <= 0) dueTimeFrameCount = 0;
		int32_t L_0 = ___dueTimeFrameCount0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (dueTimeFrameCount <= 0) dueTimeFrameCount = 0;
		___dueTimeFrameCount0 = 0;
	}

IL_0016:
	{
		// if (periodFrameCount != null)
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&___periodFrameCount1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// if (periodFrameCount <= 0) periodFrameCount = 1;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4 = ___periodFrameCount1;
		V_3 = L_4;
		V_4 = 0;
		int32_t L_5;
		L_5 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		int32_t L_6 = V_4;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_2 = (bool)((int32_t)((int32_t)((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_7));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// if (periodFrameCount <= 0) periodFrameCount = 1;
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&___periodFrameCount1), 1, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// this.initialFrame = PlayerLoopHelper.IsMainThread ? Time.frameCount : -1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = PlayerLoopHelper_get_IsMainThread_mCF13B31054076DAAD91485FCD05192C0E593F39F(/*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_0055;
		}
	}
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B7_0;
		goto IL_005a;
	}

IL_0055:
	{
		int32_t L_10;
		L_10 = Time_get_frameCount_m9CEBDC44BB970B7F8DA5C7AA695F9652B459C139(/*hidden argument*/NULL);
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
	}

IL_005a:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_initialFrame_4(G_B9_0);
		// this.dueTimePhase = true;
		__this->set_dueTimePhase_6((bool)1);
		// this.dueTimeFrameCount = dueTimeFrameCount;
		int32_t L_11 = ___dueTimeFrameCount0;
		__this->set_dueTimeFrameCount_1(L_11);
		// this.periodFrameCount = periodFrameCount;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12 = ___periodFrameCount1;
		__this->set_periodFrameCount_2(L_12);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_13 = ___cancellationToken3;
		__this->set_cancellationToken_3(L_13);
		// PlayerLoopHelper.AddAction(updateTiming, this);
		int32_t L_14 = ___updateTiming2;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddAction_mEB8DAB8E77EA325CF685800572B14FF6F4B72FF0(L_14, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  _TimerFrame_get_Current_mB8D57B1A11BC533A12B5EFE2F78166EF7952E34F (_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * __this, const RuntimeMethod* method)
{
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public AsyncUnit Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 ));
		AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _TimerFrame_MoveNextAsync_m8F498C94D70724E92F6D63E7FAD62E716566BE67 (_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// if (disposed || cancellationToken.IsCancellationRequested || completed) return CompletedTasks.False;
		bool L_0 = __this->get_disposed_8();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_1 = __this->get_address_of_cancellationToken_3();
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_completed_7();
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (disposed || cancellationToken.IsCancellationRequested || completed) return CompletedTasks.False;
		IL2CPP_RUNTIME_CLASS_INIT(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_5 = ((CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_tF086C64A08B1E3185AD3B13661476EA27476E0E0_il2cpp_TypeInfo_var))->get_False_2();
		V_1 = L_5;
		goto IL_0052;
	}

IL_002b:
	{
		// this.currentFrame = 0;
		__this->set_currentFrame_5(0);
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_6 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_6, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_7 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_8;
		L_8 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_7, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		memset((&L_9), 0, sizeof(L_9));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_9), __this, L_8, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_10 = V_1;
		return L_10;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _TimerFrame_DisposeAsync_m814C67A81293A43D06F4FCAE5589AC264C4341B2 (_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!disposed)
		bool L_0 = __this->get_disposed_8();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// disposed = true;
		__this->set_disposed_8((bool)1);
	}

IL_0017:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F ));
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_2 = V_1;
		V_2 = L_2;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_3 = V_2;
		return L_3;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TimerFrame_MoveNext_mF4BEF823623A41EA175B308B959A1806CBEA01C3 (_TimerFrame_t10B6A565B09D30318F62E07D2729541D9591BD72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t G_B3_0 = 0;
	{
		// if (disposed || cancellationToken.IsCancellationRequested)
		bool L_0 = __this->get_disposed_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_1 = __this->get_address_of_cancellationToken_3();
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_4 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_4, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return false;
		V_1 = (bool)0;
		goto IL_014d;
	}

IL_0030:
	{
		// if (dueTimePhase)
		bool L_6 = __this->get_dueTimePhase_6();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00d5;
		}
	}
	{
		// if (currentFrame == 0)
		int32_t L_8 = __this->get_currentFrame_5();
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// if (dueTimeFrameCount == 0)
		int32_t L_10 = __this->get_dueTimeFrameCount_1();
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		// dueTimePhase = false;
		__this->set_dueTimePhase_6((bool)0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_12 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_12, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return true;
		V_1 = (bool)1;
		goto IL_014d;
	}

IL_0077:
	{
		// if (initialFrame == Time.frameCount)
		int32_t L_14 = __this->get_initialFrame_4();
		int32_t L_15;
		L_15 = Time_get_frameCount_m9CEBDC44BB970B7F8DA5C7AA695F9652B459C139(/*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_014d;
	}

IL_0092:
	{
	}

IL_0093:
	{
		// if (++currentFrame >= dueTimeFrameCount)
		int32_t L_17 = __this->get_currentFrame_5();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_7;
		__this->set_currentFrame_5(L_18);
		int32_t L_19 = V_7;
		int32_t L_20 = __this->get_dueTimeFrameCount_1();
		V_6 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00d0;
		}
	}
	{
		// dueTimePhase = false;
		__this->set_dueTimePhase_6((bool)0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_22 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_22, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		goto IL_00d2;
	}

IL_00d0:
	{
	}

IL_00d2:
	{
		goto IL_0149;
	}

IL_00d5:
	{
		// if (periodFrameCount == null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_24 = __this->get_address_of_periodFrameCount_2();
		bool L_25;
		L_25 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_24, /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0103;
		}
	}
	{
		// completed = true;
		__this->set_completed_7((bool)1);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_27 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_27, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return false;
		V_1 = (bool)0;
		goto IL_014d;
	}

IL_0103:
	{
		// if (++currentFrame >= periodFrameCount)
		int32_t L_29 = __this->get_currentFrame_5();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_7;
		__this->set_currentFrame_5(L_30);
		int32_t L_31 = V_7;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_32 = __this->get_periodFrameCount_2();
		V_10 = L_32;
		int32_t L_33;
		L_33 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_10), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_34;
		L_34 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_10), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_9 = (bool)((int32_t)((int32_t)((((int32_t)((((int32_t)L_31) < ((int32_t)L_33))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_34));
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_0148;
		}
	}
	{
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_36 = ((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_37;
		L_37 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_36, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0148:
	{
	}

IL_0149:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_014d;
	}

IL_014d:
	{
		// }
		bool L_38 = V_1;
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method)
{
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline((&L_0), (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		int32_t L_1;
		L_1 = UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (task.source == null) return;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		RuntimeObject* L_1 = L_0->get_source_2();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (task.source == null) return;
		goto IL_0031;
	}

IL_0015:
	{
		// task.source.GetResult(task.token);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_3 = __this->get_address_of_task_0();
		RuntimeObject* L_4 = L_3->get_source_2();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_5 = __this->get_address_of_task_0();
		int16_t L_6 = L_5->get_token_3();
		NullCheck(L_4);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_4, L_6);
	}

IL_0031:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Nullable_1_GetValueOrDefault_m0854816E6F385BAFD14BAA319E88F7C37EE96449_gshared_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method)
{
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )__this->get_value_0();
		return (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m462C40E9095F464E7124A2E64C1A886BB9AE3E25_gshared_inline (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method)
{
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Awaiter(this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_inline((&L_0), (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_1 = V_0;
		return (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return task.Status.IsCompleted();
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline((int32_t)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mFA5E10E120429081BF0A7EF5044FA624717A08DA_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Il2CppMetadataObject L_7(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__47 = il2cpp_codegen_get_interface_invoke_data(0, (&L_7), ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))il2cpp_virtual_invoke_data__47.methodPtr)((RuntimeObject*)((RuntimeObject*)L_4)-1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/il2cpp_virtual_invoke_data__47.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// var s = task.source;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_source_0();
		V_0 = (RuntimeObject*)L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return task.result;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_4 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		bool L_5 = (bool)L_4->get_result_1();
		V_2 = (bool)L_5;
		goto IL_0039;
	}

IL_0024:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_6 = V_0;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_7 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int16_t L_8 = (int16_t)L_7->get_token_2();
		NullCheck((RuntimeObject*)L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1), (RuntimeObject*)L_6, (int16_t)L_8);
		V_2 = (bool)L_9;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		bool L_10 = V_2;
		return (bool)L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m09571A7B871B5A3E392C8C0A52EC10E09F311321_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8B4C8BE76FCBA64F3DBDF68F072BEFB9CD83804D_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ex = exception;
		Exception_t * L_2 = ___exception0;
		__this->set_ex_1(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		Exception_t * L_4 = ___exception0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< Exception_t * >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>::SetException(System.Exception) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (Exception_t *)L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9D452EABBB93A95A5F29C95086EF751776557834_gshared_inline (AsyncUniTaskMethodBuilder_1_t3EF9760ED815843F65D14B3102513E2C655EB34A * __this, Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___result0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.result = result;
		Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_2 = ___result0;
		__this->set_result_2(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_4 = ___result0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>::SetResult(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E )L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mA58305DF8CF25694959685881BC16A2E81FE3C26_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Int64>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Il2CppMetadataObject L_7(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__47 = il2cpp_codegen_get_interface_invoke_data(0, (&L_7), ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))il2cpp_virtual_invoke_data__47.methodPtr)((RuntimeObject*)((RuntimeObject*)L_4)-1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/il2cpp_virtual_invoke_data__47.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m07B58B3AF4A9FF15D350B3DE79387D840A89D6D8_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Int64>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m1F30DE574A21127628D138BB0AE5F666BAE2491F_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ex = exception;
		Exception_t * L_2 = ___exception0;
		__this->set_ex_1(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		Exception_t * L_4 = ___exception0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< Exception_t * >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Int64>::SetException(System.Exception) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (Exception_t *)L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m0BCD51B28BEF5F700ADA12C36EEADB97BF408F5A_gshared_inline (AsyncUniTaskMethodBuilder_1_t6755468B9D56318AEC295782892AA4625DD2DC9E * __this, int64_t ___result0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.result = result;
		int64_t L_2 = ___result0;
		__this->set_result_2(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		int64_t L_4 = ___result0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< int64_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Int64>::SetResult(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (int64_t)L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_m3E4C2AB3AC91C4BF0EC7B54082817D2E2A1ED36A_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Single>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Il2CppMetadataObject L_7(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__47 = il2cpp_codegen_get_interface_invoke_data(0, (&L_7), ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))il2cpp_virtual_invoke_data__47.methodPtr)((RuntimeObject*)((RuntimeObject*)L_4)-1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/il2cpp_virtual_invoke_data__47.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_mBA3250A2EE036B6C60FBCA21D72515DFEFF8DE3C_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Single>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_5);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m3D44F9BCEA4C9B0E222572BF80643FD6CA7DD3F0_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ex = exception;
		Exception_t * L_2 = ___exception0;
		__this->set_ex_1(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		Exception_t * L_4 = ___exception0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< Exception_t * >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Single>::SetException(System.Exception) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (Exception_t *)L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mF0BF63FD04395E40B03FD733C7C38094213F1759_gshared_inline (AsyncUniTaskMethodBuilder_1_t8AAB4D3EC45A7BD9581E3E401D12ED3BD98B9435 * __this, float ___result0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.result = result;
		float L_2 = ___result0;
		__this->set_result_2(L_2);
		goto IL_0028;
	}

IL_0019:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_runnerPromise_0();
		float L_4 = ___result0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Single>::SetResult(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_3, (float)L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_value_0();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_gshared_inline (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method)
{
	{
		// public short Version => version;
		int16_t L_0 = (int16_t)__this->get_version_2();
		return (int16_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method)
{
	{
		// this.source = source;
		RuntimeObject* L_0 = ___source0;
		__this->set_source_0(L_0);
		// this.token = token;
		int16_t L_1 = ___token1;
		__this->set_token_2(L_1);
		// this.result = default;
		bool* L_2 = (bool*)__this->get_address_of_result_1();
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * ___task0, const RuntimeMethod* method)
{
	{
		// this.task = task;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = ___task0;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_1 = (*(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_0);
		__this->set_task_0(L_1);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->get_source_2();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		V_1 = 1;
		goto IL_0026;
	}

IL_0012:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_2 = __this->get_source_2();
		int16_t L_3 = __this->get_token_3();
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline (int32_t ___status0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (task.source == null)
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		RuntimeObject* L_1 = L_0->get_source_2();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// continuation();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_001e:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_4 = __this->get_address_of_task_0();
		RuntimeObject* L_5 = L_4->get_source_2();
		IL2CPP_RUNTIME_CLASS_INIT(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_6 = ((AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var))->get_InvokeContinuationDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ___continuation0;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_8 = __this->get_address_of_task_0();
		int16_t L_9 = L_8->get_token_3();
		NullCheck(L_5);
		InterfaceActionInvoker3< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_9);
	}

IL_0042:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * ___task0, const RuntimeMethod* method)
{
	{
		// this.task = task;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = ___task0;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_1 = (*(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)L_0);
		__this->set_task_0(L_1);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_source_0();
		int16_t L_2 = (int16_t)__this->get_token_2();
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (int16_t)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
