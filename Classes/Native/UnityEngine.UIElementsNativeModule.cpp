#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B;
// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t9E261FB0B46CAF38E2418ACF956B7E8CC71F488E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_mCF63312D71E6D0DF61C3B5DBD4312262100DA538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_m07C963C5FA5988382EF01EB5FC25F19067A15A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7D18733187A931E9811113AAEA88D52F26128295 
{
public:

public:
};


// System.Object


// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883  : public RuntimeObject
{
public:

public:
};

struct EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields
{
public:
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields, ___Instance_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Instance_0() const { return ___Instance_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____items_1)); }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* get__items_1() const { return ____items_1; }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_StaticFields, ____emptyArray_5)); }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Yoga.MeasureOutput
struct MeasureOutput_t42F09B441A88CBDC1B9621BF93F8C269FA602882  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Yoga.Native
struct Native_tFAF7EACFD900864BAD8C4F8341331AA9D5B1D476  : public RuntimeObject
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


// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578  : public RuntimeObject
{
public:

public:
};

struct UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields
{
public:
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanelsCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___RepaintOverlayPanelsCallback_0;
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanelsCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___UpdateRuntimePanelsCallback_1;

public:
	inline static int32_t get_offset_of_RepaintOverlayPanelsCallback_0() { return static_cast<int32_t>(offsetof(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields, ___RepaintOverlayPanelsCallback_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_RepaintOverlayPanelsCallback_0() const { return ___RepaintOverlayPanelsCallback_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_RepaintOverlayPanelsCallback_0() { return &___RepaintOverlayPanelsCallback_0; }
	inline void set_RepaintOverlayPanelsCallback_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___RepaintOverlayPanelsCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RepaintOverlayPanelsCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateRuntimePanelsCallback_1() { return static_cast<int32_t>(offsetof(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields, ___UpdateRuntimePanelsCallback_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_UpdateRuntimePanelsCallback_1() const { return ___UpdateRuntimePanelsCallback_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_UpdateRuntimePanelsCallback_1() { return &___UpdateRuntimePanelsCallback_1; }
	inline void set_UpdateRuntimePanelsCallback_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___UpdateRuntimePanelsCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateRuntimePanelsCallback_1), (void*)value);
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

// UnityEngine.Yoga.YogaConstants
struct YogaConstants_tA26C6892CD5423C2E8AB93C8931EB3C078E9DAD9  : public RuntimeObject
{
public:

public:
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.Yoga.YogaSize
struct YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
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

// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// UnityEngine.Yoga.YogaAlign
struct YogaAlign_t492448AAD39D37F9D061967E5493A1DBA224CEFF 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaAlign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaAlign_t492448AAD39D37F9D061967E5493A1DBA224CEFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaConfig::_ygConfig
	intptr_t ____ygConfig_1;

public:
	inline static int32_t get_offset_of__ygConfig_1() { return static_cast<int32_t>(offsetof(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7, ____ygConfig_1)); }
	inline intptr_t get__ygConfig_1() const { return ____ygConfig_1; }
	inline intptr_t* get_address_of__ygConfig_1() { return &____ygConfig_1; }
	inline void set__ygConfig_1(intptr_t value)
	{
		____ygConfig_1 = value;
	}
};

struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields
{
public:
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaConfig::Default
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields, ___Default_0)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get_Default_0() const { return ___Default_0; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// UnityEngine.Yoga.YogaDisplay
struct YogaDisplay_t8335E2F4F621C2ABBBAD1839D03FB9FA6B1E56FD 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaDisplay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaDisplay_t8335E2F4F621C2ABBBAD1839D03FB9FA6B1E56FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaEdge
struct YogaEdge_t5CF683D9A96DB5A9C20D24F4F47320D68097C624 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaEdge_t5CF683D9A96DB5A9C20D24F4F47320D68097C624, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaFlexDirection
struct YogaFlexDirection_tB9A66F29473C1ADB22611BD5E13BDF6BDD9BD4DF 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaFlexDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaFlexDirection_tB9A66F29473C1ADB22611BD5E13BDF6BDD9BD4DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaJustify
struct YogaJustify_t24745696EE7E190DE8F2EAC7FDC0E5EED4430F6A 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaJustify::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaJustify_t24745696EE7E190DE8F2EAC7FDC0E5EED4430F6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaMeasureMode
struct YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaNode::_config
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ____config_1;
	// System.WeakReference UnityEngine.Yoga.YogaNode::_parent
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____parent_2;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * ____children_3;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * ____measureFunction_4;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * ____baselineFunction_5;
	// System.Object UnityEngine.Yoga.YogaNode::_data
	RuntimeObject * ____data_6;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__config_1() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____config_1)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get__config_1() const { return ____config_1; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of__config_1() { return &____config_1; }
	inline void set__config_1(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		____config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_1), (void*)value);
	}

	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____parent_2)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__parent_2() const { return ____parent_2; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_2), (void*)value);
	}

	inline static int32_t get_offset_of__children_3() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____children_3)); }
	inline List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * get__children_3() const { return ____children_3; }
	inline List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 ** get_address_of__children_3() { return &____children_3; }
	inline void set__children_3(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * value)
	{
		____children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____children_3), (void*)value);
	}

	inline static int32_t get_offset_of__measureFunction_4() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____measureFunction_4)); }
	inline MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * get__measureFunction_4() const { return ____measureFunction_4; }
	inline MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 ** get_address_of__measureFunction_4() { return &____measureFunction_4; }
	inline void set__measureFunction_4(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * value)
	{
		____measureFunction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____measureFunction_4), (void*)value);
	}

	inline static int32_t get_offset_of__baselineFunction_5() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____baselineFunction_5)); }
	inline BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * get__baselineFunction_5() const { return ____baselineFunction_5; }
	inline BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A ** get_address_of__baselineFunction_5() { return &____baselineFunction_5; }
	inline void set__baselineFunction_5(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * value)
	{
		____baselineFunction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baselineFunction_5), (void*)value);
	}

	inline static int32_t get_offset_of__data_6() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____data_6)); }
	inline RuntimeObject * get__data_6() const { return ____data_6; }
	inline RuntimeObject ** get_address_of__data_6() { return &____data_6; }
	inline void set__data_6(RuntimeObject * value)
	{
		____data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_6), (void*)value);
	}
};


// UnityEngine.Yoga.YogaOverflow
struct YogaOverflow_t0C71950207F00A484DE79E07B903A681BAD49473 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaOverflow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaOverflow_t0C71950207F00A484DE79E07B903A681BAD49473, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaPositionType
struct YogaPositionType_t9D73349C479537BD9B2D73E2F5924D391A12FCEA 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaPositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaPositionType_t9D73349C479537BD9B2D73E2F5924D391A12FCEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaUnit
struct YogaUnit_t542EBDB4107B4451C0485143935191AA9E2C5985 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaUnit_t542EBDB4107B4451C0485143935191AA9E2C5985, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaWrap
struct YogaWrap_t58D174B8331AA7061399D99203F83D942379956E 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaWrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaWrap_t58D174B8331AA7061399D99203F83D942379956E, ___value___2)); }
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


// UnityEngine.UIElements.UIR.Utility
struct Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D  : public RuntimeObject
{
public:

public:
};

struct Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_MarkerRaiseEngineUpdate_7;

public:
	inline static int32_t get_offset_of_GraphicsResourcesRecreate_0() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___GraphicsResourcesRecreate_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_GraphicsResourcesRecreate_0() const { return ___GraphicsResourcesRecreate_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_GraphicsResourcesRecreate_0() { return &___GraphicsResourcesRecreate_0; }
	inline void set_GraphicsResourcesRecreate_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___GraphicsResourcesRecreate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsResourcesRecreate_0), (void*)value);
	}

	inline static int32_t get_offset_of_EngineUpdate_1() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___EngineUpdate_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EngineUpdate_1() const { return ___EngineUpdate_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EngineUpdate_1() { return &___EngineUpdate_1; }
	inline void set_EngineUpdate_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EngineUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EngineUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_FlushPendingResources_2() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___FlushPendingResources_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_FlushPendingResources_2() const { return ___FlushPendingResources_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_FlushPendingResources_2() { return &___FlushPendingResources_2; }
	inline void set_FlushPendingResources_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___FlushPendingResources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlushPendingResources_2), (void*)value);
	}

	inline static int32_t get_offset_of_RegisterIntermediateRenderers_3() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RegisterIntermediateRenderers_3)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_RegisterIntermediateRenderers_3() const { return ___RegisterIntermediateRenderers_3; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_RegisterIntermediateRenderers_3() { return &___RegisterIntermediateRenderers_3; }
	inline void set_RegisterIntermediateRenderers_3(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___RegisterIntermediateRenderers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegisterIntermediateRenderers_3), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeAdd_4() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeAdd_4)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeAdd_4() const { return ___RenderNodeAdd_4; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeAdd_4() { return &___RenderNodeAdd_4; }
	inline void set_RenderNodeAdd_4(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeAdd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeAdd_4), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeExecute_5() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeExecute_5)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeExecute_5() const { return ___RenderNodeExecute_5; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeExecute_5() { return &___RenderNodeExecute_5; }
	inline void set_RenderNodeExecute_5(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeExecute_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeExecute_5), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeCleanup_6() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeCleanup_6)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeCleanup_6() const { return ___RenderNodeCleanup_6; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeCleanup_6() { return &___RenderNodeCleanup_6; }
	inline void set_RenderNodeCleanup_6(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeCleanup_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeCleanup_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_MarkerRaiseEngineUpdate_7() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___s_MarkerRaiseEngineUpdate_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_MarkerRaiseEngineUpdate_7() const { return ___s_MarkerRaiseEngineUpdate_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_MarkerRaiseEngineUpdate_7() { return &___s_MarkerRaiseEngineUpdate_7; }
	inline void set_s_MarkerRaiseEngineUpdate_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_MarkerRaiseEngineUpdate_7 = value;
	}
};


// UnityEngine.Yoga.YogaValue
struct YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B 
{
public:
	// System.Single UnityEngine.Yoga.YogaValue::value
	float ___value_0;
	// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::unit
	int32_t ___unit_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_unit_1() { return static_cast<int32_t>(offsetof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B, ___unit_1)); }
	inline int32_t get_unit_1() const { return ___unit_1; }
	inline int32_t* get_address_of_unit_1() { return &___unit_1; }
	inline void set_unit_1(int32_t value)
	{
		___unit_1 = value;
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914  : public MulticastDelegate_t
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


// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A  : public MulticastDelegate_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.IntPtr>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_gshared (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * __this, intptr_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mDE1244D373224C35ABE817746F98A231D65C9EA0_gshared_inline (const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736 (intptr_t ___config0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC (intptr_t ___value0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  YogaNode_MeasureInternal_m07C963C5FA5988382EF01EB5FC25F19067A15A3D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mCF63312D71E6D0DF61C3B5DBD4312262100DA538 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void Unity.Profiling.ProfilerMarker::Begin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_m28A9C432B107F7A724FD7705D09D2C4D14FB506F_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_mEDBBE3E8FF908C56AC3C2514840639B4022A120D_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(!0)
inline void Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.IntPtr>::Invoke(!0)
inline void Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5 (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *, intptr_t, const RuntimeMethod*))Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_gshared)(__this, ___obj0, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m816D0CBE721E17C3BCDAEB5DB9DCA1BAAC1B8308 (intptr_t ___config0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA (const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m2A3E69F652264AF9420D0A313FF3F28344CD9A2A (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE (intptr_t ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_mA919196B774F6A486505FD0230727C6EE61B7621 (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436 (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284 (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1 (intptr_t ___node0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1 (intptr_t ___node0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7 (intptr_t ___node0, float ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A (intptr_t ___node0, float ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Count()
inline int32_t List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::.ctor(System.Int32)
inline void List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82 (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::Insert(System.Int32,!0)
inline void List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060 (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Item(System.Int32)
inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_inline (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF (intptr_t ___ygNode0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67 (intptr_t ___node0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mDE1244D373224C35ABE817746F98A231D65C9EA0_gshared_inline)(method);
}
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m06E2D41E4810D6E794A36B3376AC05587178DB45 (float ___value0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Point_m3360E0F4A1568C85B20DC6A53A8387EBADE466A3 (float ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m909E73515F8805EED0E15C6ED2CEC3A08CEB03B3 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	float result = 0.0f;
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
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_mDAEF4BF76CDDDDDB8539AC46D039C2F0B8660F9B (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m410F2B18598638BEF28F275D98B166EDB7170D34 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_m7038E9D4841CB6E3D7FDF401F6FF179B9F2B35C4 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 5)
			{
				// open
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
			else
			{
				// closed
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (___parameterCount == 4)
				{
					typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else
				{
					typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_m57769D192664A7BEBA4F3FC778329F3270A6D0E4 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_EndInvoke_mAB0815931B1091B252D55E8763440AA1EC957AB8 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureOutput::Make(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureOutput_Make_mF1CEAF2D366F32067FF6C6F575A2A48F98865EED (float ___width0, float ___height1, const RuntimeMethod* method)
{
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD ));
		float L_0 = ___width0;
		(&V_0)->set_width_0(L_0);
		float L_1 = ___height1;
		(&V_0)->set_height_1(L_1);
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_2 = V_0;
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_3 = V_1;
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
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE_ftn) (intptr_t);
	static Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_mA919196B774F6A486505FD0230727C6EE61B7621 (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___ygNode0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_3 = ___ygNode0;
		Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_m983B8385FE9B8CB49EBAED7B604617D3A985808C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF (intptr_t ___ygNode0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method)
{
	typedef void (*Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF_ftn) (intptr_t, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *);
	static Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)");
	_il2cpp_icall_func(___ygNode0, ___node1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9_ftn) (intptr_t, intptr_t);
	static Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___ygNode0, ___config1);
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA (const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA_ftn) ();
	static Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetDefault()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m816D0CBE721E17C3BCDAEB5DB9DCA1BAAC1B8308 (intptr_t ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___config0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_3 = ___config0;
		Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736_ftn) (intptr_t);
	static Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigFreeInternal_m4CBDB583C014C8820A0E742CB113357D51616736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46_ftn) (intptr_t, float);
	static Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___config0, ___pixelsInPoint1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C_ftn) (intptr_t, intptr_t, uint32_t);
	static Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)");
	_il2cpp_icall_func(___node0, ___child1, ___index2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369_ftn) (intptr_t, intptr_t);
	static Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___node0, ___child1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67_ftn) (intptr_t);
	static Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0_ftn) (intptr_t);
	static Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCB841C1598883440E10729768AA9D6E5563ECDC9 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_7;
		L_7 = YogaNode_MeasureInternal_m07C963C5FA5988382EF01EB5FC25F19067A15A3D(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_mAC5C386A3A6F434C316CC65E3E8AE95F139FDBD2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5;
		L_5 = YogaNode_BaselineInternal_mCF63312D71E6D0DF61C3B5DBD4312262100DA538(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436 (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)");
	_il2cpp_icall_func(___node0, ___flexDirection1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284 (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)");
	_il2cpp_icall_func(___node0, ___justifyContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignItems1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignSelf1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)");
	_il2cpp_icall_func(___node0, ___positionType1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)");
	_il2cpp_icall_func(___node0, ___display1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexGrow1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexShrink1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD_ftn) (intptr_t);
	static Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1 (intptr_t ___node0, float ___width1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1 (intptr_t ___node0, float ___width1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0_ftn) (intptr_t);
	static Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A (intptr_t ___node0, float ___height1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7 (intptr_t ___node0, float ___height1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2_ftn) (intptr_t);
	static Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	_il2cpp_icall_func(___node0, ___edge1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___border2);
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_mE6773DF01922ADADD2D5861C9B7561D96B9FF069 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var))->get_RepaintOverlayPanelsCallback_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mB58553B3A14684D00C310FD3FDE00F6F23E3B0F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var))->get_UpdateRuntimePanelsCallback_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
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
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_m827C209CCF4819F5DFCA5299BBDFF8D2DC52B03B (bool ___recreate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___recreate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_m368A10E2870099DF19444751D504AEDC6E331AC5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		V_0 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_m28A9C432B107F7A724FD7705D09D2C4D14FB506F_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_s_MarkerRaiseEngineUpdate_7()), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		ProfilerMarker_End_mEDBBE3E8FF908C56AC3C2514840639B4022A120D_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_s_MarkerRaiseEngineUpdate_7()), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_m07D0180349CE84C206366369F23193990F915F6F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRegisterIntermediateRenderers(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_m1680F4FA80537CBDB2FED1BB87F5A8E793BA9692 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * G_B2_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RegisterIntermediateRenderers_3();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeAdd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_m46B097FD9E0BC626ADA2DAB65A91D2094E7F08E5 (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeAdd_4();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeExecute(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_m266363F7C9FE19860296905202C5EE848677B325 (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeExecute_5();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_mC6482CBE1B5625B0FB452756339CB3EDA159457A (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeCleanup_6();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_mDC05CA6094751C209882F62D033C94CB9EEB07A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, /*hidden argument*/NULL);
		((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->set_s_MarkerRaiseEngineUpdate_7(L_0);
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
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___ygConfig0;
		__this->set__ygConfig_1((intptr_t)L_0);
		intptr_t L_1 = __this->get__ygConfig_1();
		bool L_2;
		L_2 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985_RuntimeMethod_var)));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_Finalize_m319E9A885EC01FC2093731EF33F22CEACE04ACD2 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0;
			L_0 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
			YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
			NullCheck(L_1);
			intptr_t L_2;
			L_2 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_1, /*hidden argument*/NULL);
			bool L_3;
			L_3 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_001b:
		{
			intptr_t L_5;
			L_5 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(__this, /*hidden argument*/NULL);
			Native_YGConfigFree_m816D0CBE721E17C3BCDAEB5DB9DCA1BAAC1B8308((intptr_t)L_5, /*hidden argument*/NULL);
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_PointScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_PointScaleFactor_m43DD8922EDE04A68410F8FC8D709D10F6D035DA2 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		float L_1 = ___value0;
		Native_YGConfigSetPointScaleFactor_mD2B6880EF2995C0C9920ECFDA2B782ADDA895C46((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__cctor_mF15A7A50AB481A96A4E706DE97CCBBB5AEDDD836 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = Native_YGConfigGetDefault_m3532895B0969C25C08B5C6CD116183B859B26DAA(/*hidden argument*/NULL);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *)il2cpp_codegen_object_new(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->set_Default_0(L_1);
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
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m06E2D41E4810D6E794A36B3376AC05587178DB45 (float ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = Single_IsNaN_m2A3E69F652264AF9420D0A313FF3F28344CD9A2A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaNode::set_Left(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Left_mBB71D419ED57AA451FB6824C40051DD8D1367AAD (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Top(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Top_m8466041B9C790FBD7EE6A7D4E943580A64251458 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Right(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Right_m1F43EA618B0CE67F404C18B145E430A2CEC97FEF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Bottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Bottom_mBDAE0C54FB4A71E8C38CA8DE29F7F13C7C569A3B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPositionPercent_m541AD52A648290C3D34FB05629949CF2C66972F4((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->get__ygNode_0();
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPosition_mE11FD7E495C453F5BD66B5E78169DB97E2A5FA71((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginLeft_m0838220DF4C6C93285CACFBA4A9D32D54D1390D8 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginTop_mA0D7A2EDE80222AF76957F49563D906FCF1EEDF2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginRight_m1970210F2C7B1F53626C004B1A068A02DA07ECA7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginBottom_m7C25AF84142974E51EF7A5D8493511CC163FA261 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMarginPercent_m77BFA7384205E8A6244264A8D06B6F30378D0A6A((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_7 = __this->get__ygNode_0();
		int32_t L_8 = ___edge0;
		Native_YGNodeStyleSetMarginAuto_m4FF38C2212691112164E0FE266E610F2BAB953B1((intptr_t)L_7, L_8, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0046:
	{
		intptr_t L_9 = __this->get__ygNode_0();
		int32_t L_10 = ___edge0;
		float L_11;
		L_11 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMargin_m5BB1839BD400E62FEC85F09F74298983ECA0EF90((intptr_t)L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingLeft_mE351AF67A2DF93215D940FC6F2B5AD4A0385ABDC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingTop_m7693882BC214F451C10FD8D771EF8772EF9C54FB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingRight_m0C705C36F1278AF1EAB7319C68724D38A7A6B7BA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingBottom_mB033E59809B1C1CDF4C314A95A0DC4012E35E415 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPaddingPercent_m0B785B6C1FEDBDE11C17703CB0536D3D9F8D520C((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->get__ygNode_0();
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPadding_m00E608B9EC338163B9A92CC8B73FB412134EC0D4((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderLeftWidth_mBDCF4DFCD476CEABEE57CD3BE2858409364E1869 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE((intptr_t)L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderTopWidth_m18736263A0B349B23819F4DEAB3D464DC3AE9FBF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE((intptr_t)L_0, 1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderRightWidth_mA1F849651EDCF0B01381BBBB3522540EBC092391 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE((intptr_t)L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderBottomWidth_m3F2F47B69083DD6623FCFAD697D7E6E5C5929FCF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mFFD49D3710B64FD87D5838F9138F053883A314EE((intptr_t)L_0, 3, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::.ctor(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B2_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B1_0 = NULL;
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B3_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B3_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_0 = ___config0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = ___config0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_2 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__config_1(G_B3_0);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_3 = __this->get__config_1();
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Native_YGNodeNewWithConfig_mC68FC030A1EFD3C8142C378C12B3BEB01CB08EDE((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set__ygNode_0((intptr_t)L_5);
		intptr_t L_6 = __this->get__ygNode_0();
		bool L_7;
		L_7 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF_RuntimeMethod_var)));
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Finalize_m1EE3AC41EBD4CFB75DEC0AC735F32A1362B78AF5 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeFree_mA919196B774F6A486505FD0230727C6EE61B7621((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x18, IL_0018)
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Config(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Config_m3BAE49A56C0203A9D2B0C0037084DB6638E61096 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B2_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B2_1 = NULL;
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B1_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B1_1 = NULL;
	{
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_0 = ___value0;
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_2 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__config_1(G_B2_0);
		intptr_t L_3 = __this->get__ygNode_0();
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_4 = __this->get__config_1();
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_4, /*hidden argument*/NULL);
		Native_YGNodeSetConfig_mFA108D072D3745C7209AFB872439C5D71C595AA9((intptr_t)L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsMeasureDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsMeasureDefined_mFA702131C777907247568D947E96DEC05F501FBA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_0 = __this->get__measureFunction_4();
		V_0 = (bool)((!(((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_0 = __this->get__baselineFunction_5();
		V_0 = (bool)((!(((RuntimeObject*)(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexDirection(UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexDirection_mADA4BB75D477DC19DDDD786598797EEA5E1E232D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexDirection_m7AD8CCE8A28058037B8FD9B184E54B5300986436((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_JustifyContent(UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_JustifyContent_m5242DBF9983E1D4C652704F0C151FEE4DD6A2CE3 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetJustifyContent_mE2810782A317DE075D6078DFDCE41D9CAF936284((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Display(UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Display_m0817E869D9844A6C9B6663045DDBF41B71AA8067 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetDisplay_mF367A1506374C2FE97029A141998FFAA4822ECC4((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignItems(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignItems_m6CFE61C57AE9E57FC8B3E7CC86B36E008AB321AA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignItems_m6FF1830B10B476C932D8D9C0722D6EB7EFCACA5F((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignSelf(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignSelf_mF02A678E0744D13C0CC4BC22BC87F87927428F4F (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignSelf_mF76E7F30C8CB883BC8548062E24F316C479A04F4((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignContent(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignContent_m9424D5D51ED52403749CFD05B0BFE13162CB1BEA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignContent_m6C8848F9C4DDDDF2DD58FF0E59009D3FE0335588((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PositionType(UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PositionType_m1769F2B8291DAE297958DAB0B7511E2795492D18 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetPositionType_m1B1EB7B42981E77CFC7AD8C800493640445ADCCC((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Wrap(UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Wrap_mF49124818049A5B9DCEE7EBF02763981B3E274A6 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexWrap_m07F44960562F9A0285DA071660460FB44243CB1B((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexGrow_mE8098DC8D1B956A2176FE5CE10F920832367FE9E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexGrow_mC6813D2B1A26295EB868B158EE57ACBFAE9D7A94((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexShrink_mEA40361817D0644D51151ABD1B822FD253D4618E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexShrink_m7519CA5718E6816765124692DD9BB85ABB813BAF((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexBasis(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexBasis_mAA4DAD54A9FF219C994C4E9336483D1B4A291ACA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetFlexBasisPercent_m05FFCDCD547A94ED4FCEB60EF9384A19366FA8A9((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetFlexBasisAuto_m8138713F68447FC7BE81E01170AC48A9C1341CAD((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetFlexBasis_m570E529CDC23054C2E47953667AF0FC9D3CB3BA7((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Width(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Width_mE9BD6078D4984ED590A7205D90E8C20D47A94847 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetWidthPercent_m3ECD516A251CC467D9F778648B877D356D94ACA1((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetWidthAuto_mB332E4DBE65BD389327063A0C6479FB3B4305CB0((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetWidth_m59AACE1A5736413D2F711995EC36E112AF6E58B1((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Height(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Height_m197FD1C7ECAB10C889C3E9AF6FC013BEDB6EB15B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetHeightPercent_m74793B9EA13F4CADEF7A96B2D013F044B62974A7((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetHeightAuto_mDB94C97556E25545FE03C65EAD65838C0BFC4CB2((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetHeight_m04DCE2C375E5CD8F1FC05373838C18F205DB036A((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxWidth_m539D355D4332C0032B0BB2CCC0468EC8B055BD1A (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxWidthPercent_mDC27E994DDD8FA22EF51C6BF35F379DBB1DC8ECD((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxWidth_m504C94D92CC4A61D06EC5024C866CBBA384A575F((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxHeight_m579C695AD7617777A48528D0F63EF490C91100F7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxHeightPercent_mBB7E0FFBFBC9756CEE20AA4F95746F014C7F64E6((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxHeight_m99B395B964F5C074B961BACC6EDEAE78DEFD46B9((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinWidth_m8BF72A99F22B75B5CDB8A7AA07D2F197D765BC25 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinWidthPercent_mC74602AB84D266F5960A827643B15E4ADA15A989((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinWidth_m3A3F6C2DD286B30CEB94A3EEAFBCEB1F0F34084F((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinHeight_m5229DCC9469DBDA336935D7D944D6414611FD2A2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinHeightPercent_m3034592E6FE98FF3797EED0D510064541CC582C6((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinHeight_mED62EDBCE38ADFF894AC7AE5E2C44DFD990D5E53((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_m1A4606447374A029635A1DDEE27024E726CA5D3E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetLeft_m8AF59DE850D75B32E3600D1455ABA3E5A6C3B079((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_mFFED1F0E16A3F05BF0A9F3B3167C1FA990B9919B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetTop_m6FF85619BC7856353340C26298EB8C56982494C7((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_m344A4C1DFC2F74B4224A79E3F24F4907E8D223FE (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetWidth_m0AEEE53CE80C7BC09CC77D73F2AE85129EA012F5((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m8FA46A982DC3DC46539CC4D861A3D16DAC74B741 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetHeight_mF6CD470A488579A2D950CAB4C09F824FF6F88D0B((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Overflow(UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Overflow_mBB4BDB568E58F688A42FA8EDEFDAD9225B22725D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetOverflow_mE22A3BC02E310FF8B41E36BDA09643AA523B52E5((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Yoga.YogaNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaNode_get_Count_m5C51BCECC428A2273F516147BF93D261F290D7CC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_1 = __this->get__children_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline(L_1, /*hidden argument*/List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Insert(System.Int32,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Insert_m3DEECB3A58FD523279B8A2668E35BB2BE43ADC66 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		V_0 = (bool)((((RuntimeObject*)(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_2 = (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *)il2cpp_codegen_object_new(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var);
		List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82(L_2, 4, /*hidden argument*/List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var);
		__this->set__children_3(L_2);
	}

IL_001c:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		int32_t L_4 = ___index0;
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node1;
		NullCheck(L_3);
		List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060(L_3, L_4, L_5, /*hidden argument*/List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_6 = ___node1;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_7, __this, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set__parent_2(L_7);
		intptr_t L_8 = __this->get__ygNode_0();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_9 = ___node1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->get__ygNode_0();
		int32_t L_11 = ___index0;
		Native_YGNodeInsertChild_m3CF1E104A442214AEF67070F2A0510BE0DEAC11C((intptr_t)L_8, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * V_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2;
		L_2 = List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var);
		V_0 = L_2;
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set__parent_2((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)NULL);
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_4 = __this->get__children_3();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B(L_4, L_5, /*hidden argument*/List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var);
		intptr_t L_6 = __this->get__ygNode_0();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = L_7->get__ygNode_0();
		Native_YGNodeRemoveChild_mE60F4EBAABFB863B2F1FA8C0CFA4BB0E0A054369((intptr_t)L_6, (intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetMeasureFunction(UnityEngine.Yoga.MeasureFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetMeasureFunction_m9666C3424DAA0A5CB64E4C2CE799D052F9123E4A (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * ___measureFunction0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_0 = ___measureFunction0;
		__this->set__measureFunction_4(L_0);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_1 = ___measureFunction0;
		V_0 = (bool)((((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3;
		L_3 = YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		intptr_t L_5 = __this->get__ygNode_0();
		Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF((intptr_t)L_5, (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *)NULL, /*hidden argument*/NULL);
	}

IL_002d:
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeRemoveMeasureFunc_mCE06D0FB0F56BFF995DA60117852BCB6E50283E0((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_003c:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		Native_YGSetManagedObject_mFD19A934C04A03E098194C53553353010B6161EF((intptr_t)L_7, __this, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get__ygNode_0();
		Native_YGNodeSetMeasureFunc_mB11E35B2C628C93136FB73F720EE8CBE2F92FC67((intptr_t)L_8, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  YogaNode_MeasureInternal_m07C963C5FA5988382EF01EB5FC25F19067A15A3D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	bool V_0 = false;
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_2 = L_1->get__measureFunction_4();
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_m07C963C5FA5988382EF01EB5FC25F19067A15A3D_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_6 = L_5->get__measureFunction_4();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		NullCheck(L_6);
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_12;
		L_12 = MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58(L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mCF63312D71E6D0DF61C3B5DBD4312262100DA538 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_2 = L_1->get__baselineFunction_5();
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_mCF63312D71E6D0DF61C3B5DBD4312262100DA538_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_6 = L_5->get__baselineFunction_5();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m5F93328C6F34A2D6B2719B86FD3DC97E5C0544F3 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_inline(/*hidden argument*/Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_m7537F71E66B2BB24889E2F37350166112D609A5E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_inline(/*hidden argument*/Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mD53A2D0F965FC45A71902518FC2BC99EDD80F421_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
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
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_unit_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	float _returnValue;
	_returnValue = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Point_m3360E0F4A1568C85B20DC6A53A8387EBADE466A3 (float ___value0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B2_0 = NULL;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		float L_0 = ___value0;
		(&V_0)->set_value_0(L_0);
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m06E2D41E4810D6E794A36B3376AC05587178DB45(L_1, /*hidden argument*/NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->set_unit_1(G_B3_0);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		float L_2;
		L_2 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___other0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(&V_0), L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B6_0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF_AdjustorThunk (RuntimeObject * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4;
		L_4 = YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, ((*(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)UnBox(L_3, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		float L_0;
		L_0 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)397)))^(int32_t)L_2));
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Auto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Auto_m33B222D0EF3D71F7665F8AD8AEA11DDFAF4DECE1 (const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		(&V_0)->set_value_0((std::numeric_limits<float>::quiet_NaN()));
		(&V_0)->set_unit_1(3);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = V_0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0021:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Percent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Percent_m8F5BBE8920297176FF455AB53894041F039C30D5 (float ___value0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B2_0 = NULL;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		float L_0 = ___value0;
		(&V_0)->set_value_0(L_0);
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m06E2D41E4810D6E794A36B3376AC05587178DB45(L_1, /*hidden argument*/NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->set_unit_1(G_B3_0);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_op_Implicit_m6F5B0B9D6E095A411D9F52C86FEE7CAB3C3FD607 (float ___pointValue0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___pointValue0;
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_1;
		L_1 = YogaValue_Point_m3360E0F4A1568C85B20DC6A53A8387EBADE466A3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_2 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_m28A9C432B107F7A724FD7705D09D2C4D14FB506F_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_mEDBBE3E8FF908C56AC3C2514840639B4022A120D_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mDE1244D373224C35ABE817746F98A231D65C9EA0_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		return (RuntimeObject*)L_0;
	}
}
