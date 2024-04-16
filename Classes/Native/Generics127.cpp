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
// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2;
// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821;
// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t30122F05240535945561D738F3AF611502E5DE01;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04;
// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>
struct IUniTaskAsyncEnumerable_1_t76F734FFBBB672621952FB7D972DA03E7C54E217;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>
struct IUniTaskAsyncEnumerator_1_t711589DAACE9E9664123333C9E304D532665F401;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_t35BC53B57A9D4ACCD139841E4165831832EC7874;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_t7CBA21A83BAD1BFC13F28E80F8359A49853FE53D;
// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F;
// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70;
// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E;
// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
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
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t61814B32A0DB1B5436EC924DB47F803211FED095;
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

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t61814B32A0DB1B5436EC924DB47F803211FED095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwaitWithCancellation_MoveNext_mB392178DEDDA374BB51EF427E829B809C747C411_RuntimeMethod_var;
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


// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject * ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950, ___result_1)); }
	inline RuntimeObject * get_result_1() const { return ___result_1; }
	inline RuntimeObject ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(RuntimeObject * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t * ___ex_1;

public:
	inline static int32_t get_offset_of_runnerPromise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6, ___runnerPromise_0)); }
	inline RuntimeObject* get_runnerPromise_0() const { return ___runnerPromise_0; }
	inline RuntimeObject** get_address_of_runnerPromise_0() { return &___runnerPromise_0; }
	inline void set_runnerPromise_0(RuntimeObject* value)
	{
		___runnerPromise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerPromise_0), (void*)value);
	}

	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6, ___ex_1)); }
	inline Exception_t * get_ex_1() const { return ___ex_1; }
	inline Exception_t ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(Exception_t * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ex_1), (void*)value);
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


// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E 
{
public:
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E, ___task_0)); }
	inline UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  get_task_0() const { return ___task_0; }
	inline UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_1), (void*)NULL);
		#endif
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

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776, ___U3CU3E4__this_2)); }
	inline _Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline _Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776, ___U3CU3Eu__1_3)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441, ___U3CU3E4__this_2)); }
	inline _Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline _Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441, ___U3CU3Eu__1_3)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>4__this
	_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA, ___U3CU3E4__this_2)); }
	inline _ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline _ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA, ___U3CU3Eu__1_3)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>4__this
	_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795, ___U3CU3E4__this_2)); }
	inline _ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline _ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795, ___U3CU3Eu__1_3)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNextAction_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject * ___U3CCurrentU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_2() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___predicate_2)); }
	inline Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * get_predicate_2() const { return ___predicate_2; }
	inline Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 ** get_address_of_predicate_2() { return &___predicate_2; }
	inline void set_predicate_2(Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * value)
	{
		___predicate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_6() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___awaiter_6)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_awaiter_6() const { return ___awaiter_6; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_awaiter_6() { return &___awaiter_6; }
	inline void set_awaiter_6(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___awaiter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___awaiter_6))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_awaiter2_7() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___awaiter2_7)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_awaiter2_7() const { return ___awaiter2_7; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_awaiter2_7() { return &___awaiter2_7; }
	inline void set_awaiter2_7(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___awaiter2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_moveNextAction_8() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___moveNextAction_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNextAction_8() const { return ___moveNextAction_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNextAction_8() { return &___moveNextAction_8; }
	inline void set_moveNextAction_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNextAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNextAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F, ___U3CCurrentU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CCurrentU3Ek__BackingField_9() const { return ___U3CCurrentU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CCurrentU3Ek__BackingField_9() { return &___U3CCurrentU3Ek__BackingField_9; }
	inline void set_U3CCurrentU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CCurrentU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_9), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNextAction_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::index
	int32_t ___index_9;
	// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject * ___U3CCurrentU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_2() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___predicate_2)); }
	inline Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * get_predicate_2() const { return ___predicate_2; }
	inline Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 ** get_address_of_predicate_2() { return &___predicate_2; }
	inline void set_predicate_2(Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * value)
	{
		___predicate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_6() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___awaiter_6)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_awaiter_6() const { return ___awaiter_6; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_awaiter_6() { return &___awaiter_6; }
	inline void set_awaiter_6(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___awaiter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___awaiter_6))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_awaiter2_7() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___awaiter2_7)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_awaiter2_7() const { return ___awaiter2_7; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_awaiter2_7() { return &___awaiter2_7; }
	inline void set_awaiter2_7(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___awaiter2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_moveNextAction_8() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___moveNextAction_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNextAction_8() const { return ___moveNextAction_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNextAction_8() { return &___moveNextAction_8; }
	inline void set_moveNextAction_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNextAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNextAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_index_9() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___index_9)); }
	inline int32_t get_index_9() const { return ___index_9; }
	inline int32_t* get_address_of_index_9() { return &___index_9; }
	inline void set_index_9(int32_t value)
	{
		___index_9 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF, ___U3CCurrentU3Ek__BackingField_10)); }
	inline RuntimeObject * get_U3CCurrentU3Ek__BackingField_10() const { return ___U3CCurrentU3Ek__BackingField_10; }
	inline RuntimeObject ** get_address_of_U3CCurrentU3Ek__BackingField_10() { return &___U3CCurrentU3Ek__BackingField_10; }
	inline void set_U3CCurrentU3Ek__BackingField_10(RuntimeObject * value)
	{
		___U3CCurrentU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_10), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_t30122F05240535945561D738F3AF611502E5DE01 * ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___U3CCurrentU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_first_3() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___first_3)); }
	inline RuntimeObject* get_first_3() const { return ___first_3; }
	inline RuntimeObject** get_address_of_first_3() { return &___first_3; }
	inline void set_first_3(RuntimeObject* value)
	{
		___first_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_3), (void*)value);
	}

	inline static int32_t get_offset_of_second_4() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___second_4)); }
	inline RuntimeObject* get_second_4() const { return ___second_4; }
	inline RuntimeObject** get_address_of_second_4() { return &___second_4; }
	inline void set_second_4(RuntimeObject* value)
	{
		___second_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___resultSelector_5)); }
	inline Func_3_t30122F05240535945561D738F3AF611502E5DE01 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline Func_3_t30122F05240535945561D738F3AF611502E5DE01 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(Func_3_t30122F05240535945561D738F3AF611502E5DE01 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___cancellationToken_6)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_6))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_firstEnumerator_7() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___firstEnumerator_7)); }
	inline RuntimeObject* get_firstEnumerator_7() const { return ___firstEnumerator_7; }
	inline RuntimeObject** get_address_of_firstEnumerator_7() { return &___firstEnumerator_7; }
	inline void set_firstEnumerator_7(RuntimeObject* value)
	{
		___firstEnumerator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstEnumerator_7), (void*)value);
	}

	inline static int32_t get_offset_of_secondEnumerator_8() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___secondEnumerator_8)); }
	inline RuntimeObject* get_secondEnumerator_8() const { return ___secondEnumerator_8; }
	inline RuntimeObject** get_address_of_secondEnumerator_8() { return &___secondEnumerator_8; }
	inline void set_secondEnumerator_8(RuntimeObject* value)
	{
		___secondEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondEnumerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_firstAwaiter_9() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___firstAwaiter_9)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_firstAwaiter_9() const { return ___firstAwaiter_9; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_firstAwaiter_9() { return &___firstAwaiter_9; }
	inline void set_firstAwaiter_9(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___firstAwaiter_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondAwaiter_10() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___secondAwaiter_10)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_secondAwaiter_10() const { return ___secondAwaiter_10; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_secondAwaiter_10() { return &___secondAwaiter_10; }
	inline void set_secondAwaiter_10(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___secondAwaiter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA, ___U3CCurrentU3Ek__BackingField_11)); }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  get_U3CCurrentU3Ek__BackingField_11() const { return ___U3CCurrentU3Ek__BackingField_11; }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * get_address_of_U3CCurrentU3Ek__BackingField_11() { return &___U3CCurrentU3Ek__BackingField_11; }
	inline void set_U3CCurrentU3Ek__BackingField_11(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		___U3CCurrentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentU3Ek__BackingField_11))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentU3Ek__BackingField_11))->___Item2_1), (void*)NULL);
		#endif
	}
};

struct _Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___secondMoveNextCoreDelegate_2;

public:
	inline static int32_t get_offset_of_firstMoveNextCoreDelegate_1() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields, ___firstMoveNextCoreDelegate_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstMoveNextCoreDelegate_1() const { return ___firstMoveNextCoreDelegate_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstMoveNextCoreDelegate_1() { return &___firstMoveNextCoreDelegate_1; }
	inline void set_firstMoveNextCoreDelegate_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstMoveNextCoreDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstMoveNextCoreDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_secondMoveNextCoreDelegate_2() { return static_cast<int32_t>(offsetof(_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields, ___secondMoveNextCoreDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_secondMoveNextCoreDelegate_2() const { return ___secondMoveNextCoreDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_secondMoveNextCoreDelegate_2() { return &___secondMoveNextCoreDelegate_2; }
	inline void set_secondMoveNextCoreDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___secondMoveNextCoreDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondMoveNextCoreDelegate_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	RuntimeObject * ___U3CCurrentU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_first_3() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___first_3)); }
	inline RuntimeObject* get_first_3() const { return ___first_3; }
	inline RuntimeObject** get_address_of_first_3() { return &___first_3; }
	inline void set_first_3(RuntimeObject* value)
	{
		___first_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_3), (void*)value);
	}

	inline static int32_t get_offset_of_second_4() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___second_4)); }
	inline RuntimeObject* get_second_4() const { return ___second_4; }
	inline RuntimeObject** get_address_of_second_4() { return &___second_4; }
	inline void set_second_4(RuntimeObject* value)
	{
		___second_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___resultSelector_5)); }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___cancellationToken_6)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_6))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_firstEnumerator_7() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___firstEnumerator_7)); }
	inline RuntimeObject* get_firstEnumerator_7() const { return ___firstEnumerator_7; }
	inline RuntimeObject** get_address_of_firstEnumerator_7() { return &___firstEnumerator_7; }
	inline void set_firstEnumerator_7(RuntimeObject* value)
	{
		___firstEnumerator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstEnumerator_7), (void*)value);
	}

	inline static int32_t get_offset_of_secondEnumerator_8() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___secondEnumerator_8)); }
	inline RuntimeObject* get_secondEnumerator_8() const { return ___secondEnumerator_8; }
	inline RuntimeObject** get_address_of_secondEnumerator_8() { return &___secondEnumerator_8; }
	inline void set_secondEnumerator_8(RuntimeObject* value)
	{
		___secondEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondEnumerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_firstAwaiter_9() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___firstAwaiter_9)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_firstAwaiter_9() const { return ___firstAwaiter_9; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_firstAwaiter_9() { return &___firstAwaiter_9; }
	inline void set_firstAwaiter_9(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___firstAwaiter_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondAwaiter_10() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___secondAwaiter_10)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_secondAwaiter_10() const { return ___secondAwaiter_10; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_secondAwaiter_10() { return &___secondAwaiter_10; }
	inline void set_secondAwaiter_10(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___secondAwaiter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70, ___U3CCurrentU3Ek__BackingField_11)); }
	inline RuntimeObject * get_U3CCurrentU3Ek__BackingField_11() const { return ___U3CCurrentU3Ek__BackingField_11; }
	inline RuntimeObject ** get_address_of_U3CCurrentU3Ek__BackingField_11() { return &___U3CCurrentU3Ek__BackingField_11; }
	inline void set_U3CCurrentU3Ek__BackingField_11(RuntimeObject * value)
	{
		___U3CCurrentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_11), (void*)value);
	}
};

struct _Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___secondMoveNextCoreDelegate_2;

public:
	inline static int32_t get_offset_of_firstMoveNextCoreDelegate_1() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields, ___firstMoveNextCoreDelegate_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstMoveNextCoreDelegate_1() const { return ___firstMoveNextCoreDelegate_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstMoveNextCoreDelegate_1() { return &___firstMoveNextCoreDelegate_1; }
	inline void set_firstMoveNextCoreDelegate_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstMoveNextCoreDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstMoveNextCoreDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_secondMoveNextCoreDelegate_2() { return static_cast<int32_t>(offsetof(_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields, ___secondMoveNextCoreDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_secondMoveNextCoreDelegate_2() const { return ___secondMoveNextCoreDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_secondMoveNextCoreDelegate_2() { return &___secondMoveNextCoreDelegate_2; }
	inline void set_secondMoveNextCoreDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___secondMoveNextCoreDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondMoveNextCoreDelegate_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::second
	RuntimeObject* ___second_5;
	// System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultSelector
	Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaiter
	Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::<Current>k__BackingField
	RuntimeObject * ___U3CCurrentU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_first_4() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___first_4)); }
	inline RuntimeObject* get_first_4() const { return ___first_4; }
	inline RuntimeObject** get_address_of_first_4() { return &___first_4; }
	inline void set_first_4(RuntimeObject* value)
	{
		___first_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_4), (void*)value);
	}

	inline static int32_t get_offset_of_second_5() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___second_5)); }
	inline RuntimeObject* get_second_5() const { return ___second_5; }
	inline RuntimeObject** get_address_of_second_5() { return &___second_5; }
	inline void set_second_5(RuntimeObject* value)
	{
		___second_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___resultSelector_6)); }
	inline Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * get_resultSelector_6() const { return ___resultSelector_6; }
	inline Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_7() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___cancellationToken_7)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_7() const { return ___cancellationToken_7; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_7() { return &___cancellationToken_7; }
	inline void set_cancellationToken_7(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_7))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_firstEnumerator_8() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___firstEnumerator_8)); }
	inline RuntimeObject* get_firstEnumerator_8() const { return ___firstEnumerator_8; }
	inline RuntimeObject** get_address_of_firstEnumerator_8() { return &___firstEnumerator_8; }
	inline void set_firstEnumerator_8(RuntimeObject* value)
	{
		___firstEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstEnumerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_secondEnumerator_9() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___secondEnumerator_9)); }
	inline RuntimeObject* get_secondEnumerator_9() const { return ___secondEnumerator_9; }
	inline RuntimeObject** get_address_of_secondEnumerator_9() { return &___secondEnumerator_9; }
	inline void set_secondEnumerator_9(RuntimeObject* value)
	{
		___secondEnumerator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondEnumerator_9), (void*)value);
	}

	inline static int32_t get_offset_of_firstAwaiter_10() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___firstAwaiter_10)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_firstAwaiter_10() const { return ___firstAwaiter_10; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_firstAwaiter_10() { return &___firstAwaiter_10; }
	inline void set_firstAwaiter_10(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___firstAwaiter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondAwaiter_11() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___secondAwaiter_11)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_secondAwaiter_11() const { return ___secondAwaiter_11; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_secondAwaiter_11() { return &___secondAwaiter_11; }
	inline void set_secondAwaiter_11(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___secondAwaiter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_resultAwaiter_12() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___resultAwaiter_12)); }
	inline Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  get_resultAwaiter_12() const { return ___resultAwaiter_12; }
	inline Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * get_address_of_resultAwaiter_12() { return &___resultAwaiter_12; }
	inline void set_resultAwaiter_12(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  value)
	{
		___resultAwaiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E, ___U3CCurrentU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CCurrentU3Ek__BackingField_13() const { return ___U3CCurrentU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CCurrentU3Ek__BackingField_13() { return &___U3CCurrentU3Ek__BackingField_13; }
	inline void set_U3CCurrentU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CCurrentU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_13), (void*)value);
	}
};

struct _ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaitCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___resultAwaitCoreDelegate_3;

public:
	inline static int32_t get_offset_of_firstMoveNextCoreDelegate_1() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields, ___firstMoveNextCoreDelegate_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstMoveNextCoreDelegate_1() const { return ___firstMoveNextCoreDelegate_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstMoveNextCoreDelegate_1() { return &___firstMoveNextCoreDelegate_1; }
	inline void set_firstMoveNextCoreDelegate_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstMoveNextCoreDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstMoveNextCoreDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_secondMoveNextCoreDelegate_2() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields, ___secondMoveNextCoreDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_secondMoveNextCoreDelegate_2() const { return ___secondMoveNextCoreDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_secondMoveNextCoreDelegate_2() { return &___secondMoveNextCoreDelegate_2; }
	inline void set_secondMoveNextCoreDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___secondMoveNextCoreDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondMoveNextCoreDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_resultAwaitCoreDelegate_3() { return static_cast<int32_t>(offsetof(_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields, ___resultAwaitCoreDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_resultAwaitCoreDelegate_3() const { return ___resultAwaitCoreDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_resultAwaitCoreDelegate_3() { return &___resultAwaitCoreDelegate_3; }
	inline void set_resultAwaitCoreDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___resultAwaitCoreDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultAwaitCoreDelegate_3), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F  : public MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF
{
public:
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::second
	RuntimeObject* ___second_5;
	// System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultSelector
	Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondAwaiter
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaiter
	Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject * ___U3CCurrentU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_first_4() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___first_4)); }
	inline RuntimeObject* get_first_4() const { return ___first_4; }
	inline RuntimeObject** get_address_of_first_4() { return &___first_4; }
	inline void set_first_4(RuntimeObject* value)
	{
		___first_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___first_4), (void*)value);
	}

	inline static int32_t get_offset_of_second_5() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___second_5)); }
	inline RuntimeObject* get_second_5() const { return ___second_5; }
	inline RuntimeObject** get_address_of_second_5() { return &___second_5; }
	inline void set_second_5(RuntimeObject* value)
	{
		___second_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___second_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___resultSelector_6)); }
	inline Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * get_resultSelector_6() const { return ___resultSelector_6; }
	inline Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_7() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___cancellationToken_7)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_7() const { return ___cancellationToken_7; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_7() { return &___cancellationToken_7; }
	inline void set_cancellationToken_7(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_7))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_firstEnumerator_8() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___firstEnumerator_8)); }
	inline RuntimeObject* get_firstEnumerator_8() const { return ___firstEnumerator_8; }
	inline RuntimeObject** get_address_of_firstEnumerator_8() { return &___firstEnumerator_8; }
	inline void set_firstEnumerator_8(RuntimeObject* value)
	{
		___firstEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstEnumerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_secondEnumerator_9() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___secondEnumerator_9)); }
	inline RuntimeObject* get_secondEnumerator_9() const { return ___secondEnumerator_9; }
	inline RuntimeObject** get_address_of_secondEnumerator_9() { return &___secondEnumerator_9; }
	inline void set_secondEnumerator_9(RuntimeObject* value)
	{
		___secondEnumerator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondEnumerator_9), (void*)value);
	}

	inline static int32_t get_offset_of_firstAwaiter_10() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___firstAwaiter_10)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_firstAwaiter_10() const { return ___firstAwaiter_10; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_firstAwaiter_10() { return &___firstAwaiter_10; }
	inline void set_firstAwaiter_10(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___firstAwaiter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondAwaiter_11() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___secondAwaiter_11)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_secondAwaiter_11() const { return ___secondAwaiter_11; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_secondAwaiter_11() { return &___secondAwaiter_11; }
	inline void set_secondAwaiter_11(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___secondAwaiter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_resultAwaiter_12() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___resultAwaiter_12)); }
	inline Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  get_resultAwaiter_12() const { return ___resultAwaiter_12; }
	inline Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * get_address_of_resultAwaiter_12() { return &___resultAwaiter_12; }
	inline void set_resultAwaiter_12(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  value)
	{
		___resultAwaiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F, ___U3CCurrentU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CCurrentU3Ek__BackingField_13() const { return ___U3CCurrentU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CCurrentU3Ek__BackingField_13() { return &___U3CCurrentU3Ek__BackingField_13; }
	inline void set_U3CCurrentU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CCurrentU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_13), (void*)value);
	}
};

struct _ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondMoveNextCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaitCoreDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___resultAwaitCoreDelegate_3;

public:
	inline static int32_t get_offset_of_firstMoveNextCoreDelegate_1() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields, ___firstMoveNextCoreDelegate_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstMoveNextCoreDelegate_1() const { return ___firstMoveNextCoreDelegate_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstMoveNextCoreDelegate_1() { return &___firstMoveNextCoreDelegate_1; }
	inline void set_firstMoveNextCoreDelegate_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstMoveNextCoreDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstMoveNextCoreDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_secondMoveNextCoreDelegate_2() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields, ___secondMoveNextCoreDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_secondMoveNextCoreDelegate_2() const { return ___secondMoveNextCoreDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_secondMoveNextCoreDelegate_2() { return &___secondMoveNextCoreDelegate_2; }
	inline void set_secondMoveNextCoreDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___secondMoveNextCoreDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondMoveNextCoreDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_resultAwaitCoreDelegate_3() { return static_cast<int32_t>(offsetof(_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields, ___resultAwaitCoreDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_resultAwaitCoreDelegate_3() const { return ___resultAwaitCoreDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_resultAwaitCoreDelegate_3() { return &___resultAwaitCoreDelegate_3; }
	inline void set_resultAwaitCoreDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___resultAwaitCoreDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultAwaitCoreDelegate_3), (void*)value);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t30122F05240535945561D738F3AF611502E5DE01  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method);
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_gshared_inline (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<!0>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// !0 Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, Exception_t * ___error0, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, bool ___result0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<!!0>,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_gshared (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter0, bool* ___result1, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_gshared (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776_m1A41B9F9DD312D4BFB09883E23F4E59C5706ECA7_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441_mEAF6AD4E10519491F260FFD772C817AE0A82490D_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 * ___stateMachine0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_gshared_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795_mCC327E563815876C83381F0FA2B6D9CEA66410CA_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 * ___stateMachine0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA_m82E479F2A2DC25F136CFD6FBADDC5E42DD324211_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA * ___stateMachine0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m983CFC8CEB076156A5F3E4EB2816D640237B1DD7_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF0EB2FE01F6C4C98E11F3607FC0D8B8B0E2262CB_gshared_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method);

// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
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
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_gshared_inline)(__this, ___continuation0, method);
}
// !0 Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, const RuntimeMethod*))Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, Exception_t *, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_gshared)(__this, ___error0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(!0)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5 (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_gshared)(__this, ___result0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<!!0>,!!0&)
inline bool MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971 (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___awaiter0, bool* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C , bool*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_gshared)(__this, ___awaiter0, ___result1, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4 (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_gshared)(__this, ___cancellationToken0, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline (const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(!!0&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776_m1A41B9F9DD312D4BFB09883E23F4E59C5706ECA7_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *, U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776_m1A41B9F9DD312D4BFB09883E23F4E59C5706ECA7_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(!!0&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441_mEAF6AD4E10519491F260FFD772C817AE0A82490D_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *, U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441_mEAF6AD4E10519491F260FFD772C817AE0A82490D_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
inline Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  (*) (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *, const RuntimeMethod*))UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *, const RuntimeMethod*))Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(!!0&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795_mCC327E563815876C83381F0FA2B6D9CEA66410CA_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *, U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795_mCC327E563815876C83381F0FA2B6D9CEA66410CA_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(!!0&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA_m82E479F2A2DC25F136CFD6FBADDC5E42DD324211_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *, U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA_m82E479F2A2DC25F136CFD6FBADDC5E42DD324211_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  UniTask_FromException_mE3248F69E48A9F3907647E88521AA80036FAE399 (Exception_t * ___ex0, const RuntimeMethod* method);
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
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m983CFC8CEB076156A5F3E4EB2816D640237B1DD7_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *, UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *, const RuntimeMethod*))Awaiter__ctor_m983CFC8CEB076156A5F3E4EB2816D640237B1DD7_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mF0EB2FE01F6C4C98E11F3607FC0D8B8B0E2262CB_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *, const RuntimeMethod*))UniTask_1_get_Status_mF0EB2FE01F6C4C98E11F3607FC0D8B8B0E2262CB_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m7AB8FA1AC423A4EE88A84EF40C69DAD2174FD3C4_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, RuntimeObject* ___source0, Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * ___predicate1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->set_state_4((-1));
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___source0;
		__this->set_source_1(L_0);
		// this.predicate = predicate;
		Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * L_1 = ___predicate1;
		__this->set_predicate_2(L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken2;
		__this->set_cancellationToken_3(L_2);
		// this.moveNextAction = MoveNext;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)), /*hidden argument*/NULL);
		__this->set_moveNextAction_8(L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WhereAwaitWithCancellation_get_Current_m1246B25B5F01901A90D58482D67D023EEEE3197D_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, const RuntimeMethod* method)
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CCurrentU3Ek__BackingField_9();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_mE58519DF18472960D63960F5DAED31E3874BD7CC_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_9(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _WhereAwaitWithCancellation_MoveNextAsync_m53917FAB19FCC0DB6E5E56AD8580A233AF31A931_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->get_state_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 ));
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_1 = V_0;
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_2 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_2, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// MoveNext();
		NullCheck((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this);
		((  void (*) (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_3 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_3, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_5), (RuntimeObject*)__this, (int16_t)L_4, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_mA42E4A4B904253886F96CCEAA348F1E6ECB1D982_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->get_state_4();
			V_0 = (int32_t)L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)(-1))))
			{
				case 0:
				{
					goto IL_0025;
				}
				case 1:
				{
					goto IL_003c;
				}
				case 2:
				{
					goto IL_007f;
				}
				case 3:
				{
					goto IL_00eb;
				}
			}
		}

IL_0020:
		{
			goto IL_0106;
		}

IL_0025:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_1();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_3();
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
			__this->set_enumerator_5(L_4);
		}

IL_003c:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
			NullCheck((RuntimeObject*)L_5);
			UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_5);
			V_1 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_6;
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_7;
			L_7 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_1), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
			__this->set_awaiter_6(L_7);
			// if (awaiter.IsCompleted)
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_8 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_8, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f;
			}
		}

IL_0062:
		{
			// state = 1;
			__this->set_state_4(1);
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_10 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_moveNextAction_8();
			Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_10, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_11, /*hidden argument*/Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_007f:
		{
			// if (awaiter.GetResult())
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_12 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			bool L_13;
			L_13 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_12, /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00e9;
			}
		}

IL_008c:
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_5();
			NullCheck((RuntimeObject*)L_14);
			RuntimeObject * L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_14);
			NullCheck((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this);
			((  void (*) (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
			// awaiter2 = predicate(Current, cancellationToken).GetAwaiter();
			Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 * L_16 = (Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 *)__this->get_predicate_2();
			NullCheck((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this);
			RuntimeObject * L_17;
			L_17 = ((  RuntimeObject * (*) (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_18 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_3();
			NullCheck((Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 *)L_16);
			UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_19;
			L_19 = ((  UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  (*) (Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 *, RuntimeObject *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_3_tC3CC15C0A852F7DAC4F13DF6FD4E9898F83FF5E2 *)L_16, (RuntimeObject *)L_17, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			V_1 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_19;
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_20;
			L_20 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_1), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
			__this->set_awaiter2_7(L_20);
			// if (awaiter2.IsCompleted)
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_21 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_21, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00eb;
			}
		}

IL_00cf:
		{
			// state = 2;
			__this->set_state_4(2);
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_23 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_24 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_moveNextAction_8();
			Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_23, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_24, /*hidden argument*/Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_00e9:
		{
			// goto DONE;
			goto IL_0120;
		}

IL_00eb:
		{
			// if (awaiter2.GetResult())
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_25 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			bool L_26;
			L_26 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_25, /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
			if (!L_26)
			{
				goto IL_00fa;
			}
		}

IL_00f8:
		{
			// goto CONTINUE;
			goto IL_0136;
		}

IL_00fa:
		{
			// state = 0;
			__this->set_state_4(0);
			// goto REPEAT;
			goto IL_0000;
		}

IL_0106:
		{
			// goto DONE;
			goto IL_0120;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// state = -2;
		__this->set_state_4(((int32_t)-2));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_27 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		Exception_t * L_28 = V_2;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_27, (Exception_t *)L_28, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014b;
	} // end catch (depth: 1)

IL_0120:
	{
		// state = -2;
		__this->set_state_4(((int32_t)-2));
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_30 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_30, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return;
		return;
	}

IL_0136:
	{
		// state = 0;
		__this->set_state_4(0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_32 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_32, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return;
		return;
	}

IL_014b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _WhereAwaitWithCancellation_DisposeAsync_mDFC18A550B9EC187A5C957EF726BAAA1F17875A4_gshared (_WhereAwaitWithCancellation_t6496BE340204F7D41464A5AE65A584BDCB24350F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_0);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_1;
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m4F82A97C0EE68FFF8D0EE91276BE405E006FDCBD_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, RuntimeObject* ___source0, Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * ___predicate1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->set_state_4((-1));
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___source0;
		__this->set_source_1(L_0);
		// this.predicate = predicate;
		Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * L_1 = ___predicate1;
		__this->set_predicate_2(L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken2;
		__this->set_cancellationToken_3(L_2);
		// this.moveNextAction = MoveNext;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)), /*hidden argument*/NULL);
		__this->set_moveNextAction_8(L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WhereAwaitWithCancellation_get_Current_mB417939E4B5D9622DD60657FC07D58BF305F5D06_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, const RuntimeMethod* method)
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CCurrentU3Ek__BackingField_10();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m86FCB8398AEF856495DA3DEAFBD36E7A22EF2147_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_10(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _WhereAwaitWithCancellation_MoveNextAsync_mBE0E860715A4E10F7E85AE1ED5D3703968665C61_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->get_state_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 ));
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_1 = V_0;
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_2 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_2, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// MoveNext();
		NullCheck((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this);
		((  void (*) (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_3 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_3, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_5), (RuntimeObject*)__this, (int16_t)L_4, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_mB392178DEDDA374BB51EF427E829B809C747C411_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwaitWithCancellation_MoveNext_mB392178DEDDA374BB51EF427E829B809C747C411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->get_state_4();
			V_0 = (int32_t)L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)(-1))))
			{
				case 0:
				{
					goto IL_0025;
				}
				case 1:
				{
					goto IL_003c;
				}
				case 2:
				{
					goto IL_007f;
				}
				case 3:
				{
					goto IL_00fc;
				}
			}
		}

IL_0020:
		{
			goto IL_0117;
		}

IL_0025:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->get_source_1();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_3();
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
			__this->set_enumerator_5(L_4);
		}

IL_003c:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
			NullCheck((RuntimeObject*)L_5);
			UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_5);
			V_1 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_6;
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_7;
			L_7 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_1), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
			__this->set_awaiter_6(L_7);
			// if (awaiter.IsCompleted)
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_8 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_8, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f;
			}
		}

IL_0062:
		{
			// state = 1;
			__this->set_state_4(1);
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_10 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_moveNextAction_8();
			Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_10, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_11, /*hidden argument*/Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_007f:
		{
			// if (awaiter.GetResult())
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_12 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter_6();
			bool L_13;
			L_13 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_12, /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00fa;
			}
		}

IL_008c:
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_5();
			NullCheck((RuntimeObject*)L_14);
			RuntimeObject * L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_14);
			NullCheck((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this);
			((  void (*) (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
			// awaiter2 = predicate(Current, checked(index++), cancellationToken).GetAwaiter();
			Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 * L_16 = (Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 *)__this->get_predicate_2();
			NullCheck((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this);
			RuntimeObject * L_17;
			L_17 = ((  RuntimeObject * (*) (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
			int32_t L_18 = (int32_t)__this->get_index_9();
			V_2 = (int32_t)L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwaitWithCancellation_MoveNext_mB392178DEDDA374BB51EF427E829B809C747C411_RuntimeMethod_var);
			__this->set_index_9(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
			int32_t L_20 = V_2;
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_21 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_3();
			NullCheck((Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 *)L_16);
			UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_22;
			L_22 = ((  UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  (*) (Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 *, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_4_t0ACC69C110A0E323AC1AF5AE927DE60D29BDCD04 *)L_16, (RuntimeObject *)L_17, (int32_t)L_20, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			V_1 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_22;
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_23;
			L_23 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_1), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
			__this->set_awaiter2_7(L_23);
			// if (awaiter2.IsCompleted)
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_24 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			bool L_25;
			L_25 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_24, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00fc;
			}
		}

IL_00e0:
		{
			// state = 2;
			__this->set_state_4(2);
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_26 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_27 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_moveNextAction_8();
			Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_26, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_27, /*hidden argument*/Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_00fa:
		{
			// goto DONE;
			goto IL_0131;
		}

IL_00fc:
		{
			// if (awaiter2.GetResult())
			Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_28 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_awaiter2_7();
			bool L_29;
			L_29 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_28, /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
			if (!L_29)
			{
				goto IL_010b;
			}
		}

IL_0109:
		{
			// goto CONTINUE;
			goto IL_0147;
		}

IL_010b:
		{
			// state = 0;
			__this->set_state_4(0);
			// goto REPEAT;
			goto IL_0000;
		}

IL_0117:
		{
			// goto DONE;
			goto IL_0131;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// state = -2;
		__this->set_state_4(((int32_t)-2));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_30 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		Exception_t * L_31 = V_3;
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_30, (Exception_t *)L_31, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015c;
	} // end catch (depth: 1)

IL_0131:
	{
		// state = -2;
		__this->set_state_4(((int32_t)-2));
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_33 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_33, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return;
		return;
	}

IL_0147:
	{
		// state = 0;
		__this->set_state_4(0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_35 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		bool L_36;
		L_36 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_35, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// return;
		return;
	}

IL_015c:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _WhereAwaitWithCancellation_DisposeAsync_m5C14B51D854A183CF85250FD65C42A3EA031C95C_gshared (_WhereAwaitWithCancellation_tC4B2C247AE27D37845472BB7930857C681261EFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_0);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_1;
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
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_mC90734C24D93D2889EB6EA6EEE43B7CB0526FADF_gshared (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * __this, RuntimeObject* ___first0, RuntimeObject* ___second1, Func_3_t30122F05240535945561D738F3AF611502E5DE01 * ___resultSelector2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method)
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___first0;
		__this->set_first_3(L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___second1;
		__this->set_second_4(L_1);
		// this.resultSelector = resultSelector;
		Func_3_t30122F05240535945561D738F3AF611502E5DE01 * L_2 = ___resultSelector2;
		__this->set_resultSelector_5(L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		__this->set_cancellationToken_6(L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  _Zip_get_Current_mAE70AD836D4222B79BA2734ED4E0B1EBB50574AD_gshared (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * __this, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )__this->get_U3CCurrentU3Ek__BackingField_11();
		return (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m433CEA695EFA70D4A67DF8C900D428B2772EA49A_gshared (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___value0, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_11(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _Zip_MoveNextAsync_m47AD187005666094FD73261F87F34119C628D8FB_gshared (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_0 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_0, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_firstEnumerator_7();
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_first_3();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_6();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
		__this->set_firstEnumerator_7(L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_second_4();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_5, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_6);
		__this->set_secondEnumerator_8(L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_firstEnumerator_7();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_8);
		V_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_0), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		__this->set_firstAwaiter_9(L_10);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_11 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_9();
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_11, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_13 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_9();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_14 = ((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_firstMoveNextCoreDelegate_1();
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_13, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_14, (RuntimeObject *)__this, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_15 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_15, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_17), (RuntimeObject*)__this, (int16_t)L_16, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_mE65E9047B818833BDA2A99348A8168D774147BB2_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_Zip)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_1 = V_0;
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_firstAwaiter_9();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_6 = V_0;
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->get_secondEnumerator_8();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_8);
		V_2 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_2), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_secondAwaiter_10(L_10);
		// }
		goto IL_0045;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_12 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_11)->get_address_of_completionSource_0();
		Exception_t * L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_12, (Exception_t *)L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	} // end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_16 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_15->get_address_of_secondAwaiter_10();
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_16, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_20 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_19->get_address_of_secondAwaiter_10();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_21 = ((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_secondMoveNextCoreDelegate_2();
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_22 = V_0;
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_20, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_21, (RuntimeObject *)L_22, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		// }
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_mD59FFA7140E967F38858DD4F5EF39697220B6669_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_Zip)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_1 = V_0;
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_secondAwaiter_10();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_6 = V_0;
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_7 = V_0;
		NullCheck(L_7);
		Func_3_t30122F05240535945561D738F3AF611502E5DE01 * L_8 = (Func_3_t30122F05240535945561D738F3AF611502E5DE01 *)L_7->get_resultSelector_5();
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->get_firstEnumerator_7();
		NullCheck((RuntimeObject*)L_10);
		RuntimeObject * L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_10);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->get_secondEnumerator_8();
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject * L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_13);
		NullCheck((Func_3_t30122F05240535945561D738F3AF611502E5DE01 *)L_8);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_15;
		L_15 = ((  ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  (*) (Func_3_t30122F05240535945561D738F3AF611502E5DE01 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((Func_3_t30122F05240535945561D738F3AF611502E5DE01 *)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		NullCheck((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)L_6);
		((  void (*) (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA *)L_6, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// }
		goto IL_0053;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_17 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_16)->get_address_of_completionSource_0();
		Exception_t * L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_17, (Exception_t *)L_18, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	} // end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_20 = V_0;
		NullCheck(L_20);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_21 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_20->get_address_of_cancellationToken_6();
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_25 = V_0;
		NullCheck(L_25);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_26 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_25->get_cancellationToken_6();
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_26, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		// }
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_29 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_28)->get_address_of_completionSource_0();
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_29, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// }
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_32 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_31)->get_address_of_completionSource_0();
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_32, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _Zip_DisposeAsync_m1F1E15749C9A94CB8ECAF0A595280E49454EDDE7_gshared (_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA * __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776  L_1 = V_0;
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_2 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_1.get_U3CU3Et__builder_1();
		V_1 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_2;
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776_m1A41B9F9DD312D4BFB09883E23F4E59C5706ECA7_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_1), (U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 *)(U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * L_3 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)L_3, /*hidden argument*/NULL);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_m2110725E643A3DE58DF6D258822F2BCF118AEE0A_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_firstMoveNextCoreDelegate_1(L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_Zip_tBE50FFD02D4F58E332DDE9583926210DE3F051DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_secondMoveNextCoreDelegate_2(L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_mC932A2C96A84BCC5F013DD4BEC0A7D95040FBBB8_gshared (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * __this, RuntimeObject* ___first0, RuntimeObject* ___second1, Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___resultSelector2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method)
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___first0;
		__this->set_first_3(L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___second1;
		__this->set_second_4(L_1);
		// this.resultSelector = resultSelector;
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_2 = ___resultSelector2;
		__this->set_resultSelector_5(L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		__this->set_cancellationToken_6(L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _Zip_get_Current_mBDC5CCDF54C483AB3654CCD56223E5FF7F1B5EEE_gshared (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * __this, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CCurrentU3Ek__BackingField_11();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m14A69770963FAA6CC60B22FADD88EB753F30D088_gshared (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_11(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _Zip_MoveNextAsync_mB6FD4F3ACA500B2320817123CA3BA3B083AA92D6_gshared (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_0 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_0, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_firstEnumerator_7();
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_first_3();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_6();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
		__this->set_firstEnumerator_7(L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_second_4();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_5, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_6);
		__this->set_secondEnumerator_8(L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_firstEnumerator_7();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_8);
		V_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_0), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		__this->set_firstAwaiter_9(L_10);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_11 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_9();
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_11, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_13 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_9();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_14 = ((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_firstMoveNextCoreDelegate_1();
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_13, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_14, (RuntimeObject *)__this, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_15 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_15, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_17), (RuntimeObject*)__this, (int16_t)L_16, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m7E9A74ADD2760D4FD9BCD1D7968A88E3CE1B8F39_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_Zip)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_1 = V_0;
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_firstAwaiter_9();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_6 = V_0;
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->get_secondEnumerator_8();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_8);
		V_2 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_2), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_secondAwaiter_10(L_10);
		// }
		goto IL_0045;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_12 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_11)->get_address_of_completionSource_0();
		Exception_t * L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_12, (Exception_t *)L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	} // end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_16 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_15->get_address_of_secondAwaiter_10();
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_16, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_20 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_19->get_address_of_secondAwaiter_10();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_21 = ((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_secondMoveNextCoreDelegate_2();
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_22 = V_0;
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_20, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_21, (RuntimeObject *)L_22, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		// }
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_mBDF9C02C48C5C27B394DC6221F2DAD33FDE33917_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_Zip)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_1 = V_0;
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_secondAwaiter_10();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_6 = V_0;
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_7 = V_0;
		NullCheck(L_7);
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_8 = (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_7->get_resultSelector_5();
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->get_firstEnumerator_7();
		NullCheck((RuntimeObject*)L_10);
		RuntimeObject * L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_10);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->get_secondEnumerator_8();
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject * L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_13);
		NullCheck((Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_8);
		RuntimeObject * L_15;
		L_15 = ((  RuntimeObject * (*) (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		NullCheck((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)L_6);
		((  void (*) (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 *)L_6, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// }
		goto IL_0053;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_17 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_16)->get_address_of_completionSource_0();
		Exception_t * L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_17, (Exception_t *)L_18, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	} // end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_20 = V_0;
		NullCheck(L_20);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_21 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_20->get_address_of_cancellationToken_6();
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_25 = V_0;
		NullCheck(L_25);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_26 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_25->get_cancellationToken_6();
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_26, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		// }
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_29 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_28)->get_address_of_completionSource_0();
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_29, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		// }
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_32 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_31)->get_address_of_completionSource_0();
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_32, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _Zip_DisposeAsync_mDBFF2DF7D007C9AB3FF37E07E2DED00615166343_gshared (_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70 * __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441  L_1 = V_0;
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_2 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_1.get_U3CU3Et__builder_1();
		V_1 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_2;
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441_mEAF6AD4E10519491F260FFD772C817AE0A82490D_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_1), (U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 *)(U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * L_3 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)L_3, /*hidden argument*/NULL);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_m36722B03460C52EBDE3C93C11B872E4ED7BB3A32_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_firstMoveNextCoreDelegate_1(L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_Zip_tB586524F5B0E075276A8307DAD21C3617AA3FD70_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_secondMoveNextCoreDelegate_2(L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_m61C39CE6F1DB0AFDF8D2E271FFB1E683258D701F_gshared (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * __this, RuntimeObject* ___first0, RuntimeObject* ___second1, Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * ___resultSelector2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method)
{
	{
		// public _ZipAwait(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___first0;
		__this->set_first_4(L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___second1;
		__this->set_second_5(L_1);
		// this.resultSelector = resultSelector;
		Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * L_2 = ___resultSelector2;
		__this->set_resultSelector_6(L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		__this->set_cancellationToken_7(L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ZipAwait_get_Current_mB7F045447A7036CDB0CC97D89BC77DA159612F64_gshared (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * __this, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CCurrentU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_mAF605BA49C63DD9A647494493DAC86D21A2427F1_gshared (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_13(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _ZipAwait_MoveNextAsync_m0BC0ECD721C7942776BA4C0AD7E5E7CDAA6E16EA_gshared (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_0 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_0, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_firstEnumerator_8();
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_first_4();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_7();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
		__this->set_firstEnumerator_8(L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_second_5();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_7();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_5, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_6);
		__this->set_secondEnumerator_9(L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_firstEnumerator_8();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_8);
		V_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_0), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		__this->set_firstAwaiter_10(L_10);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_11 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_10();
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_11, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_13 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_10();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_14 = ((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_firstMoveNextCoreDelegate_1();
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_13, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_14, (RuntimeObject *)__this, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_15 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_15, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_17), (RuntimeObject*)__this, (int16_t)L_16, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_m6059A69BB018D1CB42EB65871E80A49B8EA9C59D_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_1 = V_0;
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_firstAwaiter_10();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_6 = V_0;
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->get_secondEnumerator_9();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_8);
		V_2 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_2), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_secondAwaiter_11(L_10);
		// }
		goto IL_0045;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_12 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_11)->get_address_of_completionSource_0();
		Exception_t * L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_12, (Exception_t *)L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	} // end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_16 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_15->get_address_of_secondAwaiter_11();
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_16, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_20 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_19->get_address_of_secondAwaiter_11();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_21 = ((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_secondMoveNextCoreDelegate_2();
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_22 = V_0;
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_20, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_21, (RuntimeObject *)L_22, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		// }
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_mC505EA7AE4FF2572DFADF71977FA3AE82D384435_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_1 = V_0;
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_secondAwaiter_11();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current).GetAwaiter();
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_6 = V_0;
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_7 = V_0;
			NullCheck(L_7);
			Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 * L_8 = (Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 *)L_7->get_resultSelector_6();
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = (RuntimeObject*)L_9->get_firstEnumerator_8();
			NullCheck((RuntimeObject*)L_10);
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_10);
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = (RuntimeObject*)L_12->get_secondEnumerator_9();
			NullCheck((RuntimeObject*)L_13);
			RuntimeObject * L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_13);
			NullCheck((Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 *)L_8);
			UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  L_15;
			L_15 = ((  UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  (*) (Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((Func_3_t0E60DF92D7CBF1BC16155B860D49713AE38FA821 *)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			V_2 = (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 )L_15;
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  L_16;
			L_16 = UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_inline((UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
			NullCheck(L_6);
			L_6->set_resultAwaiter_12(L_16);
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_17 = V_0;
			NullCheck(L_17);
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * L_18 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_17->get_address_of_resultAwaiter_12();
			bool L_19;
			L_19 = Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_inline((Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
			if (!L_19)
			{
				goto IL_005e;
			}
		}

IL_0056:
		{
			// ResultAwaitCore(self);
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
			((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			// }
			goto IL_006f;
		}

IL_005e:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_21 = V_0;
			NullCheck(L_21);
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * L_22 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_21->get_address_of_resultAwaiter_12();
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
			Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_23 = ((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_resultAwaitCoreDelegate_3();
			_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_24 = V_0;
			Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_inline((Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_22, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_23, (RuntimeObject *)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		}

IL_006f:
		{
			// }
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_25 = V_0;
		NullCheck(L_25);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_26 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_25)->get_address_of_completionSource_0();
		Exception_t * L_27 = V_3;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_26, (Exception_t *)L_27, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_29 = V_0;
		NullCheck(L_29);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_30 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_29)->get_address_of_completionSource_0();
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_30, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_m17A4272F8DEB39401A619A45929930AA02AFEB51_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_1 = V_0;
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  L_3 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E )L_2->get_resultAwaiter_12();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *, Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E )L_3, (RuntimeObject **)(RuntimeObject **)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_5 = V_0;
		RuntimeObject * L_6 = V_1;
		NullCheck((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)L_5);
		((  void (*) (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_8 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_7->get_address_of_cancellationToken_7();
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_11 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_10)->get_address_of_completionSource_0();
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_13 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12->get_cancellationToken_7();
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_13, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		// }
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_16 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_15)->get_address_of_completionSource_0();
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_16, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _ZipAwait_DisposeAsync_mAE88522B6E635E85F90EB110866AA9996B8A6B8D_gshared (_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E * __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795  L_1 = V_0;
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_2 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_1.get_U3CU3Et__builder_1();
		V_1 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_2;
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795_mCC327E563815876C83381F0FA2B6D9CEA66410CA_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_1), (U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 *)(U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * L_3 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)L_3, /*hidden argument*/NULL);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_m9C51A13098190734BB8510FF54489B2B6C576F5A_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_firstMoveNextCoreDelegate_1(L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_secondMoveNextCoreDelegate_2(L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_2, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwait_tEF4B6495E9D18B793CF5979F4350360383A1A11E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_resultAwaitCoreDelegate_3(L_2);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_mDE5930D876E980B9A63CA46063DB413775E890AF_gshared (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * __this, RuntimeObject* ___first0, RuntimeObject* ___second1, Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * ___resultSelector2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, const RuntimeMethod* method)
{
	{
		// public _ZipAwaitWithCancellation(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, CancellationToken, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this);
		MoveNextSource__ctor_mF5C753B441B348A43DE69243830C74E2671D770A((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this, /*hidden argument*/NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___first0;
		__this->set_first_4(L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___second1;
		__this->set_second_5(L_1);
		// this.resultSelector = resultSelector;
		Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * L_2 = ___resultSelector2;
		__this->set_resultSelector_6(L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		__this->set_cancellationToken_7(L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ZipAwaitWithCancellation_get_Current_mC76B1F98EE86EB54982AA30AF83E6E5810910DF7_gshared (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * __this, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CCurrentU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_m311B0CABA7D03C9376F44BEA9FCB5F5EA414709E_gshared (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_13(L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  _ZipAwaitWithCancellation_MoveNextAsync_mC3B63C691A1350152BBF23675DFC05C3321AAB91_gshared (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_0 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_0, /*hidden argument*/UniTaskCompletionSourceCore_1_Reset_m7F60B542674A0F9ADCEA4FD552A8A1B83EBFECA3_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_firstEnumerator_8();
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_first_4();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_7();
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3);
		__this->set_firstEnumerator_8(L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_second_5();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )__this->get_cancellationToken_7();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_5, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_6);
		__this->set_secondEnumerator_9(L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_firstEnumerator_8();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_8);
		V_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_0), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		__this->set_firstAwaiter_10(L_10);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_11 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_10();
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_11, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_13 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)__this->get_address_of_firstAwaiter_10();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_14 = ((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)))->get_firstMoveNextCoreDelegate_1();
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_13, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_14, (RuntimeObject *)__this, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_15 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)__this)->get_address_of_completionSource_0();
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_inline((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_15, /*hidden argument*/UniTaskCompletionSourceCore_1_get_Version_m74C3437CB25689801FE49D6515B650BC5F7E6F69_RuntimeMethod_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_inline((&L_17), (RuntimeObject*)__this, (int16_t)L_16, /*hidden argument*/UniTask_1__ctor_mD9934D0A5D74D2B0B303600E97C71231A021ECA4_RuntimeMethod_var);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_mD86856E0D90EB8A7201FB65DBF26CEF45AE70F38_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_1 = V_0;
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_firstAwaiter_10();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_6 = V_0;
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->get_secondEnumerator_9();
		NullCheck((RuntimeObject*)L_8);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_8);
		V_2 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_9;
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
		L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_2), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_secondAwaiter_11(L_10);
		// }
		goto IL_0045;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_12 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_11)->get_address_of_completionSource_0();
		Exception_t * L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_12, (Exception_t *)L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	} // end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_16 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_15->get_address_of_secondAwaiter_11();
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_16, /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_20 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_19->get_address_of_secondAwaiter_11();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_21 = ((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_secondMoveNextCoreDelegate_2();
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_22 = V_0;
		Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)L_20, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_21, (RuntimeObject *)L_22, /*hidden argument*/Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_RuntimeMethod_var);
		// }
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_24 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_23)->get_address_of_completionSource_0();
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_24, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_m4000445BAFE1A2A619E52D6E37449A6B305066F0_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_1 = V_0;
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_3 = (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_2->get_secondAwaiter_11();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_3, (bool*)(bool*)(&V_1), /*hidden argument*/MoveNextSource_TryGetResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBEF2C0E3475EF1C247EF67DEC2771FB15E887971_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current, self.cancellationToken).GetAwaiter();
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_6 = V_0;
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_7 = V_0;
			NullCheck(L_7);
			Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C * L_8 = (Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C *)L_7->get_resultSelector_6();
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = (RuntimeObject*)L_9->get_firstEnumerator_8();
			NullCheck((RuntimeObject*)L_10);
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_10);
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = (RuntimeObject*)L_12->get_secondEnumerator_9();
			NullCheck((RuntimeObject*)L_13);
			RuntimeObject * L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), (RuntimeObject*)L_13);
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_15 = V_0;
			NullCheck(L_15);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_16 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_15->get_cancellationToken_7();
			NullCheck((Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C *)L_8);
			UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  L_17;
			L_17 = ((  UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  (*) (Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C *, RuntimeObject *, RuntimeObject *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((Func_4_tEBDBDC27B815A1C7C3EFA389DB85C6556706C56C *)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_14, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
			V_2 = (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 )L_17;
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  L_18;
			L_18 = UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_inline((UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
			NullCheck(L_6);
			L_6->set_resultAwaiter_12(L_18);
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_19 = V_0;
			NullCheck(L_19);
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * L_20 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_19->get_address_of_resultAwaiter_12();
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_inline((Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
			if (!L_21)
			{
				goto IL_0064;
			}
		}

IL_005c:
		{
			// ResultAwaitCore(self);
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
			((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			// }
			goto IL_0075;
		}

IL_0064:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_23 = V_0;
			NullCheck(L_23);
			Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * L_24 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_23->get_address_of_resultAwaiter_12();
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
			Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_25 = ((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->get_resultAwaitCoreDelegate_3();
			_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_26 = V_0;
			Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_inline((Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)(Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E *)L_24, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_25, (RuntimeObject *)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		}

IL_0075:
		{
			// }
			goto IL_0094;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_28 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_27)->get_address_of_completionSource_0();
		Exception_t * L_29 = V_3;
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_28, (Exception_t *)L_29, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m66C4B08152FB1F82CEDCBB46157ABE717DEF3D1D_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	} // end catch (depth: 1)

IL_0087:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_32 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_31)->get_address_of_completionSource_0();
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_32, (bool)0, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m285D9FD3A1A46DBF370F232B0203C21C9383FBDF_gshared (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_1 = V_0;
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  L_3 = (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E )L_2->get_resultAwaiter_12();
		NullCheck((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *, Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_1, (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E )L_3, (RuntimeObject **)(RuntimeObject **)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_5 = V_0;
		RuntimeObject * L_6 = V_1;
		NullCheck((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)L_5);
		((  void (*) (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_8 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_7->get_address_of_cancellationToken_7();
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_11 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_10)->get_address_of_completionSource_0();
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_13 = (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12->get_cancellationToken_7();
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_13, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetCanceled_m5533EACC8461BC880AAC7E4914D12DD3715876F4_RuntimeMethod_var);
		// }
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * L_16 = (UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)((MoveNextSource_t4801A5C30DB0F37150BC3A32882BF0A3118268DF *)L_15)->get_address_of_completionSource_0();
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5((UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F *)L_16, (bool)1, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m2DA1CE10F28FEA71BBA48D38D9C033CB59EB7EA5_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  _ZipAwaitWithCancellation_DisposeAsync_mCB8CC003512FF5C3586395EE317EA25631A8FFA3_gshared (_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F * __this, const RuntimeMethod* method)
{
	U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA  L_1 = V_0;
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_2 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_1.get_U3CU3Et__builder_1();
		V_1 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 )L_2;
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA_m82E479F2A2DC25F136CFD6FBADDC5E42DD324211_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_1), (U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA *)(U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * L_3 = (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline((AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 *)L_3, /*hidden argument*/NULL);
		return (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F )L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mB3CF5DB9C5B4E975CCD649EDBE694953B520E8D4_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_firstMoveNextCoreDelegate_1(L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_secondMoveNextCoreDelegate_2(L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_2, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((_ZipAwaitWithCancellation_tCE817AA480B7E62A04D74C2BD99A67DD3F3C557F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->set_resultAwaitCoreDelegate_3(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  AsyncUniTaskMethodBuilder_Create_m3A4F0FB097473282B95AC41C41541DDF60CE235D_inline (const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 ));
		AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6  L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  AsyncUniTaskMethodBuilder_get_Task_m2F98008CBCDF840A80869042FF5620775C3E3ED7_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t61814B32A0DB1B5436EC924DB47F803211FED095_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->get_runnerPromise_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->get_runnerPromise_0();
		NullCheck(L_1);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t61814B32A0DB1B5436EC924DB47F803211FED095_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t * L_3 = __this->get_ex_1();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t * L_4 = __this->get_ex_1();
		IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_5;
		L_5 = UniTask_FromException_mE3248F69E48A9F3907647E88521AA80036FAE399(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_6 = ((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var))->get_CompletedTask_1();
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method)
{
	{
		// return new Awaiter(this);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_inline((&L_0), (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline((int32_t)L_1, /*hidden argument*/NULL);
		return (bool)L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mE67D2FC277A0986CD2DBB32DF51964F34A8176EA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_source_0();
		V_0 = (RuntimeObject*)L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___continuation0;
		NullCheck((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_5 = ((AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var))->get_InvokeContinuationDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___continuation0;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_7 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int16_t L_8 = (int16_t)L_7->get_token_2();
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_5, (RuntimeObject *)L_6, (int16_t)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_source_0();
		V_0 = (RuntimeObject*)L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_3 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		bool L_4 = (bool)L_3->get_result_1();
		return (bool)L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_6 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int16_t L_7 = (int16_t)L_6->get_token_2();
		NullCheck((RuntimeObject*)L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1), (RuntimeObject*)L_5, (int16_t)L_7);
		return (bool)L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m0275881DBE877D66930B2A866AAF5318526525B7_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_0 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_source_0();
		V_0 = (RuntimeObject*)L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___continuation0;
		RuntimeObject * L_4 = ___state1;
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, (RuntimeObject *)L_4, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		// }
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_6 = ___continuation0;
		RuntimeObject * L_7 = ___state1;
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * L_8 = (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)__this->get_address_of_task_0();
		int16_t L_9 = (int16_t)L_8->get_token_2();
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_6, (RuntimeObject *)L_7, (int16_t)L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776_m1A41B9F9DD312D4BFB09883E23F4E59C5706ECA7_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_t539A940D5BD11C31AE0B824A9850D82569A40776 * L_0 = ___stateMachine0;
		Il2CppMetadataObject L_1(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__7 = il2cpp_codegen_get_interface_invoke_data(0, (&L_1), IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__7.methodPtr)((RuntimeObject*)((RuntimeObject*)L_0)-1, /*hidden argument*/il2cpp_virtual_invoke_data__7.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441_mEAF6AD4E10519491F260FFD772C817AE0A82490D_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_t552F5B7038D51296F51D0837410F3ACAFB084441 * L_0 = ___stateMachine0;
		Il2CppMetadataObject L_1(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__7 = il2cpp_codegen_get_interface_invoke_data(0, (&L_1), IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__7.methodPtr)((RuntimeObject*)((RuntimeObject*)L_0)-1, /*hidden argument*/il2cpp_virtual_invoke_data__7.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  UniTask_1_GetAwaiter_m3DD34A2A03476AE294981A4BC0A67E81B16846F1_gshared_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method)
{
	{
		// return new Awaiter(this);
		Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m983CFC8CEB076156A5F3E4EB2816D640237B1DD7_inline((&L_0), (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m9038BD19AF4E2AA4C358B5305B2E6C7B40449446_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, const RuntimeMethod* method)
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * L_0 = (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)__this->get_address_of_task_0();
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mF0EB2FE01F6C4C98E11F3607FC0D8B8B0E2262CB_inline((UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline((int32_t)L_1, /*hidden argument*/NULL);
		return (bool)L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m3160DACF07FBCF3C5374BFEE2E9024A2A2E9AFF6_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * L_0 = (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)__this->get_address_of_task_0();
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_source_0();
		V_0 = (RuntimeObject*)L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___continuation0;
		RuntimeObject * L_4 = ___state1;
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, (RuntimeObject *)L_4, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		// }
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_6 = ___continuation0;
		RuntimeObject * L_7 = ___state1;
		UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * L_8 = (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)__this->get_address_of_task_0();
		int16_t L_9 = (int16_t)L_8->get_token_2();
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_6, (RuntimeObject *)L_7, (int16_t)L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795_mCC327E563815876C83381F0FA2B6D9CEA66410CA_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_t09FDF2A6DD69C1EF1CF6E0DD177FA7C91DE16795 * L_0 = ___stateMachine0;
		Il2CppMetadataObject L_1(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__7 = il2cpp_codegen_get_interface_invoke_data(0, (&L_1), IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__7.methodPtr)((RuntimeObject*)((RuntimeObject*)L_0)-1, /*hidden argument*/il2cpp_virtual_invoke_data__7.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA_m82E479F2A2DC25F136CFD6FBADDC5E42DD324211_gshared_inline (AsyncUniTaskMethodBuilder_t495936A951BCC81F447818FAEFB46EA4E1D243F6 * __this, U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_t35BFADECE53CE47F7A60F1EC3FB24F83775DA7AA * L_0 = ___stateMachine0;
		Il2CppMetadataObject L_1(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__7 = il2cpp_codegen_get_interface_invoke_data(0, (&L_1), IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__7.methodPtr)((RuntimeObject*)((RuntimeObject*)L_0)-1, /*hidden argument*/il2cpp_virtual_invoke_data__7.method);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_source_0();
		int16_t L_2 = (int16_t)__this->get_token_2();
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (int16_t)L_2);
		return (int32_t)L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m983CFC8CEB076156A5F3E4EB2816D640237B1DD7_gshared_inline (Awaiter_t83E0B7D20ABAC7B4400B113009380440D17DB31E * __this, UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * ___task0, const RuntimeMethod* method)
{
	{
		// this.task = task;
		UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * L_0 = ___task0;
		UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  L_1 = (*(UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 *)L_0);
		__this->set_task_0(L_1);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF0EB2FE01F6C4C98E11F3607FC0D8B8B0E2262CB_gshared_inline (UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_source_0();
		int16_t L_2 = (int16_t)__this->get_token_2();
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (int16_t)L_2);
		return (int32_t)L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
