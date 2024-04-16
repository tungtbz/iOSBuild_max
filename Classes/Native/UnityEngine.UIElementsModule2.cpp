#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
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

// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.AttachToPanelEvent>
struct EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.DetachFromPanelEvent>
struct EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20;
// UnityEngine.UIElements.EventCallback`1<System.Object>
struct EventCallback_1_tD3CAB1A4A7C6C11EC622DAA04A4274D38AF8E818;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.TooltipEvent>
struct EventCallback_1_t896596B06A70F51DA47C67560B751DA0085ABAAC;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<UnityEngine.UIElements.StyleSelector,System.String>
struct Func_2_t03878E87644198222E4EC62631B58EC8ED6EC2F4;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.String>
struct Func_2_t65584FB9AE50266116FCCDB4722FAC93AC00AC6C;
// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct IEnumerable_1_tC876D6E9EFC8E1113D105312B09F5AB58F08382A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.VisualElement>
struct IEnumerable_1_t2C180149BF11786802CE80222226EF453AC6F286;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct IEqualityComparer_1_t41157FBD61D37CD793AC4086A8FB0C3ADB3213C7;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8;
// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct MouseEventBase_1_t0F188A74FDFC1E0A49E98810634220A765C82F16;
// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A;
// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.AttachToPanelEvent>
struct ObjectPool_1_tC0AB2CB5DDBD0D607490652CD372D2C25C1903BB;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.DetachFromPanelEvent>
struct ObjectPool_1_tFA9D537CE0DBE230B8F38AFB22AFBFBC0018F52B;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_tCB77472AD87157F88463F8B9897759520902D350;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.TooltipEvent>
struct ObjectPool_1_t0F9BF8802FC4A5D3F7A99CA5D3002BC8C3020060;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.WheelEvent>
struct ObjectPool_1_t0F915A9CA7F6727FBC0D431F62582EE627CDD9D9;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct Stack_1_t7D01E0B4ED7AE423C6908AFCAD165A32C019DED5;
// UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.Object>
struct TextInputBase_t5B1BF1C625A11FCD104004669CB7C5DB23D06DA8;
// UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.String>
struct TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7;
// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Action>
struct VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928;
// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>
struct VisualElementScheduledItem_1_tFE69E4318D1EEA0857FD6BADB3C63ED95E1D3F25;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>[]
struct SlotU5BU5D_t3F95820FF4DF6D31A39E94A2F7F78D24B86C1A63;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A;
// UnityEngine.UIElements.Experimental.IValueAnimationUpdate[]
struct IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7;
// UnityEngine.UIElements.StyleSheet[]
struct StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UIElements.AttachToPanelEvent
struct AttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A;
// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C;
// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UIElements.DetachFromPanelEvent
struct DetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UIElements.EventBase
struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34;
// System.Exception
struct Exception_t;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118;
// UnityEngine.UIElements.Focusable
struct Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t8B97B7A88BD258220CF596B11D8461B86360BEE2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tF2F9D9635A3932E24843C5F557F6080A2C9F7F95;
// UnityEngine.UIElements.IPanel
struct IPanel_t41B9E8E8B00577E4CF3BC0346D701D46462E55EB;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t5506B1F4124A749F335298BC7E56B05E5C16065F;
// UnityEngine.UIElements.Experimental.IValueAnimationUpdate
struct IValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7;
// UnityEngine.UIElements.IVisualElementPanelActivatable
struct IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.UIElements.RepaintData
struct RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UIElements.ScheduledItem
struct ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleSelector
struct StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE;
// UnityEngine.UIElements.TextEditorEngine
struct TextEditorEngine_t94EB64306917B7C8F6EFCDB4B7B1A65CAEFE4BF9;
// UnityEngine.UIElements.TooltipEvent
struct TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0;
// UnityEngine.UIElements.VisualElementAnimationSystem
struct VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D;
// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC;
// UnityEngine.UIElements.VisualElementPanelActivator
struct VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// UnityEngine.UIElements.WheelEvent
struct WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;
// UnityEngine.UIElements.ClickDetector/ButtonClickStatus
struct ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372;
// UnityEngine.UIElements.ScheduledItem/<>c
struct U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB;
// UnityEngine.UIElements.StyleComplexSelector/<>c
struct U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8;
// UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction
struct GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8;
// UnityEngine.UIElements.StyleSelector/<>c
struct U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33;
// UnityEngine.UIElements.TextField/TextInput
struct TextInput_tF2655D1B1A45173CD84F0FA7145341EE76671C20;
// UnityEngine.UIElements.UIEventRegistration/<>c
struct U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4;
// UnityEngine.UIElements.VisualElement/<>c
struct U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64;
// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8;
// UnityEngine.UIElements.VisualElement/SimpleScheduledItem
struct SimpleScheduledItem_tDEB73FC5E429E6ECA8FC766507195FE77A4D4391;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScheduler_t8C2763D531C83CE013529B9DCE83E4149925D886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05BA33FC7FFF2013E3C524D47B41296B7EACC4E7;
IL2CPP_EXTERN_C String_t* _stringLiteral175620BD8518AA2F58DC1CA9C9656B450B46EAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral27C87AC914BC35591F312B19EFCB93B2312614C8;
IL2CPP_EXTERN_C String_t* _stringLiteral27F4E38F96E25FC6A303C61D7E1304CAF64B7541;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral35BFF0C070809528BCAE19C360FEF7D619AE8EF3;
IL2CPP_EXTERN_C String_t* _stringLiteral5338A97A4E0097B99259F2AAB53CED274C56E28C;
IL2CPP_EXTERN_C String_t* _stringLiteral70A8AF0511C1A25EF3B28D18A927B18416F2AE7D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E0DA584415159A2B86AB8EAA12A0A7AEF6BF331;
IL2CPP_EXTERN_C String_t* _stringLiteral8B69B91665E2794F33905688270D740A89663143;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_m36E12739D8BF8FBAFCCCF60612C1C44DE5C2935D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m0B89E9D2572AA73385426C1B9D5BAD93FA53AB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_UnregisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_mBA855BA27B53EA3B72D4C172DABA3956967FEE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackEventHandler_UnregisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m444C3FFCF57712DB73507F2AFF46BF51FF96B162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_m54B76028797DD00DDD4545457A5CFEC419F4FCC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB7ABE9B419736841E70031465D5CB1837C45105F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mFAA9CB026F2DB39D744C254B25005000E59E6670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B278EC32CFE6F9E53E8E3A78BB8B171F843C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBE1DD879F65523CBF0FCD6D49DF92F1ECAE03092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE1AFC8F7B02D36B1850AE34C400AE649401C91EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m55FA04ED20809680124E375DFCF7B2FF7C1C1EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m743D6994E493872B07C71F75BECC4211D3CE8D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBD5754D52DA4CB2284FD023BCBFD98DFB093C25E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5671D97CAE70E97F628A7B0EDAFAB6F0B7362451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m5F3BB6DF094DBB1D72312BBA3EC0F0D054C4589E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEF37E9009C6837645A99A160B5D4A413545A11D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F8DD8E61986760E3951EC736139D8FB4168C18D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mAAECD125EEBC05104195244E70D43FC8E6CC80E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_GetPooled_m222FAAEBE57EB30D26CA5E3DAA69BC430620D255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_Init_mC62D341FA1545D8475513B4A2B46A6B9C4267DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1__ctor_m0C17657117CA0EE9264FF104E504B2971F552093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mF191A2B08CE19BDD57CA5B7F0025A71DE4D1BB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_mCDC14BD84DD5D0E2477586991FE5A52D96AFEBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m6463F15E385AD1BC3B9E31DF0C8D04E9BB2F9C6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextInputBase_get_text_m8F4AECBBB9F3C558F0DD431AA308AD884EDBA770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextInputBase_set_text_m302E30B2E54C055AAFF312CFB6541F3F4064406D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_LocalToWorld_mC21CAA299E78D0BB48ABDE96243F1983047BA5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_WorldToLocal_m12111E3AEFF8A4A30DB5231051B85217399950BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_WorldToLocal_m9D3C8A18527266C102DE353257A851822AE3F96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementPanelActivator_OnEnter_mAC503F7299D01BBEA727C19CDC54B86363A0E95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementPanelActivator_OnLeave_mE1768C69309EDBA85179252CB5C3949EC08D2620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementScheduledItem_1__ctor_m2D8C3E93637C7DE64C69446D911818DC5A55515F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3F95820FF4DF6D31A39E94A2F7F78D24B86C1A63* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____slots_8)); }
	inline SlotU5BU5D_t3F95820FF4DF6D31A39E94A2F7F78D24B86C1A63* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3F95820FF4DF6D31A39E94A2F7F78D24B86C1A63** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3F95820FF4DF6D31A39E94A2F7F78D24B86C1A63* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67, ____items_1)); }
	inline IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* get__items_1() const { return ____items_1; }
	inline IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67_StaticFields, ____emptyArray_5)); }
	inline IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IValueAnimationUpdateU5BU5D_t70D6A47A6EEB831E305546B30D75F8066D662590* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35, ____items_1)); }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* get__items_1() const { return ____items_1; }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35_StaticFields, ____emptyArray_5)); }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StyleSheetU5BU5D_tCB6CC89A83A498F84ABF7B9E76DCD2F27D86F5CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72, ____items_1)); }
	inline VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* get__items_1() const { return ____items_1; }
	inline VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_StaticFields, ____emptyArray_5)); }
	inline VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UIElements.ObjectPool`1::m_Stack
	Stack_1_t7D01E0B4ED7AE423C6908AFCAD165A32C019DED5 * ___m_Stack_0;
	// System.Int32 UnityEngine.UIElements.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_1;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD, ___m_Stack_0)); }
	inline Stack_1_t7D01E0B4ED7AE423C6908AFCAD165A32C019DED5 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t7D01E0B4ED7AE423C6908AFCAD165A32C019DED5 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t7D01E0B4ED7AE423C6908AFCAD165A32C019DED5 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD, ___m_MaxSize_1)); }
	inline int32_t get_m_MaxSize_1() const { return ___m_MaxSize_1; }
	inline int32_t* get_address_of_m_MaxSize_1() { return &___m_MaxSize_1; }
	inline void set_m_MaxSize_1(int32_t value)
	{
		___m_MaxSize_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___yogaConfig_1;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_2;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_3;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * ___U3CrepaintDataU3Ek__BackingField_4;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_6;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * ___m_TopElementUnderPointers_7;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * ___hierarchyChanged_8;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * ___beforeUpdate_9;

public:
	inline static int32_t get_offset_of_m_Scale_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_Scale_0)); }
	inline float get_m_Scale_0() const { return ___m_Scale_0; }
	inline float* get_address_of_m_Scale_0() { return &___m_Scale_0; }
	inline void set_m_Scale_0(float value)
	{
		___m_Scale_0 = value;
	}

	inline static int32_t get_offset_of_yogaConfig_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___yogaConfig_1)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get_yogaConfig_1() const { return ___yogaConfig_1; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of_yogaConfig_1() { return &___yogaConfig_1; }
	inline void set_yogaConfig_1(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		___yogaConfig_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yogaConfig_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PixelsPerPoint_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_PixelsPerPoint_2)); }
	inline float get_m_PixelsPerPoint_2() const { return ___m_PixelsPerPoint_2; }
	inline float* get_address_of_m_PixelsPerPoint_2() { return &___m_PixelsPerPoint_2; }
	inline void set_m_PixelsPerPoint_2(float value)
	{
		___m_PixelsPerPoint_2 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CduringLayoutPhaseU3Ek__BackingField_3)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_3() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_3() { return &___U3CduringLayoutPhaseU3Ek__BackingField_3; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_3(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CrepaintDataU3Ek__BackingField_4)); }
	inline RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * get_U3CrepaintDataU3Ek__BackingField_4() const { return ___U3CrepaintDataU3Ek__BackingField_4; }
	inline RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 ** get_address_of_U3CrepaintDataU3Ek__BackingField_4() { return &___U3CrepaintDataU3Ek__BackingField_4; }
	inline void set_U3CrepaintDataU3Ek__BackingField_4(RepaintData_tECDD72801BC6B1F14937D2AAC25D0181CAE14510 * value)
	{
		___U3CrepaintDataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcursorManagerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CcursorManagerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CcursorManagerU3Ek__BackingField_5() const { return ___U3CcursorManagerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CcursorManagerU3Ek__BackingField_5() { return &___U3CcursorManagerU3Ek__BackingField_5; }
	inline void set_U3CcursorManagerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CcursorManagerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcursorManagerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___U3CdisposedU3Ek__BackingField_6)); }
	inline bool get_U3CdisposedU3Ek__BackingField_6() const { return ___U3CdisposedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_6() { return &___U3CdisposedU3Ek__BackingField_6; }
	inline void set_U3CdisposedU3Ek__BackingField_6(bool value)
	{
		___U3CdisposedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_7() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___m_TopElementUnderPointers_7)); }
	inline ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * get_m_TopElementUnderPointers_7() const { return ___m_TopElementUnderPointers_7; }
	inline ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC ** get_address_of_m_TopElementUnderPointers_7() { return &___m_TopElementUnderPointers_7; }
	inline void set_m_TopElementUnderPointers_7(ElementUnderPointer_t9338858C0C882FA25FBF492500439F0F8663FDDC * value)
	{
		___m_TopElementUnderPointers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_7), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyChanged_8() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___hierarchyChanged_8)); }
	inline HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * get_hierarchyChanged_8() const { return ___hierarchyChanged_8; }
	inline HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 ** get_address_of_hierarchyChanged_8() { return &___hierarchyChanged_8; }
	inline void set_hierarchyChanged_8(HierarchyEvent_t47E86053D8C35FD238EDFA44861E84233257AFC8 * value)
	{
		___hierarchyChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hierarchyChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_beforeUpdate_9() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30, ___beforeUpdate_9)); }
	inline Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * get_beforeUpdate_9() const { return ___beforeUpdate_9; }
	inline Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 ** get_address_of_beforeUpdate_9() { return &___beforeUpdate_9; }
	inline void set_beforeUpdate_9(Action_1_t73D3F8D6D9F06723FCA3C0753A3F3905C08A7D43 * value)
	{
		___beforeUpdate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeUpdate_9), (void*)value);
	}
};


// UnityEngine.UIElements.BaseVisualTreeUpdater
struct BaseVisualTreeUpdater_t98D08BDA96D4F62B24CEF547A05E4F4296178A94  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34 * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.ScheduledItem
struct ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::timerUpdateStopCondition
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___timerUpdateStopCondition_0;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<startMs>k__BackingField
	int64_t ___U3CstartMsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_timerUpdateStopCondition_0() { return static_cast<int32_t>(offsetof(ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2, ___timerUpdateStopCondition_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_timerUpdateStopCondition_0() const { return ___timerUpdateStopCondition_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_timerUpdateStopCondition_0() { return &___timerUpdateStopCondition_0; }
	inline void set_timerUpdateStopCondition_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___timerUpdateStopCondition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerUpdateStopCondition_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartMsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2, ___U3CstartMsU3Ek__BackingField_3)); }
	inline int64_t get_U3CstartMsU3Ek__BackingField_3() const { return ___U3CstartMsU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CstartMsU3Ek__BackingField_3() { return &___U3CstartMsU3Ek__BackingField_3; }
	inline void set_U3CstartMsU3Ek__BackingField_3(int64_t value)
	{
		___U3CstartMsU3Ek__BackingField_3 = value;
	}
};

struct ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_StaticFields
{
public:
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::OnceCondition
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___OnceCondition_1;
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::ForeverCondition
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___ForeverCondition_2;

public:
	inline static int32_t get_offset_of_OnceCondition_1() { return static_cast<int32_t>(offsetof(ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_StaticFields, ___OnceCondition_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_OnceCondition_1() const { return ___OnceCondition_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_OnceCondition_1() { return &___OnceCondition_1; }
	inline void set_OnceCondition_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___OnceCondition_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnceCondition_1), (void*)value);
	}

	inline static int32_t get_offset_of_ForeverCondition_2() { return static_cast<int32_t>(offsetof(ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_StaticFields, ___ForeverCondition_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_ForeverCondition_2() const { return ___ForeverCondition_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_ForeverCondition_2() { return &___ForeverCondition_2; }
	inline void set_ForeverCondition_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___ForeverCondition_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForeverCondition_2), (void*)value);
	}
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

// UnityEngine.UIElements.VisualElementExtensions
struct VisualElementExtensions_tC2B48B93CE630AFC1FCF4F4EE6FA6D983BD577E4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.VisualElementListPool
struct VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081  : public RuntimeObject
{
public:

public:
};

struct VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>> UnityEngine.UIElements.VisualElementListPool::pool
	ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_StaticFields, ___pool_0)); }
	inline ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * get_pool_0() const { return ___pool_0; }
	inline ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElementPanelActivator
struct VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IVisualElementPanelActivatable UnityEngine.UIElements.VisualElementPanelActivator::m_Activatable
	RuntimeObject* ___m_Activatable_0;
	// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::<isActive>k__BackingField
	bool ___U3CisActiveU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::<isDetaching>k__BackingField
	bool ___U3CisDetachingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Activatable_0() { return static_cast<int32_t>(offsetof(VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB, ___m_Activatable_0)); }
	inline RuntimeObject* get_m_Activatable_0() const { return ___m_Activatable_0; }
	inline RuntimeObject** get_address_of_m_Activatable_0() { return &___m_Activatable_0; }
	inline void set_m_Activatable_0(RuntimeObject* value)
	{
		___m_Activatable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Activatable_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisActiveU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB, ___U3CisActiveU3Ek__BackingField_1)); }
	inline bool get_U3CisActiveU3Ek__BackingField_1() const { return ___U3CisActiveU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CisActiveU3Ek__BackingField_1() { return &___U3CisActiveU3Ek__BackingField_1; }
	inline void set_U3CisActiveU3Ek__BackingField_1(bool value)
	{
		___U3CisActiveU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CisDetachingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB, ___U3CisDetachingU3Ek__BackingField_2)); }
	inline bool get_U3CisDetachingU3Ek__BackingField_2() const { return ___U3CisDetachingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisDetachingU3Ek__BackingField_2() { return &___U3CisDetachingU3Ek__BackingField_2; }
	inline void set_U3CisDetachingU3Ek__BackingField_2(bool value)
	{
		___U3CisDetachingU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * ___m_UpdaterArray_0;

public:
	inline static int32_t get_offset_of_m_UpdaterArray_0() { return static_cast<int32_t>(offsetof(VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64, ___m_UpdaterArray_0)); }
	inline UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * get_m_UpdaterArray_0() const { return ___m_UpdaterArray_0; }
	inline UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 ** get_address_of_m_UpdaterArray_0() { return &___m_UpdaterArray_0; }
	inline void set_m_UpdaterArray_0(UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * value)
	{
		___m_UpdaterArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdaterArray_0), (void*)value);
	}
};


// UnityEngine.UIElements.ScheduledItem/<>c
struct U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_StaticFields
{
public:
	// UnityEngine.UIElements.ScheduledItem/<>c UnityEngine.UIElements.ScheduledItem/<>c::<>9
	U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.UIElements.StyleComplexSelector/<>c
struct U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_StaticFields
{
public:
	// UnityEngine.UIElements.StyleComplexSelector/<>c UnityEngine.UIElements.StyleComplexSelector/<>c::<>9
	U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.UIElements.StyleSelector,System.String> UnityEngine.UIElements.StyleComplexSelector/<>c::<>9__20_0
	Func_2_t03878E87644198222E4EC62631B58EC8ED6EC2F4 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_t03878E87644198222E4EC62631B58EC8ED6EC2F4 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_t03878E87644198222E4EC62631B58EC8ED6EC2F4 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_t03878E87644198222E4EC62631B58EC8ED6EC2F4 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// UnityEngine.UIElements.StyleSelector/<>c
struct U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_StaticFields
{
public:
	// UnityEngine.UIElements.StyleSelector/<>c UnityEngine.UIElements.StyleSelector/<>c::<>9
	U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.String> UnityEngine.UIElements.StyleSelector/<>c::<>9__10_0
	Func_2_t65584FB9AE50266116FCCDB4722FAC93AC00AC6C * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t65584FB9AE50266116FCCDB4722FAC93AC00AC6C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t65584FB9AE50266116FCCDB4722FAC93AC00AC6C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t65584FB9AE50266116FCCDB4722FAC93AC00AC6C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// UnityEngine.UIElements.UIEventRegistration/<>c
struct U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_StaticFields
{
public:
	// UnityEngine.UIElements.UIEventRegistration/<>c UnityEngine.UIElements.UIEventRegistration/<>c::<>9
	U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElement/<>c
struct U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_StaticFields
{
public:
	// UnityEngine.UIElements.VisualElement/<>c UnityEngine.UIElements.VisualElement/<>c::<>9
	U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * ___U3CU3E9_0;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.TooltipEvent> UnityEngine.UIElements.VisualElement/<>c::<>9__339_0
	EventCallback_1_t896596B06A70F51DA47C67560B751DA0085ABAAC * ___U3CU3E9__339_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__339_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_StaticFields, ___U3CU3E9__339_0_1)); }
	inline EventCallback_1_t896596B06A70F51DA47C67560B751DA0085ABAAC * get_U3CU3E9__339_0_1() const { return ___U3CU3E9__339_0_1; }
	inline EventCallback_1_t896596B06A70F51DA47C67560B751DA0085ABAAC ** get_address_of_U3CU3E9__339_0_1() { return &___U3CU3E9__339_0_1; }
	inline void set_U3CU3E9__339_0_1(EventCallback_1_t896596B06A70F51DA47C67560B751DA0085ABAAC * value)
	{
		___U3CU3E9__339_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__339_0_1), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t6CE6B4FD54E700646BC89D58DA7F37AA374C8BC8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771* ___m_VisualTreeUpdaters_0;

public:
	inline static int32_t get_offset_of_m_VisualTreeUpdaters_0() { return static_cast<int32_t>(offsetof(UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08, ___m_VisualTreeUpdaters_0)); }
	inline IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771* get_m_VisualTreeUpdaters_0() const { return ___m_VisualTreeUpdaters_0; }
	inline IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771** get_address_of_m_VisualTreeUpdaters_0() { return &___m_VisualTreeUpdaters_0; }
	inline void set_m_VisualTreeUpdaters_0(IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771* value)
	{
		___m_VisualTreeUpdaters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualTreeUpdaters_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19, ___list_0)); }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * get_list_0() const { return ___list_0; }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// UnityEngine.UIElements.Focusable
struct Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14  : public CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_3;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtabIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___U3CtabIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CtabIndexU3Ek__BackingField_2() const { return ___U3CtabIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtabIndexU3Ek__BackingField_2() { return &___U3CtabIndexU3Ek__BackingField_2; }
	inline void set_U3CtabIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CtabIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_3() { return static_cast<int32_t>(offsetof(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14, ___isIMGUIContainer_3)); }
	inline bool get_isIMGUIContainer_3() const { return ___isIMGUIContainer_3; }
	inline bool* get_address_of_isIMGUIContainer_3() { return &___isIMGUIContainer_3; }
	inline void set_isIMGUIContainer_3(bool value)
	{
		___isIMGUIContainer_3 = value;
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC  : public FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118
{
public:

public:
};

struct VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields
{
public:
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Left
	VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * ___s_Left_4;
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Right
	VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * ___s_Right_5;

public:
	inline static int32_t get_offset_of_s_Left_4() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields, ___s_Left_4)); }
	inline VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * get_s_Left_4() const { return ___s_Left_4; }
	inline VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC ** get_address_of_s_Left_4() { return &___s_Left_4; }
	inline void set_s_Left_4(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * value)
	{
		___s_Left_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Left_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Right_5() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields, ___s_Right_5)); }
	inline VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * get_s_Right_5() const { return ___s_Right_5; }
	inline VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC ** get_address_of_s_Right_5() { return &___s_Right_5; }
	inline void set_s_Right_5(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * value)
	{
		___s_Right_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Right_5), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElementStyleSheetSet::m_Element
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB, ___m_Element_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Element_0;
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


// UnityEngine.UIElements.EventDispatcher/EventRecord
struct EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01 
{
public:
	// UnityEngine.UIElements.EventBase UnityEngine.UIElements.EventDispatcher/EventRecord::m_Event
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * ___m_Event_0;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.EventDispatcher/EventRecord::m_Panel
	RuntimeObject* ___m_Panel_1;

public:
	inline static int32_t get_offset_of_m_Event_0() { return static_cast<int32_t>(offsetof(EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01, ___m_Event_0)); }
	inline EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * get_m_Event_0() const { return ___m_Event_0; }
	inline EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 ** get_address_of_m_Event_0() { return &___m_Event_0; }
	inline void set_m_Event_0(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * value)
	{
		___m_Event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Panel_1() { return static_cast<int32_t>(offsetof(EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01, ___m_Panel_1)); }
	inline RuntimeObject* get_m_Panel_1() const { return ___m_Panel_1; }
	inline RuntimeObject** get_address_of_m_Panel_1() { return &___m_Panel_1; }
	inline void set_m_Panel_1(RuntimeObject* value)
	{
		___m_Panel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Panel_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.EventDispatcher/EventRecord
struct EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_pinvoke
{
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.EventDispatcher/EventRecord
struct EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_com
{
	EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};

// UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.FocusController/FocusedElement::m_SubTreeRoot
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController/FocusedElement::m_FocusedElement
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;

public:
	inline static int32_t get_offset_of_m_SubTreeRoot_0() { return static_cast<int32_t>(offsetof(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206, ___m_SubTreeRoot_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_SubTreeRoot_0() const { return ___m_SubTreeRoot_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_SubTreeRoot_0() { return &___m_SubTreeRoot_0; }
	inline void set_m_SubTreeRoot_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_SubTreeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubTreeRoot_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElement_1() { return static_cast<int32_t>(offsetof(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206, ___m_FocusedElement_1)); }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * get_m_FocusedElement_1() const { return ___m_FocusedElement_1; }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 ** get_address_of_m_FocusedElement_1() { return &___m_FocusedElement_1; }
	inline void set_m_FocusedElement_1(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * value)
	{
		___m_FocusedElement_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElement_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_SubTreeRoot_0;
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_FocusedElement_1;
};

// UnityEngine.UIElements.StyleSheet/ImportStruct
struct ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2 
{
public:
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheet/ImportStruct::styleSheet
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet_0;
	// System.String[] UnityEngine.UIElements.StyleSheet/ImportStruct::mediaQueries
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mediaQueries_1;

public:
	inline static int32_t get_offset_of_styleSheet_0() { return static_cast<int32_t>(offsetof(ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2, ___styleSheet_0)); }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * get_styleSheet_0() const { return ___styleSheet_0; }
	inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F ** get_address_of_styleSheet_0() { return &___styleSheet_0; }
	inline void set_styleSheet_0(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * value)
	{
		___styleSheet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleSheet_0), (void*)value);
	}

	inline static int32_t get_offset_of_mediaQueries_1() { return static_cast<int32_t>(offsetof(ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2, ___mediaQueries_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mediaQueries_1() const { return ___mediaQueries_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mediaQueries_1() { return &___mediaQueries_1; }
	inline void set_mediaQueries_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mediaQueries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaQueries_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheet/ImportStruct
struct ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_pinvoke
{
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet_0;
	char** ___mediaQueries_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheet/ImportStruct
struct ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_com
{
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet_0;
	Il2CppChar** ___mediaQueries_1;
};

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8  : public ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::<element>k__BackingField
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___U3CelementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::isScheduled
	bool ___isScheduled_5;
	// UnityEngine.UIElements.VisualElementPanelActivator UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::m_Activator
	VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * ___m_Activator_6;

public:
	inline static int32_t get_offset_of_U3CelementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8, ___U3CelementU3Ek__BackingField_4)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_U3CelementU3Ek__BackingField_4() const { return ___U3CelementU3Ek__BackingField_4; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_U3CelementU3Ek__BackingField_4() { return &___U3CelementU3Ek__BackingField_4; }
	inline void set_U3CelementU3Ek__BackingField_4(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___U3CelementU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_isScheduled_5() { return static_cast<int32_t>(offsetof(BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8, ___isScheduled_5)); }
	inline bool get_isScheduled_5() const { return ___isScheduled_5; }
	inline bool* get_address_of_isScheduled_5() { return &___isScheduled_5; }
	inline void set_isScheduled_5(bool value)
	{
		___isScheduled_5 = value;
	}

	inline static int32_t get_offset_of_m_Activator_6() { return static_cast<int32_t>(offsetof(BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8, ___m_Activator_6)); }
	inline VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * get_m_Activator_6() const { return ___m_Activator_6; }
	inline VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB ** get_address_of_m_Activator_6() { return &___m_Activator_6; }
	inline void set_m_Activator_6(VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * value)
	{
		___m_Activator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Activator_6), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076, ___m_Owner_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_pinvoke
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_com
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Owner_0;
};

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Action>
struct VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928  : public BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8
{
public:
	// ActionType UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1::updateEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___updateEvent_7;

public:
	inline static int32_t get_offset_of_updateEvent_7() { return static_cast<int32_t>(offsetof(VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928, ___updateEvent_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_updateEvent_7() const { return ___updateEvent_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_updateEvent_7() { return &___updateEvent_7; }
	inline void set_updateEvent_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___updateEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateEvent_7), (void*)value);
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

// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.UIElements.HierarchyChangeType
struct HierarchyChangeType_t40FF640609945901A8CF69D73B5D5C3230CD0321 
{
public:
	// System.Int32 UnityEngine.UIElements.HierarchyChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HierarchyChangeType_t40FF640609945901A8CF69D73B5D5C3230CD0321, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.UIElements.PickingMode
struct PickingMode_tE4A9E47537EE069E6D01FE5BA8B42C6A73C41552 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_tE4A9E47537EE069E6D01FE5BA8B42C6A73C41552, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UIElements.PropagationPhase
struct PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct PseudoStates_t70E0AFDE5E4631CF8D6DC61F4EFC2A897592520F 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t70E0AFDE5E4631CF8D6DC61F4EFC2A897592520F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.RenderHints
struct RenderHints_t2229F1931CE245189511EF02048FF877499D8D75 
{
public:
	// System.Int32 UnityEngine.UIElements.RenderHints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderHints_t2229F1931CE245189511EF02048FF877499D8D75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleSelectorRelationship
struct StyleSelectorRelationship_t67462724F8477BD79CE489CA0B6C2F38C666B284 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleSelectorRelationship::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleSelectorRelationship_t67462724F8477BD79CE489CA0B6C2F38C666B284, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleSelectorType
struct StyleSelectorType_t076854E4D0D1DE5408564915375B2D4AF5F13BD7 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleSelectorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleSelectorType_t076854E4D0D1DE5408564915375B2D4AF5F13BD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleValueType
struct StyleValueType_t41CD4C2FFE2B4D2AFCB10F36A6D685A60517E32F 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleValueType_t41CD4C2FFE2B4D2AFCB10F36A6D685A60517E32F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.TrickleDown
struct TrickleDown_t2B43447DBFE33C97173AE2E62A3FBD13E525C6B1 
{
public:
	// System.Int32 UnityEngine.UIElements.TrickleDown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrickleDown_t2B43447DBFE33C97173AE2E62A3FBD13E525C6B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VersionChangeType
struct VersionChangeType_t3FEBAA280040F0B49F9F86685176341749F475FB 
{
public:
	// System.Int32 UnityEngine.UIElements.VersionChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VersionChangeType_t3FEBAA280040F0B49F9F86685176341749F475FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualElementFlags
struct VisualElementFlags_tC8340A28B43B5B88D0727EEDEC5EA4AB45F43470 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualElementFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisualElementFlags_tC8340A28B43B5B88D0727EEDEC5EA4AB45F43470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualTreeUpdatePhase
struct VisualTreeUpdatePhase_t9CE3C5377FEB57546B3282CB2B361313337B41CA 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualTreeUpdatePhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisualTreeUpdatePhase_t9CE3C5377FEB57546B3282CB2B361313337B41CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.WhiteSpace
struct WhiteSpace_tA1C94710E9ABD666CCACF2646025F9B597B300EC 
{
public:
	// System.Int32 UnityEngine.UIElements.WhiteSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WhiteSpace_tA1C94710E9ABD666CCACF2646025F9B597B300EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Wrap
struct Wrap_tAE1D45E6C155865D9100F288D2D24FCAF4482CBE 
{
public:
	// System.Int32 UnityEngine.UIElements.Wrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Wrap_tAE1D45E6C155865D9100F288D2D24FCAF4482CBE, ___value___2)); }
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


// UnityEngine.UIElements.ClickDetector/ButtonClickStatus
struct ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ClickDetector/ButtonClickStatus::m_Target
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_Target_0;
	// UnityEngine.Vector3 UnityEngine.UIElements.ClickDetector/ButtonClickStatus::m_PointerDownPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PointerDownPosition_1;
	// System.Int64 UnityEngine.UIElements.ClickDetector/ButtonClickStatus::m_LastPointerDownTime
	int64_t ___m_LastPointerDownTime_2;
	// System.Int32 UnityEngine.UIElements.ClickDetector/ButtonClickStatus::m_ClickCount
	int32_t ___m_ClickCount_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372, ___m_Target_0)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerDownPosition_1() { return static_cast<int32_t>(offsetof(ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372, ___m_PointerDownPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PointerDownPosition_1() const { return ___m_PointerDownPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PointerDownPosition_1() { return &___m_PointerDownPosition_1; }
	inline void set_m_PointerDownPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PointerDownPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPointerDownTime_2() { return static_cast<int32_t>(offsetof(ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372, ___m_LastPointerDownTime_2)); }
	inline int64_t get_m_LastPointerDownTime_2() const { return ___m_LastPointerDownTime_2; }
	inline int64_t* get_address_of_m_LastPointerDownTime_2() { return &___m_LastPointerDownTime_2; }
	inline void set_m_LastPointerDownTime_2(int64_t value)
	{
		___m_LastPointerDownTime_2 = value;
	}

	inline static int32_t get_offset_of_m_ClickCount_3() { return static_cast<int32_t>(offsetof(ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372, ___m_ClickCount_3)); }
	inline int32_t get_m_ClickCount_3() const { return ___m_ClickCount_3; }
	inline int32_t* get_address_of_m_ClickCount_3() { return &___m_ClickCount_3; }
	inline void set_m_ClickCount_3(int32_t value)
	{
		___m_ClickCount_3 = value;
	}
};


// UnityEngine.UIElements.StyleSheets.Dimension/Unit
struct Unit_tB29D3FED75F9D31C08A34BF71AFA3B7F3D81AE0F 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleSheets.Dimension/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_tB29D3FED75F9D31C08A34BF71AFA3B7F3D81AE0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/EventPropagation
struct EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/LifeCycleStatus
struct LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.IMGUIContainer/GUIGlobals
struct GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.IMGUIContainer/GUIGlobals::matrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix_0;
	// UnityEngine.Color UnityEngine.UIElements.IMGUIContainer/GUIGlobals::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Color UnityEngine.UIElements.IMGUIContainer/GUIGlobals::contentColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___contentColor_2;
	// UnityEngine.Color UnityEngine.UIElements.IMGUIContainer/GUIGlobals::backgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_3;
	// System.Boolean UnityEngine.UIElements.IMGUIContainer/GUIGlobals::enabled
	bool ___enabled_4;
	// System.Boolean UnityEngine.UIElements.IMGUIContainer/GUIGlobals::changed
	bool ___changed_5;
	// System.Int32 UnityEngine.UIElements.IMGUIContainer/GUIGlobals::displayIndex
	int32_t ___displayIndex_6;

public:
	inline static int32_t get_offset_of_matrix_0() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___matrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_matrix_0() const { return ___matrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_matrix_0() { return &___matrix_0; }
	inline void set_matrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___matrix_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_contentColor_2() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___contentColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_contentColor_2() const { return ___contentColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_contentColor_2() { return &___contentColor_2; }
	inline void set_contentColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___contentColor_2 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_3() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___backgroundColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColor_3() const { return ___backgroundColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColor_3() { return &___backgroundColor_3; }
	inline void set_backgroundColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColor_3 = value;
	}

	inline static int32_t get_offset_of_enabled_4() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___enabled_4)); }
	inline bool get_enabled_4() const { return ___enabled_4; }
	inline bool* get_address_of_enabled_4() { return &___enabled_4; }
	inline void set_enabled_4(bool value)
	{
		___enabled_4 = value;
	}

	inline static int32_t get_offset_of_changed_5() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___changed_5)); }
	inline bool get_changed_5() const { return ___changed_5; }
	inline bool* get_address_of_changed_5() { return &___changed_5; }
	inline void set_changed_5(bool value)
	{
		___changed_5 = value;
	}

	inline static int32_t get_offset_of_displayIndex_6() { return static_cast<int32_t>(offsetof(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7, ___displayIndex_6)); }
	inline int32_t get_displayIndex_6() const { return ___displayIndex_6; }
	inline int32_t* get_address_of_displayIndex_6() { return &___displayIndex_6; }
	inline void set_displayIndex_6(int32_t value)
	{
		___displayIndex_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.IMGUIContainer/GUIGlobals
struct GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___contentColor_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_3;
	int32_t ___enabled_4;
	int32_t ___changed_5;
	int32_t ___displayIndex_6;
};
// Native definition for COM marshalling of UnityEngine.UIElements.IMGUIContainer/GUIGlobals
struct GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___contentColor_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_3;
	int32_t ___enabled_4;
	int32_t ___changed_5;
	int32_t ___displayIndex_6;
};

// UnityEngine.UIElements.MouseCaptureDispatchingStrategy/EventBehavior
struct EventBehavior_tE1DDEA74EAF57C0DDB53BBCD77F3F49A71940B41 
{
public:
	// System.Int32 UnityEngine.UIElements.MouseCaptureDispatchingStrategy/EventBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventBehavior_tE1DDEA74EAF57C0DDB53BBCD77F3F49A71940B41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.UIElements.PropagationPaths/Type
struct Type_t2A6A2920A8E77CCFAB93B7E98D8EA7A8DFA567B9 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPaths/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t2A6A2920A8E77CCFAB93B7E98D8EA7A8DFA567B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualElement/MeasureMode
struct MeasureMode_t60AB86648220ACB1B54039259E761470B51BA97F 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualElement/MeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeasureMode_t60AB86648220ACB1B54039259E761470B51BA97F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase
struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Path_6)); }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_ImguiEvent_13)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.UIElements.StyleSelector
struct StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::m_Parts
	StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7* ___m_Parts_0;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.StyleSelector::m_PreviousRelationship
	int32_t ___m_PreviousRelationship_1;
	// System.Int32 UnityEngine.UIElements.StyleSelector::pseudoStateMask
	int32_t ___pseudoStateMask_2;
	// System.Int32 UnityEngine.UIElements.StyleSelector::negatedPseudoStateMask
	int32_t ___negatedPseudoStateMask_3;

public:
	inline static int32_t get_offset_of_m_Parts_0() { return static_cast<int32_t>(offsetof(StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C, ___m_Parts_0)); }
	inline StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7* get_m_Parts_0() const { return ___m_Parts_0; }
	inline StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7** get_address_of_m_Parts_0() { return &___m_Parts_0; }
	inline void set_m_Parts_0(StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7* value)
	{
		___m_Parts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parts_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRelationship_1() { return static_cast<int32_t>(offsetof(StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C, ___m_PreviousRelationship_1)); }
	inline int32_t get_m_PreviousRelationship_1() const { return ___m_PreviousRelationship_1; }
	inline int32_t* get_address_of_m_PreviousRelationship_1() { return &___m_PreviousRelationship_1; }
	inline void set_m_PreviousRelationship_1(int32_t value)
	{
		___m_PreviousRelationship_1 = value;
	}

	inline static int32_t get_offset_of_pseudoStateMask_2() { return static_cast<int32_t>(offsetof(StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C, ___pseudoStateMask_2)); }
	inline int32_t get_pseudoStateMask_2() const { return ___pseudoStateMask_2; }
	inline int32_t* get_address_of_pseudoStateMask_2() { return &___pseudoStateMask_2; }
	inline void set_pseudoStateMask_2(int32_t value)
	{
		___pseudoStateMask_2 = value;
	}

	inline static int32_t get_offset_of_negatedPseudoStateMask_3() { return static_cast<int32_t>(offsetof(StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C, ___negatedPseudoStateMask_3)); }
	inline int32_t get_negatedPseudoStateMask_3() const { return ___negatedPseudoStateMask_3; }
	inline int32_t* get_address_of_negatedPseudoStateMask_3() { return &___negatedPseudoStateMask_3; }
	inline void set_negatedPseudoStateMask_3(int32_t value)
	{
		___negatedPseudoStateMask_3 = value;
	}
};


// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54 
{
public:
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject * ___tempData_2;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___m_Value_0)); }
	inline String_t* get_m_Value_0() const { return ___m_Value_0; }
	inline String_t** get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(String_t* value)
	{
		___m_Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_tempData_2() { return static_cast<int32_t>(offsetof(StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54, ___tempData_2)); }
	inline RuntimeObject * get_tempData_2() const { return ___tempData_2; }
	inline RuntimeObject ** get_address_of_tempData_2() { return &___tempData_2; }
	inline void set_tempData_2(RuntimeObject * value)
	{
		___tempData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempData_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 
{
public:
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;

public:
	inline static int32_t get_offset_of_m_ValueType_0() { return static_cast<int32_t>(offsetof(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185, ___m_ValueType_0)); }
	inline int32_t get_m_ValueType_0() const { return ___m_ValueType_0; }
	inline int32_t* get_address_of_m_ValueType_0() { return &___m_ValueType_0; }
	inline void set_m_ValueType_0(int32_t value)
	{
		___m_ValueType_0 = value;
	}

	inline static int32_t get_offset_of_valueIndex_1() { return static_cast<int32_t>(offsetof(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185, ___valueIndex_1)); }
	inline int32_t get_valueIndex_1() const { return ___valueIndex_1; }
	inline int32_t* get_address_of_valueIndex_1() { return &___valueIndex_1; }
	inline void set_valueIndex_1(int32_t value)
	{
		___valueIndex_1 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0  : public Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14
{
public:
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ClassList_9;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * ___m_PropertyBag_10;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_11;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_12;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_13;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_14;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_15;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_16;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_Layout_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_BoundingBox_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldBoundingBox_19;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformCache_20;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformInverseCache_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClip_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClipMinusGroup_23;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_25;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_26;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_27;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_28;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___U3CyogaNodeU3Ek__BackingField_29;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_SharedStyle
	ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * ___m_SharedStyle_30;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * ___m_Style_31;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * ___variableContext_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_33;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_34;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_35;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_36;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___m_RunningAnimations_37;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___U3ChierarchyU3Ek__BackingField_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_PhysicalParent_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___m_LogicalParent_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___m_Children_42;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * ___U3CelementPanelU3Ek__BackingField_43;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * ___inlineStyleAccess_44;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * ___styleSheetList_45;

public:
	inline static int32_t get_offset_of_m_Name_8() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Name_8)); }
	inline String_t* get_m_Name_8() const { return ___m_Name_8; }
	inline String_t** get_address_of_m_Name_8() { return &___m_Name_8; }
	inline void set_m_Name_8(String_t* value)
	{
		___m_Name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassList_9() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_ClassList_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ClassList_9() const { return ___m_ClassList_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ClassList_9() { return &___m_ClassList_9; }
	inline void set_m_ClassList_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ClassList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClassList_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyBag_10() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PropertyBag_10)); }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * get_m_PropertyBag_10() const { return ___m_PropertyBag_10; }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC ** get_address_of_m_PropertyBag_10() { return &___m_PropertyBag_10; }
	inline void set_m_PropertyBag_10(List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * value)
	{
		___m_PropertyBag_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyBag_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_11() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Flags_11)); }
	inline int32_t get_m_Flags_11() const { return ___m_Flags_11; }
	inline int32_t* get_address_of_m_Flags_11() { return &___m_Flags_11; }
	inline void set_m_Flags_11(int32_t value)
	{
		___m_Flags_11 = value;
	}

	inline static int32_t get_offset_of_m_ViewDataKey_12() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_ViewDataKey_12)); }
	inline String_t* get_m_ViewDataKey_12() const { return ___m_ViewDataKey_12; }
	inline String_t** get_address_of_m_ViewDataKey_12() { return &___m_ViewDataKey_12; }
	inline void set_m_ViewDataKey_12(String_t* value)
	{
		___m_ViewDataKey_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewDataKey_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderHints_13() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_RenderHints_13)); }
	inline int32_t get_m_RenderHints_13() const { return ___m_RenderHints_13; }
	inline int32_t* get_address_of_m_RenderHints_13() { return &___m_RenderHints_13; }
	inline void set_m_RenderHints_13(int32_t value)
	{
		___m_RenderHints_13 = value;
	}

	inline static int32_t get_offset_of_m_Position_14() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Position_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_14() const { return ___m_Position_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_14() { return &___m_Position_14; }
	inline void set_m_Position_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_14 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_15() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Rotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_15() const { return ___m_Rotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_15() { return &___m_Rotation_15; }
	inline void set_m_Rotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_15 = value;
	}

	inline static int32_t get_offset_of_m_Scale_16() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Scale_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_16() const { return ___m_Scale_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_16() { return &___m_Scale_16; }
	inline void set_m_Scale_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_16 = value;
	}

	inline static int32_t get_offset_of_m_Layout_17() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Layout_17)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_Layout_17() const { return ___m_Layout_17; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_Layout_17() { return &___m_Layout_17; }
	inline void set_m_Layout_17(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_Layout_17 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_18() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_BoundingBox_18)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_BoundingBox_18() const { return ___m_BoundingBox_18; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_BoundingBox_18() { return &___m_BoundingBox_18; }
	inline void set_m_BoundingBox_18(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_BoundingBox_18 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_19() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldBoundingBox_19)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldBoundingBox_19() const { return ___m_WorldBoundingBox_19; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldBoundingBox_19() { return &___m_WorldBoundingBox_19; }
	inline void set_m_WorldBoundingBox_19(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldBoundingBox_19 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_20() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldTransformCache_20)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformCache_20() const { return ___m_WorldTransformCache_20; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformCache_20() { return &___m_WorldTransformCache_20; }
	inline void set_m_WorldTransformCache_20(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformCache_20 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_21() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldTransformInverseCache_21)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformInverseCache_21() const { return ___m_WorldTransformInverseCache_21; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformInverseCache_21() { return &___m_WorldTransformInverseCache_21; }
	inline void set_m_WorldTransformInverseCache_21(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformInverseCache_21 = value;
	}

	inline static int32_t get_offset_of_m_WorldClip_22() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldClip_22)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClip_22() const { return ___m_WorldClip_22; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClip_22() { return &___m_WorldClip_22; }
	inline void set_m_WorldClip_22(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClip_22 = value;
	}

	inline static int32_t get_offset_of_m_WorldClipMinusGroup_23() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_WorldClipMinusGroup_23)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClipMinusGroup_23() const { return ___m_WorldClipMinusGroup_23; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClipMinusGroup_23() { return &___m_WorldClipMinusGroup_23; }
	inline void set_m_WorldClipMinusGroup_23(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClipMinusGroup_23 = value;
	}

	inline static int32_t get_offset_of_triggerPseudoMask_25() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___triggerPseudoMask_25)); }
	inline int32_t get_triggerPseudoMask_25() const { return ___triggerPseudoMask_25; }
	inline int32_t* get_address_of_triggerPseudoMask_25() { return &___triggerPseudoMask_25; }
	inline void set_triggerPseudoMask_25(int32_t value)
	{
		___triggerPseudoMask_25 = value;
	}

	inline static int32_t get_offset_of_dependencyPseudoMask_26() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___dependencyPseudoMask_26)); }
	inline int32_t get_dependencyPseudoMask_26() const { return ___dependencyPseudoMask_26; }
	inline int32_t* get_address_of_dependencyPseudoMask_26() { return &___dependencyPseudoMask_26; }
	inline void set_dependencyPseudoMask_26(int32_t value)
	{
		___dependencyPseudoMask_26 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_27() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PseudoStates_27)); }
	inline int32_t get_m_PseudoStates_27() const { return ___m_PseudoStates_27; }
	inline int32_t* get_address_of_m_PseudoStates_27() { return &___m_PseudoStates_27; }
	inline void set_m_PseudoStates_27(int32_t value)
	{
		___m_PseudoStates_27 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CpickingModeU3Ek__BackingField_28)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_28() const { return ___U3CpickingModeU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_28() { return &___U3CpickingModeU3Ek__BackingField_28; }
	inline void set_U3CpickingModeU3Ek__BackingField_28(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CyogaNodeU3Ek__BackingField_29)); }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * get_U3CyogaNodeU3Ek__BackingField_29() const { return ___U3CyogaNodeU3Ek__BackingField_29; }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 ** get_address_of_U3CyogaNodeU3Ek__BackingField_29() { return &___U3CyogaNodeU3Ek__BackingField_29; }
	inline void set_U3CyogaNodeU3Ek__BackingField_29(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * value)
	{
		___U3CyogaNodeU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStyle_30() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_SharedStyle_30)); }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * get_m_SharedStyle_30() const { return ___m_SharedStyle_30; }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E ** get_address_of_m_SharedStyle_30() { return &___m_SharedStyle_30; }
	inline void set_m_SharedStyle_30(ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * value)
	{
		___m_SharedStyle_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStyle_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_31() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Style_31)); }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * get_m_Style_31() const { return ___m_Style_31; }
	inline ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E ** get_address_of_m_Style_31() { return &___m_Style_31; }
	inline void set_m_Style_31(ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E * value)
	{
		___m_Style_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_31), (void*)value);
	}

	inline static int32_t get_offset_of_variableContext_32() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___variableContext_32)); }
	inline StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * get_variableContext_32() const { return ___variableContext_32; }
	inline StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE ** get_address_of_variableContext_32() { return &___variableContext_32; }
	inline void set_variableContext_32(StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE * value)
	{
		___variableContext_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableContext_32), (void*)value);
	}

	inline static int32_t get_offset_of_inheritedStylesHash_33() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___inheritedStylesHash_33)); }
	inline int32_t get_inheritedStylesHash_33() const { return ___inheritedStylesHash_33; }
	inline int32_t* get_address_of_inheritedStylesHash_33() { return &___inheritedStylesHash_33; }
	inline void set_inheritedStylesHash_33(int32_t value)
	{
		___inheritedStylesHash_33 = value;
	}

	inline static int32_t get_offset_of_controlid_34() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___controlid_34)); }
	inline uint32_t get_controlid_34() const { return ___controlid_34; }
	inline uint32_t* get_address_of_controlid_34() { return &___controlid_34; }
	inline void set_controlid_34(uint32_t value)
	{
		___controlid_34 = value;
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_35() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___imguiContainerDescendantCount_35)); }
	inline int32_t get_imguiContainerDescendantCount_35() const { return ___imguiContainerDescendantCount_35; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_35() { return &___imguiContainerDescendantCount_35; }
	inline void set_imguiContainerDescendantCount_35(int32_t value)
	{
		___imguiContainerDescendantCount_35 = value;
	}

	inline static int32_t get_offset_of_U3CenabledSelfU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CenabledSelfU3Ek__BackingField_36)); }
	inline bool get_U3CenabledSelfU3Ek__BackingField_36() const { return ___U3CenabledSelfU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CenabledSelfU3Ek__BackingField_36() { return &___U3CenabledSelfU3Ek__BackingField_36; }
	inline void set_U3CenabledSelfU3Ek__BackingField_36(bool value)
	{
		___U3CenabledSelfU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_m_RunningAnimations_37() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_RunningAnimations_37)); }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * get_m_RunningAnimations_37() const { return ___m_RunningAnimations_37; }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 ** get_address_of_m_RunningAnimations_37() { return &___m_RunningAnimations_37; }
	inline void set_m_RunningAnimations_37(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * value)
	{
		___m_RunningAnimations_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RunningAnimations_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3ChierarchyU3Ek__BackingField_38)); }
	inline Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  get_U3ChierarchyU3Ek__BackingField_38() const { return ___U3ChierarchyU3Ek__BackingField_38; }
	inline Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * get_address_of_U3ChierarchyU3Ek__BackingField_38() { return &___U3ChierarchyU3Ek__BackingField_38; }
	inline void set_U3ChierarchyU3Ek__BackingField_38(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  value)
	{
		___U3ChierarchyU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_38))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PhysicalParent_39() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_PhysicalParent_39)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_PhysicalParent_39() const { return ___m_PhysicalParent_39; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_PhysicalParent_39() { return &___m_PhysicalParent_39; }
	inline void set_m_PhysicalParent_39(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_PhysicalParent_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogicalParent_40() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_LogicalParent_40)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_m_LogicalParent_40() const { return ___m_LogicalParent_40; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_m_LogicalParent_40() { return &___m_LogicalParent_40; }
	inline void set_m_LogicalParent_40(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___m_LogicalParent_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogicalParent_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_42() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___m_Children_42)); }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * get_m_Children_42() const { return ___m_Children_42; }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 ** get_address_of_m_Children_42() { return &___m_Children_42; }
	inline void set_m_Children_42(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * value)
	{
		___m_Children_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___U3CelementPanelU3Ek__BackingField_43)); }
	inline BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * get_U3CelementPanelU3Ek__BackingField_43() const { return ___U3CelementPanelU3Ek__BackingField_43; }
	inline BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 ** get_address_of_U3CelementPanelU3Ek__BackingField_43() { return &___U3CelementPanelU3Ek__BackingField_43; }
	inline void set_U3CelementPanelU3Ek__BackingField_43(BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * value)
	{
		___U3CelementPanelU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_inlineStyleAccess_44() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___inlineStyleAccess_44)); }
	inline InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * get_inlineStyleAccess_44() const { return ___inlineStyleAccess_44; }
	inline InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 ** get_address_of_inlineStyleAccess_44() { return &___inlineStyleAccess_44; }
	inline void set_inlineStyleAccess_44(InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57 * value)
	{
		___inlineStyleAccess_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineStyleAccess_44), (void*)value);
	}

	inline static int32_t get_offset_of_styleSheetList_45() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0, ___styleSheetList_45)); }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * get_styleSheetList_45() const { return ___styleSheetList_45; }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 ** get_address_of_styleSheetList_45() { return &___styleSheetList_45; }
	inline void set_styleSheetList_45(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * value)
	{
		___styleSheetList_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleSheetList_45), (void*)value);
	}
};

struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields
{
public:
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_4;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___s_EmptyClassList_5;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  ___userDataPropertyKey_6;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_7;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___s_InfiniteRect_24;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___s_EmptyList_41;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_InternalStyleSheetPath_46;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  ___tooltipPropertyKey_47;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F * ___s_TypeData_48;

public:
	inline static int32_t get_offset_of_s_NextId_4() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_NextId_4)); }
	inline uint32_t get_s_NextId_4() const { return ___s_NextId_4; }
	inline uint32_t* get_address_of_s_NextId_4() { return &___s_NextId_4; }
	inline void set_s_NextId_4(uint32_t value)
	{
		___s_NextId_4 = value;
	}

	inline static int32_t get_offset_of_s_EmptyClassList_5() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_EmptyClassList_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_s_EmptyClassList_5() const { return ___s_EmptyClassList_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_s_EmptyClassList_5() { return &___s_EmptyClassList_5; }
	inline void set_s_EmptyClassList_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___s_EmptyClassList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_5), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_6() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___userDataPropertyKey_6)); }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  get_userDataPropertyKey_6() const { return ___userDataPropertyKey_6; }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 * get_address_of_userDataPropertyKey_6() { return &___userDataPropertyKey_6; }
	inline void set_userDataPropertyKey_6(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  value)
	{
		___userDataPropertyKey_6 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_7() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___disabledUssClassName_7)); }
	inline String_t* get_disabledUssClassName_7() const { return ___disabledUssClassName_7; }
	inline String_t** get_address_of_disabledUssClassName_7() { return &___disabledUssClassName_7; }
	inline void set_disabledUssClassName_7(String_t* value)
	{
		___disabledUssClassName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_24() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_InfiniteRect_24)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_s_InfiniteRect_24() const { return ___s_InfiniteRect_24; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_s_InfiniteRect_24() { return &___s_InfiniteRect_24; }
	inline void set_s_InfiniteRect_24(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___s_InfiniteRect_24 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_41() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_EmptyList_41)); }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * get_s_EmptyList_41() const { return ___s_EmptyList_41; }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 ** get_address_of_s_EmptyList_41() { return &___s_EmptyList_41; }
	inline void set_s_EmptyList_41(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * value)
	{
		___s_EmptyList_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_41), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalStyleSheetPath_46() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_InternalStyleSheetPath_46)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_InternalStyleSheetPath_46() const { return ___s_InternalStyleSheetPath_46; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_InternalStyleSheetPath_46() { return &___s_InternalStyleSheetPath_46; }
	inline void set_s_InternalStyleSheetPath_46(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_InternalStyleSheetPath_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalStyleSheetPath_46), (void*)value);
	}

	inline static int32_t get_offset_of_tooltipPropertyKey_47() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___tooltipPropertyKey_47)); }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  get_tooltipPropertyKey_47() const { return ___tooltipPropertyKey_47; }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 * get_address_of_tooltipPropertyKey_47() { return &___tooltipPropertyKey_47; }
	inline void set_tooltipPropertyKey_47(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  value)
	{
		___tooltipPropertyKey_47 = value;
	}

	inline static int32_t get_offset_of_s_TypeData_48() { return static_cast<int32_t>(offsetof(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields, ___s_TypeData_48)); }
	inline Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F * get_s_TypeData_48() const { return ___s_TypeData_48; }
	inline Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F ** get_address_of_s_TypeData_48() { return &___s_TypeData_48; }
	inline void set_s_TypeData_48(Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F * value)
	{
		___s_TypeData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TypeData_48), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElementAnimationSystem
struct VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D  : public BaseVisualTreeUpdater_t98D08BDA96D4F62B24CEF547A05E4F4296178A94
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElementAnimationSystem::m_Animations
	HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * ___m_Animations_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElementAnimationSystem::m_IterationList
	List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___m_IterationList_1;
	// System.Boolean UnityEngine.UIElements.VisualElementAnimationSystem::m_HasNewAnimations
	bool ___m_HasNewAnimations_2;
	// System.Boolean UnityEngine.UIElements.VisualElementAnimationSystem::m_IterationListDirty
	bool ___m_IterationListDirty_3;
	// System.Int64 UnityEngine.UIElements.VisualElementAnimationSystem::lastUpdate
	int64_t ___lastUpdate_6;

public:
	inline static int32_t get_offset_of_m_Animations_0() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D, ___m_Animations_0)); }
	inline HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * get_m_Animations_0() const { return ___m_Animations_0; }
	inline HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E ** get_address_of_m_Animations_0() { return &___m_Animations_0; }
	inline void set_m_Animations_0(HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * value)
	{
		___m_Animations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Animations_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IterationList_1() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D, ___m_IterationList_1)); }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * get_m_IterationList_1() const { return ___m_IterationList_1; }
	inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 ** get_address_of_m_IterationList_1() { return &___m_IterationList_1; }
	inline void set_m_IterationList_1(List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * value)
	{
		___m_IterationList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IterationList_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasNewAnimations_2() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D, ___m_HasNewAnimations_2)); }
	inline bool get_m_HasNewAnimations_2() const { return ___m_HasNewAnimations_2; }
	inline bool* get_address_of_m_HasNewAnimations_2() { return &___m_HasNewAnimations_2; }
	inline void set_m_HasNewAnimations_2(bool value)
	{
		___m_HasNewAnimations_2 = value;
	}

	inline static int32_t get_offset_of_m_IterationListDirty_3() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D, ___m_IterationListDirty_3)); }
	inline bool get_m_IterationListDirty_3() const { return ___m_IterationListDirty_3; }
	inline bool* get_address_of_m_IterationListDirty_3() { return &___m_IterationListDirty_3; }
	inline void set_m_IterationListDirty_3(bool value)
	{
		___m_IterationListDirty_3 = value;
	}

	inline static int32_t get_offset_of_lastUpdate_6() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D, ___lastUpdate_6)); }
	inline int64_t get_lastUpdate_6() const { return ___lastUpdate_6; }
	inline int64_t* get_address_of_lastUpdate_6() { return &___lastUpdate_6; }
	inline void set_lastUpdate_6(int64_t value)
	{
		___lastUpdate_6 = value;
	}
};

struct VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields
{
public:
	// System.String UnityEngine.UIElements.VisualElementAnimationSystem::s_Description
	String_t* ___s_Description_4;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElementAnimationSystem::s_ProfilerMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ProfilerMarker_5;

public:
	inline static int32_t get_offset_of_s_Description_4() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields, ___s_Description_4)); }
	inline String_t* get_s_Description_4() const { return ___s_Description_4; }
	inline String_t** get_address_of_s_Description_4() { return &___s_Description_4; }
	inline void set_s_Description_4(String_t* value)
	{
		___s_Description_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Description_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ProfilerMarker_5() { return static_cast<int32_t>(offsetof(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields, ___s_ProfilerMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ProfilerMarker_5() const { return ___s_ProfilerMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ProfilerMarker_5() { return &___s_ProfilerMarker_5; }
	inline void set_s_ProfilerMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ProfilerMarker_5 = value;
	}
};


// UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3 
{
public:
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::state
	int32_t ___state_0;
	// System.Boolean UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::negate
	bool ___negate_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_pinvoke
{
	int32_t ___state_0;
	int32_t ___negate_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_com
{
	int32_t ___state_0;
	int32_t ___negate_1;
};

// UnityEngine.UIElements.VisualElement/SimpleScheduledItem
struct SimpleScheduledItem_tDEB73FC5E429E6ECA8FC766507195FE77A4D4391  : public VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928
{
public:

public:
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.AttachToPanelEvent>
struct EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tC0AB2CB5DDBD0D607490652CD372D2C25C1903BB * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tC0AB2CB5DDBD0D607490652CD372D2C25C1903BB * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tC0AB2CB5DDBD0D607490652CD372D2C25C1903BB ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tC0AB2CB5DDBD0D607490652CD372D2C25C1903BB * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.DetachFromPanelEvent>
struct EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tFA9D537CE0DBE230B8F38AFB22AFBFBC0018F52B * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tFA9D537CE0DBE230B8F38AFB22AFBFBC0018F52B * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tFA9D537CE0DBE230B8F38AFB22AFBFBC0018F52B ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tFA9D537CE0DBE230B8F38AFB22AFBFBC0018F52B * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.TooltipEvent>
struct EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t0F9BF8802FC4A5D3F7A99CA5D3002BC8C3020060 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t0F9BF8802FC4A5D3F7A99CA5D3002BC8C3020060 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t0F9BF8802FC4A5D3F7A99CA5D3002BC8C3020060 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t0F9BF8802FC4A5D3F7A99CA5D3002BC8C3020060 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.WheelEvent>
struct EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t0F915A9CA7F6727FBC0D431F62582EE627CDD9D9 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t0F915A9CA7F6727FBC0D431F62582EE627CDD9D9 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t0F915A9CA7F6727FBC0D431F62582EE627CDD9D9 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t0F915A9CA7F6727FBC0D431F62582EE627CDD9D9 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.AttachToPanelEvent>
struct EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.DetachFromPanelEvent>
struct EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.String>
struct TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7  : public VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0
{
public:
	// System.Boolean UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<isReadOnly>k__BackingField
	bool ___U3CisReadOnlyU3Ek__BackingField_49;
	// System.Int32 UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<maxLength>k__BackingField
	int32_t ___U3CmaxLengthU3Ek__BackingField_50;
	// System.Char UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<maskChar>k__BackingField
	Il2CppChar ___U3CmaskCharU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<isPasswordField>k__BackingField
	bool ___U3CisPasswordFieldU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<doubleClickSelectsWord>k__BackingField
	bool ___U3CdoubleClickSelectsWordU3Ek__BackingField_53;
	// System.Boolean UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<tripleClickSelectsLine>k__BackingField
	bool ___U3CtripleClickSelectsLineU3Ek__BackingField_54;
	// System.Boolean UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<isDelayed>k__BackingField
	bool ___U3CisDelayedU3Ek__BackingField_55;
	// UnityEngine.UIElements.TextEditorEngine UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::<editorEngine>k__BackingField
	TextEditorEngine_t94EB64306917B7C8F6EFCDB4B7B1A65CAEFE4BF9 * ___U3CeditorEngineU3Ek__BackingField_56;
	// System.String UnityEngine.UIElements.TextInputBaseField`1/TextInputBase::m_Text
	String_t* ___m_Text_57;

public:
	inline static int32_t get_offset_of_U3CisReadOnlyU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CisReadOnlyU3Ek__BackingField_49)); }
	inline bool get_U3CisReadOnlyU3Ek__BackingField_49() const { return ___U3CisReadOnlyU3Ek__BackingField_49; }
	inline bool* get_address_of_U3CisReadOnlyU3Ek__BackingField_49() { return &___U3CisReadOnlyU3Ek__BackingField_49; }
	inline void set_U3CisReadOnlyU3Ek__BackingField_49(bool value)
	{
		___U3CisReadOnlyU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CmaxLengthU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CmaxLengthU3Ek__BackingField_50)); }
	inline int32_t get_U3CmaxLengthU3Ek__BackingField_50() const { return ___U3CmaxLengthU3Ek__BackingField_50; }
	inline int32_t* get_address_of_U3CmaxLengthU3Ek__BackingField_50() { return &___U3CmaxLengthU3Ek__BackingField_50; }
	inline void set_U3CmaxLengthU3Ek__BackingField_50(int32_t value)
	{
		___U3CmaxLengthU3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_U3CmaskCharU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CmaskCharU3Ek__BackingField_51)); }
	inline Il2CppChar get_U3CmaskCharU3Ek__BackingField_51() const { return ___U3CmaskCharU3Ek__BackingField_51; }
	inline Il2CppChar* get_address_of_U3CmaskCharU3Ek__BackingField_51() { return &___U3CmaskCharU3Ek__BackingField_51; }
	inline void set_U3CmaskCharU3Ek__BackingField_51(Il2CppChar value)
	{
		___U3CmaskCharU3Ek__BackingField_51 = value;
	}

	inline static int32_t get_offset_of_U3CisPasswordFieldU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CisPasswordFieldU3Ek__BackingField_52)); }
	inline bool get_U3CisPasswordFieldU3Ek__BackingField_52() const { return ___U3CisPasswordFieldU3Ek__BackingField_52; }
	inline bool* get_address_of_U3CisPasswordFieldU3Ek__BackingField_52() { return &___U3CisPasswordFieldU3Ek__BackingField_52; }
	inline void set_U3CisPasswordFieldU3Ek__BackingField_52(bool value)
	{
		___U3CisPasswordFieldU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_U3CdoubleClickSelectsWordU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CdoubleClickSelectsWordU3Ek__BackingField_53)); }
	inline bool get_U3CdoubleClickSelectsWordU3Ek__BackingField_53() const { return ___U3CdoubleClickSelectsWordU3Ek__BackingField_53; }
	inline bool* get_address_of_U3CdoubleClickSelectsWordU3Ek__BackingField_53() { return &___U3CdoubleClickSelectsWordU3Ek__BackingField_53; }
	inline void set_U3CdoubleClickSelectsWordU3Ek__BackingField_53(bool value)
	{
		___U3CdoubleClickSelectsWordU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3CtripleClickSelectsLineU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CtripleClickSelectsLineU3Ek__BackingField_54)); }
	inline bool get_U3CtripleClickSelectsLineU3Ek__BackingField_54() const { return ___U3CtripleClickSelectsLineU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CtripleClickSelectsLineU3Ek__BackingField_54() { return &___U3CtripleClickSelectsLineU3Ek__BackingField_54; }
	inline void set_U3CtripleClickSelectsLineU3Ek__BackingField_54(bool value)
	{
		___U3CtripleClickSelectsLineU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CisDelayedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CisDelayedU3Ek__BackingField_55)); }
	inline bool get_U3CisDelayedU3Ek__BackingField_55() const { return ___U3CisDelayedU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CisDelayedU3Ek__BackingField_55() { return &___U3CisDelayedU3Ek__BackingField_55; }
	inline void set_U3CisDelayedU3Ek__BackingField_55(bool value)
	{
		___U3CisDelayedU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CeditorEngineU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___U3CeditorEngineU3Ek__BackingField_56)); }
	inline TextEditorEngine_t94EB64306917B7C8F6EFCDB4B7B1A65CAEFE4BF9 * get_U3CeditorEngineU3Ek__BackingField_56() const { return ___U3CeditorEngineU3Ek__BackingField_56; }
	inline TextEditorEngine_t94EB64306917B7C8F6EFCDB4B7B1A65CAEFE4BF9 ** get_address_of_U3CeditorEngineU3Ek__BackingField_56() { return &___U3CeditorEngineU3Ek__BackingField_56; }
	inline void set_U3CeditorEngineU3Ek__BackingField_56(TextEditorEngine_t94EB64306917B7C8F6EFCDB4B7B1A65CAEFE4BF9 * value)
	{
		___U3CeditorEngineU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeditorEngineU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_57() { return static_cast<int32_t>(offsetof(TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7, ___m_Text_57)); }
	inline String_t* get_m_Text_57() const { return ___m_Text_57; }
	inline String_t** get_address_of_m_Text_57() { return &___m_Text_57; }
	inline void set_m_Text_57(String_t* value)
	{
		___m_Text_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_57), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* ___m_Rules_4;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* ___m_ComplexSelectors_5;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___floats_6;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* ___dimensions_7;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors_8;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings_9;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___assets_10;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184* ___imports_11;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * ___m_FlattenedImportedStyleSheets_12;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_13;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* ___scalableImages_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedNameSelectors_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedTypeSelectors_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * ___orderedClassSelectors_17;
	// System.Boolean UnityEngine.UIElements.StyleSheet::isUnityStyleSheet
	bool ___isUnityStyleSheet_18;

public:
	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_Rules_4)); }
	inline StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* get_m_Rules_4() const { return ___m_Rules_4; }
	inline StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(StyleRuleU5BU5D_t55A2FB25E952A81E416F0F3AFA9DE62D9BC79F6C* value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComplexSelectors_5() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_ComplexSelectors_5)); }
	inline StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* get_m_ComplexSelectors_5() const { return ___m_ComplexSelectors_5; }
	inline StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F** get_address_of_m_ComplexSelectors_5() { return &___m_ComplexSelectors_5; }
	inline void set_m_ComplexSelectors_5(StyleComplexSelectorU5BU5D_t5F6245386E94A827D3FC3E49583E9638B378162F* value)
	{
		___m_ComplexSelectors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComplexSelectors_5), (void*)value);
	}

	inline static int32_t get_offset_of_floats_6() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___floats_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_floats_6() const { return ___floats_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_floats_6() { return &___floats_6; }
	inline void set_floats_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___floats_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floats_6), (void*)value);
	}

	inline static int32_t get_offset_of_dimensions_7() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___dimensions_7)); }
	inline DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* get_dimensions_7() const { return ___dimensions_7; }
	inline DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A** get_address_of_dimensions_7() { return &___dimensions_7; }
	inline void set_dimensions_7(DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A* value)
	{
		___dimensions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensions_7), (void*)value);
	}

	inline static int32_t get_offset_of_colors_8() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___colors_8)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_colors_8() const { return ___colors_8; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_colors_8() { return &___colors_8; }
	inline void set_colors_8(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___colors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_8), (void*)value);
	}

	inline static int32_t get_offset_of_strings_9() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___strings_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_strings_9() const { return ___strings_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_strings_9() { return &___strings_9; }
	inline void set_strings_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___strings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_9), (void*)value);
	}

	inline static int32_t get_offset_of_assets_10() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___assets_10)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get_assets_10() const { return ___assets_10; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of_assets_10() { return &___assets_10; }
	inline void set_assets_10(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		___assets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assets_10), (void*)value);
	}

	inline static int32_t get_offset_of_imports_11() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___imports_11)); }
	inline ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184* get_imports_11() const { return ___imports_11; }
	inline ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184** get_address_of_imports_11() { return &___imports_11; }
	inline void set_imports_11(ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184* value)
	{
		___imports_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imports_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_FlattenedImportedStyleSheets_12() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_FlattenedImportedStyleSheets_12)); }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * get_m_FlattenedImportedStyleSheets_12() const { return ___m_FlattenedImportedStyleSheets_12; }
	inline List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 ** get_address_of_m_FlattenedImportedStyleSheets_12() { return &___m_FlattenedImportedStyleSheets_12; }
	inline void set_m_FlattenedImportedStyleSheets_12(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * value)
	{
		___m_FlattenedImportedStyleSheets_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FlattenedImportedStyleSheets_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentHash_13() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___m_ContentHash_13)); }
	inline int32_t get_m_ContentHash_13() const { return ___m_ContentHash_13; }
	inline int32_t* get_address_of_m_ContentHash_13() { return &___m_ContentHash_13; }
	inline void set_m_ContentHash_13(int32_t value)
	{
		___m_ContentHash_13 = value;
	}

	inline static int32_t get_offset_of_scalableImages_14() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___scalableImages_14)); }
	inline ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* get_scalableImages_14() const { return ___scalableImages_14; }
	inline ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E** get_address_of_scalableImages_14() { return &___scalableImages_14; }
	inline void set_scalableImages_14(ScalableImageU5BU5D_tDCCCB50C4AF02BDD51C682EC8F72D818099D987E* value)
	{
		___scalableImages_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scalableImages_14), (void*)value);
	}

	inline static int32_t get_offset_of_orderedNameSelectors_15() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedNameSelectors_15)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedNameSelectors_15() const { return ___orderedNameSelectors_15; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedNameSelectors_15() { return &___orderedNameSelectors_15; }
	inline void set_orderedNameSelectors_15(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedNameSelectors_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedNameSelectors_15), (void*)value);
	}

	inline static int32_t get_offset_of_orderedTypeSelectors_16() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedTypeSelectors_16)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedTypeSelectors_16() const { return ___orderedTypeSelectors_16; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedTypeSelectors_16() { return &___orderedTypeSelectors_16; }
	inline void set_orderedTypeSelectors_16(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedTypeSelectors_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedTypeSelectors_16), (void*)value);
	}

	inline static int32_t get_offset_of_orderedClassSelectors_17() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___orderedClassSelectors_17)); }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * get_orderedClassSelectors_17() const { return ___orderedClassSelectors_17; }
	inline Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 ** get_address_of_orderedClassSelectors_17() { return &___orderedClassSelectors_17; }
	inline void set_orderedClassSelectors_17(Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823 * value)
	{
		___orderedClassSelectors_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedClassSelectors_17), (void*)value);
	}

	inline static int32_t get_offset_of_isUnityStyleSheet_18() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F, ___isUnityStyleSheet_18)); }
	inline bool get_isUnityStyleSheet_18() const { return ___isUnityStyleSheet_18; }
	inline bool* get_address_of_isUnityStyleSheet_18() { return &___isUnityStyleSheet_18; }
	inline void set_isUnityStyleSheet_18(bool value)
	{
		___isUnityStyleSheet_18 = value;
	}
};

struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F_StaticFields
{
public:
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_19;

public:
	inline static int32_t get_offset_of_kCustomPropertyMarker_19() { return static_cast<int32_t>(offsetof(StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F_StaticFields, ___kCustomPropertyMarker_19)); }
	inline String_t* get_kCustomPropertyMarker_19() const { return ___kCustomPropertyMarker_19; }
	inline String_t** get_address_of_kCustomPropertyMarker_19() { return &___kCustomPropertyMarker_19; }
	inline void set_kCustomPropertyMarker_19(String_t* value)
	{
		___kCustomPropertyMarker_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kCustomPropertyMarker_19), (void*)value);
	}
};


// UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction
struct GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A  : public EventBase_1_t43B0F21596E619C125913DBB16B910D1C52BE8B1
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmousePositionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CmousePositionU3Ek__BackingField_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CmousePositionU3Ek__BackingField_19() const { return ___U3CmousePositionU3Ek__BackingField_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CmousePositionU3Ek__BackingField_19() { return &___U3CmousePositionU3Ek__BackingField_19; }
	inline void set_U3CmousePositionU3Ek__BackingField_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CmousePositionU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3ClocalMousePositionU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ClocalMousePositionU3Ek__BackingField_20() const { return ___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ClocalMousePositionU3Ek__BackingField_20() { return &___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline void set_U3ClocalMousePositionU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ClocalMousePositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CmouseDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CmouseDeltaU3Ek__BackingField_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CmouseDeltaU3Ek__BackingField_21() const { return ___U3CmouseDeltaU3Ek__BackingField_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CmouseDeltaU3Ek__BackingField_21() { return &___U3CmouseDeltaU3Ek__BackingField_21; }
	inline void set_U3CmouseDeltaU3Ek__BackingField_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CmouseDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CclickCountU3Ek__BackingField_22)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_22() const { return ___U3CclickCountU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_22() { return &___U3CclickCountU3Ek__BackingField_22; }
	inline void set_U3CclickCountU3Ek__BackingField_22(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CpressedButtonsU3Ek__BackingField_24)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_24() const { return ___U3CpressedButtonsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_24() { return &___U3CpressedButtonsU3Ek__BackingField_24; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_24(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A, ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.UIElements.PanelChangedEventBase`1<UnityEngine.UIElements.AttachToPanelEvent>
struct PanelChangedEventBase_1_t797F6141FE04BF2E5705927A9D6276B40B1B6C6D  : public EventBase_1_tCCCA3B845A3558F5E4BDD5669345FC7340A749D0
{
public:
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.PanelChangedEventBase`1::<originPanel>k__BackingField
	RuntimeObject* ___U3CoriginPanelU3Ek__BackingField_18;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.PanelChangedEventBase`1::<destinationPanel>k__BackingField
	RuntimeObject* ___U3CdestinationPanelU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CoriginPanelU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PanelChangedEventBase_1_t797F6141FE04BF2E5705927A9D6276B40B1B6C6D, ___U3CoriginPanelU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CoriginPanelU3Ek__BackingField_18() const { return ___U3CoriginPanelU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CoriginPanelU3Ek__BackingField_18() { return &___U3CoriginPanelU3Ek__BackingField_18; }
	inline void set_U3CoriginPanelU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CoriginPanelU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginPanelU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationPanelU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PanelChangedEventBase_1_t797F6141FE04BF2E5705927A9D6276B40B1B6C6D, ___U3CdestinationPanelU3Ek__BackingField_19)); }
	inline RuntimeObject* get_U3CdestinationPanelU3Ek__BackingField_19() const { return ___U3CdestinationPanelU3Ek__BackingField_19; }
	inline RuntimeObject** get_address_of_U3CdestinationPanelU3Ek__BackingField_19() { return &___U3CdestinationPanelU3Ek__BackingField_19; }
	inline void set_U3CdestinationPanelU3Ek__BackingField_19(RuntimeObject* value)
	{
		___U3CdestinationPanelU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationPanelU3Ek__BackingField_19), (void*)value);
	}
};


// UnityEngine.UIElements.PanelChangedEventBase`1<UnityEngine.UIElements.DetachFromPanelEvent>
struct PanelChangedEventBase_1_t89BDDA58D75F4F5D7DA09DADEA265C67624A3B6E  : public EventBase_1_t08138755340FBBBB94F1DF008916A33BDC2C32B6
{
public:
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.PanelChangedEventBase`1::<originPanel>k__BackingField
	RuntimeObject* ___U3CoriginPanelU3Ek__BackingField_18;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.PanelChangedEventBase`1::<destinationPanel>k__BackingField
	RuntimeObject* ___U3CdestinationPanelU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CoriginPanelU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PanelChangedEventBase_1_t89BDDA58D75F4F5D7DA09DADEA265C67624A3B6E, ___U3CoriginPanelU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CoriginPanelU3Ek__BackingField_18() const { return ___U3CoriginPanelU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CoriginPanelU3Ek__BackingField_18() { return &___U3CoriginPanelU3Ek__BackingField_18; }
	inline void set_U3CoriginPanelU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CoriginPanelU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginPanelU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationPanelU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PanelChangedEventBase_1_t89BDDA58D75F4F5D7DA09DADEA265C67624A3B6E, ___U3CdestinationPanelU3Ek__BackingField_19)); }
	inline RuntimeObject* get_U3CdestinationPanelU3Ek__BackingField_19() const { return ___U3CdestinationPanelU3Ek__BackingField_19; }
	inline RuntimeObject** get_address_of_U3CdestinationPanelU3Ek__BackingField_19() { return &___U3CdestinationPanelU3Ek__BackingField_19; }
	inline void set_U3CdestinationPanelU3Ek__BackingField_19(RuntimeObject* value)
	{
		___U3CdestinationPanelU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationPanelU3Ek__BackingField_19), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.UIElements.TooltipEvent
struct TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46  : public EventBase_1_t5B93E18422D2A8D7831281E6347CD8DA4911B956
{
public:
	// System.String UnityEngine.UIElements.TooltipEvent::<tooltip>k__BackingField
	String_t* ___U3CtooltipU3Ek__BackingField_18;
	// UnityEngine.Rect UnityEngine.UIElements.TooltipEvent::<rect>k__BackingField
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CrectU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CtooltipU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46, ___U3CtooltipU3Ek__BackingField_18)); }
	inline String_t* get_U3CtooltipU3Ek__BackingField_18() const { return ___U3CtooltipU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CtooltipU3Ek__BackingField_18() { return &___U3CtooltipU3Ek__BackingField_18; }
	inline void set_U3CtooltipU3Ek__BackingField_18(String_t* value)
	{
		___U3CtooltipU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtooltipU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrectU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46, ___U3CrectU3Ek__BackingField_19)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CrectU3Ek__BackingField_19() const { return ___U3CrectU3Ek__BackingField_19; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CrectU3Ek__BackingField_19() { return &___U3CrectU3Ek__BackingField_19; }
	inline void set_U3CrectU3Ek__BackingField_19(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CrectU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.UIElements.TextField/TextInput
struct TextInput_tF2655D1B1A45173CD84F0FA7145341EE76671C20  : public TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7
{
public:
	// System.Boolean UnityEngine.UIElements.TextField/TextInput::m_Multiline
	bool ___m_Multiline_58;

public:
	inline static int32_t get_offset_of_m_Multiline_58() { return static_cast<int32_t>(offsetof(TextInput_tF2655D1B1A45173CD84F0FA7145341EE76671C20, ___m_Multiline_58)); }
	inline bool get_m_Multiline_58() const { return ___m_Multiline_58; }
	inline bool* get_address_of_m_Multiline_58() { return &___m_Multiline_58; }
	inline void set_m_Multiline_58(bool value)
	{
		___m_Multiline_58 = value;
	}
};


// UnityEngine.UIElements.AttachToPanelEvent
struct AttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB  : public PanelChangedEventBase_1_t797F6141FE04BF2E5705927A9D6276B40B1B6C6D
{
public:

public:
};


// UnityEngine.UIElements.DetachFromPanelEvent
struct DetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D  : public PanelChangedEventBase_1_t89BDDA58D75F4F5D7DA09DADEA265C67624A3B6E
{
public:

public:
};


// UnityEngine.UIElements.WheelEvent
struct WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4  : public MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.WheelEvent::<delta>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4, ___U3CdeltaU3Ek__BackingField_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaU3Ek__BackingField_28() const { return ___U3CdeltaU3Ek__BackingField_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaU3Ek__BackingField_28() { return &___U3CdeltaU3Ek__BackingField_28; }
	inline void set_U3CdeltaU3Ek__BackingField_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaU3Ek__BackingField_28 = value;
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771  : public RuntimeArray
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// T UnityEngine.UIElements.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_mFF07AEF5B17C5BB0F339D6A0E4CF99A21F33A1E3_gshared (ObjectPool_1_tCB77472AD87157F88463F8B9897759520902D350 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m1C1334D9B8A346A3949662B71CFD2C13424EFB71_gshared (ObjectPool_1_tCB77472AD87157F88463F8B9897759520902D350 * __this, RuntimeObject * ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mFA33EE0234C52575490C108425D3A64101C1CC60_gshared (ObjectPool_1_tCB77472AD87157F88463F8B9897759520902D350 * __this, int32_t ___maxSize0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventCallback`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_1__ctor_mB613F5E83902048728B2C3C0E74BB98F4196E333_gshared (EventCallback_1_tD3CAB1A4A7C6C11EC622DAA04A4274D38AF8E818 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.CallbackEventHandler::RegisterCallback<System.Object>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_m98842635EEC1110B8E149DAC6529A28DEE5BAF4D_gshared (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tD3CAB1A4A7C6C11EC622DAA04A4274D38AF8E818 * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.CallbackEventHandler::UnregisterCallback<System.Object>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_m4ABF6F978DBECAE542AD91BECC9F12C1E83DEDE1_gshared (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tD3CAB1A4A7C6C11EC622DAA04A4274D38AF8E818 * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m3EE38593C9DCC38FB48AD4C992777B3D85B7E929_gshared (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___systemEvent0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_m61220EC7896E7CA08FA877742E483E21EC2DFE3F_gshared (MouseEventBase_1_t0F188A74FDFC1E0A49E98810634220A765C82F16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_m3E0A71DF83DF8114B5FE7179902F8D0581DB504F_gshared (MouseEventBase_1_t0F188A74FDFC1E0A49E98810634220A765C82F16 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.Object>::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextInputBase_get_text_m25BAAF11ABE8B371D95FCF4FFE79E111D87ED276_gshared (TextInputBase_t5B1BF1C625A11FCD104004669CB7C5DB23D06DA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.Object>::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputBase_set_text_mEAF435AAAC2A0C6CBD1D8D51D7AD6E38595FB9F0_gshared (TextInputBase_t5B1BF1C625A11FCD104004669CB7C5DB23D06DA8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>::.ctor(UnityEngine.UIElements.VisualElement,ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_mD556EB8C823960678374EF513C65CD627596B5AD_gshared (VisualElementScheduledItem_1_tFE69E4318D1EEA0857FD6BADB3C63ED95E1D3F25 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___handler0, RuntimeObject * ___upEvent1, const RuntimeMethod* method);

// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::GetEnumerator()
inline Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD (List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  (*) (List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_inline (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::Remove(!0)
inline bool HashSet_1_Remove_mFAA9CB026F2DB39D744C254B25005000E59E6670 (HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::MoveNext()
inline bool Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29 (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::Dispose()
inline void Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>::Add(!0)
inline bool HashSet_1_Add_mB7ABE9B419736841E70031465D5CB1837C45105F (HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Int64 UnityEngine.UIElements.Panel::TimeSinceStartupMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Panel_TimeSinceStartupMs_mB80DF45E02DAFC4724B0D870F8345B971CB70EC0 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * Enumerable_ToList_TisIValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_m54B76028797DD00DDD4545457A5CFEC419F4FCC0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared)(___source0, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransformInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  VisualElement_get_worldTransformInverse_m52F32D2638FB911DB7AABC74F296D0B5902B5C23 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElement::MultiplyMatrix44Point2(UnityEngine.Matrix4x4,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VisualElement_MultiplyMatrix44Point2_m8DB34164C51D63DF722BAD21155A896D1A20D602 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_size_mC7194C291CB6B00C39FEE55985FE0D2B6F4ACF14 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  VisualElement_get_worldTransform_m2328FC02A3E7FA5483DF43E90F91E566F728B1D9 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::LocalToWorld(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElementExtensions_LocalToWorld_mC21CAA299E78D0BB48ABDE96243F1983047BA5F4 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ele0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElementExtensions_WorldToLocal_m9D3C8A18527266C102DE353257A851822AE3F96B (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ele0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.FocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusChangeDirection__ctor_mF243D8E15FE0671129149DCA8555FCF7D58FFEAF (FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_lastValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * FocusChangeDirection_get_lastValue_m5E020A64334CD4D158B4F858AE3017BBD394013F_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.FocusChangeDirection::op_Implicit(UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FocusChangeDirection_op_Implicit_m9C25333C935A59352B2722C8E6980BE9528230A9 (FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * ___fcd0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_mB497716BA2D8949EB060C21B154334919C967A87 (VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * __this, int32_t ___value0, const RuntimeMethod* method);
// T UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Get()
inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ObjectPool_1_Get_mF191A2B08CE19BDD57CA5B7F0025A71DE4D1BB9B (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * __this, const RuntimeMethod* method)
{
	return ((  List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * (*) (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD *, const RuntimeMethod*))ObjectPool_1_Get_mFF07AEF5B17C5BB0F339D6A0E4CF99A21F33A1E3_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Capacity()
inline int32_t List_1_get_Capacity_m5F3BB6DF094DBB1D72312BBA3EC0F0D054C4589E (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mAAECD125EEBC05104195244E70D43FC8E6CC80E1 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Clear()
inline void List_1_Clear_mE1AFC8F7B02D36B1850AE34C400AE649401C91EE (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Release(T)
inline void ObjectPool_1_Release_mCDC14BD84DD5D0E2477586991FE5A52D96AFEBF3 (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * __this, List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___element0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD *, List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, const RuntimeMethod*))ObjectPool_1_Release_m1C1334D9B8A346A3949662B71CFD2C13424EFB71_gshared)(__this, ___element0, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::.ctor(System.Int32)
inline void ObjectPool_1__ctor_m6463F15E385AD1BC3B9E31DF0C8D04E9BB2F9C6F (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD *, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_mFA33EE0234C52575490C108425D3A64101C1CC60_gshared)(__this, ___maxSize0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::get_isActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::set_isActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isActive_m729B25C8EAD4377C752D04390FD2AB9B38529E75_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.AttachToPanelEvent>::.ctor(System.Object,System.IntPtr)
inline void EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E (EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_mB613F5E83902048728B2C3C0E74BB98F4196E333_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.UIElements.CallbackEventHandler::RegisterCallback<UnityEngine.UIElements.AttachToPanelEvent>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
inline void CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_m36E12739D8BF8FBAFCCCF60612C1C44DE5C2935D (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C *, EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC *, int32_t, const RuntimeMethod*))CallbackEventHandler_RegisterCallback_TisRuntimeObject_m98842635EEC1110B8E149DAC6529A28DEE5BAF4D_gshared)(__this, ___callback0, ___useTrickleDown1, method);
}
// System.Void UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.DetachFromPanelEvent>::.ctor(System.Object,System.IntPtr)
inline void EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B (EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventCallback_1__ctor_mB613F5E83902048728B2C3C0E74BB98F4196E333_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.UIElements.CallbackEventHandler::RegisterCallback<UnityEngine.UIElements.DetachFromPanelEvent>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
inline void CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m0B89E9D2572AA73385426C1B9D5BAD93FA53AB69 (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C *, EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 *, int32_t, const RuntimeMethod*))CallbackEventHandler_RegisterCallback_TisRuntimeObject_m98842635EEC1110B8E149DAC6529A28DEE5BAF4D_gshared)(__this, ___callback0, ___useTrickleDown1, method);
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SendActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SendActivation_mD4E51A6DCFF15A9DE50145C568F4232020B00B74 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.CallbackEventHandler::UnregisterCallback<UnityEngine.UIElements.AttachToPanelEvent>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
inline void CallbackEventHandler_UnregisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_mBA855BA27B53EA3B72D4C172DABA3956967FEE43 (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C *, EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC *, int32_t, const RuntimeMethod*))CallbackEventHandler_UnregisterCallback_TisRuntimeObject_m4ABF6F978DBECAE542AD91BECC9F12C1E83DEDE1_gshared)(__this, ___callback0, ___useTrickleDown1, method);
}
// System.Void UnityEngine.UIElements.CallbackEventHandler::UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent>(UnityEngine.UIElements.EventCallback`1<TEventType>,UnityEngine.UIElements.TrickleDown)
inline void CallbackEventHandler_UnregisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m444C3FFCF57712DB73507F2AFF46BF51FF96B162 (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C * __this, EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 * ___callback0, int32_t ___useTrickleDown1, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_tCEC853B0E9776DED1D671F0B7451AFBB36439A6C *, EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 *, int32_t, const RuntimeMethod*))CallbackEventHandler_UnregisterCallback_TisRuntimeObject_m4ABF6F978DBECAE542AD91BECC9F12C1E83DEDE1_gshared)(__this, ___callback0, ___useTrickleDown1, method);
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SendDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SendDeactivation_m40975D6281CF92F8CDC8C1C66E710774480B45CF (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::set_isDetaching(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isDetaching_mD4CAC44FA31DC700177A11C4292D98241FD6AB79_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet__ctor_mD24E2D4CA9A9FF5CA234689035CFDBCEFAF540A4 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::.ctor()
inline void List_1__ctor_m5671D97CAE70E97F628A7B0EDAFAB6F0B7362451 (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::Contains(!0)
inline bool List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::Add(!0)
inline void List_1_Add_mBE1DD879F65523CBF0FCD6D49DF92F1ECAE03092 (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UIElements.VisualElement::IncrementVersion(UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___changeType0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::Add(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::Remove(!0)
inline bool List_1_Remove_mBD5754D52DA4CB2284FD023BCBFD98DFB093C25E (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::get_Count()
inline int32_t List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_inline (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Remove(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Contains(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElementStyleSheetSet::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>::get_Item(System.Int32)
inline StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * List_1_get_Item_m8F8DD8E61986760E3951EC736139D8FB4168C18D_inline (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * (*) (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualElementStyleSheetSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Equals(UnityEngine.UIElements.VisualElementStyleSheetSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Equals_m8B130CDD263AC771D960D004C746AF72EAE07EE8 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Equals_m38BF06320EDB0D66AF9484CA09402E3C9058376B (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElementStyleSheetSet::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementStyleSheetSet_GetHashCode_m2F51B257D4A8292A9B44572BE71310C6956ABB7B (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_mAFAF068DEE331E50496982E388FFF67A74092740 (UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * __this, int32_t ___phase0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_mFC61CA9A14C4F1C014BBBA565459E9377AE40AFD (UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::GetPooled(UnityEngine.Event)
inline WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * MouseEventBase_1_GetPooled_m222FAAEBE57EB30D26CA5E3DAA69BC430620D255 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___systemEvent0, const RuntimeMethod* method)
{
	return ((  WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * (*) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, const RuntimeMethod*))MouseEventBase_1_GetPooled_m3EE38593C9DCC38FB48AD4C992777B3D85B7E929_gshared)(___systemEvent0, method);
}
// System.Void UnityEngine.UIElements.EventBase::set_imguiEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_mC4D6A8E08A41E53F774E6A736C77F2AA1DADDF1C (EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967 * __this, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_delta_m2DABF0C93F9A2FDB5B3C916E89BC17E77AEE2680 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4011F334763F8DB0440A93DB11969D5E54CE2941_inline (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::Init()
inline void MouseEventBase_1_Init_mC62D341FA1545D8475513B4A2B46A6B9C4267DED (MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A *, const RuntimeMethod*))MouseEventBase_1_Init_m61220EC7896E7CA08FA877742E483E21EC2DFE3F_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m5A8D932691191AC77AFB357CFF3FDD03067F6EBF (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::.ctor()
inline void MouseEventBase_1__ctor_m0C17657117CA0EE9264FF104E504B2971F552093 (MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t38AA2D9EF0A29B34A0DD74ECFC993C9C6CE35B6A *, const RuntimeMethod*))MouseEventBase_1__ctor_m3E0A71DF83DF8114B5FE7179902F8D0581DB504F_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.ScheduledItem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4241F9DB8E37E7CECCDEEA3406FFDA8EF57A6A4F (U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleComplexSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0C0A65A8A998FF3B107D77FD576798686BC2E742 (U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::.ctor(UnityEngine.UIElements.PseudoStates,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PseudoStateData__ctor_mD77BDDC6D0ECE8A1EBE71B116F2D77A8B1735876 (PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3 * __this, int32_t ___state0, bool ___negate1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CE4E8C6C16C95AB51FF4395D182E95F8162C6F8 (U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.StyleSelectorPart::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSelectorPart_ToString_m2AB93F36C675B33468B38DF6635A15C384569BB5 (StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.String>::get_text()
inline String_t* TextInputBase_get_text_m8F4AECBBB9F3C558F0DD431AA308AD884EDBA770 (TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7 *, const RuntimeMethod*))TextInputBase_get_text_m25BAAF11ABE8B371D95FCF4FFE79E111D87ED276_gshared)(__this, method);
}
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<System.String>::set_text(System.String)
inline void TextInputBase_set_text_m302E30B2E54C055AAFF312CFB6541F3F4064406D (TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (TextInputBase_tFFA80F389460212B7FC777E176FF2E103D4D3CD7 *, String_t*, const RuntimeMethod*))TextInputBase_set_text_mEAF435AAAC2A0C6CBD1D8D51D7AD6E38595FB9F0_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8173E517B38C5D4665E58BE36F01E1AED62A9BBA (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIEventRegistration::TakeCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventRegistration_TakeCapture_m3570F7D49665E03B242C681FE8DF1041CB04591E (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIEventRegistration::ReleaseCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventRegistration_ReleaseCapture_m81F15568AFE62F7AD404583F7938D12E179304EA (const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.UIEventRegistration::ProcessEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIEventRegistration_ProcessEvent_m653154D24616627CBAA7D1DCDE435B2ECA398676 (int32_t ___instanceID0, intptr_t ___nativeEventPtr1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIEventRegistration::CleanupRoots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventRegistration_CleanupRoots_mF2368C4016483DEB0C52D45C201BB01AEE4DB46D (const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.UIEventRegistration::EndContainerGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIEventRegistration_EndContainerGUIFromException_m3893EDE0FD8BF2212864A1C8EC27DC240E1B4C20 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIEventRegistration::MakeCurrentIMGUIContainerDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventRegistration_MakeCurrentIMGUIContainerDirty_m18E0FABC75136E73CCD0476962A50D086B1F719C (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m078E58F0346BFC0E9364C684070EAB15FD099EDF (U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::OnTooltip(UnityEngine.UIElements.TooltipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_OnTooltip_m7321BAC7ADAB13EC159004C2FBC73B4267D7CE77 (TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46 * ___e0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ScheduledItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem__ctor_m756F18760E06D20D65B9E31BE6B187CA34425551 (ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::set_element(UnityEngine.UIElements.VisualElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_set_element_m3E1A847EAFF3AF3C249BB51B5ED1DA9E51247880_inline (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::.ctor(UnityEngine.UIElements.IVisualElementPanelActivatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator__ctor_m6253EC6859136187CA2311B57401E1166D2B9084 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, RuntimeObject* ___activatable0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ScheduledItem::OnItemUnscheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem_OnItemUnscheduled_mF3738B5D249F7C3FDB949ADBE93AF97464655748 (ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::get_isDetaching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isDetaching_m2ED9B5DF7F9063215CD2F691C57FAAC16DD19CC5_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SetActive_mEF62F79FC0D6B79A461EE131AB29E8285F5C8ADF (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ScheduledItem::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem_ResetStartTime_mB99EC01A8CE8FF074BAB5E46675E6A53EABD5CF8 (ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::get_element()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::get_elementPanel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_parent_m95543CF2F0974BC89228441F8789764F6F10F502 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m47CD0C4F9CA3FB3EC07CAD619043E2B4CDDB8929 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Insert(System.Int32,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m3F9F60514E915E7978E88396FAD883BB7872CBB2 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * VisualElementListPool_Get_m7970FFA88C08A812458DA802227210D7757D4BAC (int32_t ___initialCapacity0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::get_yogaNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsMeasureDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsMeasureDefined_mFA702131C777907247568D947E96DEC05F501FBA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::RemoveMeasureFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveMeasureFunction_m997CAA92089C6A3DF18A73948695DE9C23FB24E6 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::PutChildAtIndex(UnityEngine.UIElements.VisualElement,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_PutChildAtIndex_mC2FA3F1D0C87D647380CBD9348F2976730E0C174 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, int32_t ___index1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::ChangeIMGUIContainerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_ChangeIMGUIContainerCount_m25EBB1439251D48F2510BE1DA65618EA2EEF5DB9 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___delta0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  VisualElement_get_hierarchy_m4B2AD83FE8FA93302B534E4EF77E356901F1A90A_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::SetParent(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_enabledInHierarchy_mA94B8F82641FD0CEBA18B9BA27FCA33F14F8FD97 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::PropagateEnabledToChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_PropagateEnabledToChildren_m409E24ACF5D75A0FF1875ECD35BF241ACE651EB6 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::InvokeHierarchyChanged(UnityEngine.UIElements.HierarchyChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_InvokeHierarchyChanged_mE792F53054020B901F7B5DEF212D8C440D8936B6 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___changeType0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::IndexOf(!0)
inline int32_t List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Remove(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Item(System.Int32)
inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_inline (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::RemoveChildAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_RemoveChildAtIndex_m1CAC29FF2035D2DD32F65C00A6441FE998E7321D (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::ReleaseChildList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_ReleaseChildList_m23DD02178018D2A9F8051840B5A229425D7725C6 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::AssignMeasureFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AssignMeasureFunction_mFF075698728D883045383ECE2DB4033F7C32093F (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Count()
inline int32_t List_1_get_Count_mEF37E9009C6837645A99A160B5D4A413545A11D1_inline (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_Item_mC13B7FAA90B9AB3295560406C5223DB80046D6FA (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::IndexOf(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_IndexOf_m66C3F52FD40AE769E4824D8ED133E42B8C692B69 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement/Hierarchy::Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hierarchy_Children_m5ACF2AF43F4B063501FC0686041510BFF62725CD (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::SetPanel(UnityEngine.UIElements.BaseVisualElementPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SetPanel_m5E6C8945761E4C280965A117AE3DA3F424F7F2F6 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * ___p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Add(!0)
inline void List_1_Add_m1B278EC32CFE6F9E53E8E3A78BB8B171F843C916 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Yoga.YogaNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaNode_get_Count_m5C51BCECC428A2273F516147BF93D261F290D7CC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::Insert(System.Int32,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Insert_m3DEECB3A58FD523279B8A2668E35BB2BE43ADC66 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Insert(System.Int32,!0)
inline void List_1_Insert_m55FA04ED20809680124E375DFCF7B2FF7C1C1EB5 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, int32_t ___index0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, int32_t, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m743D6994E493872B07C71F75BECC4211D3CE8D92 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mB8470A864DB3FD63A48429DB3D5008DD293D47BD (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___elements0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::op_Equality(UnityEngine.UIElements.VisualElement/Hierarchy,UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_op_Equality_mD6AA27A22E2355CBD22CFBA91A834D2370BD0133 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___x0, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_mD61D088EAA5FF9E5EB5FC51C8443890382D342F0 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m4E001F4C66AF4D844E883AAE5BF761684695116D (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_GetHashCode_m07B0319B25E28C4473DD6F864553DDCC17EBD515 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Action>::.ctor(UnityEngine.UIElements.VisualElement,ActionType)
inline void VisualElementScheduledItem_1__ctor_m2D8C3E93637C7DE64C69446D911818DC5A55515F (VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___handler0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___upEvent1, const RuntimeMethod* method)
{
	((  void (*) (VisualElementScheduledItem_1_t93C537AAEA4BCFCB1E78A171686C93C6B4BC8928 *, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))VisualElementScheduledItem_1__ctor_mD556EB8C823960678374EF513C65CD627596B5AD_gshared)(__this, ___handler0, ___upEvent1, method);
}
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElementAnimationSystem::get_profilerMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  VisualElementAnimationSystem_get_profilerMarker_mE4DBA8DBCF186D06BDC73B46F70A2D84D0856F41 (VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var))->get_s_ProfilerMarker_5();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementAnimationSystem::UnregisterAnimations(System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementAnimationSystem_UnregisterAnimations_mE181813852070A4F134D30FDC33C786DF32517C9 (VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D * __this, List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___anims0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mFAA9CB026F2DB39D744C254B25005000E59E6670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * L_0 = ___anims0;
		NullCheck(L_0);
		Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  L_1;
		L_1 = List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD(L_0, /*hidden argument*/List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000b:
		{
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_inline((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
			V_1 = L_2;
			HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * L_3 = __this->get_m_Animations_0();
			RuntimeObject* L_4 = V_1;
			NullCheck(L_3);
			bool L_5;
			L_5 = HashSet_1_Remove_mFAA9CB026F2DB39D744C254B25005000E59E6670(L_3, L_4, /*hidden argument*/HashSet_1_Remove_mFAA9CB026F2DB39D744C254B25005000E59E6670_RuntimeMethod_var);
		}

IL_0020:
		{
			bool L_6;
			L_6 = Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000b;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		__this->set_m_IterationListDirty_3((bool)1);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementAnimationSystem::RegisterAnimations(System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementAnimationSystem_RegisterAnimations_mF0727C4ABF1B7408EA3BD8C8AB54895030654CB8 (VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D * __this, List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * ___anims0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB7ABE9B419736841E70031465D5CB1837C45105F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * L_0 = ___anims0;
		NullCheck(L_0);
		Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  L_1;
		L_1 = List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD(L_0, /*hidden argument*/List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000b:
		{
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_inline((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
			V_1 = L_2;
			HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * L_3 = __this->get_m_Animations_0();
			RuntimeObject* L_4 = V_1;
			NullCheck(L_3);
			bool L_5;
			L_5 = HashSet_1_Add_mB7ABE9B419736841E70031465D5CB1837C45105F(L_3, L_4, /*hidden argument*/HashSet_1_Add_mB7ABE9B419736841E70031465D5CB1837C45105F_RuntimeMethod_var);
		}

IL_0020:
		{
			bool L_6;
			L_6 = Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000b;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		__this->set_m_HasNewAnimations_2((bool)1);
		__this->set_m_IterationListDirty_3((bool)1);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementAnimationSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementAnimationSystem_Update_m56A6BA3F02951EC5E35205379D51B2BF91FCE3D4 (VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_m54B76028797DD00DDD4545457A5CFEC419F4FCC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Panel_t476A329F94E775CA31284CD78FD12460EEB05A3F_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Panel_TimeSinceStartupMs_mB80DF45E02DAFC4724B0D870F8345B971CB70EC0(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_m_IterationListDirty_3();
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		HashSet_1_t2DA9F9188FB4B6375888913EBDFA02BBB1CC230E * L_3 = __this->get_m_Animations_0();
		List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * L_4;
		L_4 = Enumerable_ToList_TisIValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_m54B76028797DD00DDD4545457A5CFEC419F4FCC0(L_3, /*hidden argument*/Enumerable_ToList_TisIValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_m54B76028797DD00DDD4545457A5CFEC419F4FCC0_RuntimeMethod_var);
		__this->set_m_IterationList_1(L_4);
		__this->set_m_IterationListDirty_3((bool)0);
	}

IL_002b:
	{
		bool L_5 = __this->get_m_HasNewAnimations_2();
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int64_t L_6 = __this->get_lastUpdate_6();
		int64_t L_7 = V_0;
		G_B5_0 = ((((int32_t)((((int64_t)L_6) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 1;
	}

IL_0042:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		List_1_t7698A061C75B0BB231F4A71998230AA8B311AE67 * L_9 = __this->get_m_IterationList_1();
		NullCheck(L_9);
		Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19  L_10;
		L_10 = List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD(L_9, /*hidden argument*/List_1_GetEnumerator_m639DA04A2EA2F2D2C3A2F65FA5161E0EC99D67FD_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_0056:
		{
			RuntimeObject* L_11;
			L_11 = Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_inline((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC2814D1FEA1CB003583EFDFE6628C67B35B64725_RuntimeMethod_var);
			V_4 = L_11;
			RuntimeObject* L_12 = V_4;
			int64_t L_13 = V_0;
			NullCheck(L_12);
			InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void UnityEngine.UIElements.Experimental.IValueAnimationUpdate::Tick(System.Int64) */, IValueAnimationUpdate_tD2696F22A8698818601FAEA65C67B9878B3CB0C7_il2cpp_TypeInfo_var, L_12, L_13);
		}

IL_006a:
		{
			bool L_14;
			L_14 = Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mBD22AAE70ED3F1FDA18479047F624297471BAC29_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0056;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E((Enumerator_t6407FCBB60542F2DDDF5FDCC2BC28A23C768BD19 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m40397D200CD42146412381E65BE7052FA525054E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
	}

IL_0084:
	{
		__this->set_m_HasNewAnimations_2((bool)0);
		int64_t L_15 = V_0;
		__this->set_lastUpdate_6(L_15);
	}

IL_0093:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementAnimationSystem::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementAnimationSystem_OnVersionChanged_m3CADCCBB53504636E1282294CA9326B7160D0B80 (VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ve0, int32_t ___versionChangeType1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementAnimationSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementAnimationSystem__cctor_m744EDC2805BBB83705076FC3827652D7FECA01CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35BFF0C070809528BCAE19C360FEF7D619AE8EF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		((VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var))->set_s_Description_4(_stringLiteral35BFF0C070809528BCAE19C360FEF7D619AE8EF3);
		String_t* L_0 = ((VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var))->get_s_Description_4();
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), L_0, /*hidden argument*/NULL);
		((VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementAnimationSystem_t963A35CEA78F4ADBD39F83AF5929FC0063D9946D_il2cpp_TypeInfo_var))->set_s_ProfilerMarker_5(L_1);
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
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VisualElementExtensions_WorldToLocal_m12111E3AEFF8A4A30DB5231051B85217399950BC (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ele0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___ele0;
		V_0 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27F4E38F96E25FC6A303C61D7E1304CAF64B7541)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementExtensions_WorldToLocal_m12111E3AEFF8A4A30DB5231051B85217399950BC_RuntimeMethod_var)));
	}

IL_0015:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = VisualElement_get_worldTransformInverse_m52F32D2638FB911DB7AABC74F296D0B5902B5C23(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___p1;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = VisualElement_MultiplyMatrix44Point2_m8DB34164C51D63DF722BAD21155A896D1A20D602(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElementExtensions_WorldToLocal_m9D3C8A18527266C102DE353257A851822AE3F96B (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ele0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___ele0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27F4E38F96E25FC6A303C61D7E1304CAF64B7541)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementExtensions_WorldToLocal_m9D3C8A18527266C102DE353257A851822AE3F96B_RuntimeMethod_var)));
	}

IL_0015:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = VisualElement_get_worldTransformInverse_m52F32D2638FB911DB7AABC74F296D0B5902B5C23(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = VisualElement_MultiplyMatrix44Point2_m8DB34164C51D63DF722BAD21155A896D1A20D602(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), L_7, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_8 = ___ele0;
		NullCheck(L_8);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = VisualElement_get_worldTransformInverse_m52F32D2638FB911DB7AABC74F296D0B5902B5C23(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_12, /*hidden argument*/NULL);
		Rect_set_size_mC7194C291CB6B00C39FEE55985FE0D2B6F4ACF14((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), L_13, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = ___r1;
		V_3 = L_14;
		goto IL_005c;
	}

IL_005c:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15 = V_3;
		return L_15;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::LocalToWorld(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElementExtensions_LocalToWorld_mC21CAA299E78D0BB48ABDE96243F1983047BA5F4 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ele0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___ele0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27F4E38F96E25FC6A303C61D7E1304CAF64B7541)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementExtensions_LocalToWorld_mC21CAA299E78D0BB48ABDE96243F1983047BA5F4_RuntimeMethod_var)));
	}

IL_0015:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = VisualElement_get_worldTransform_m2328FC02A3E7FA5483DF43E90F91E566F728B1D9(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = VisualElement_MultiplyMatrix44Point2_m8DB34164C51D63DF722BAD21155A896D1A20D602(L_5, L_6, /*hidden argument*/NULL);
		Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_10, /*hidden argument*/NULL);
		Rect_set_size_mC7194C291CB6B00C39FEE55985FE0D2B6F4ACF14((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), L_11, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = ___r1;
		V_2 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::ChangeCoordinatesTo(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElementExtensions_ChangeCoordinatesTo_m1AC650A2087366FECBDD3B50C141B8CC46511ECB (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___src0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___dest1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect2, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___dest1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = ___src0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___rect2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = VisualElementExtensions_LocalToWorld_mC21CAA299E78D0BB48ABDE96243F1983047BA5F4(L_1, L_2, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = VisualElementExtensions_WorldToLocal_m9D3C8A18527266C102DE353257A851822AE3F96B(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = V_0;
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
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * VisualElementFocusChangeDirection_get_left_m7A3E020E8F4944DE2DCE15AE44F8D1A7012A0B20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * L_0 = ((VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var))->get_s_Left_4();
		return L_0;
	}
}
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * VisualElementFocusChangeDirection_get_right_mCDE7E8FA27D7C2F6C3ED56FD39CE85EA5C2DCCFA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * L_0 = ((VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var))->get_s_Right_5();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_mB497716BA2D8949EB060C21B154334919C967A87 (VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		FocusChangeDirection__ctor_mF243D8E15FE0671129149DCA8555FCF7D58FFEAF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__cctor_m93836A6BAD7DF13F359C2BA2BFC4D504DCF53330 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * L_0;
		L_0 = FocusChangeDirection_get_lastValue_m5E020A64334CD4D158B4F858AE3017BBD394013F_inline(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = FocusChangeDirection_op_Implicit_m9C25333C935A59352B2722C8E6980BE9528230A9(L_0, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * L_2 = (VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_mB497716BA2D8949EB060C21B154334919C967A87(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var))->set_s_Left_4(L_2);
		FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * L_3;
		L_3 = FocusChangeDirection_get_lastValue_m5E020A64334CD4D158B4F858AE3017BBD394013F_inline(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = FocusChangeDirection_op_Implicit_m9C25333C935A59352B2722C8E6980BE9528230A9(L_3, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC * L_5 = (VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_mB497716BA2D8949EB060C21B154334919C967A87(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t824A7DA1115D0057B9F8CEA6BA307B172B485BFC_il2cpp_TypeInfo_var))->set_s_Right_5(L_5);
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
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * VisualElementListPool_Get_m7970FFA88C08A812458DA802227210D7757D4BAC (int32_t ___initialCapacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m5F3BB6DF094DBB1D72312BBA3EC0F0D054C4589E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mAAECD125EEBC05104195244E70D43FC8E6CC80E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_mF191A2B08CE19BDD57CA5B7F0025A71DE4D1BB9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * V_0 = NULL;
	bool V_1 = false;
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * L_0 = ((VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1;
		L_1 = ObjectPool_1_Get_mF191A2B08CE19BDD57CA5B7F0025A71DE4D1BB9B(L_0, /*hidden argument*/ObjectPool_1_Get_mF191A2B08CE19BDD57CA5B7F0025A71DE4D1BB9B_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___initialCapacity0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m5F3BB6DF094DBB1D72312BBA3EC0F0D054C4589E(L_3, /*hidden argument*/List_1_get_Capacity_m5F3BB6DF094DBB1D72312BBA3EC0F0D054C4589E_RuntimeMethod_var);
		int32_t L_5 = ___initialCapacity0;
		G_B3_0 = ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_7 = V_0;
		int32_t L_8 = ___initialCapacity0;
		NullCheck(L_7);
		List_1_set_Capacity_mAAECD125EEBC05104195244E70D43FC8E6CC80E1(L_7, L_8, /*hidden argument*/List_1_set_Capacity_mAAECD125EEBC05104195244E70D43FC8E6CC80E1_RuntimeMethod_var);
	}

IL_002a:
	{
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_9 = V_0;
		V_2 = L_9;
		goto IL_002e;
	}

IL_002e:
	{
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mB8470A864DB3FD63A48429DB3D5008DD293D47BD (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___elements0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE1AFC8F7B02D36B1850AE34C400AE649401C91EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_mCDC14BD84DD5D0E2477586991FE5A52D96AFEBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_0 = ___elements0;
		NullCheck(L_0);
		List_1_Clear_mE1AFC8F7B02D36B1850AE34C400AE649401C91EE(L_0, /*hidden argument*/List_1_Clear_mE1AFC8F7B02D36B1850AE34C400AE649401C91EE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * L_1 = ((VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var))->get_pool_0();
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_2 = ___elements0;
		NullCheck(L_1);
		ObjectPool_1_Release_mCDC14BD84DD5D0E2477586991FE5A52D96AFEBF3(L_1, L_2, /*hidden argument*/ObjectPool_1_Release_mCDC14BD84DD5D0E2477586991FE5A52D96AFEBF3_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool__cctor_mB96AF1962DFA9E1F8AD485E983228311CFBC338C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m6463F15E385AD1BC3B9E31DF0C8D04E9BB2F9C6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD * L_0 = (ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD *)il2cpp_codegen_object_new(ObjectPool_1_tB34AB181B1E10681C586C3E3A6FCE82FDDE3C0DD_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m6463F15E385AD1BC3B9E31DF0C8D04E9BB2F9C6F(L_0, ((int32_t)20), /*hidden argument*/ObjectPool_1__ctor_m6463F15E385AD1BC3B9E31DF0C8D04E9BB2F9C6F_RuntimeMethod_var);
		((VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var))->set_pool_0(L_0);
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
// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisActiveU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isActive_m729B25C8EAD4377C752D04390FD2AB9B38529E75 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisActiveU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElementPanelActivator::get_isDetaching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isDetaching_m2ED9B5DF7F9063215CD2F691C57FAAC16DD19CC5 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisDetachingU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::set_isDetaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isDetaching_mD4CAC44FA31DC700177A11C4292D98241FD6AB79 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisDetachingU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::.ctor(UnityEngine.UIElements.IVisualElementPanelActivatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator__ctor_m6253EC6859136187CA2311B57401E1166D2B9084 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, RuntimeObject* ___activatable0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___activatable0;
		__this->set_m_Activatable_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SetActive_mEF62F79FC0D6B79A461EE131AB29E8285F5C8ADF (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_m36E12739D8BF8FBAFCCCF60612C1C44DE5C2935D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m0B89E9D2572AA73385426C1B9D5BAD93FA53AB69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_UnregisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_mBA855BA27B53EA3B72D4C172DABA3956967FEE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackEventHandler_UnregisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m444C3FFCF57712DB73507F2AFF46BF51FF96B162_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementPanelActivator_OnEnter_mAC503F7299D01BBEA727C19CDC54B86363A0E95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementPanelActivator_OnLeave_mE1768C69309EDBA85179252CB5C3949EC08D2620_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline(__this, /*hidden argument*/NULL);
		bool L_1 = ___action0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_3 = ___action0;
		VisualElementPanelActivator_set_isActive_m729B25C8EAD4377C752D04390FD2AB9B38529E75_inline(__this, L_3, /*hidden argument*/NULL);
		bool L_4;
		L_4 = VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_m_Activatable_0();
		NullCheck(L_6);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7;
		L_7 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IVisualElementPanelActivatable::get_element() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_6);
		EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC * L_8 = (EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC *)il2cpp_codegen_object_new(EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E(L_8, __this, (intptr_t)((intptr_t)VisualElementPanelActivator_OnEnter_mAC503F7299D01BBEA727C19CDC54B86363A0E95D_RuntimeMethod_var), /*hidden argument*/EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E_RuntimeMethod_var);
		NullCheck(L_7);
		CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_m36E12739D8BF8FBAFCCCF60612C1C44DE5C2935D(L_7, L_8, 0, /*hidden argument*/CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_m36E12739D8BF8FBAFCCCF60612C1C44DE5C2935D_RuntimeMethod_var);
		RuntimeObject* L_9 = __this->get_m_Activatable_0();
		NullCheck(L_9);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10;
		L_10 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IVisualElementPanelActivatable::get_element() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_9);
		EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 * L_11 = (EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 *)il2cpp_codegen_object_new(EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B(L_11, __this, (intptr_t)((intptr_t)VisualElementPanelActivator_OnLeave_mE1768C69309EDBA85179252CB5C3949EC08D2620_RuntimeMethod_var), /*hidden argument*/EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B_RuntimeMethod_var);
		NullCheck(L_10);
		CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m0B89E9D2572AA73385426C1B9D5BAD93FA53AB69(L_10, L_11, 0, /*hidden argument*/CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m0B89E9D2572AA73385426C1B9D5BAD93FA53AB69_RuntimeMethod_var);
		VisualElementPanelActivator_SendActivation_mD4E51A6DCFF15A9DE50145C568F4232020B00B74(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_006e:
	{
		RuntimeObject* L_12 = __this->get_m_Activatable_0();
		NullCheck(L_12);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_13;
		L_13 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IVisualElementPanelActivatable::get_element() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_12);
		EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC * L_14 = (EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC *)il2cpp_codegen_object_new(EventCallback_1_tD3D4DFCF1544E4DFC9B9210F3DC48CFA1850E8AC_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E(L_14, __this, (intptr_t)((intptr_t)VisualElementPanelActivator_OnEnter_mAC503F7299D01BBEA727C19CDC54B86363A0E95D_RuntimeMethod_var), /*hidden argument*/EventCallback_1__ctor_m46413C931AB206D7D37490BFB0D2D3714230252E_RuntimeMethod_var);
		NullCheck(L_13);
		CallbackEventHandler_UnregisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_mBA855BA27B53EA3B72D4C172DABA3956967FEE43(L_13, L_14, 0, /*hidden argument*/CallbackEventHandler_UnregisterCallback_TisAttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB_mBA855BA27B53EA3B72D4C172DABA3956967FEE43_RuntimeMethod_var);
		RuntimeObject* L_15 = __this->get_m_Activatable_0();
		NullCheck(L_15);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_16;
		L_16 = InterfaceFuncInvoker0< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * >::Invoke(0 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.IVisualElementPanelActivatable::get_element() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_15);
		EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 * L_17 = (EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20 *)il2cpp_codegen_object_new(EventCallback_1_tF0833F5F7E494EC39469A11AAF7F9B8567A3CC20_il2cpp_TypeInfo_var);
		EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B(L_17, __this, (intptr_t)((intptr_t)VisualElementPanelActivator_OnLeave_mE1768C69309EDBA85179252CB5C3949EC08D2620_RuntimeMethod_var), /*hidden argument*/EventCallback_1__ctor_m743E788116BB06102952B77AA576A1E544822F3B_RuntimeMethod_var);
		NullCheck(L_16);
		CallbackEventHandler_UnregisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m444C3FFCF57712DB73507F2AFF46BF51FF96B162(L_16, L_17, 0, /*hidden argument*/CallbackEventHandler_UnregisterCallback_TisDetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D_m444C3FFCF57712DB73507F2AFF46BF51FF96B162_RuntimeMethod_var);
		VisualElementPanelActivator_SendDeactivation_m40975D6281CF92F8CDC8C1C66E710774480B45CF(__this, /*hidden argument*/NULL);
	}

IL_00b3:
	{
	}

IL_00b4:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SendActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SendActivation_mD4E51A6DCFF15A9DE50145C568F4232020B00B74 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->get_m_Activatable_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.UIElements.IVisualElementPanelActivatable::CanBeActivated() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_m_Activatable_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.UIElements.IVisualElementPanelActivatable::OnPanelActivate() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::SendDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_SendDeactivation_m40975D6281CF92F8CDC8C1C66E710774480B45CF (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->get_m_Activatable_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.UIElements.IVisualElementPanelActivatable::CanBeActivated() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_m_Activatable_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.UIElements.IVisualElementPanelActivatable::OnPanelDeactivate() */, IVisualElementPanelActivatable_tCC7F5CB2746CB92B507CC6E8AA1BB91F6638B79B_il2cpp_TypeInfo_var, L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::OnEnter(UnityEngine.UIElements.AttachToPanelEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_OnEnter_mAC503F7299D01BBEA727C19CDC54B86363A0E95D (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, AttachToPanelEvent_t403954B01771D0804A0B05B060C9271695C2E8CB * ___evt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		VisualElementPanelActivator_SendActivation_mD4E51A6DCFF15A9DE50145C568F4232020B00B74(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementPanelActivator::OnLeave(UnityEngine.UIElements.DetachFromPanelEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementPanelActivator_OnLeave_mE1768C69309EDBA85179252CB5C3949EC08D2620 (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, DetachFromPanelEvent_tC0115386D59471BE46C561E7CB0B521D6C9B767D * ___evt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0;
		L_0 = VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		VisualElementPanelActivator_set_isDetaching_mD4CAC44FA31DC700177A11C4292D98241FD6AB79_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		VisualElementPanelActivator_SendDeactivation_m40975D6281CF92F8CDC8C1C66E710774480B45CF(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2A, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		VisualElementPanelActivator_set_isDetaching_mD4CAC44FA31DC700177A11C4292D98241FD6AB79_inline(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(31)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
	}

IL_002b:
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
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElementStyleSheetSet
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_pinvoke(const VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB& unmarshaled, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Element_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Element' of type 'VisualElementStyleSheetSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Element_0Exception, NULL);
}
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_pinvoke_back(const VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_pinvoke& marshaled, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB& unmarshaled)
{
	Exception_t* ___m_Element_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Element' of type 'VisualElementStyleSheetSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Element_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElementStyleSheetSet
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_pinvoke_cleanup(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElementStyleSheetSet
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_com(const VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB& unmarshaled, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_com& marshaled)
{
	Exception_t* ___m_Element_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Element' of type 'VisualElementStyleSheetSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Element_0Exception, NULL);
}
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_com_back(const VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_com& marshaled, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB& unmarshaled)
{
	Exception_t* ___m_Element_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Element' of type 'VisualElementStyleSheetSet': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Element_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElementStyleSheetSet
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshal_com_cleanup(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet__ctor_mD24E2D4CA9A9FF5CA234689035CFDBCEFAF540A4 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___element0;
		__this->set_m_Element_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VisualElementStyleSheetSet__ctor_mD24E2D4CA9A9FF5CA234689035CFDBCEFAF540A4_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	VisualElementStyleSheetSet__ctor_mD24E2D4CA9A9FF5CA234689035CFDBCEFAF540A4(_thisAdjusted, ___element0, method);
}
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::Add(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBE1DD879F65523CBF0FCD6D49DF92F1ECAE03092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5671D97CAE70E97F628A7B0EDAFAB6F0B7362451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_0 = ___styleSheet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70A8AF0511C1A25EF3B28D18A927B18416F2AE7D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3_RuntimeMethod_var)));
	}

IL_0017:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = __this->get_m_Element_0();
		NullCheck(L_4);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_5 = L_4->get_styleSheetList_45();
		V_1 = (bool)((((RuntimeObject*)(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7 = __this->get_m_Element_0();
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_8 = (List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)il2cpp_codegen_object_new(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35_il2cpp_TypeInfo_var);
		List_1__ctor_m5671D97CAE70E97F628A7B0EDAFAB6F0B7362451(L_8, /*hidden argument*/List_1__ctor_m5671D97CAE70E97F628A7B0EDAFAB6F0B7362451_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_styleSheetList_45(L_8);
		goto IL_0055;
	}

IL_003d:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_9 = __this->get_m_Element_0();
		NullCheck(L_9);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_10 = L_9->get_styleSheetList_45();
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_11 = ___styleSheet0;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D(L_10, L_11, /*hidden argument*/List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D_RuntimeMethod_var);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0075;
	}

IL_0055:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_14 = __this->get_m_Element_0();
		NullCheck(L_14);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_15 = L_14->get_styleSheetList_45();
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_16 = ___styleSheet0;
		NullCheck(L_15);
		List_1_Add_mBE1DD879F65523CBF0FCD6D49DF92F1ECAE03092(L_15, L_16, /*hidden argument*/List_1_Add_mBE1DD879F65523CBF0FCD6D49DF92F1ECAE03092_RuntimeMethod_var);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_17 = __this->get_m_Element_0();
		NullCheck(L_17);
		VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477(L_17, ((int32_t)16), /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3_AdjustorThunk (RuntimeObject * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	VisualElementStyleSheetSet_Add_mC83BEC196BA93122BBE9DECF16981584E2247AE3(_thisAdjusted, ___styleSheet0, method);
}
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Remove(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBD5754D52DA4CB2284FD023BCBFD98DFB093C25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_0 = ___styleSheet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70A8AF0511C1A25EF3B28D18A927B18416F2AE7D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568_RuntimeMethod_var)));
	}

IL_0017:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = __this->get_m_Element_0();
		NullCheck(L_4);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_5 = L_4->get_styleSheetList_45();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6 = __this->get_m_Element_0();
		NullCheck(L_6);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_7 = L_6->get_styleSheetList_45();
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_8 = ___styleSheet0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_mBD5754D52DA4CB2284FD023BCBFD98DFB093C25E(L_7, L_8, /*hidden argument*/List_1_Remove_mBD5754D52DA4CB2284FD023BCBFD98DFB093C25E_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B5_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = __this->get_m_Element_0();
		NullCheck(L_11);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_12 = L_11->get_styleSheetList_45();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_inline(L_12, /*hidden argument*/List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_15 = __this->get_m_Element_0();
		NullCheck(L_15);
		L_15->set_styleSheetList_45((List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)NULL);
	}

IL_0062:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_16 = __this->get_m_Element_0();
		NullCheck(L_16);
		VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477(L_16, ((int32_t)16), /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_0078;
	}

IL_0074:
	{
		V_3 = (bool)0;
		goto IL_0078;
	}

IL_0078:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
IL2CPP_EXTERN_C  bool VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568_AdjustorThunk (RuntimeObject * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	bool _returnValue;
	_returnValue = VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568(_thisAdjusted, ___styleSheet0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Contains(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_0 = ___styleSheet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70A8AF0511C1A25EF3B28D18A927B18416F2AE7D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2_RuntimeMethod_var)));
	}

IL_0017:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = __this->get_m_Element_0();
		NullCheck(L_4);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_5 = L_4->get_styleSheetList_45();
		V_1 = (bool)((!(((RuntimeObject*)(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7 = __this->get_m_Element_0();
		NullCheck(L_7);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_8 = L_7->get_styleSheetList_45();
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_9 = ___styleSheet0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D(L_8, L_9, /*hidden argument*/List_1_Contains_m7C18CEF719B5985E99108DEF1193E06B307B9E9D_RuntimeMethod_var);
		V_2 = L_10;
		goto IL_0042;
	}

IL_003e:
	{
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2_AdjustorThunk (RuntimeObject * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	bool _returnValue;
	_returnValue = VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2(_thisAdjusted, ___styleSheet0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.UIElements.VisualElementStyleSheetSet::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Element_0();
		NullCheck(L_0);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_1 = L_0->get_styleSheetList_45();
		V_0 = (bool)((((RuntimeObject*)(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = 0;
		goto IL_002a;
	}

IL_0017:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = __this->get_m_Element_0();
		NullCheck(L_3);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_4 = L_3->get_styleSheetList_45();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_inline(L_4, /*hidden argument*/List_1_get_Count_m1054365B081E30C8375A141A0619CC5B2A8383ED_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualElementStyleSheetSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F8DD8E61986760E3951EC736139D8FB4168C18D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * V_1 = NULL;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Element_0();
		NullCheck(L_0);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_1 = L_0->get_styleSheetList_45();
		V_0 = (bool)((((RuntimeObject*)(List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB_RuntimeMethod_var)));
	}

IL_001e:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = __this->get_m_Element_0();
		NullCheck(L_4);
		List_1_t996D93C3F40AF1407C1817782CBE7F21C7CBCA35 * L_5 = L_4->get_styleSheetList_45();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_7;
		L_7 = List_1_get_Item_m8F8DD8E61986760E3951EC736139D8FB4168C18D_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m8F8DD8E61986760E3951EC736139D8FB4168C18D_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * _returnValue;
	_returnValue = VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Equals(UnityEngine.UIElements.VisualElementStyleSheetSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Equals_m8B130CDD263AC771D960D004C746AF72EAE07EE8 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Element_0();
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_1 = ___other0;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2 = L_1.get_m_Element_0();
		bool L_3;
		L_3 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool VisualElementStyleSheetSet_Equals_m8B130CDD263AC771D960D004C746AF72EAE07EE8_AdjustorThunk (RuntimeObject * __this, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	bool _returnValue;
	_returnValue = VisualElementStyleSheetSet_Equals_m8B130CDD263AC771D960D004C746AF72EAE07EE8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Equals_m38BF06320EDB0D66AF9484CA09402E3C9058376B (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_il2cpp_TypeInfo_var);
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
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4;
		L_4 = VisualElementStyleSheetSet_Equals_m8B130CDD263AC771D960D004C746AF72EAE07EE8((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)__this, ((*(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)UnBox(L_3, VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool VisualElementStyleSheetSet_Equals_m38BF06320EDB0D66AF9484CA09402E3C9058376B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	bool _returnValue;
	_returnValue = VisualElementStyleSheetSet_Equals_m38BF06320EDB0D66AF9484CA09402E3C9058376B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.UIElements.VisualElementStyleSheetSet::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementStyleSheetSet_GetHashCode_m2F51B257D4A8292A9B44572BE71310C6956ABB7B (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Element_0();
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
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = __this->get_m_Element_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
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
IL2CPP_EXTERN_C  int32_t VisualElementStyleSheetSet_GetHashCode_m2F51B257D4A8292A9B44572BE71310C6956ABB7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * _thisAdjusted = reinterpret_cast<VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VisualElementStyleSheetSet_GetHashCode_m2F51B257D4A8292A9B44572BE71310C6956ABB7B(_thisAdjusted, method);
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
// System.Void UnityEngine.UIElements.VisualTreeUpdater::UpdateVisualTreePhase(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_UpdateVisualTreePhase_m1D07B623D69CC03ED552CD0942C6B20C2E235897 (VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_mAFAF068DEE331E50496982E388FFF67A74092740(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		L_4 = InterfaceFuncInvoker0< ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  >::Invoke(0 /* Unity.Profiling.ProfilerMarker UnityEngine.UIElements.IVisualTreeUpdater::get_profilerMarker() */, IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_5;
		L_5 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::Update() */, IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var, L_6);
		IL2CPP_LEAVE(0x37, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_OnVersionChanged_mE8F69561A928E2801617B577AA92BC5E1210B865 (VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___ve0, int32_t ___versionChangeType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_mFC61CA9A14C4F1C014BBBA565459E9377AE40AFD(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = ___ve0;
		int32_t L_5 = ___versionChangeType1;
		NullCheck(L_3);
		InterfaceActionInvoker2< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, int32_t >::Invoke(2 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType) */, IVisualTreeUpdater_tA6A8296D31B51533194DFC75E88D057A0F207B16_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater::GetUpdater(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeUpdater_GetUpdater_m1365FEA0E821781BE2C784EF9AB5E827B49F128B (VisualTreeUpdater_tD6408ED21607A11CCA2F26D09A50AED30B8C1A64 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_mAFAF068DEE331E50496982E388FFF67A74092740(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
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
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4011F334763F8DB0440A93DB11969D5E54CE2941 (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
// UnityEngine.UIElements.WheelEvent UnityEngine.UIElements.WheelEvent::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * WheelEvent_GetPooled_m4102E6284034B5F0BA6C6CFDE198C92E46BBF442 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_GetPooled_m222FAAEBE57EB30D26CA5E3DAA69BC430620D255_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * V_0 = NULL;
	bool V_1 = false;
	WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * V_2 = NULL;
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ___systemEvent0;
		WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * L_1;
		L_1 = MouseEventBase_1_GetPooled_m222FAAEBE57EB30D26CA5E3DAA69BC430620D255(L_0, /*hidden argument*/MouseEventBase_1_GetPooled_m222FAAEBE57EB30D26CA5E3DAA69BC430620D255_RuntimeMethod_var);
		V_0 = L_1;
		WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * L_2 = V_0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_3 = ___systemEvent0;
		NullCheck(L_2);
		EventBase_set_imguiEvent_mC4D6A8E08A41E53F774E6A736C77F2AA1DADDF1C(L_2, L_3, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_4 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * L_6 = V_0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_7 = ___systemEvent0;
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Event_get_delta_m2DABF0C93F9A2FDB5B3C916E89BC17E77AEE2680(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		WheelEvent_set_delta_m4011F334763F8DB0440A93DB11969D5E54CE2941_inline(L_6, L_9, /*hidden argument*/NULL);
	}

IL_002c:
	{
		WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * L_10 = V_0;
		V_2 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_Init_m4AC4D0DDD59BB370486E2F537A240490F1AEC8D3 (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1_Init_mC62D341FA1545D8475513B4A2B46A6B9C4267DED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MouseEventBase_1_Init_mC62D341FA1545D8475513B4A2B46A6B9C4267DED(__this, /*hidden argument*/MouseEventBase_1_Init_mC62D341FA1545D8475513B4A2B46A6B9C4267DED_RuntimeMethod_var);
		WheelEvent_LocalInit_m5A8D932691191AC77AFB357CFF3FDD03067F6EBF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m5A8D932691191AC77AFB357CFF3FDD03067F6EBF (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		WheelEvent_set_delta_m4011F334763F8DB0440A93DB11969D5E54CE2941_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent__ctor_m349D78D43A6CF8CAACF776D85F3770C8E9277B8B (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventBase_1__ctor_m0C17657117CA0EE9264FF104E504B2971F552093_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MouseEventBase_1__ctor_m0C17657117CA0EE9264FF104E504B2971F552093(__this, /*hidden argument*/MouseEventBase_1__ctor_m0C17657117CA0EE9264FF104E504B2971F552093_RuntimeMethod_var);
		WheelEvent_LocalInit_m5A8D932691191AC77AFB357CFF3FDD03067F6EBF(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.ClickDetector/ButtonClickStatus::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickStatus_Reset_m41A20C7A1F938EF9818A481DF11AA97D97E337EC (ButtonClickStatus_tEF51C193AC150E5EF1BBF55E5CBFD1EE9A312372 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Target_0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)NULL);
		__this->set_m_ClickCount_3(0);
		__this->set_m_LastPointerDownTime_2(((int64_t)((int64_t)0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_m_PointerDownPosition_1(L_0);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.EventDispatcher/EventRecord
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_pinvoke(const EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01& unmarshaled, EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Event_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'EventRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_0Exception, NULL);
}
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_pinvoke_back(const EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_pinvoke& marshaled, EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01& unmarshaled)
{
	Exception_t* ___m_Event_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'EventRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.EventDispatcher/EventRecord
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_pinvoke_cleanup(EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.EventDispatcher/EventRecord
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_com(const EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01& unmarshaled, EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_com& marshaled)
{
	Exception_t* ___m_Event_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'EventRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_0Exception, NULL);
}
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_com_back(const EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_com& marshaled, EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01& unmarshaled)
{
	Exception_t* ___m_Event_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'EventRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.EventDispatcher/EventRecord
IL2CPP_EXTERN_C void EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshal_com_cleanup(EventRecord_t8282BF1910D22347919754211F2AA1F25F8BED01_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.FocusController/FocusedElement
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_pinvoke(const FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206& unmarshaled, FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SubTreeRoot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubTreeRoot' of type 'FocusedElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubTreeRoot_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_pinvoke_back(const FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_pinvoke& marshaled, FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206& unmarshaled)
{
	Exception_t* ___m_SubTreeRoot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubTreeRoot' of type 'FocusedElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubTreeRoot_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.FocusController/FocusedElement
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_pinvoke_cleanup(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.FocusController/FocusedElement
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_com(const FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206& unmarshaled, FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_com& marshaled)
{
	Exception_t* ___m_SubTreeRoot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubTreeRoot' of type 'FocusedElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubTreeRoot_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_com_back(const FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_com& marshaled, FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206& unmarshaled)
{
	Exception_t* ___m_SubTreeRoot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SubTreeRoot' of type 'FocusedElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SubTreeRoot_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.FocusController/FocusedElement
IL2CPP_EXTERN_C void FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshal_com_cleanup(FocusedElement_tF9897C653908D7004ACBEC7265361828BA9DB206_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_pinvoke(const GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7& unmarshaled, GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_pinvoke& marshaled)
{
	marshaled.___matrix_0 = unmarshaled.get_matrix_0();
	marshaled.___color_1 = unmarshaled.get_color_1();
	marshaled.___contentColor_2 = unmarshaled.get_contentColor_2();
	marshaled.___backgroundColor_3 = unmarshaled.get_backgroundColor_3();
	marshaled.___enabled_4 = static_cast<int32_t>(unmarshaled.get_enabled_4());
	marshaled.___changed_5 = static_cast<int32_t>(unmarshaled.get_changed_5());
	marshaled.___displayIndex_6 = unmarshaled.get_displayIndex_6();
}
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_pinvoke_back(const GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_pinvoke& marshaled, GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7& unmarshaled)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  unmarshaled_matrix_temp_0;
	memset((&unmarshaled_matrix_temp_0), 0, sizeof(unmarshaled_matrix_temp_0));
	unmarshaled_matrix_temp_0 = marshaled.___matrix_0;
	unmarshaled.set_matrix_0(unmarshaled_matrix_temp_0);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_contentColor_temp_2;
	memset((&unmarshaled_contentColor_temp_2), 0, sizeof(unmarshaled_contentColor_temp_2));
	unmarshaled_contentColor_temp_2 = marshaled.___contentColor_2;
	unmarshaled.set_contentColor_2(unmarshaled_contentColor_temp_2);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_backgroundColor_temp_3;
	memset((&unmarshaled_backgroundColor_temp_3), 0, sizeof(unmarshaled_backgroundColor_temp_3));
	unmarshaled_backgroundColor_temp_3 = marshaled.___backgroundColor_3;
	unmarshaled.set_backgroundColor_3(unmarshaled_backgroundColor_temp_3);
	bool unmarshaled_enabled_temp_4 = false;
	unmarshaled_enabled_temp_4 = static_cast<bool>(marshaled.___enabled_4);
	unmarshaled.set_enabled_4(unmarshaled_enabled_temp_4);
	bool unmarshaled_changed_temp_5 = false;
	unmarshaled_changed_temp_5 = static_cast<bool>(marshaled.___changed_5);
	unmarshaled.set_changed_5(unmarshaled_changed_temp_5);
	int32_t unmarshaled_displayIndex_temp_6 = 0;
	unmarshaled_displayIndex_temp_6 = marshaled.___displayIndex_6;
	unmarshaled.set_displayIndex_6(unmarshaled_displayIndex_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_pinvoke_cleanup(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_com(const GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7& unmarshaled, GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_com& marshaled)
{
	marshaled.___matrix_0 = unmarshaled.get_matrix_0();
	marshaled.___color_1 = unmarshaled.get_color_1();
	marshaled.___contentColor_2 = unmarshaled.get_contentColor_2();
	marshaled.___backgroundColor_3 = unmarshaled.get_backgroundColor_3();
	marshaled.___enabled_4 = static_cast<int32_t>(unmarshaled.get_enabled_4());
	marshaled.___changed_5 = static_cast<int32_t>(unmarshaled.get_changed_5());
	marshaled.___displayIndex_6 = unmarshaled.get_displayIndex_6();
}
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_com_back(const GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_com& marshaled, GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7& unmarshaled)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  unmarshaled_matrix_temp_0;
	memset((&unmarshaled_matrix_temp_0), 0, sizeof(unmarshaled_matrix_temp_0));
	unmarshaled_matrix_temp_0 = marshaled.___matrix_0;
	unmarshaled.set_matrix_0(unmarshaled_matrix_temp_0);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_color_temp_1;
	memset((&unmarshaled_color_temp_1), 0, sizeof(unmarshaled_color_temp_1));
	unmarshaled_color_temp_1 = marshaled.___color_1;
	unmarshaled.set_color_1(unmarshaled_color_temp_1);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_contentColor_temp_2;
	memset((&unmarshaled_contentColor_temp_2), 0, sizeof(unmarshaled_contentColor_temp_2));
	unmarshaled_contentColor_temp_2 = marshaled.___contentColor_2;
	unmarshaled.set_contentColor_2(unmarshaled_contentColor_temp_2);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_backgroundColor_temp_3;
	memset((&unmarshaled_backgroundColor_temp_3), 0, sizeof(unmarshaled_backgroundColor_temp_3));
	unmarshaled_backgroundColor_temp_3 = marshaled.___backgroundColor_3;
	unmarshaled.set_backgroundColor_3(unmarshaled_backgroundColor_temp_3);
	bool unmarshaled_enabled_temp_4 = false;
	unmarshaled_enabled_temp_4 = static_cast<bool>(marshaled.___enabled_4);
	unmarshaled.set_enabled_4(unmarshaled_enabled_temp_4);
	bool unmarshaled_changed_temp_5 = false;
	unmarshaled_changed_temp_5 = static_cast<bool>(marshaled.___changed_5);
	unmarshaled.set_changed_5(unmarshaled_changed_temp_5);
	int32_t unmarshaled_displayIndex_temp_6 = 0;
	unmarshaled_displayIndex_temp_6 = marshaled.___displayIndex_6;
	unmarshaled.set_displayIndex_6(unmarshaled_displayIndex_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
IL2CPP_EXTERN_C void GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshal_com_cleanup(GUIGlobals_t091BB311623EF9DA3B1B9D41B69230205D2BD2D7_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.UIElements.ScheduledItem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD8A6A8A229ABC6E08C8854F1C2A1394F328C3E36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * L_0 = (U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB *)il2cpp_codegen_object_new(U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4241F9DB8E37E7CECCDEEA3406FFDA8EF57A6A4F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.ScheduledItem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4241F9DB8E37E7CECCDEEA3406FFDA8EF57A6A4F (U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.ScheduledItem/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__25_0_m99215A05B153711A7FD22F9A0FD8BF1EC71F10C3 (U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UIElements.ScheduledItem/<>c::<.cctor>b__25_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__25_1_m84BEA02ED1C405C59E4A69413CE5362EF2ED90CB (U3CU3Ec_t711CB48A19DB4791BC4A79965FFDD9DA886FF2EB * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.UIElements.StyleComplexSelector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9D61E1A649D80BE58804C335C7554813FB20FCA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * L_0 = (U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 *)il2cpp_codegen_object_new(U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0C0A65A8A998FF3B107D77FD576798686BC2E742(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleComplexSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0C0A65A8A998FF3B107D77FD576798686BC2E742 (U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.UIElements.StyleComplexSelector/<>c::<ToString>b__20_0(UnityEngine.UIElements.StyleSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__20_0_mD190016F2D8D3D1431648CF3782646C9103512E6 (U3CU3Ec_tAD1187DD6192B43A64B254C0289F5FB9A36FB0F8 * __this, StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C * ___x0, const RuntimeMethod* method)
{
	{
		StyleSelector_tD38948804444A1EF50EC7A79ECD6BFDD689A264C * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_pinvoke(const PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3& unmarshaled, PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_pinvoke& marshaled)
{
	marshaled.___state_0 = unmarshaled.get_state_0();
	marshaled.___negate_1 = static_cast<int32_t>(unmarshaled.get_negate_1());
}
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_pinvoke_back(const PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_pinvoke& marshaled, PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3& unmarshaled)
{
	int32_t unmarshaled_state_temp_0 = 0;
	unmarshaled_state_temp_0 = marshaled.___state_0;
	unmarshaled.set_state_0(unmarshaled_state_temp_0);
	bool unmarshaled_negate_temp_1 = false;
	unmarshaled_negate_temp_1 = static_cast<bool>(marshaled.___negate_1);
	unmarshaled.set_negate_1(unmarshaled_negate_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_pinvoke_cleanup(PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_com(const PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3& unmarshaled, PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_com& marshaled)
{
	marshaled.___state_0 = unmarshaled.get_state_0();
	marshaled.___negate_1 = static_cast<int32_t>(unmarshaled.get_negate_1());
}
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_com_back(const PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_com& marshaled, PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3& unmarshaled)
{
	int32_t unmarshaled_state_temp_0 = 0;
	unmarshaled_state_temp_0 = marshaled.___state_0;
	unmarshaled.set_state_0(unmarshaled_state_temp_0);
	bool unmarshaled_negate_temp_1 = false;
	unmarshaled_negate_temp_1 = static_cast<bool>(marshaled.___negate_1);
	unmarshaled.set_negate_1(unmarshaled_negate_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
IL2CPP_EXTERN_C void PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshal_com_cleanup(PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::.ctor(UnityEngine.UIElements.PseudoStates,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PseudoStateData__ctor_mD77BDDC6D0ECE8A1EBE71B116F2D77A8B1735876 (PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3 * __this, int32_t ___state0, bool ___negate1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___state0;
		__this->set_state_0(L_0);
		bool L_1 = ___negate1;
		__this->set_negate_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void PseudoStateData__ctor_mD77BDDC6D0ECE8A1EBE71B116F2D77A8B1735876_AdjustorThunk (RuntimeObject * __this, int32_t ___state0, bool ___negate1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3 * _thisAdjusted = reinterpret_cast<PseudoStateData_t3F1A53FFD3D401315DCAD65C924AA3B7922AD4F3 *>(__this + _offset);
	PseudoStateData__ctor_mD77BDDC6D0ECE8A1EBE71B116F2D77A8B1735876(_thisAdjusted, ___state0, ___negate1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCursorIdFunction__ctor_m4E90BE7B24D363FD8A7F9D66298A122D0C35E203 (GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction::Invoke(UnityEngine.UIElements.StyleSheet,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetCursorIdFunction_Invoke_mFAD030F3307AC20F421738B63B969D8F5141BAE2 (GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8 * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet0, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  ___handle1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sheet0, ___handle1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sheet0, ___handle1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(targetMethod, ___sheet0, ___handle1);
					else
						result = GenericVirtFuncInvoker1< int32_t, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(targetMethod, ___sheet0, ___handle1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sheet0, ___handle1);
					else
						result = VirtFuncInvoker1< int32_t, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sheet0, ___handle1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sheet0, ___handle1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(targetMethod, targetThis, ___sheet0, ___handle1);
					else
						result = GenericVirtFuncInvoker2< int32_t, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(targetMethod, targetThis, ___sheet0, ___handle1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sheet0, ___handle1);
					else
						result = VirtFuncInvoker2< int32_t, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sheet0, ___handle1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef int32_t (*FunctionPointerType) (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___sheet0, ___handle1, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sheet0, ___handle1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction::BeginInvoke(UnityEngine.UIElements.StyleSheet,UnityEngine.UIElements.StyleValueHandle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetCursorIdFunction_BeginInvoke_m5B12F8AE1C7740D29ADDFBF0133AC026706589D0 (GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8 * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___sheet0, StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185  ___handle1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___sheet0;
	__d_args[1] = Box(StyleValueHandle_t46AFAF3564D6DF2EA2739A1D85438355478AD185_il2cpp_TypeInfo_var, &___handle1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 UnityEngine.UIElements.StyleSheets.StylePropertyReader/GetCursorIdFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetCursorIdFunction_EndInvoke_m15C84E322B1F45CBA94582CA9F220E2248ED9048 (GetCursorIdFunction_t0822BE5207EC00BA6C3BCFD350809DC4B445C4C8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.StyleSelector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC3A102A69F9A608EA406FECE8675E102E7F02DD3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * L_0 = (U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 *)il2cpp_codegen_object_new(U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6CE4E8C6C16C95AB51FF4395D182E95F8162C6F8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CE4E8C6C16C95AB51FF4395D182E95F8162C6F8 (U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.UIElements.StyleSelector/<>c::<ToString>b__10_0(UnityEngine.UIElements.StyleSelectorPart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__10_0_m55DE96EEBD33909F083884838E20B7F52DE173EF (U3CU3Ec_t6A08378DE9ABB9EC198D8609F5E47B584FEB6E33 * __this, StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54  ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = StyleSelectorPart_ToString_m2AB93F36C675B33468B38DF6635A15C384569BB5((StyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54 *)(&___p0), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheet/ImportStruct
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_pinvoke(const ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2& unmarshaled, ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___styleSheet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'styleSheet' of type 'ImportStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___styleSheet_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_pinvoke_back(const ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_pinvoke& marshaled, ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2& unmarshaled)
{
	Exception_t* ___styleSheet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'styleSheet' of type 'ImportStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___styleSheet_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheet/ImportStruct
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_pinvoke_cleanup(ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheet/ImportStruct
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_com(const ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2& unmarshaled, ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_com& marshaled)
{
	Exception_t* ___styleSheet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'styleSheet' of type 'ImportStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___styleSheet_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_com_back(const ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_com& marshaled, ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2& unmarshaled)
{
	Exception_t* ___styleSheet_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'styleSheet' of type 'ImportStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___styleSheet_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheet/ImportStruct
IL2CPP_EXTERN_C void ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshal_com_cleanup(ImportStruct_tBA3BE71F944B2DA7C8E2D5129BB7A63A1E82A8E2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.TextField/TextInput::set_multiline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInput_set_multiline_mBF799AA76712650FBB00D982C2B566C974452672 (TextInput_tF2655D1B1A45173CD84F0FA7145341EE76671C20 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextInputBase_get_text_m8F4AECBBB9F3C558F0DD431AA308AD884EDBA770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextInputBase_set_text_m302E30B2E54C055AAFF312CFB6541F3F4064406D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		__this->set_m_Multiline_58(L_0);
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_3;
		L_3 = TextInputBase_get_text_m8F4AECBBB9F3C558F0DD431AA308AD884EDBA770(__this, /*hidden argument*/TextInputBase_get_text_m8F4AECBBB9F3C558F0DD431AA308AD884EDBA770_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		TextInputBase_set_text_m302E30B2E54C055AAFF312CFB6541F3F4064406D(__this, L_4, /*hidden argument*/TextInputBase_set_text_m302E30B2E54C055AAFF312CFB6541F3F4064406D_RuntimeMethod_var);
	}

IL_002c:
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
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m498FEE8F6756B1DE4C0AA114F447001F44073A37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * L_0 = (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 *)il2cpp_codegen_object_new(U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8173E517B38C5D4665E58BE36F01E1AED62A9BBA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8173E517B38C5D4665E58BE36F01E1AED62A9BBA (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__1_0_m1276BB1D8BE532589C69B9EF7FF6F46950CB2FFF (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		UIEventRegistration_TakeCapture_m3570F7D49665E03B242C681FE8DF1041CB04591E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__1_1_mE27A9FAE95C7D8556DF476FC672CE8656C30F68D (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		UIEventRegistration_ReleaseCapture_m81F15568AFE62F7AD404583F7938D12E179304EA(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_2(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__1_2_mC9EB4AFC634837113778B826633482A993AE25F6 (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, int32_t ___i0, intptr_t ___ptr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___i0;
		intptr_t L_1 = ___ptr1;
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UIEventRegistration_ProcessEvent_m653154D24616627CBAA7D1DCDE435B2ECA398676(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__1_3_mE25A61ED9B86A7BF471F2971C9C10E18CA189785 (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		UIEventRegistration_CleanupRoots_mF2368C4016483DEB0C52D45C201BB01AEE4DB46D(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_4(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__1_4_m0B10AA421E0CE4476EEE7AF813AE5632C0C52824 (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___exception0;
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UIEventRegistration_EndContainerGUIFromException_m3893EDE0FD8BF2212864A1C8EC27DC240E1B4C20(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.UIEventRegistration/<>c::<.cctor>b__1_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__1_5_mA465B970669D77B7B5BB638A32D6C927DF7EA030 (U3CU3Ec_tE7083962BBFA964F39FE69353E0BDF6771720BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIEventRegistration_t0CC154C7A1658149926FB820942E2C0644E9A31A_il2cpp_TypeInfo_var);
		UIEventRegistration_MakeCurrentIMGUIContainerDirty_m18E0FABC75136E73CCD0476962A50D086B1F719C(/*hidden argument*/NULL);
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
// System.Void UnityEngine.UIElements.VisualElement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDE98BE8C2191F531C0E0230496E57C9787832254 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * L_0 = (U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 *)il2cpp_codegen_object_new(U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m078E58F0346BFC0E9364C684070EAB15FD099EDF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m078E58F0346BFC0E9364C684070EAB15FD099EDF (U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/<>c::<set_tooltip>b__339_0(UnityEngine.UIElements.TooltipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3Cset_tooltipU3Eb__339_0_mF337662E366CF2EABCE2A51F0BC4B0DFCEB4774F (U3CU3Ec_tAB20CD1F788F29CAD247405841CF0BC3AD638C64 * __this, TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TooltipEvent_t115ACBC5D000764D0DB89635AECDA9D36C9C3D46 * L_0 = ___evt0;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		VisualElement_OnTooltip_m7321BAC7ADAB13EC159004C2FBC73B4267D7CE77(L_0, /*hidden argument*/NULL);
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
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::get_element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_U3CelementU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::set_element(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_set_element_m3E1A847EAFF3AF3C249BB51B5ED1DA9E51247880 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___value0;
		__this->set_U3CelementU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mA49382DB1A844E129F3A372A2E0BC91F45DE88C1 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isScheduled_5((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2_il2cpp_TypeInfo_var);
		ScheduledItem__ctor_m756F18760E06D20D65B9E31BE6B187CA34425551(__this, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___handler0;
		BaseVisualElementScheduledItem_set_element_m3E1A847EAFF3AF3C249BB51B5ED1DA9E51247880_inline(__this, L_0, /*hidden argument*/NULL);
		VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * L_1 = (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB *)il2cpp_codegen_object_new(VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB_il2cpp_TypeInfo_var);
		VisualElementPanelActivator__ctor_m6253EC6859136187CA2311B57401E1166D2B9084(L_1, __this, /*hidden argument*/NULL);
		__this->set_m_Activator_6(L_1);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::OnItemUnscheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_OnItemUnscheduled_m11212547146BD9846DE362BCD06BA2FD11262CDA (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ScheduledItem_OnItemUnscheduled_mF3738B5D249F7C3FDB949ADBE93AF97464655748(__this, /*hidden argument*/NULL);
		__this->set_isScheduled_5((bool)0);
		VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * L_0 = __this->get_m_Activator_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElementPanelActivator_get_isDetaching_m2ED9B5DF7F9063215CD2F691C57FAAC16DD19CC5_inline(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * L_3 = __this->get_m_Activator_6();
		NullCheck(L_3);
		VisualElementPanelActivator_SetActive_mEF62F79FC0D6B79A461EE131AB29E8285F5C8ADF(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_Resume_m37F2B94DD6013D79EEB85342EFA2CE231AAC66D3 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	{
		VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * L_0 = __this->get_m_Activator_6();
		NullCheck(L_0);
		VisualElementPanelActivator_SetActive_mEF62F79FC0D6B79A461EE131AB29E8285F5C8ADF(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::OnPanelActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_OnPanelActivate_mCF07693CC148404E8E7CE12C90FA01720284C2A0 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScheduler_t8C2763D531C83CE013529B9DCE83E4149925D886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_isScheduled_5();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		__this->set_isScheduled_5((bool)1);
		ScheduledItem_ResetStartTime_mB99EC01A8CE8FF074BAB5E46675E6A53EABD5CF8(__this, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2;
		L_2 = BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_3;
		L_3 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* UnityEngine.UIElements.IScheduler UnityEngine.UIElements.BaseVisualElementPanel::get_scheduler() */, L_3);
		NullCheck(L_4);
		InterfaceActionInvoker1< ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2 * >::Invoke(1 /* System.Void UnityEngine.UIElements.IScheduler::Schedule(UnityEngine.UIElements.ScheduledItem) */, IScheduler_t8C2763D531C83CE013529B9DCE83E4149925D886_il2cpp_TypeInfo_var, L_4, __this);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::OnPanelDeactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_OnPanelDeactivate_m226B026AEF6EBAB6B4BF8414EB26110D7E6F4691 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScheduler_t8C2763D531C83CE013529B9DCE83E4149925D886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_isScheduled_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		__this->set_isScheduled_5((bool)0);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2;
		L_2 = BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_3;
		L_3 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* UnityEngine.UIElements.IScheduler UnityEngine.UIElements.BaseVisualElementPanel::get_scheduler() */, L_3);
		NullCheck(L_4);
		InterfaceActionInvoker1< ScheduledItem_tF43A01B51DD81E4F596F1B4B0F817831E8F1FFA2 * >::Invoke(0 /* System.Void UnityEngine.UIElements.IScheduler::Unschedule(UnityEngine.UIElements.ScheduledItem) */, IScheduler_t8C2763D531C83CE013529B9DCE83E4149925D886_il2cpp_TypeInfo_var, L_4, __this);
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::CanBeActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseVisualElementScheduledItem_CanBeActivated_mE36E839682A6C323B5624EBB8368D4FAC64F5FC0 (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0;
		L_0 = BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1;
		L_1 = BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_2;
		L_2 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3;
		L_3 = BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_4;
		L_4 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* UnityEngine.UIElements.IScheduler UnityEngine.UIElements.BaseVisualElementPanel::get_scheduler() */, L_4);
		G_B4_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_6 = V_0;
		return L_6;
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
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_pinvoke(const Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076& unmarshaled, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_pinvoke_back(const Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_pinvoke& marshaled, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076& unmarshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_pinvoke_cleanup(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_com(const Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076& unmarshaled, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_com& marshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_com_back(const Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_com& marshaled, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076& unmarshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshal_com_cleanup(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_marshaled_com& marshaled)
{
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_parent_m95543CF2F0974BC89228441F8789764F6F10F502 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method)
{
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * V_0 = NULL;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = L_0->get_m_PhysicalParent_39();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_parent_m95543CF2F0974BC89228441F8789764F6F10F502_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * _returnValue;
	_returnValue = Hierarchy_get_parent_m95543CF2F0974BC89228441F8789764F6F10F502(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m47CD0C4F9CA3FB3EC07CAD619043E2B4CDDB8929 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___element0;
		__this->set_m_Owner_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy__ctor_m47CD0C4F9CA3FB3EC07CAD619043E2B4CDDB8929_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy__ctor_m47CD0C4F9CA3FB3EC07CAD619043E2B4CDDB8929(_thisAdjusted, ___element0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___child0;
		V_0 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B69B91665E2794F33905688270D740A89663143)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3;
		L_3 = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = ___child0;
		Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_Add_mF390C363506F36C35FBB45A3FBEA9F247CFF0EBC(_thisAdjusted, ___child0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Insert(System.Int32,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___child1;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05BA33FC7FFF2013E3C524D47B41296B7EACC4E7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___index0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C87AC914BC35591F312B19EFCB93B2312614C8)), L_6, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32_RuntimeMethod_var)));
	}

IL_0038:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_9 = ___child1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10 = __this->get_m_Owner_0();
		V_3 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_9) == ((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5338A97A4E0097B99259F2AAB53CED274C56E28C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32_RuntimeMethod_var)));
	}

IL_0050:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_13 = ___child1;
		NullCheck(L_13);
		VisualElement_RemoveFromHierarchy_m3F9F60514E915E7978E88396FAD883BB7872CBB2(L_13, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_14 = __this->get_m_Owner_0();
		NullCheck(L_14);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_15 = L_14->get_m_Children_42();
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_16 = ((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var))->get_s_EmptyList_41();
		V_4 = (bool)((((RuntimeObject*)(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_15) == ((RuntimeObject*)(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_18 = __this->get_m_Owner_0();
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_19;
		L_19 = VisualElementListPool_Get_m7970FFA88C08A812458DA802227210D7757D4BAC(0, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_m_Children_42(L_19);
	}

IL_0082:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_20 = __this->get_m_Owner_0();
		NullCheck(L_20);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_21;
		L_21 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = YogaNode_get_IsMeasureDefined_mFA702131C777907247568D947E96DEC05F501FBA(L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_24 = __this->get_m_Owner_0();
		NullCheck(L_24);
		VisualElement_RemoveMeasureFunction_m997CAA92089C6A3DF18A73948695DE9C23FB24E6(L_24, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_25 = ___child1;
		int32_t L_26 = ___index0;
		Hierarchy_PutChildAtIndex_mC2FA3F1D0C87D647380CBD9348F2976730E0C174((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, L_25, L_26, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_27 = ___child1;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_imguiContainerDescendantCount_35();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_29 = ___child1;
		NullCheck(L_29);
		bool L_30 = ((Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_29)->get_isIMGUIContainer_3();
		G_B11_0 = L_28;
		if (L_30)
		{
			G_B12_0 = L_28;
			goto IL_00c0;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_00c1:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B13_1, (int32_t)G_B13_0));
		int32_t L_31 = V_0;
		V_6 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dc;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_33 = __this->get_m_Owner_0();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		VisualElement_ChangeIMGUIContainerCount_m25EBB1439251D48F2510BE1DA65618EA2EEF5DB9(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_35 = ___child1;
		NullCheck(L_35);
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_36;
		L_36 = VisualElement_get_hierarchy_m4B2AD83FE8FA93302B534E4EF77E356901F1A90A_inline(L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_37 = __this->get_m_Owner_0();
		Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)(&V_7), L_37, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_38 = ___child1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_39 = __this->get_m_Owner_0();
		NullCheck(L_39);
		bool L_40;
		L_40 = VisualElement_get_enabledInHierarchy_mA94B8F82641FD0CEBA18B9BA27FCA33F14F8FD97(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VisualElement_PropagateEnabledToChildren_m409E24ACF5D75A0FF1875ECD35BF241ACE651EB6(L_38, L_40, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_41 = ___child1;
		NullCheck(L_41);
		VisualElement_InvokeHierarchyChanged_mE792F53054020B901F7B5DEF212D8C440D8936B6(L_41, 0, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_42 = ___child1;
		NullCheck(L_42);
		VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477(L_42, 4, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_43 = __this->get_m_Owner_0();
		NullCheck(L_43);
		VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477(L_43, 4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_Insert_mF246EDC484A02FC73814DF9CF09D0B54BB00DB32(_thisAdjusted, ___index0, ___child1, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::Remove(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___child0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E0DA584415159A2B86AB8EAA12A0A7AEF6BF331)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1_RuntimeMethod_var)));
	}

IL_0014:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = ___child0;
		NullCheck(L_3);
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_4;
		L_4 = VisualElement_get_hierarchy_m4B2AD83FE8FA93302B534E4EF77E356901F1A90A_inline(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_5;
		L_5 = Hierarchy_get_parent_m95543CF2F0974BC89228441F8789764F6F10F502((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)(&V_3), /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6 = __this->get_m_Owner_0();
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_5) == ((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175620BD8518AA2F58DC1CA9C9656B450B46EAC0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1_RuntimeMethod_var)));
	}

IL_003c:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_9 = __this->get_m_Owner_0();
		NullCheck(L_9);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_10 = L_9->get_m_Children_42();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = ___child0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35(L_10, L_11, /*hidden argument*/List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35_RuntimeMethod_var);
		V_0 = L_12;
		int32_t L_13 = V_0;
		Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_Remove_m87D67B9739CA0E57AB0376165F1AD52A773D26C1(_thisAdjusted, ___child0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * G_B14_0 = NULL;
	BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * G_B13_0 = NULL;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___index0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C87AC914BC35591F312B19EFCB93B2312614C8)), L_4, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5_RuntimeMethod_var)));
	}

IL_002f:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7 = __this->get_m_Owner_0();
		NullCheck(L_7);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_8 = L_7->get_m_Children_42();
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10;
		L_10 = List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_RuntimeMethod_var);
		V_0 = L_10;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = V_0;
		NullCheck(L_11);
		VisualElement_InvokeHierarchyChanged_mE792F53054020B901F7B5DEF212D8C440D8936B6(L_11, 1, /*hidden argument*/NULL);
		int32_t L_12 = ___index0;
		Hierarchy_RemoveChildAtIndex_m1CAC29FF2035D2DD32F65C00A6441FE998E7321D((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, L_12, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_imguiContainerDescendantCount_35();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = ((Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_15)->get_isIMGUIContainer_3();
		G_B6_0 = L_14;
		if (L_16)
		{
			G_B7_0 = L_14;
			goto IL_0062;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0063;
	}

IL_0062:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0063:
	{
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B8_1, (int32_t)G_B8_0));
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_19 = __this->get_m_Owner_0();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		VisualElement_ChangeIMGUIContainerCount_m25EBB1439251D48F2510BE1DA65618EA2EEF5DB9(L_19, ((-L_20)), /*hidden argument*/NULL);
	}

IL_007d:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_21 = V_0;
		NullCheck(L_21);
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_22;
		L_22 = VisualElement_get_hierarchy_m4B2AD83FE8FA93302B534E4EF77E356901F1A90A_inline(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)(&V_4), (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)NULL, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		Hierarchy_ReleaseChildList_m23DD02178018D2A9F8051840B5A229425D7725C6((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_25 = __this->get_m_Owner_0();
		NullCheck(L_25);
		VisualElement_AssignMeasureFunction_mFF075698728D883045383ECE2DB4033F7C32093F(L_25, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_26 = __this->get_m_Owner_0();
		NullCheck(L_26);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_27;
		L_27 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_26, /*hidden argument*/NULL);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_28 = L_27;
		G_B13_0 = L_28;
		if (L_28)
		{
			G_B14_0 = L_28;
			goto IL_00c3;
		}
	}
	{
		goto IL_00cb;
	}

IL_00c3:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_29 = V_0;
		NullCheck(G_B14_0);
		VirtActionInvoker2< VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, int32_t >::Invoke(19 /* System.Void UnityEngine.UIElements.BaseVisualElementPanel::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType) */, G_B14_0, L_29, 4);
	}

IL_00cb:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_30 = __this->get_m_Owner_0();
		NullCheck(L_30);
		VisualElement_IncrementVersion_mB583875ADC5D9BD3DC7CAA49722BBFD617A16477(L_30, 4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_RemoveAt_m11DE213ECAE2D9EFC622162151167CEA24AEF8A5(_thisAdjusted, ___index0, method);
}
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF37E9009C6837645A99A160B5D4A413545A11D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mEF37E9009C6837645A99A160B5D4A413545A11D1_inline(L_1, /*hidden argument*/List_1_get_Count_mEF37E9009C6837645A99A160B5D4A413545A11D1_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_Item_mC13B7FAA90B9AB3295560406C5223DB80046D6FA (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * V_0 = NULL;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		int32_t L_2 = ___key0;
		NullCheck(L_1);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3;
		L_3 = List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m6ECC46EF7C9D5AA93D33ADA77E00F08236FEC74A_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Hierarchy_get_Item_mC13B7FAA90B9AB3295560406C5223DB80046D6FA_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * _returnValue;
	_returnValue = Hierarchy_get_Item_mC13B7FAA90B9AB3295560406C5223DB80046D6FA(_thisAdjusted, ___key0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::IndexOf(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_IndexOf_m66C3F52FD40AE769E4824D8ED133E42B8C692B69 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2 = ___element0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35(L_1, L_2, /*hidden argument*/List_1_IndexOf_m9C3B9135CD98838E5CB42B24D1FD9FFD06255E35_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Hierarchy_IndexOf_m66C3F52FD40AE769E4824D8ED133E42B8C692B69_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Hierarchy_IndexOf_m66C3F52FD40AE769E4824D8ED133E42B8C692B69(_thisAdjusted, ___element0, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement/Hierarchy::Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hierarchy_Children_m5ACF2AF43F4B063501FC0686041510BFF62725CD (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		V_0 = (RuntimeObject*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Hierarchy_Children_m5ACF2AF43F4B063501FC0686041510BFF62725CD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Hierarchy_Children_m5ACF2AF43F4B063501FC0686041510BFF62725CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::SetParent(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set_m_PhysicalParent_39(L_1);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_2 = __this->get_m_Owner_0();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_m_LogicalParent_40(L_3);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6 = __this->get_m_Owner_0();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_7 = __this->get_m_Owner_0();
		NullCheck(L_7);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_8 = L_7->get_m_PhysicalParent_39();
		NullCheck(L_8);
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_9;
		L_9 = VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VisualElement_SetPanel_m5E6C8945761E4C280965A117AE3DA3F424F7F2F6(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0041:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_10 = __this->get_m_Owner_0();
		NullCheck(L_10);
		VisualElement_SetPanel_m5E6C8945761E4C280965A117AE3DA3F424F7F2F6(L_10, (BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 *)NULL, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_SetParent_m67C1641AF914E0A4B42DC7B6D1D5A61E5D79BCF4(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::PutChildAtIndex(UnityEngine.UIElements.VisualElement,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_PutChildAtIndex_mC2FA3F1D0C87D647380CBD9348F2976730E0C174 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B278EC32CFE6F9E53E8E3A78BB8B171F843C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m55FA04ED20809680124E375DFCF7B2FF7C1C1EB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___index1;
		int32_t L_1;
		L_1 = Hierarchy_get_childCount_m53DC6BD1E3F83390D53D5DF31EEBB68EA533DE56((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = __this->get_m_Owner_0();
		NullCheck(L_3);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_4 = L_3->get_m_Children_42();
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_5 = ___child0;
		NullCheck(L_4);
		List_1_Add_m1B278EC32CFE6F9E53E8E3A78BB8B171F843C916(L_4, L_5, /*hidden argument*/List_1_Add_m1B278EC32CFE6F9E53E8E3A78BB8B171F843C916_RuntimeMethod_var);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6 = __this->get_m_Owner_0();
		NullCheck(L_6);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7;
		L_7 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_6, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_8 = __this->get_m_Owner_0();
		NullCheck(L_8);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_9;
		L_9 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = YogaNode_get_Count_m5C51BCECC428A2273F516147BF93D261F290D7CC(L_9, /*hidden argument*/NULL);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_11 = ___child0;
		NullCheck(L_11);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_12;
		L_12 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		YogaNode_Insert_m3DEECB3A58FD523279B8A2668E35BB2BE43ADC66(L_7, L_10, L_12, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_004e:
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_13 = __this->get_m_Owner_0();
		NullCheck(L_13);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_14 = L_13->get_m_Children_42();
		int32_t L_15 = ___index1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_16 = ___child0;
		NullCheck(L_14);
		List_1_Insert_m55FA04ED20809680124E375DFCF7B2FF7C1C1EB5(L_14, L_15, L_16, /*hidden argument*/List_1_Insert_m55FA04ED20809680124E375DFCF7B2FF7C1C1EB5_RuntimeMethod_var);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_17 = __this->get_m_Owner_0();
		NullCheck(L_17);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_18;
		L_18 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = ___index1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_20 = ___child0;
		NullCheck(L_20);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_21;
		L_21 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		YogaNode_Insert_m3DEECB3A58FD523279B8A2668E35BB2BE43ADC66(L_18, L_19, L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_PutChildAtIndex_mC2FA3F1D0C87D647380CBD9348F2976730E0C174_AdjustorThunk (RuntimeObject * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___child0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_PutChildAtIndex_mC2FA3F1D0C87D647380CBD9348F2976730E0C174(_thisAdjusted, ___child0, ___index1, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::RemoveChildAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_RemoveChildAtIndex_m1CAC29FF2035D2DD32F65C00A6441FE998E7321D (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m743D6994E493872B07C71F75BECC4211D3CE8D92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		List_1_RemoveAt_m743D6994E493872B07C71F75BECC4211D3CE8D92(L_1, L_2, /*hidden argument*/List_1_RemoveAt_m743D6994E493872B07C71F75BECC4211D3CE8D92_RuntimeMethod_var);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = __this->get_m_Owner_0();
		NullCheck(L_3);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_4;
		L_4 = VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_RemoveChildAtIndex_m1CAC29FF2035D2DD32F65C00A6441FE998E7321D_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_RemoveChildAtIndex_m1CAC29FF2035D2DD32F65C00A6441FE998E7321D(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.UIElements.VisualElement/Hierarchy::ReleaseChildList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy_ReleaseChildList_m23DD02178018D2A9F8051840B5A229425D7725C6 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * V_1 = NULL;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_1 = L_0->get_m_Children_42();
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_2 = ((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var))->get_s_EmptyList_41();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_1) == ((RuntimeObject*)(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4 = __this->get_m_Owner_0();
		NullCheck(L_4);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_5 = L_4->get_m_Children_42();
		V_1 = L_5;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6 = __this->get_m_Owner_0();
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_7 = ((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0_il2cpp_TypeInfo_var))->get_s_EmptyList_41();
		NullCheck(L_6);
		L_6->set_m_Children_42(L_7);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_t6EEB827B9EC945069795613CE3F5B23F4F4F7081_il2cpp_TypeInfo_var);
		VisualElementListPool_Release_mB8470A864DB3FD63A48429DB3D5008DD293D47BD(L_8, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy_ReleaseChildList_m23DD02178018D2A9F8051840B5A229425D7725C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	Hierarchy_ReleaseChildList_m23DD02178018D2A9F8051840B5A229425D7725C6(_thisAdjusted, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_mD61D088EAA5FF9E5EB5FC51C8443890382D342F0 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_0 = ___other0;
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_1 = (*(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this);
		bool L_2;
		L_2 = Hierarchy_op_Equality_mD6AA27A22E2355CBD22CFBA91A834D2370BD0133(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Hierarchy_Equals_mD61D088EAA5FF9E5EB5FC51C8443890382D342F0_AdjustorThunk (RuntimeObject * __this, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Hierarchy_Equals_mD61D088EAA5FF9E5EB5FC51C8443890382D342F0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m4E001F4C66AF4D844E883AAE5BF761684695116D (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_il2cpp_TypeInfo_var);
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
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4;
		L_4 = Hierarchy_Equals_mD61D088EAA5FF9E5EB5FC51C8443890382D342F0((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)__this, ((*(Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)((Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *)UnBox(L_3, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool Hierarchy_Equals_m4E001F4C66AF4D844E883AAE5BF761684695116D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Hierarchy_Equals_m4E001F4C66AF4D844E883AAE5BF761684695116D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_GetHashCode_m07B0319B25E28C4473DD6F864553DDCC17EBD515 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_m_Owner_0();
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
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = __this->get_m_Owner_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
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
IL2CPP_EXTERN_C  int32_t Hierarchy_GetHashCode_m07B0319B25E28C4473DD6F864553DDCC17EBD515_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 * _thisAdjusted = reinterpret_cast<Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Hierarchy_GetHashCode_m07B0319B25E28C4473DD6F864553DDCC17EBD515(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::op_Equality(UnityEngine.UIElements.VisualElement/Hierarchy,UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_op_Equality_mD6AA27A22E2355CBD22CFBA91A834D2370BD0133 (Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___x0, Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_0 = ___x0;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1 = L_0.get_m_Owner_0();
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_2 = ___y1;
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_3 = L_2.get_m_Owner_0();
		V_0 = (bool)((((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_1) == ((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.UIElements.VisualElement/SimpleScheduledItem::.ctor(UnityEngine.UIElements.VisualElement,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScheduledItem__ctor_m53D11B49106C5F3DEB9FAF325C00180F1C2EAEBA (SimpleScheduledItem_tDEB73FC5E429E6ECA8FC766507195FE77A4D4391 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___handler0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___updateEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementScheduledItem_1__ctor_m2D8C3E93637C7DE64C69446D911818DC5A55515F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___handler0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___updateEvent1;
		VisualElementScheduledItem_1__ctor_m2D8C3E93637C7DE64C69446D911818DC5A55515F(__this, L_0, L_1, /*hidden argument*/VisualElementScheduledItem_1__ctor_m2D8C3E93637C7DE64C69446D911818DC5A55515F_RuntimeMethod_var);
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
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_mAFAF068DEE331E50496982E388FFF67A74092740 (UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_mFC61CA9A14C4F1C014BBBA565459E9377AE40AFD (UpdaterArray_t4D22D6AD9E07F0143A372F2DDDC3B615A0A5EC08 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t7B7250A56171093D9271E6C84B54C185A5086771* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * FocusChangeDirection_get_lastValue_m5E020A64334CD4D158B4F858AE3017BBD394013F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var);
		FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118 * L_0 = ((FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t735EB259C7198DEC617BA20828C4F947F35C0118_il2cpp_TypeInfo_var))->get_U3ClastValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isActive_mFA4041CC2963E5D2D88C63EA3836F496E2576398_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisActiveU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isActive_m729B25C8EAD4377C752D04390FD2AB9B38529E75_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisActiveU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElementPanelActivator_set_isDetaching_mD4CAC44FA31DC700177A11C4292D98241FD6AB79_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisDetachingU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4011F334763F8DB0440A93DB11969D5E54CE2941_inline (WheelEvent_t79CBA86B16453AE12A6D2ACEA434C8BE72FF52A4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem_set_element_m3E1A847EAFF3AF3C249BB51B5ED1DA9E51247880_inline (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___value0, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = ___value0;
		__this->set_U3CelementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElementPanelActivator_get_isDetaching_m2ED9B5DF7F9063215CD2F691C57FAAC16DD19CC5_inline (VisualElementPanelActivator_tB417B95A604CE06ACDBAF342C6A4AF1CEB0BE5FB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisDetachingU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * BaseVisualElementScheduledItem_get_element_m68B5219A07633C6019E97AC594E8099269B2BB8C_inline (BaseVisualElementScheduledItem_t3E6A61E673DEBA515EDFCAD0873D02BCB3A991C8 * __this, const RuntimeMethod* method)
{
	{
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_0 = __this->get_U3CelementU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * VisualElement_get_elementPanel_mC3F8CF4D43D0C5841CCCB92D5A95398065B7282C_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method)
{
	{
		BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30 * L_0 = __this->get_U3CelementPanelU3Ek__BackingField_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * VisualElement_get_yogaNode_m5CA07AF1958F42E7831FA71C571449B659290A93_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method)
{
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_0 = __this->get_U3CyogaNodeU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  VisualElement_get_hierarchy_m4B2AD83FE8FA93302B534E4EF77E356901F1A90A_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method)
{
	{
		Hierarchy_t72E95B8C6B44F6CEAF66A6A59564EB373D0A7076  L_0 = __this->get_U3ChierarchyU3Ek__BackingField_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = __this->get_m_Ptr_0();
		bool L_2;
		L_2 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_4 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
