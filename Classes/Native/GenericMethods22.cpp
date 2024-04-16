#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Action`1<UnityEngine.Font>
struct Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UniRx.Unit>
struct Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t86645AF7004B27FBBEEA9B4EBCE215885AFBC3E7;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_tF06B0812A15F0DCA8223A792F790D5E10AD79823;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t088F85164CD5445D216FC7D72DA5D84D80E3D94F;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.VisualElement>
struct IEnumerable_1_t2C180149BF11786802CE80222226EF453AC6F286;
// System.IObservable`1<System.Object>
struct IObservable_1_tD298C95FFB6061193313830292FE8E817D37B5A4;
// System.IObserver`1<System.Object>
struct IObserver_1_t9EBB98F865B275FC177A4A094F9E254B58B8A962;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC;
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
// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement>
struct List_1_tCD74EF8BC539549FF2F92038F46DC476D31C2308;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_t7DBAF0A2F1C24EC434ED4A6C16B8B019D0DB5441;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t9DB4CB3BCA73B950C70CAA094C00A8DBBE9F6F3A;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.UIElements.GradientSettings[]
struct GradientSettingsU5BU5D_tA46B4329A05EDB682A503179055DF4B31B2E7EEA;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t9766C7D49E9505A3D2D3D69481F14808988287DA;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t31943BDD82120CBC1067BC90B51BCDEF32226609;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tA39005B1C18E39B68364430213FAAD8B58DC9083;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t6C9B3D9B68534217E9628B72E54D186B839399A0;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4;
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.UIElements.VectorImageVertex[]
struct VectorImageVertexU5BU5D_t3763E588EB85BC209EEE51BBAEFB8C6B0B53D4C6;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tE1A7D361EFED7F6C0EC41136A191F4CFEC9C0BBE;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_tF66F901C8390BE645422B4FA6232A64CB504A184;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t0BFFA91D18C8A7D905330E2D6DE84B9B67E7BE30;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tF65787E1256E8162D54C36C0EDB423E82433394E;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t9CD5BA2EA7664E88FE3D89F7EC3A9CC478B36B34;
// UnityEngine.UIElements.FocusController
struct FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B;
// UnityEngine.UIElements.Focusable
struct Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.ICancelable
struct ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UIElements.IFocusRing
struct IFocusRing_t7AA78C2EF79168C58478D1719F3775E0822176E9;
// UnityEngine.UIElements.IResolvedStyle
struct IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523;
// UnityEngine.UIElements.IStyle
struct IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t9428EF1076CFEC0E4529A76FF0EBC3D28D964F57;
// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_t44330638FDDF6AAE9A2FC070B31597D8C5C262EE;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// UnityEngine.UIElements.VectorImage
struct VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t8406B9A4DE45683537A009418F8732393F25A8B2;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17;
// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_t6B1784E3AF696409A4166A25788B6EF188DF1D2F;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;

IL2CPP_EXTERN_C RuntimeClass* Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Observable_tFD04225232589715810F680FE63EB09951846DF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D3CEBB5DB732F9689529DC0F45E4536F7BA73B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m00F5EAAB115797A1D9E1129037856CF93639D051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m0FFAB2FAD1455C7E025389B90EC9D2AC9CCE8925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m52AB6AE26DC6961EE74851E0213807FCBF9CEC7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m749463DFCB15110ABF03F5164FA17FB9510145A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m776400B1BB2076032B745C37F2A2D375D06C2527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_m85D70055C29DB0BEB808ACCD6505E9FF16E8F6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_keyword_mD0B9EBF09829E571CD9F28E766F7137650CAB934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m12920C3C0EF24B5EC6448AE97F495BB535E3E449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m4C2B1F46DE532697AA327872C666FF579D7A9957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m68011EBC7C2F7D2461F67DA934312E68D544A525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m7C5073E54B6CE5B7B342D0516B6802C156D29F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m8560A04E5D21505172A1EC316780155C97B884F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m8C7ADDFCEE66901DDFE0F7C9321F337838A6FC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_mBC00BA3CFC4447CFC16E30A4A860404A8A9A167A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_mCA94F7A093F4FB1AFB82DDD7C88071DDC16C5224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_mF6393DABD3A0776D1C829CF99C51B5E402E86539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_m17526F377AF8E68A6FC02592D57F592886909441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_m1762AE1D83664775F024C0A32BDE81004E9F60AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_m236BF072C9508E623828534E4F3B74D59A2F3985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mD16BFB811AC19FD70507B1F9D469FB1AA8D3352A_RuntimeMethod_var;
struct ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A ;
struct BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_com;
struct DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 ;
struct TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.WebRequestExtensions/<>c__DisplayClass0_0`1<System.Object>
struct U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB  : public RuntimeObject
{
public:
	// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult> UniRx.WebRequestExtensions/<>c__DisplayClass0_0`1::begin
	Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 * ___begin_0;
	// System.Func`2<System.IAsyncResult,TResult> UniRx.WebRequestExtensions/<>c__DisplayClass0_0`1::end
	Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___end_1;
	// System.Net.WebRequest UniRx.WebRequestExtensions/<>c__DisplayClass0_0`1::request
	WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * ___request_2;

public:
	inline static int32_t get_offset_of_begin_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB, ___begin_0)); }
	inline Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 * get_begin_0() const { return ___begin_0; }
	inline Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 ** get_address_of_begin_0() { return &___begin_0; }
	inline void set_begin_0(Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 * value)
	{
		___begin_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___begin_0), (void*)value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB, ___end_1)); }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * get_end_1() const { return ___end_1; }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED ** get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * value)
	{
		___end_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___end_1), (void*)value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB, ___request_2)); }
	inline WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * get_request_2() const { return ___request_2; }
	inline WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_2), (void*)value);
	}
};


// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77  : public RuntimeObject
{
public:
	// UniRx.ICancelable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::cancel
	RuntimeObject* ___cancel_0;
	// System.Action`1<T> UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action_1;

public:
	inline static int32_t get_offset_of_cancel_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77, ___cancel_0)); }
	inline RuntimeObject* get_cancel_0() const { return ___cancel_0; }
	inline RuntimeObject** get_address_of_cancel_0() { return &___cancel_0; }
	inline void set_cancel_0(RuntimeObject* value)
	{
		___cancel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77, ___action_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_action_1() const { return ___action_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject * ___state_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___cancellation_2)); }
	inline RuntimeObject* get_cancellation_2() const { return ___cancellation_2; }
	inline RuntimeObject** get_address_of_cancellation_2() { return &___cancellation_2; }
	inline void set_cancellation_2(RuntimeObject* value)
	{
		___cancellation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___action_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_action_3() const { return ___action_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___state_4)); }
	inline RuntimeObject * get_state_4() const { return ___state_4; }
	inline RuntimeObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(RuntimeObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject * ___state_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___cancellation_2)); }
	inline RuntimeObject* get_cancellation_2() const { return ___cancellation_2; }
	inline RuntimeObject** get_address_of_cancellation_2() { return &___cancellation_2; }
	inline void set_cancellation_2(RuntimeObject* value)
	{
		___cancellation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___action_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_action_3() const { return ___action_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___state_4)); }
	inline RuntimeObject * get_state_4() const { return ___state_4; }
	inline RuntimeObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(RuntimeObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
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


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>
struct Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item1_0)); }
	inline RuntimeObject* get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item3_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_m_Item3_2() const { return ___m_Item3_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
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


// UnityEngine.UIElements.FocusController
struct FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IFocusRing UnityEngine.UIElements.FocusController::<focusRing>k__BackingField
	RuntimeObject* ___U3CfocusRingU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement> UnityEngine.UIElements.FocusController::m_FocusedElements
	List_1_tCD74EF8BC539549FF2F92038F46DC476D31C2308 * ___m_FocusedElements_1;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController::m_LastFocusedElement
	Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * ___m_LastFocusedElement_2;
	// System.Int32 UnityEngine.UIElements.FocusController::<imguiKeyboardControl>k__BackingField
	int32_t ___U3CimguiKeyboardControlU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CfocusRingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B, ___U3CfocusRingU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CfocusRingU3Ek__BackingField_0() const { return ___U3CfocusRingU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CfocusRingU3Ek__BackingField_0() { return &___U3CfocusRingU3Ek__BackingField_0; }
	inline void set_U3CfocusRingU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CfocusRingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusRingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElements_1() { return static_cast<int32_t>(offsetof(FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B, ___m_FocusedElements_1)); }
	inline List_1_tCD74EF8BC539549FF2F92038F46DC476D31C2308 * get_m_FocusedElements_1() const { return ___m_FocusedElements_1; }
	inline List_1_tCD74EF8BC539549FF2F92038F46DC476D31C2308 ** get_address_of_m_FocusedElements_1() { return &___m_FocusedElements_1; }
	inline void set_m_FocusedElements_1(List_1_tCD74EF8BC539549FF2F92038F46DC476D31C2308 * value)
	{
		___m_FocusedElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFocusedElement_2() { return static_cast<int32_t>(offsetof(FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B, ___m_LastFocusedElement_2)); }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * get_m_LastFocusedElement_2() const { return ___m_LastFocusedElement_2; }
	inline Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 ** get_address_of_m_LastFocusedElement_2() { return &___m_LastFocusedElement_2; }
	inline void set_m_LastFocusedElement_2(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * value)
	{
		___m_LastFocusedElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastFocusedElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimguiKeyboardControlU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B, ___U3CimguiKeyboardControlU3Ek__BackingField_3)); }
	inline int32_t get_U3CimguiKeyboardControlU3Ek__BackingField_3() const { return ___U3CimguiKeyboardControlU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CimguiKeyboardControlU3Ek__BackingField_3() { return &___U3CimguiKeyboardControlU3Ek__BackingField_3; }
	inline void set_U3CimguiKeyboardControlU3Ek__BackingField_3(int32_t value)
	{
		___U3CimguiKeyboardControlU3Ek__BackingField_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// Doozy.Runtime.UIElements.Extensions.VisualElementExtensions
struct VisualElementExtensions_t278DF2E308088FA263EF039730A5C537C75C16AD  : public RuntimeObject
{
public:

public:
};


// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UniRx.WebRequestExtensions
struct WebRequestExtensions_t82A324C0358FF1683133985202BA8EF7DB03834F  : public RuntimeObject
{
public:

public:
};


// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_t019DABB82B7FE2CE3371F4BEF2B9860C15D4EACA  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391, ___scheduleAction_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduleAction_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17, ___scheduleAction_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduleAction_0), (void*)value);
	}
};


// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_t6B1784E3AF696409A4166A25788B6EF188DF1D2F  : public RuntimeObject
{
public:

public:
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


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualElement>
struct Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D, ___list_0)); }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * get_list_0() const { return ___list_0; }
	inline List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D, ___current_3)); }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * get_current_3() const { return ___current_3; }
	inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t86645AF7004B27FBBEEA9B4EBCE215885AFBC3E7 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t7DBAF0A2F1C24EC434ED4A6C16B8B019D0DB5441* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789, ___firstValue_1)); }
	inline Action_2_t86645AF7004B27FBBEEA9B4EBCE215885AFBC3E7 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t86645AF7004B27FBBEEA9B4EBCE215885AFBC3E7 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t86645AF7004B27FBBEEA9B4EBCE215885AFBC3E7 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789, ___additionalValues_2)); }
	inline Action_2U5BU5D_t7DBAF0A2F1C24EC434ED4A6C16B8B019D0DB5441* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t7DBAF0A2F1C24EC434ED4A6C16B8B019D0DB5441** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t7DBAF0A2F1C24EC434ED4A6C16B8B019D0DB5441* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___firstValue_1)); }
	inline InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___firstValue_1)); }
	inline InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___firstValue_1)); }
	inline InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___firstValue_1)); }
	inline InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.UIElements.Background
struct Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD 
{
public:
	// UnityEngine.Texture2D UnityEngine.UIElements.Background::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_0;
	// UnityEngine.UIElements.VectorImage UnityEngine.UIElements.Background::m_VectorImage
	VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * ___m_VectorImage_1;

public:
	inline static int32_t get_offset_of_m_Texture_0() { return static_cast<int32_t>(offsetof(Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD, ___m_Texture_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_0() const { return ___m_Texture_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_0() { return &___m_Texture_0; }
	inline void set_m_Texture_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_VectorImage_1() { return static_cast<int32_t>(offsetof(Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD, ___m_VectorImage_1)); }
	inline VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * get_m_VectorImage_1() const { return ___m_VectorImage_1; }
	inline VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 ** get_address_of_m_VectorImage_1() { return &___m_VectorImage_1; }
	inline void set_m_VectorImage_1(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * value)
	{
		___m_VectorImage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VectorImage_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Background
struct Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_0;
	VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * ___m_VectorImage_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Background
struct Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_0;
	VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * ___m_VectorImage_1;
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


// Doozy.Runtime.UIElements.EdgeValues
struct EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 
{
public:
	// System.Single Doozy.Runtime.UIElements.EdgeValues::Left
	float ___Left_0;
	// System.Single Doozy.Runtime.UIElements.EdgeValues::Top
	float ___Top_1;
	// System.Single Doozy.Runtime.UIElements.EdgeValues::Right
	float ___Right_2;
	// System.Single Doozy.Runtime.UIElements.EdgeValues::Bottom
	float ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369, ___Left_0)); }
	inline float get_Left_0() const { return ___Left_0; }
	inline float* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(float value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369, ___Top_1)); }
	inline float get_Top_1() const { return ___Top_1; }
	inline float* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(float value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369, ___Right_2)); }
	inline float get_Right_2() const { return ___Right_2; }
	inline float* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(float value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369, ___Bottom_3)); }
	inline float get_Bottom_3() const { return ___Bottom_3; }
	inline float* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(float value)
	{
		___Bottom_3 = value;
	}
};

struct EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields
{
public:
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::ZeroValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___ZeroValues_4;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::OneValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___OneValues_5;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::OneLeftRightValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___OneLeftRightValues_6;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::OneTopBottomValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___OneTopBottomValues_7;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::TwoValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___TwoValues_8;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::TwoLeftRightValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___TwoLeftRightValues_9;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::TwoTopBottomValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___TwoTopBottomValues_10;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::ThreeValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___ThreeValues_11;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::ThreeLeftRightValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___ThreeLeftRightValues_12;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::ThreeTopBottomValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___ThreeTopBottomValues_13;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::FourValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___FourValues_14;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::FourLeftRightValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___FourLeftRightValues_15;
	// Doozy.Runtime.UIElements.EdgeValues Doozy.Runtime.UIElements.EdgeValues::FourTopBottomValues
	EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___FourTopBottomValues_16;

public:
	inline static int32_t get_offset_of_ZeroValues_4() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___ZeroValues_4)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_ZeroValues_4() const { return ___ZeroValues_4; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_ZeroValues_4() { return &___ZeroValues_4; }
	inline void set_ZeroValues_4(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___ZeroValues_4 = value;
	}

	inline static int32_t get_offset_of_OneValues_5() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___OneValues_5)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_OneValues_5() const { return ___OneValues_5; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_OneValues_5() { return &___OneValues_5; }
	inline void set_OneValues_5(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___OneValues_5 = value;
	}

	inline static int32_t get_offset_of_OneLeftRightValues_6() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___OneLeftRightValues_6)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_OneLeftRightValues_6() const { return ___OneLeftRightValues_6; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_OneLeftRightValues_6() { return &___OneLeftRightValues_6; }
	inline void set_OneLeftRightValues_6(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___OneLeftRightValues_6 = value;
	}

	inline static int32_t get_offset_of_OneTopBottomValues_7() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___OneTopBottomValues_7)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_OneTopBottomValues_7() const { return ___OneTopBottomValues_7; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_OneTopBottomValues_7() { return &___OneTopBottomValues_7; }
	inline void set_OneTopBottomValues_7(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___OneTopBottomValues_7 = value;
	}

	inline static int32_t get_offset_of_TwoValues_8() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___TwoValues_8)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_TwoValues_8() const { return ___TwoValues_8; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_TwoValues_8() { return &___TwoValues_8; }
	inline void set_TwoValues_8(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___TwoValues_8 = value;
	}

	inline static int32_t get_offset_of_TwoLeftRightValues_9() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___TwoLeftRightValues_9)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_TwoLeftRightValues_9() const { return ___TwoLeftRightValues_9; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_TwoLeftRightValues_9() { return &___TwoLeftRightValues_9; }
	inline void set_TwoLeftRightValues_9(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___TwoLeftRightValues_9 = value;
	}

	inline static int32_t get_offset_of_TwoTopBottomValues_10() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___TwoTopBottomValues_10)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_TwoTopBottomValues_10() const { return ___TwoTopBottomValues_10; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_TwoTopBottomValues_10() { return &___TwoTopBottomValues_10; }
	inline void set_TwoTopBottomValues_10(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___TwoTopBottomValues_10 = value;
	}

	inline static int32_t get_offset_of_ThreeValues_11() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___ThreeValues_11)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_ThreeValues_11() const { return ___ThreeValues_11; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_ThreeValues_11() { return &___ThreeValues_11; }
	inline void set_ThreeValues_11(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___ThreeValues_11 = value;
	}

	inline static int32_t get_offset_of_ThreeLeftRightValues_12() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___ThreeLeftRightValues_12)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_ThreeLeftRightValues_12() const { return ___ThreeLeftRightValues_12; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_ThreeLeftRightValues_12() { return &___ThreeLeftRightValues_12; }
	inline void set_ThreeLeftRightValues_12(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___ThreeLeftRightValues_12 = value;
	}

	inline static int32_t get_offset_of_ThreeTopBottomValues_13() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___ThreeTopBottomValues_13)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_ThreeTopBottomValues_13() const { return ___ThreeTopBottomValues_13; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_ThreeTopBottomValues_13() { return &___ThreeTopBottomValues_13; }
	inline void set_ThreeTopBottomValues_13(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___ThreeTopBottomValues_13 = value;
	}

	inline static int32_t get_offset_of_FourValues_14() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___FourValues_14)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_FourValues_14() const { return ___FourValues_14; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_FourValues_14() { return &___FourValues_14; }
	inline void set_FourValues_14(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___FourValues_14 = value;
	}

	inline static int32_t get_offset_of_FourLeftRightValues_15() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___FourLeftRightValues_15)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_FourLeftRightValues_15() const { return ___FourLeftRightValues_15; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_FourLeftRightValues_15() { return &___FourLeftRightValues_15; }
	inline void set_FourLeftRightValues_15(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___FourLeftRightValues_15 = value;
	}

	inline static int32_t get_offset_of_FourTopBottomValues_16() { return static_cast<int32_t>(offsetof(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369_StaticFields, ___FourTopBottomValues_16)); }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  get_FourTopBottomValues_16() const { return ___FourTopBottomValues_16; }
	inline EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369 * get_address_of_FourTopBottomValues_16() { return &___FourTopBottomValues_16; }
	inline void set_FourTopBottomValues_16(EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  value)
	{
		___FourTopBottomValues_16 = value;
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


// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
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


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_com* ___m_DeviceRequirements_2;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1, ___m_EventPtr_0)); }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * value)
	{
		___m_EventPtr_0 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F, ___table_0)); }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F_marshaled_pinvoke
{
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F_marshaled_com
{
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___table_0;
};

// UniRx.Unit
struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C__padding[1];
	};

public:
};

struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields
{
public:
	// UniRx.Unit UniRx.Unit::default
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___default_0;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields, ___default_0)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_default_0() const { return ___default_0; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___default_0 = value;
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


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757, ___m_ActionMap_0)); }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757, ___m_Action_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndexInMap_2() { return static_cast<int32_t>(offsetof(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757, ___m_BindingIndexInMap_2)); }
	inline int32_t get_m_BindingIndexInMap_2() const { return ___m_BindingIndexInMap_2; }
	inline int32_t* get_address_of_m_BindingIndexInMap_2() { return &___m_BindingIndexInMap_2; }
	inline void set_m_BindingIndexInMap_2(int32_t value)
	{
		___m_BindingIndexInMap_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757_marshaled_pinvoke
{
	InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * ___m_ActionMap_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757_marshaled_com
{
	InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * ___m_ActionMap_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingAndComplexity
	uint16_t* ___controlGroupingAndComplexity_16;
	// System.Boolean UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingInitialized
	bool ___controlGroupingInitialized_17;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionStates_7)); }
	inline TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___bindingStates_8)); }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___interactionStates_9)); }
	inline InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_controlGroupingAndComplexity_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlGroupingAndComplexity_16)); }
	inline uint16_t* get_controlGroupingAndComplexity_16() const { return ___controlGroupingAndComplexity_16; }
	inline uint16_t** get_address_of_controlGroupingAndComplexity_16() { return &___controlGroupingAndComplexity_16; }
	inline void set_controlGroupingAndComplexity_16(uint16_t* value)
	{
		___controlGroupingAndComplexity_16 = value;
	}

	inline static int32_t get_offset_of_controlGroupingInitialized_17() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlGroupingInitialized_17)); }
	inline bool get_controlGroupingInitialized_17() const { return ___controlGroupingInitialized_17; }
	inline bool* get_address_of_controlGroupingInitialized_17() { return &___controlGroupingInitialized_17; }
	inline void set_controlGroupingInitialized_17(bool value)
	{
		___controlGroupingInitialized_17 = value;
	}

	inline static int32_t get_offset_of_mapIndices_18() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___mapIndices_18)); }
	inline ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * get_mapIndices_18() const { return ___mapIndices_18; }
	inline ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A ** get_address_of_mapIndices_18() { return &___mapIndices_18; }
	inline void set_mapIndices_18(ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * value)
	{
		___mapIndices_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_marshaled_pinvoke
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_marshaled_com
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E, ___table_0)); }
	inline Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E_marshaled_pinvoke
{
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E_marshaled_com
{
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 * ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE * ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C * ___layoutMatchers_8;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutTypes_1)); }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutStrings_2)); }
	inline Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutBuilders_3)); }
	inline Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___baseLayoutTable_4)); }
	inline Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutOverrides_5)); }
	inline Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutOverrideNames_6)); }
	inline HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_precompiledLayouts_7() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___precompiledLayouts_7)); }
	inline Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE * get_precompiledLayouts_7() const { return ___precompiledLayouts_7; }
	inline Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE ** get_address_of_precompiledLayouts_7() { return &___precompiledLayouts_7; }
	inline void set_precompiledLayouts_7(Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE * value)
	{
		___precompiledLayouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precompiledLayouts_7), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_8() { return static_cast<int32_t>(offsetof(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F, ___layoutMatchers_8)); }
	inline List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C * get_layoutMatchers_8() const { return ___layoutMatchers_8; }
	inline List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C ** get_address_of_layoutMatchers_8() { return &___layoutMatchers_8; }
	inline void set_layoutMatchers_8(List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C * value)
	{
		___layoutMatchers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F_marshaled_pinvoke
{
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___layoutTypes_1;
	Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * ___layoutStrings_2;
	Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * ___layoutBuilders_3;
	Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 * ___baseLayoutTable_4;
	Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 * ___layoutOverrides_5;
	HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 * ___layoutOverrideNames_6;
	Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE * ___precompiledLayouts_7;
	List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C * ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F_marshaled_com
{
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___layoutTypes_1;
	Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * ___layoutStrings_2;
	Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * ___layoutBuilders_3;
	Dictionary_2_tD3132CDE19A98160EC17AE2285A89480809DD540 * ___baseLayoutTable_4;
	Dictionary_2_t20A4C56B2681DD10F2C1E2E7283A237815224E86 * ___layoutOverrides_5;
	HashSet_1_t9DCF3402E30D433824DBE15EBB53B1DD79D671C1 * ___layoutOverrideNames_6;
	Dictionary_2_tBF35F5A68A67D19B3685A61CE0EECA8A7DD19DFE * ___precompiledLayouts_7;
	List_1_tB0AB87A0CDEC1CF5456422A1F87B5EC9EFF9516C * ___layoutMatchers_8;
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

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___cancellation_2)); }
	inline RuntimeObject* get_cancellation_2() const { return ___cancellation_2; }
	inline RuntimeObject** get_address_of_cancellation_2() { return &___cancellation_2; }
	inline void set_cancellation_2(RuntimeObject* value)
	{
		___cancellation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___action_3)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_action_3() const { return ___action_3; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___state_4)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_state_4() const { return ___state_4; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___state_4 = value;
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___cancellation_2)); }
	inline RuntimeObject* get_cancellation_2() const { return ___cancellation_2; }
	inline RuntimeObject** get_address_of_cancellation_2() { return &___cancellation_2; }
	inline void set_cancellation_2(RuntimeObject* value)
	{
		___cancellation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___action_3)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_action_3() const { return ___action_3; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___state_4)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_state_4() const { return ___state_4; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___state_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D, ___m_Callbacks_1)); }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t78FDC7F1CD6623C5E091BB79EC2F93375CE38CE9  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA, ___m_Callbacks_1)); }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t83243D33E8FC822E3C1594248A3F8A3A0F856789  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB, ___firstValue_1)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>
struct Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item1_0)); }
	inline RuntimeObject* get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item2_1)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_m_Item2_1() const { return ___m_Item2_1; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___m_Item2_1 = value;
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item3_2)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_m_Item3_2() const { return ___m_Item3_2; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// UnityEngine.UIElements.Align
struct Align_tE4848C66FB87E85CFD96EC84E4FD4AFD919BEEFA 
{
public:
	// System.Int32 UnityEngine.UIElements.Align::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Align_tE4848C66FB87E85CFD96EC84E4FD4AFD919BEEFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Security.AuthenticationLevel
struct AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UIElements.Cursor
struct Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F 
{
public:
	// UnityEngine.Texture2D UnityEngine.UIElements.Cursor::<texture>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtextureU3Ek__BackingField_0;
	// UnityEngine.Vector2 UnityEngine.UIElements.Cursor::<hotspot>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ChotspotU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Cursor::<defaultCursorId>k__BackingField
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CtextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F, ___U3CtextureU3Ek__BackingField_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CtextureU3Ek__BackingField_0() const { return ___U3CtextureU3Ek__BackingField_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CtextureU3Ek__BackingField_0() { return &___U3CtextureU3Ek__BackingField_0; }
	inline void set_U3CtextureU3Ek__BackingField_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CtextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextureU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChotspotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F, ___U3ChotspotU3Ek__BackingField_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ChotspotU3Ek__BackingField_1() const { return ___U3ChotspotU3Ek__BackingField_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ChotspotU3Ek__BackingField_1() { return &___U3ChotspotU3Ek__BackingField_1; }
	inline void set_U3ChotspotU3Ek__BackingField_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ChotspotU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultCursorIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F, ___U3CdefaultCursorIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CdefaultCursorIdU3Ek__BackingField_2() const { return ___U3CdefaultCursorIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdefaultCursorIdU3Ek__BackingField_2() { return &___U3CdefaultCursorIdU3Ek__BackingField_2; }
	inline void set_U3CdefaultCursorIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CdefaultCursorIdU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Cursor
struct Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtextureU3Ek__BackingField_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ChotspotU3Ek__BackingField_1;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Cursor
struct Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtextureU3Ek__BackingField_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ChotspotU3Ek__BackingField_1;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField_2;
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

// UnityEngine.UIElements.DisplayStyle
struct DisplayStyle_t750B52FEB6F4EDF253020C8545E6460B39DC6A64 
{
public:
	// System.Int32 UnityEngine.UIElements.DisplayStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayStyle_t750B52FEB6F4EDF253020C8545E6460B39DC6A64, ___value___2)); }
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

// UnityEngine.UIElements.FlexDirection
struct FlexDirection_tF9FE317416B166F44DD6ADDB5D04A74762E378B0 
{
public:
	// System.Int32 UnityEngine.UIElements.FlexDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlexDirection_tF9FE317416B166F44DD6ADDB5D04A74762E378B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t2902D1C79819D41CAB80B5345925A58F2926824C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t2902D1C79819D41CAB80B5345925A58F2926824C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_StaticFields, ___s_Processors_0)); }
	inline TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatBit_2)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSBit_4)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatInt_6)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUInt_8)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatShort_10)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUShort_12)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatByte_14)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSByte_16)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatLong_18)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatULong_20)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatFloat_22)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatDouble_24)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2_26)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3_27)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Justify
struct Justify_t533E9C4B4BF06CA4F567CEEE354981055A5DD056 
{
public:
	// System.Int32 UnityEngine.UIElements.Justify::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Justify_t533E9C4B4BF06CA4F567CEEE354981055A5DD056, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.LengthUnit
struct LengthUnit_tF4EF49F000B90EAF1A1DA38A5D6BC9034A0BF9C4 
{
public:
	// System.Int32 UnityEngine.UIElements.LengthUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LengthUnit_tF4EF49F000B90EAF1A1DA38A5D6BC9034A0BF9C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// UnityEngine.UIElements.Overflow
struct Overflow_t13B0AE840409CDFBB591C719077012A66802AD45 
{
public:
	// System.Int32 UnityEngine.UIElements.Overflow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Overflow_t13B0AE840409CDFBB591C719077012A66802AD45, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UIElements.Position
struct Position_tF17D30E6DDB2AF5598D811C62A29EFE8628B9D2A 
{
public:
	// System.Int32 UnityEngine.UIElements.Position::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Position_tF17D30E6DDB2AF5598D811C62A29EFE8628B9D2A, ___value___2)); }
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


// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t01A121DD5B4904AB0EA0BFA6E26159EE9AF8B303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Principal.TokenImpersonationLevel
struct TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
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


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094, ___m_Asset_0)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094, ___m_ControlScheme_2)); }
	inline InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340 * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094_marshaled_pinvoke
{
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094_marshaled_com
{
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t65ED7D84CDC45F04A6417FABA3F8585FC545C340_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t8406B9A4DE45683537A009418F8732393F25A8B2  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_ExtendsLayout_5() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___m_ExtendsLayout_5)); }
	inline String_t* get_m_ExtendsLayout_5() const { return ___m_ExtendsLayout_5; }
	inline String_t** get_address_of_m_ExtendsLayout_5() { return &___m_ExtendsLayout_5; }
	inline void set_m_ExtendsLayout_5(String_t* value)
	{
		___m_ExtendsLayout_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExtendsLayout_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_t8406B9A4DE45683537A009418F8732393F25A8B2, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_tDF082D58D1D7072FCDA4D49EE3588B35D629E14E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tDF082D58D1D7072FCDA4D49EE3588B35D629E14E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_tBBC2208E3CFA107946D496127F15A9C0E4903821 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tBBC2208E3CFA107946D496127F15A9C0E4903821, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>
struct StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>
struct StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>
struct StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>
struct StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>
struct StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.ScaleMode>
struct StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.TextAnchor>
struct StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.WhiteSpace>
struct StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Wrap>
struct StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontTextureRebuildCallback_5), (void*)value);
	}
};

struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRebuilt_4), (void*)value);
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Name_2)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Variants_4)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_StateFormat_5)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_t62979DFB1C567F611655F27BEF4B8E8288F4E5FB  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t534859CA6A52E2EC9DDDCA52FE280E8D5CD598DB* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields, ___s_Layouts_15)); }
	inline Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// UnityEngine.UIElements.Length
struct Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 
{
public:
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.LengthUnit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Unit_1() { return static_cast<int32_t>(offsetof(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696, ___m_Unit_1)); }
	inline int32_t get_m_Unit_1() const { return ___m_Unit_1; }
	inline int32_t* get_address_of_m_Unit_1() { return &___m_Unit_1; }
	inline void set_m_Unit_1(int32_t value)
	{
		___m_Unit_1 = value;
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// UnityEngine.UIElements.StyleBackground
struct StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleBackground::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.UIElements.Background UnityEngine.UIElements.StyleBackground::m_Value
	Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2, ___m_Value_1)); }
	inline Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  get_m_Value_1() const { return ___m_Value_1; }
	inline Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  value)
	{
		___m_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Value_1))->___m_Texture_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Value_1))->___m_VectorImage_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2_marshaled_pinvoke
{
	int32_t ___m_Keyword_0;
	Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD_marshaled_pinvoke ___m_Value_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2_marshaled_com
{
	int32_t ___m_Keyword_0;
	Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD_marshaled_com ___m_Value_1;
};

// UnityEngine.UIElements.StyleColor
struct StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleColor::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.Color UnityEngine.UIElements.StyleColor::m_Value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361, ___m_Value_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Value_1() const { return ___m_Value_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleCursor
struct StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleCursor::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.UIElements.Cursor UnityEngine.UIElements.StyleCursor::m_Value
	Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1, ___m_Value_1)); }
	inline Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  get_m_Value_1() const { return ___m_Value_1; }
	inline Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  value)
	{
		___m_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Value_1))->___U3CtextureU3Ek__BackingField_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleCursor
struct StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1_marshaled_pinvoke
{
	int32_t ___m_Keyword_0;
	Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F_marshaled_pinvoke ___m_Value_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleCursor
struct StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1_marshaled_com
{
	int32_t ___m_Keyword_0;
	Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F_marshaled_com ___m_Value_1;
};

// UnityEngine.UIElements.StyleFloat
struct StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}
};


// UnityEngine.UIElements.StyleFont
struct StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFont::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.Font UnityEngine.UIElements.StyleFont::m_Value
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D, ___m_Value_1)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Value_1() const { return ___m_Value_1; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleFont
struct StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D_marshaled_pinvoke
{
	int32_t ___m_Keyword_0;
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Value_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleFont
struct StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D_marshaled_com
{
	int32_t ___m_Keyword_0;
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Value_1;
};

// UnityEngine.UIElements.StyleInt
struct StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
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


// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_4() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_AuthenticationLevel_4)); }
	inline int32_t get_m_AuthenticationLevel_4() const { return ___m_AuthenticationLevel_4; }
	inline int32_t* get_address_of_m_AuthenticationLevel_4() { return &___m_AuthenticationLevel_4; }
	inline void set_m_AuthenticationLevel_4(int32_t value)
	{
		___m_AuthenticationLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_ImpersonationLevel_5)); }
	inline int32_t get_m_ImpersonationLevel_5() const { return ___m_ImpersonationLevel_5; }
	inline int32_t* get_address_of_m_ImpersonationLevel_5() { return &___m_ImpersonationLevel_5; }
	inline void set_m_ImpersonationLevel_5(int32_t value)
	{
		___m_ImpersonationLevel_5 = value;
	}
};

struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;

public:
	inline static int32_t get_offset_of_s_PrefixList_1() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_PrefixList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_s_PrefixList_1() const { return ___s_PrefixList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_s_PrefixList_1() { return &___s_PrefixList_1; }
	inline void set_s_PrefixList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___s_PrefixList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_2() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_InternalSyncObject_2)); }
	inline RuntimeObject * get_s_InternalSyncObject_2() const { return ___s_InternalSyncObject_2; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_2() { return &___s_InternalSyncObject_2; }
	inline void set_s_InternalSyncObject_2(RuntimeObject * value)
	{
		___s_InternalSyncObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_3() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultTimerQueue_3)); }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * get_s_DefaultTimerQueue_3() const { return ___s_DefaultTimerQueue_3; }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB ** get_address_of_s_DefaultTimerQueue_3() { return &___s_DefaultTimerQueue_3; }
	inline void set_s_DefaultTimerQueue_3(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * value)
	{
		___s_DefaultTimerQueue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_3), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_6() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___webRequestCreate_6)); }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * get_webRequestCreate_6() const { return ___webRequestCreate_6; }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A ** get_address_of_webRequestCreate_6() { return &___webRequestCreate_6; }
	inline void set_webRequestCreate_6(DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * value)
	{
		___webRequestCreate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_7() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxy_7)); }
	inline RuntimeObject* get_s_DefaultWebProxy_7() const { return ___s_DefaultWebProxy_7; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_7() { return &___s_DefaultWebProxy_7; }
	inline void set_s_DefaultWebProxy_7(RuntimeObject* value)
	{
		___s_DefaultWebProxy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_8() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxyInitialized_8)); }
	inline bool get_s_DefaultWebProxyInitialized_8() const { return ___s_DefaultWebProxyInitialized_8; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_8() { return &___s_DefaultWebProxyInitialized_8; }
	inline void set_s_DefaultWebProxyInitialized_8(bool value)
	{
		___s_DefaultWebProxyInitialized_8 = value;
	}
};


// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314  ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA  ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D  ___onActionControlsChanged_2;

public:
	inline static int32_t get_offset_of_globalList_0() { return static_cast<int32_t>(offsetof(GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB, ___globalList_0)); }
	inline InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314  get_globalList_0() const { return ___globalList_0; }
	inline InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314 * get_address_of_globalList_0() { return &___globalList_0; }
	inline void set_globalList_0(InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314  value)
	{
		___globalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___globalList_0))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_onActionChange_1() { return static_cast<int32_t>(offsetof(GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB, ___onActionChange_1)); }
	inline CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA  get_onActionChange_1() const { return ___onActionChange_1; }
	inline CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA * get_address_of_onActionChange_1() { return &___onActionChange_1; }
	inline void set_onActionChange_1(CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA  value)
	{
		___onActionChange_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onActionControlsChanged_2() { return static_cast<int32_t>(offsetof(GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB, ___onActionControlsChanged_2)); }
	inline CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D  get_onActionControlsChanged_2() const { return ___onActionControlsChanged_2; }
	inline CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D * get_address_of_onActionControlsChanged_2() { return &___onActionControlsChanged_2; }
	inline void set_onActionControlsChanged_2(CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D  value)
	{
		___onActionControlsChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB_marshaled_pinvoke
{
	InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314  ___globalList_0;
	CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA  ___onActionChange_1;
	CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D  ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB_marshaled_com
{
	InlinedArray_1_tFCA31E8102435E4A60A161C004710A41410BA314  ___globalList_0;
	CallbackArray_1_t552BD871FFF51BBEADFA595A48105D602791E7FA  ___onActionChange_1;
	CallbackArray_1_tE03856E201C6AA8C7ED4B4A9675D5BD431CACF1D  ___onActionControlsChanged_2;
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UniRx.Unit>
struct Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IObserver`1<System.Object>,System.IDisposable>
struct Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 
{
public:
	// T System.Nullable`1::value
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___value_0)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_value_0() const { return ___value_0; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t31943BDD82120CBC1067BC90B51BCDEF32226609* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t9766C7D49E9505A3D2D3D69481F14808988287DA* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t6C9B3D9B68534217E9628B72E54D186B839399A0* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tA39005B1C18E39B68364430213FAAD8B58DC9083* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputActionState::m_CurrentlyProcessingThisEvent
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_CurrentlyProcessingThisEvent_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_12;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_13;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___maps_1)); }
	inline InputActionMapU5BU5D_t31943BDD82120CBC1067BC90B51BCDEF32226609* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_t31943BDD82120CBC1067BC90B51BCDEF32226609** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_t31943BDD82120CBC1067BC90B51BCDEF32226609* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___controls_2)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___interactions_3)); }
	inline IInputInteractionU5BU5D_t9766C7D49E9505A3D2D3D69481F14808988287DA* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_t9766C7D49E9505A3D2D3D69481F14808988287DA** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_t9766C7D49E9505A3D2D3D69481F14808988287DA* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___processors_4)); }
	inline InputProcessorU5BU5D_t6C9B3D9B68534217E9628B72E54D186B839399A0* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_t6C9B3D9B68534217E9628B72E54D186B839399A0** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_t6C9B3D9B68534217E9628B72E54D186B839399A0* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_tA39005B1C18E39B68364430213FAAD8B58DC9083* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_tA39005B1C18E39B68364430213FAAD8B58DC9083** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_tA39005B1C18E39B68364430213FAAD8B58DC9083* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___memory_7)); }
	inline UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_InProcessControlStateChange_10() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_InProcessControlStateChange_10)); }
	inline bool get_m_InProcessControlStateChange_10() const { return ___m_InProcessControlStateChange_10; }
	inline bool* get_address_of_m_InProcessControlStateChange_10() { return &___m_InProcessControlStateChange_10; }
	inline void set_m_InProcessControlStateChange_10(bool value)
	{
		___m_InProcessControlStateChange_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentlyProcessingThisEvent_11() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_CurrentlyProcessingThisEvent_11)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_m_CurrentlyProcessingThisEvent_11() const { return ___m_CurrentlyProcessingThisEvent_11; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_m_CurrentlyProcessingThisEvent_11() { return &___m_CurrentlyProcessingThisEvent_11; }
	inline void set_m_CurrentlyProcessingThisEvent_11(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___m_CurrentlyProcessingThisEvent_11 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_12() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_OnBeforeUpdateDelegate_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_12() const { return ___m_OnBeforeUpdateDelegate_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_12() { return &___m_OnBeforeUpdateDelegate_12; }
	inline void set_m_OnBeforeUpdateDelegate_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_13() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9, ___m_OnAfterUpdateDelegate_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_13() const { return ___m_OnAfterUpdateDelegate_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_13() { return &___m_OnAfterUpdateDelegate_13; }
	inline void set_m_OnAfterUpdateDelegate_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_13), (void*)value);
	}
};

struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9_StaticFields
{
public:
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB  ___s_GlobalState_14;

public:
	inline static int32_t get_offset_of_s_GlobalState_14() { return static_cast<int32_t>(offsetof(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9_StaticFields, ___s_GlobalState_14)); }
	inline GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB  get_s_GlobalState_14() const { return ___s_GlobalState_14; }
	inline GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB * get_address_of_s_GlobalState_14() { return &___s_GlobalState_14; }
	inline void set_s_GlobalState_14(GlobalState_tF1D93500AFBAA25C7FCA48B5D89640B84C44D0AB  value)
	{
		___s_GlobalState_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_14))->___globalList_0))->___additionalValues_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_14))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_StateBlock_0)); }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Name_1)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Layout_7)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Variants_8)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Device_9)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Parent_10)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DefaultState_18)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MinValue_19)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MaxValue_20)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.UIElements.StyleLength
struct StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF, ___m_Value_1)); }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  get_m_Value_1() const { return ___m_Value_1; }
	inline Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  value)
	{
		___m_Value_1 = value;
	}
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


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.UIElements.VectorImage
struct VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D UnityEngine.UIElements.VectorImage::atlas
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___atlas_4;
	// UnityEngine.UIElements.VectorImageVertex[] UnityEngine.UIElements.VectorImage::vertices
	VectorImageVertexU5BU5D_t3763E588EB85BC209EEE51BBAEFB8C6B0B53D4C6* ___vertices_5;
	// System.UInt16[] UnityEngine.UIElements.VectorImage::indices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___indices_6;
	// UnityEngine.UIElements.GradientSettings[] UnityEngine.UIElements.VectorImage::settings
	GradientSettingsU5BU5D_tA46B4329A05EDB682A503179055DF4B31B2E7EEA* ___settings_7;
	// UnityEngine.Vector2 UnityEngine.UIElements.VectorImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_8;

public:
	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022, ___atlas_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_atlas_4() const { return ___atlas_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlas_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022, ___vertices_5)); }
	inline VectorImageVertexU5BU5D_t3763E588EB85BC209EEE51BBAEFB8C6B0B53D4C6* get_vertices_5() const { return ___vertices_5; }
	inline VectorImageVertexU5BU5D_t3763E588EB85BC209EEE51BBAEFB8C6B0B53D4C6** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(VectorImageVertexU5BU5D_t3763E588EB85BC209EEE51BBAEFB8C6B0B53D4C6* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_indices_6() { return static_cast<int32_t>(offsetof(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022, ___indices_6)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_indices_6() const { return ___indices_6; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_indices_6() { return &___indices_6; }
	inline void set_indices_6(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___indices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indices_6), (void*)value);
	}

	inline static int32_t get_offset_of_settings_7() { return static_cast<int32_t>(offsetof(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022, ___settings_7)); }
	inline GradientSettingsU5BU5D_tA46B4329A05EDB682A503179055DF4B31B2E7EEA* get_settings_7() const { return ___settings_7; }
	inline GradientSettingsU5BU5D_tA46B4329A05EDB682A503179055DF4B31B2E7EEA** get_address_of_settings_7() { return &___settings_7; }
	inline void set_settings_7(GradientSettingsU5BU5D_tA46B4329A05EDB682A503179055DF4B31B2E7EEA* value)
	{
		___settings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_7), (void*)value);
	}

	inline static int32_t get_offset_of_size_8() { return static_cast<int32_t>(offsetof(VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022, ___size_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_8() const { return ___size_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_8() { return &___size_8; }
	inline void set_size_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_8 = value;
	}
};


// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ActionToRebind_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_BindingMask_2)); }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExpectedLayout_4)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Candidates_19)); }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnComplete_20)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnCancel_21)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnPotentialMatch_22)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnGeneratePath_23)); }
	inline Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnComputeScore_24)); }
	inline Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnApplyBinding_25)); }
	inline Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnEventDelegate_26)); }
	inline Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_LayoutCache_28)); }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !0 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared (StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m3BF9819B816CC6D05E5FC7A6FFB71B92EBDD0EF5_gshared (StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared (StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD * __this, int32_t ___v0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD  StyleEnum_1_op_Implicit_mD4D8205A6E0A7FE67A13D142B5745D4B0EB7BA3F_gshared (int32_t ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_mEE43B867A1FDA44D9CC4546D69ED9DF97449BADA_gshared (StyleEnum_1_t05CE08D4B588859F5424169E8501C3910E6E8DCD * __this, int32_t ___keyword0, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_gshared (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_gshared (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method);

// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>::get_value()
inline int32_t StyleEnum_1_get_value_mCA94F7A093F4FB1AFB82DDD7C88071DDC16C5224 (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.UIElements.IResolvedStyle UnityEngine.UIElements.VisualElement::get_resolvedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.Background UnityEngine.UIElements.StyleBackground::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  StyleBackground_get_value_m2C54BCBC340FE866C63B59849A84B0D8D4763C57 (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleBackground::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleBackground_get_keyword_m1CBF9F3913AC78A426B6C81F8872D30543BB57F2 (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.UIElements.Background::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Background_get_texture_mA63F83DD089DAD7929403E51739C5851550F02A6 (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleColor::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleColor_get_keyword_m3411D18829683115CDF33AD087F868EAB1C56740 (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VectorImage UnityEngine.UIElements.Background::get_vectorImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * Background_get_vectorImage_mBDE387DC6522B639F188559BA8BC158AB76FE01F (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.ScaleMode>::get_value()
inline int32_t StyleEnum_1_get_value_mBC00BA3CFC4447CFC16E30A4A860404A8A9A167A (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.Length::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58 (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.StyleFloat::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::get_value()
inline int32_t StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2 (StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleLength_get_keyword_m036AE2335A13FC8C931E2E8E55C518EAA092571B (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>::get_value()
inline int32_t StyleEnum_1_get_value_m4C2B1F46DE532697AA327872C666FF579D7A9957 (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>::get_keyword()
inline int32_t StyleEnum_1_get_keyword_mD0B9EBF09829E571CD9F28E766F7137650CAB934 (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *, const RuntimeMethod*))StyleEnum_1_get_keyword_m3BF9819B816CC6D05E5FC7A6FFB71B92EBDD0EF5_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleFloat_get_keyword_m6D4E7DA94B8CCB3218DC302BEA5B5065CA0B7140 (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Wrap>::get_value()
inline int32_t StyleEnum_1_get_value_m8C7ADDFCEE66901DDFE0F7C9321F337838A6FC1D (StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>::get_value()
inline int32_t StyleEnum_1_get_value_m12920C3C0EF24B5EC6448AE97F495BB535E3E449 (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>::get_value()
inline int32_t StyleEnum_1_get_value_m8560A04E5D21505172A1EC316780155C97B884F4 (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>::get_value()
inline int32_t StyleEnum_1_get_value_mF6393DABD3A0776D1C829CF99C51B5E402E86539 (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.TextAnchor>::get_value()
inline int32_t StyleEnum_1_get_value_m68011EBC7C2F7D2461F67DA934312E68D544A525 (StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.Font UnityEngine.UIElements.StyleFont::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * StyleFont_get_value_m973CD8034E749972E9E4056C78669B21B3110EB2 (StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleInt::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_value_mC8AD42EE7DA84AAEDCA9F08FA07AC4681719E149 (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.VisualElement::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VisualElement_get_tooltip_m0D024719B06920087C8759982FA7E1F1FB050F81 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// !0 UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.WhiteSpace>::get_value()
inline int32_t StyleEnum_1_get_value_m7C5073E54B6CE5B7B342D0516B6802C156D29F97 (StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 *, const RuntimeMethod*))StyleEnum_1_get_value_mC565E4DA45A90B4A9C5108D5FA2A8CDB5A8A0135_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * VisualElement_get_parent_m82DFC195B5302C8B4EDB2F220748A86EA76F52C0 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledSelf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElement_get_enabledSelf_m0AD7D3CCAF8946007C89521CB710F5EBDBB2CF68_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_enabledInHierarchy_mA94B8F82641FD0CEBA18B9BA27FCA33F14F8FD97 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.Focusable::get_focusable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_focusable_mA3BF33F025B1AE6F0E8E220E58DE6BDC1FDAB310_inline (Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController::get_focusedElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * FocusController_get_focusedElement_m4CA25427D3E72BB26A76098C58409F561BA7A9EB (FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_Children_m9A93E2A897CEBB1F0654DDF32DAC0EA79E8D0E08 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::GetEnumerator()
inline Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639 (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  (*) (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualElement>::get_Current()
inline VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_inline (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D * __this, const RuntimeMethod* method)
{
	return ((  VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * (*) (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m3F9F60514E915E7978E88396FAD883BB7872CBB2 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.VisualElement>::MoveNext()
inline bool Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement::ClassListContains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_ClassListContains_m6AA8278A65764A869BC465D4911C6584E9DF5103 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, String_t* ___cls0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromClassList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromClassList_m883D0B10DF47A558062DDA56102492A86BC4FC7C (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, String_t* ___className0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElementStyleSheetSet UnityEngine.UIElements.VisualElement::get_styleSheets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualElementStyleSheetSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElementStyleSheetSet::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Remove(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElementStyleSheetSet::Contains(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2 (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB * __this, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m216B9D794BCAD6A3B25E83F66CD3328B55203B9C (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement::IndexOf(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_IndexOf_m3DC4BEDB32A89D007E391669EF1AADE4927F92AC (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::Insert(System.Int32,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Insert_mBA363A58458420B451402353C01566C2744828AB (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___index0, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * ___element1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_name_m6C1E013C250D02FB6E5F55D9FE4814828E95A129 (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_pickingMode(UnityEngine.UIElements.PickingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m9DE9A6A38587478971E15868D8CC9EB234CEBC5D_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>::.ctor(!0)
inline void StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2 (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleColor::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___v0, const RuntimeMethod* method);
// System.Void Doozy.Runtime.Common.Debugger::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogWarning_m1EC3B3E66FDA1F0E1C6B40B00B402353B79CD065 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleBackground::.ctor(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleBackground__ctor_m3869A40FD6AD78BD1F741512C6D6B2BCE287FF46 (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleBackground::.ctor(UnityEngine.UIElements.Background)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleBackground__ctor_m6A7536D59978B46E920441CFE0077EF7C6EAB814 (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleBackground::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleBackground__ctor_mCB8102A96A5E7D805767A6A365D8C0AA908117EA (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, int32_t ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleBackground::.ctor(UnityEngine.UIElements.VectorImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleBackground__ctor_mFF1A5B59BF24C016B0659AF5470378C3FBA7FF68 (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 * __this, VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleColor__ctor_m545F71C6A71B1F46880AFCCC15A3E037D4909360 (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleColor::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleColor__ctor_m8F20F2DE481AAD57BD6C82C1C9B95D2C3FC14133 (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 * __this, int32_t ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.ScaleMode>::.ctor(!0)
inline void StyleEnum_1__ctor_m749463DFCB15110ABF03F5164FA17FB9510145A5 (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F (float ___v0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210 (float ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.Cursor::set_texture(UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cursor_set_texture_m1F4B0EB8F4622F1E59EABF6704D138FDF1C62EC2_inline (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.Cursor::set_hotspot(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cursor_set_hotspot_mF9C8E7AD262116B1146745F8DCB5223F3261DBC0_inline (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleCursor UnityEngine.UIElements.StyleCursor::op_Implicit(UnityEngine.UIElements.Cursor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  StyleCursor_op_Implicit_m742BE99BDF27A3757CF29025555CFDAB83719985 (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleCursor::.ctor(UnityEngine.UIElements.Cursor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleCursor__ctor_mC0E06F249DC393AEC316848AF3B8C767BD309BF5 (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 * __this, Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleCursor::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleCursor__ctor_mA33BDFED9B0C2179F35C0011FEB523B73CE8245D (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 * __this, int32_t ___keyword0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Implicit(!0)
inline StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  StyleEnum_1_op_Implicit_mD16BFB811AC19FD70507B1F9D469FB1AA8D3352A (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD4D8205A6E0A7FE67A13D142B5745D4B0EB7BA3F_gshared)(___v0, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>::.ctor(!0)
inline void StyleEnum_1__ctor_m776400B1BB2076032B745C37F2A2D375D06C2527 (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>::.ctor(UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m0FFAB2FAD1455C7E025389B90EC9D2AC9CCE8925 (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 * __this, int32_t ___keyword0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_mEE43B867A1FDA44D9CC4546D69ED9DF97449BADA_gshared)(__this, ___keyword0, method);
}
// System.Void UnityEngine.UIElements.StyleFloat::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleFloat__ctor_mBE561D637D813DD5085CFD96FA5708C99D908758 (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF * __this, int32_t ___keyword0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Wrap>::op_Implicit(!0)
inline StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  StyleEnum_1_op_Implicit_m236BF072C9508E623828534E4F3B74D59A2F3985 (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD4D8205A6E0A7FE67A13D142B5745D4B0EB7BA3F_gshared)(___v0, method);
}
// System.Void UnityEngine.UIElements.StyleLength::.ctor(UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543 (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF * __this, int32_t ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>::.ctor(!0)
inline void StyleEnum_1__ctor_m52AB6AE26DC6961EE74851E0213807FCBF9CEC7D (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>::.ctor(!0)
inline void StyleEnum_1__ctor_m00F5EAAB115797A1D9E1129037856CF93639D051 (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>::.ctor(!0)
inline void StyleEnum_1__ctor_m85D70055C29DB0BEB808ACCD6505E9FF16E8F6C9 (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB * __this, int32_t ___v0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB *, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m1BF2B63CDF01DE80E0A8298584157F2226440EBC_gshared)(__this, ___v0, method);
}
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<UnityEngine.TextAnchor>::op_Implicit(!0)
inline StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  StyleEnum_1_op_Implicit_m17526F377AF8E68A6FC02592D57F592886909441 (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD4D8205A6E0A7FE67A13D142B5745D4B0EB7BA3F_gshared)(___v0, method);
}
// UnityEngine.UIElements.StyleFont UnityEngine.UIElements.StyleFont::op_Implicit(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  StyleFont_op_Implicit_mA2357BCD41B9EB3176FB170BB50B211497B5342F (Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___v0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleInt::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198 (int32_t ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_tooltip_mD33F88827D60AF6299E2894863FA75BDD788B8CC (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<!0> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.WhiteSpace>::op_Implicit(!0)
inline StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  StyleEnum_1_op_Implicit_m1762AE1D83664775F024C0A32BDE81004E9F60AE (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD4D8205A6E0A7FE67A13D142B5745D4B0EB7BA3F_gshared)(___v0, method);
}
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830 (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4 (int32_t ___phase0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_mF0DEB6C4CA699499AF670ECA554013A43892F9D6 (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933 (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0 (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_mA6FE4FFF5B706A7A71859FA6FA7AFE46D8483962 (RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * RebindingOperation_WithExpectedControlType_m0B6DD3EB95536A3570193CF5B9D6D4C7FE9D30DE (RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m94C95AE76FD8FE9A927409EC6AADA06A879A68FC (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  TypeTable_FindNameForType_m2CCF07DEECB922A06DFD357E1146C32207EB84D1 (TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mDC1F123EBDF899AB57EDDCFFC3F67DA84A2CC2AD (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m5C5E28D59A0F856D52E38C0C147176E4B306D6BD (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithInteraction_m26B27DCD44A2A047C509016EC4AECD0006A6B476 (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3 (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  (*) (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithProcessor_m787C2C90A12A6BB6572752AF1BD6D0456A5B37C6 (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  (*) (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  Collection_TryFindLayoutForType_mC84D3FC044E2F243F888F3335424CCCA07072AC9 (Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m1C5D47E8AB1F840D23F79E06D6F27BF6AAFD1D39 (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69 (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithOptionalDevice_mFAB9DBBAD1DAF896D552CB325C7A07B10A2939C5 (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  (*) (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithRequiredDevice_mEF83949FF6ECD6E31A68263DD380C962678144EC (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9 (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  (*) (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  (*) (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748 (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  (*) (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m56B41DD71339D68C781AC2A267644B79100B546E_inline (Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_m259D95EDF314B7CB26648D3136D84D80D9018C88 (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mCE797AE3C39D0A7E9C3EF79BCF5EC84B03995A59 (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::Post(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Post_mECEEF0DD5ADBE1F2049C534F473EFA2FCEFD2200 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE7FD1E4AAAB1B73522158FAA3299AA115EAC02F4 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// UnityEngine.UIElements.Align Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleAlignSelf<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleAlignSelf_TisRuntimeObject_mAF276AA1B4001B095B6AF00DD68B64C57735B37B_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_mCA94F7A093F4FB1AFB82DDD7C88071DDC16C5224_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.alignSelf.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  >::Invoke(4 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align> UnityEngine.UIElements.IStyle::get_alignSelf() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_mCA94F7A093F4FB1AFB82DDD7C88071DDC16C5224((StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 *)(StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_mCA94F7A093F4FB1AFB82DDD7C88071DDC16C5224_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBackgroundColor_TisRuntimeObject_mDE890D3EC90870D19CC7D2440F1BAD7C626757B4_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.backgroundColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(0 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_backgroundColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// UnityEngine.UIElements.Background Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageBackground<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  VisualElementExtensions_GetStyleBackgroundImageBackground_TisRuntimeObject_m74461226C808739208058F325EE25964DDFE61FD_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.backgroundImage.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_2;
		L_2 = InterfaceFuncInvoker0< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(7 /* UnityEngine.UIElements.StyleBackground UnityEngine.UIElements.IStyle::get_backgroundImage() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_2;
		Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  L_3;
		L_3 = StyleBackground_get_value_m2C54BCBC340FE866C63B59849A84B0D8D4763C57((StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(&V_0), /*hidden argument*/NULL);
		return (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD )L_3;
	}
}
// System.String Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImagePath<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VisualElementExtensions_GetStyleBackgroundImagePath_TisRuntimeObject_m54DE4480B293805793B2BD505E03274115F16509_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D3CEBB5DB732F9689529DC0F45E4536F7BA73B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "This method works only in the Editor";
		return (String_t*)_stringLiteralA9D3CEBB5DB732F9689529DC0F45E4536F7BA73B;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageStyleKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleBackgroundImageStyleKeyword_TisRuntimeObject_m5BF1B1EFFA498110FD784467F824C07665BCD626_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.backgroundImage.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_2;
		L_2 = InterfaceFuncInvoker0< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(7 /* UnityEngine.UIElements.StyleBackground UnityEngine.UIElements.IStyle::get_backgroundImage() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_2;
		int32_t L_3;
		L_3 = StyleBackground_get_keyword_m1CBF9F3913AC78A426B6C81F8872D30543BB57F2((StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// UnityEngine.Texture2D Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageTexture2D<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * VisualElementExtensions_GetStyleBackgroundImageTexture2D_TisRuntimeObject_m6D24A46DDBD448A3981B702C8AEC9651644340C8_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.backgroundImage.value.texture;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_2;
		L_2 = InterfaceFuncInvoker0< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(7 /* UnityEngine.UIElements.StyleBackground UnityEngine.UIElements.IStyle::get_backgroundImage() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_2;
		Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  L_3;
		L_3 = StyleBackground_get_value_m2C54BCBC340FE866C63B59849A84B0D8D4763C57((StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD )L_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = Background_get_texture_mA63F83DD089DAD7929403E51739C5851550F02A6((Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD *)(Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD *)(&V_1), /*hidden argument*/NULL);
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)L_4;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageTintColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBackgroundImageTintColor_TisRuntimeObject_m734C962DF92BA153B6E3AB06CE7749050AA03AB8_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.unityBackgroundImageTintColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(8 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_unityBackgroundImageTintColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageTintColorStyleKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleBackgroundImageTintColorStyleKeyword_TisRuntimeObject_m6A05DA8D9E408C4DEA458A3899F929B478588F22_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unityBackgroundImageTintColor.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_2;
		L_2 = InterfaceFuncInvoker0< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(87 /* UnityEngine.UIElements.StyleColor UnityEngine.UIElements.IStyle::get_unityBackgroundImageTintColor() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_2;
		int32_t L_3;
		L_3 = StyleColor_get_keyword_m3411D18829683115CDF33AD087F868EAB1C56740((StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 *)(StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// UnityEngine.UIElements.VectorImage Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundImageVectorImage<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * VisualElementExtensions_GetStyleBackgroundImageVectorImage_TisRuntimeObject_mAD5B397BFD529FF2CE4ED8861E08688206BB152E_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.backgroundImage.value.vectorImage;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_2;
		L_2 = InterfaceFuncInvoker0< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(7 /* UnityEngine.UIElements.StyleBackground UnityEngine.UIElements.IStyle::get_backgroundImage() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_2;
		Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  L_3;
		L_3 = StyleBackground_get_value_m2C54BCBC340FE866C63B59849A84B0D8D4763C57((StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD )L_3;
		VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * L_4;
		L_4 = Background_get_vectorImage_mBDE387DC6522B639F188559BA8BC158AB76FE01F((Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD *)(Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD *)(&V_1), /*hidden argument*/NULL);
		return (VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 *)L_4;
	}
}
// UnityEngine.ScaleMode Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBackgroundScaleMode<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleBackgroundScaleMode_TisRuntimeObject_mD40D9D0DD7B47E75926BEDAC4CE40AB88D47AFC0_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_mBC00BA3CFC4447CFC16E30A4A860404A8A9A167A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unityBackgroundScaleMode.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4  >::Invoke(89 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.ScaleMode> UnityEngine.UIElements.IStyle::get_unityBackgroundScaleMode() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_mBC00BA3CFC4447CFC16E30A4A860404A8A9A167A((StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 *)(StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_mBC00BA3CFC4447CFC16E30A4A860404A8A9A167A_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderBottomColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBorderBottomColor_TisRuntimeObject_m55F2A034769DAAB909DE5E53B168C82213DA112E_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.borderBottomColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(1 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_borderBottomColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderBottomLeftRadius<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderBottomLeftRadius_TisRuntimeObject_m4FBA86F5B1E392E9C023570FE810F9CEF68ED3C0_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.borderBottomLeftRadius.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(10 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_borderBottomLeftRadius() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderBottomRightRadius<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderBottomRightRadius_TisRuntimeObject_m15EBF70AD98B59066ED639BF4CAC59FC1956917F_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.borderBottomRightRadius.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(12 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_borderBottomRightRadius() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderBottomWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderBottomWidth_TisRuntimeObject_m3478D1E72E2B41ADE4303D7F6F8B6FCE8A274257_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.borderBottomWidth.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(14 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_borderBottomWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderLeftColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBorderLeftColor_TisRuntimeObject_m0225C439866CD4B3DD438A9EEFDA155E45544945_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.borderLeftColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(2 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_borderLeftColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderLeftWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderLeftWidth_TisRuntimeObject_m715E4D771B613582916D7C15AD0E0A9E74BBAFC3_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.borderLeftWidth.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(17 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_borderLeftWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderRightColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBorderRightColor_TisRuntimeObject_mC52BB64D946C365445F02BE37EFBA2F8EDE45514_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.borderRightColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(3 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_borderRightColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderRightWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderRightWidth_TisRuntimeObject_m64F20CF47EB7629DE4263DA417B45A218C3720AD_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.borderRightWidth.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(20 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_borderRightWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderTopColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleBorderTopColor_TisRuntimeObject_mD5BC5C2640CB3E69C48B16A9E86B9AFBB310D590_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.borderTopColor;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(4 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_borderTopColor() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderTopLeftRadius<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderTopLeftRadius_TisRuntimeObject_mB47D6FE5530F55212A5094913A2BC7EBF65982BD_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.borderTopLeftRadius.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(23 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_borderTopLeftRadius() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderTopRightRadius<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderTopRightRadius_TisRuntimeObject_mAF54C4AA5AFB88BCE965D3CD16AE8D496518E21A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.borderTopRightRadius.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(25 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_borderTopRightRadius() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBorderTopWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBorderTopWidth_TisRuntimeObject_m080339D76B92C958C3E9370F1719BB3AEB716B0D_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.borderTopWidth.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(27 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_borderTopWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleBottom<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleBottom_TisRuntimeObject_m59C7BC89AC107170F4297609AE07A922E15C988C_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.bottom.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(29 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_bottom() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.Color Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleColor<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VisualElementExtensions_GetStyleColor_TisRuntimeObject_m659001812C3C130DDF5EBF8AA10268191949230A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.resolvedStyle.color;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(5 /* UnityEngine.Color UnityEngine.UIElements.IResolvedStyle::get_color() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
	}
}
// UnityEngine.UIElements.DisplayStyle Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleDisplay<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleDisplay_TisRuntimeObject_m63B0843484051A90BC4709B6A6644BDE26CAFFB8_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.display.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  >::Invoke(33 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2((StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A *)(StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexBasis<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleFlexBasis_TisRuntimeObject_m1B01C67C231521D08E3E6E0FED256085890B6407_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.flexBasis.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(35 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_flexBasis() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexBasisKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexBasisKeyword_TisRuntimeObject_mE1F9D5164BF48C9BF01A3642D7B0C350131BE56C_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexBasis.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(35 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_flexBasis() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		int32_t L_3;
		L_3 = StyleLength_get_keyword_m036AE2335A13FC8C931E2E8E55C518EAA092571B((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// UnityEngine.UIElements.FlexDirection Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexDirection<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexDirection_TisRuntimeObject_mADA8A902C677707AF8DBEB14BF902703B8924944_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m4C2B1F46DE532697AA327872C666FF579D7A9957_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexDirection.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  >::Invoke(37 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection> UnityEngine.UIElements.IStyle::get_flexDirection() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m4C2B1F46DE532697AA327872C666FF579D7A9957((StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *)(StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m4C2B1F46DE532697AA327872C666FF579D7A9957_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexDirectionKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexDirectionKeyword_TisRuntimeObject_mEBDCAD59C58BE53363C25B30EFC9B257C7A99F9E_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_keyword_mD0B9EBF09829E571CD9F28E766F7137650CAB934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexDirection.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  >::Invoke(37 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection> UnityEngine.UIElements.IStyle::get_flexDirection() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_keyword_mD0B9EBF09829E571CD9F28E766F7137650CAB934((StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *)(StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 *)(&V_0), /*hidden argument*/StyleEnum_1_get_keyword_mD0B9EBF09829E571CD9F28E766F7137650CAB934_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexGrow<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleFlexGrow_TisRuntimeObject_m17ABC61A8169B1BF76497F038C33BF935C6C474A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexGrow.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(39 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_flexGrow() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexGrowKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexGrowKeyword_TisRuntimeObject_m5338F94D9EDFD02DACE43CB081123B625BF4C793_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexGrow.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(39 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_flexGrow() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		int32_t L_3;
		L_3 = StyleFloat_get_keyword_m6D4E7DA94B8CCB3218DC302BEA5B5065CA0B7140((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexShrink<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleFlexShrink_TisRuntimeObject_m0070A32AD2BBE6DD4D7E270B90416550EB7B6024_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexShrink.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(41 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_flexShrink() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.UIElements.StyleKeyword Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexShrinkKeyword<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexShrinkKeyword_TisRuntimeObject_m7FABC50B72D36715A3E0EE1DD62B92A156B58D81_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexShrink.keyword;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(41 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_flexShrink() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		int32_t L_3;
		L_3 = StyleFloat_get_keyword_m6D4E7DA94B8CCB3218DC302BEA5B5065CA0B7140((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// UnityEngine.UIElements.Wrap Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFlexWrap<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleFlexWrap_TisRuntimeObject_m2C558BA4C8925059FA6832F3607DFB592F0FFD3B_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m8C7ADDFCEE66901DDFE0F7C9321F337838A6FC1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.flexWrap.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  >::Invoke(43 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Wrap> UnityEngine.UIElements.IStyle::get_flexWrap() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m8C7ADDFCEE66901DDFE0F7C9321F337838A6FC1D((StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C *)(StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m8C7ADDFCEE66901DDFE0F7C9321F337838A6FC1D_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleFontSize<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleFontSize_TisRuntimeObject_m243FB986D60388BB47F73268DDD25CD7FB2CEC73_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.fontSize.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(45 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_fontSize() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleHeight_TisRuntimeObject_mBA8335B31FEAA9F8415A3F18513A58B22E431118_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.height.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(47 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_height() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.UIElements.Justify Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleJustifyContent<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleJustifyContent_TisRuntimeObject_mB3C102A8D364DCF16075ED446611716788A38E8A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m12920C3C0EF24B5EC6448AE97F495BB535E3E449_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.justifyContent.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491  >::Invoke(49 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify> UnityEngine.UIElements.IStyle::get_justifyContent() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m12920C3C0EF24B5EC6448AE97F495BB535E3E449((StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 *)(StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m12920C3C0EF24B5EC6448AE97F495BB535E3E449_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleLeft<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleLeft_TisRuntimeObject_mB84F97BBDF83B3208AAD984FC7E671B84C7654ED_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.left.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(51 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_left() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMarginBottom<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMarginBottom_TisRuntimeObject_m7421D93CF1870F3F00B3AB53DCA0FFC45720E87C_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.marginBottom.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(53 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_marginBottom() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMarginLeft<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMarginLeft_TisRuntimeObject_m294785EFE31F7D14B2021F39C1076FE9C4D6D2C4_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.marginLeft.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(55 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_marginLeft() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMarginRight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMarginRight_TisRuntimeObject_m1DD249FC69CB2465B9A8C10E3C80654B6DB06AE2_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.marginRight.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(57 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_marginRight() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMarginTop<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMarginTop_TisRuntimeObject_m306FB9E850538F4DEC36AD8384022CCBA4A156A8_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.marginTop.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(59 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_marginTop() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMaxHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMaxHeight_TisRuntimeObject_mFC2DAFFD243E48229BF617D08EDA546E29AF8069_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.maxHeight.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(61 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_maxHeight() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMaxWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMaxWidth_TisRuntimeObject_m5AB68D054D776C36F1CF565424D7020DABA39965_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.maxWidth.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(63 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_maxWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMinHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMinHeight_TisRuntimeObject_mDDFE8281B83CD6851811BBA73BC8FD4511C0FDBA_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.minHeight.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(65 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_minHeight() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleMinWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleMinWidth_TisRuntimeObject_mB726CA141A85863F58546C14332632B22DACD0FB_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.minWidth.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(67 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_minWidth() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleOpacity<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleOpacity_TisRuntimeObject_mFCAB7FC1690C6B7772E09E3A28B5BAFD8757600A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.opacity.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(69 /* UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.IStyle::get_opacity() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_2;
		float L_3;
		L_3 = StyleFloat_get_value_mFB7B37F3F5AE2F7273886CCA2971F1507AF8966C((StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF *)(&V_0), /*hidden argument*/NULL);
		return (float)L_3;
	}
}
// UnityEngine.UIElements.Overflow Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleOverflow<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleOverflow_TisRuntimeObject_m19FC0AEC9852587C27B01947CFA88AFEBE2527B1_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m8560A04E5D21505172A1EC316780155C97B884F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.overflow.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  >::Invoke(71 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow> UnityEngine.UIElements.IStyle::get_overflow() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m8560A04E5D21505172A1EC316780155C97B884F4((StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 *)(StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m8560A04E5D21505172A1EC316780155C97B884F4_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStylePaddingBottom<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStylePaddingBottom_TisRuntimeObject_m74453294532DEE6D85EA1B2089F9CCDF20B89AF6_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.paddingBottom.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(73 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_paddingBottom() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStylePaddingLeft<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStylePaddingLeft_TisRuntimeObject_mEF2DB028F1B880A1E2E90CABA17406260CC62DC1_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.paddingLeft.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(75 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_paddingLeft() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStylePaddingRight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStylePaddingRight_TisRuntimeObject_m5819D24E4E8AF6FC806C6684862952D5FBD208F3_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.paddingRight.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(77 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_paddingRight() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStylePaddingTop<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStylePaddingTop_TisRuntimeObject_m4D32E48DF4C8BD9642CD9C42E38C8FA769B0EDCA_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.paddingTop.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(79 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_paddingTop() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.UIElements.Position Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStylePosition<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStylePosition_TisRuntimeObject_m507988515E749321A9144E2864F63AEE2A89B863_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_mF6393DABD3A0776D1C829CF99C51B5E402E86539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.position.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB  >::Invoke(81 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position> UnityEngine.UIElements.IStyle::get_position() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_mF6393DABD3A0776D1C829CF99C51B5E402E86539((StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB *)(StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_mF6393DABD3A0776D1C829CF99C51B5E402E86539_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleRight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleRight_TisRuntimeObject_m324CA5AE0C739C01C8B62ED8A908F61C9F781836_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.right.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(83 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_right() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.TextAnchor Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleTextAlign<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleTextAlign_TisRuntimeObject_mE0DD0AED9D4260DD49D9AC3A74642C806A6C54E1_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m68011EBC7C2F7D2461F67DA934312E68D544A525_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unityTextAlign.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  >::Invoke(101 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.TextAnchor> UnityEngine.UIElements.IStyle::get_unityTextAlign() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m68011EBC7C2F7D2461F67DA934312E68D544A525((StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 *)(StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m68011EBC7C2F7D2461F67DA934312E68D544A525_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleTop<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleTop_TisRuntimeObject_m981B7DD510E1761E302B3CC6AAE5A46F8B27EAB9_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.top.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(85 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_top() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// UnityEngine.Font Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleUnityFont<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * VisualElementExtensions_GetStyleUnityFont_TisRuntimeObject_m64464226D65AFFE4205D04BB610BAE1E4DFC7A93_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unityFont.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  L_2;
		L_2 = InterfaceFuncInvoker0< StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  >::Invoke(91 /* UnityEngine.UIElements.StyleFont UnityEngine.UIElements.IStyle::get_unityFont() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D )L_2;
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_3;
		L_3 = StyleFont_get_value_m973CD8034E749972E9E4056C78669B21B3110EB2((StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D *)(StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D *)(&V_0), /*hidden argument*/NULL);
		return (Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 *)L_3;
	}
}
// System.Int32 Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleUnitySliceBottom<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleUnitySliceBottom_TisRuntimeObject_m9DD7DF41AC636707916FD809E7249E0A69B968F6_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unitySliceBottom.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_2;
		L_2 = InterfaceFuncInvoker0< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(93 /* UnityEngine.UIElements.StyleInt UnityEngine.UIElements.IStyle::get_unitySliceBottom() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_2;
		int32_t L_3;
		L_3 = StyleInt_get_value_mC8AD42EE7DA84AAEDCA9F08FA07AC4681719E149((StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// System.Int32 Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleUnitySliceLeft<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleUnitySliceLeft_TisRuntimeObject_m07E3A093044F9C0CABF76F591E9326CCC7192E25_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unitySliceLeft.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_2;
		L_2 = InterfaceFuncInvoker0< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(95 /* UnityEngine.UIElements.StyleInt UnityEngine.UIElements.IStyle::get_unitySliceLeft() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_2;
		int32_t L_3;
		L_3 = StyleInt_get_value_mC8AD42EE7DA84AAEDCA9F08FA07AC4681719E149((StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// System.Int32 Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleUnitySliceRight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleUnitySliceRight_TisRuntimeObject_m365B6B3543099C56EAC545E0AAEEC0C821EE3FDC_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unitySliceRight.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_2;
		L_2 = InterfaceFuncInvoker0< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(97 /* UnityEngine.UIElements.StyleInt UnityEngine.UIElements.IStyle::get_unitySliceRight() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_2;
		int32_t L_3;
		L_3 = StyleInt_get_value_mC8AD42EE7DA84AAEDCA9F08FA07AC4681719E149((StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// System.Int32 Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleUnitySliceTop<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetStyleUnitySliceTop_TisRuntimeObject_mBC74990B649E5E1ABAB8BC65824B801CE1014E96_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.unitySliceTop.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_2;
		L_2 = InterfaceFuncInvoker0< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(99 /* UnityEngine.UIElements.StyleInt UnityEngine.UIElements.IStyle::get_unitySliceTop() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_2;
		int32_t L_3;
		L_3 = StyleInt_get_value_mC8AD42EE7DA84AAEDCA9F08FA07AC4681719E149((StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_3;
	}
}
// System.Single Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetStyleWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisualElementExtensions_GetStyleWidth_TisRuntimeObject_m849B7866ACA842E3BAC4F67850598A61C90B1E47_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// target.style.width.value.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2;
		L_2 = InterfaceFuncInvoker0< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(105 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_width() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2;
		Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696  L_3;
		L_3 = StyleLength_get_value_m34C5A4C1A737578A260D8DDA1556FF12B01CEF9C((StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF *)(&V_0), /*hidden argument*/NULL);
		V_1 = (Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 )L_3;
		float L_4;
		L_4 = Length_get_value_mA4FA93BC4DCDECC2F7924CC670F1F5D8254FEA58((Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(Length_tC812F6D7266A044F3AB7DBC98EC0A52678643696 *)(&V_1), /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.String Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetTooltip<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VisualElementExtensions_GetTooltip_TisRuntimeObject_mC4FDFCA266B497377F93FDC81F54B34C02E18899_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.tooltip;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		String_t* L_1;
		L_1 = VisualElement_get_tooltip_m0D024719B06920087C8759982FA7E1F1FB050F81((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		return (String_t*)L_1;
	}
}
// UnityEngine.UIElements.WhiteSpace Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::GetWhiteSpace<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElementExtensions_GetWhiteSpace_TisRuntimeObject_mA1D72D939C522C3647C34B857756B6EAC57F2C4A_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_m7C5073E54B6CE5B7B342D0516B6802C156D29F97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.whiteSpace.value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  L_2;
		L_2 = InterfaceFuncInvoker0< StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  >::Invoke(103 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.WhiteSpace> UnityEngine.UIElements.IStyle::get_whiteSpace() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 )L_2;
		int32_t L_3;
		L_3 = StyleEnum_1_get_value_m7C5073E54B6CE5B7B342D0516B6802C156D29F97((StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 *)(StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_m7C5073E54B6CE5B7B342D0516B6802C156D29F97_RuntimeMethod_var);
		return (int32_t)L_3;
	}
}
// System.Boolean Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::HasParent<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementExtensions_HasParent_TisRuntimeObject_m78F76759809B17FD443D5F59E611F0B39DFD516F_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.parent != null;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_1;
		L_1 = VisualElement_get_parent_m82DFC195B5302C8B4EDB2F220748A86EA76F52C0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::Hide<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_Hide_TisRuntimeObject_m496ED27FCCBF927AFF874CA0A4CD601A2E4072AD_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleDisplay(DisplayStyle.None);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// System.Boolean Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::IsEnabled<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementExtensions_IsEnabled_TisRuntimeObject_m1C1544D4DC0C1C47763C8E32EFB09225CBAB4BC0_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.enabledSelf && target.enabledInHierarchy;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		bool L_1;
		L_1 = VisualElement_get_enabledSelf_m0AD7D3CCAF8946007C89521CB710F5EBDBB2CF68_inline((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2);
		bool L_3;
		L_3 = VisualElement_get_enabledInHierarchy_mA94B8F82641FD0CEBA18B9BA27FCA33F14F8FD97((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2, /*hidden argument*/NULL);
		return (bool)L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::IsFocused<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementExtensions_IsFocused_TisRuntimeObject_m4DE3CDD4CE42868BF2F198AB9A072BF9E52A9B0B_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.focusable && target.focusController.focusedElement == target;
		RuntimeObject * L_0 = ___target0;
		NullCheck((Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_0);
		bool L_1;
		L_1 = Focusable_get_focusable_mA3BF33F025B1AE6F0E8E220E58DE6BDC1FDAB310_inline((Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject * L_2 = ___target0;
		NullCheck((Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_2);
		FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * L_3;
		L_3 = VirtFuncInvoker0< FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B * >::Invoke(12 /* UnityEngine.UIElements.FocusController UnityEngine.UIElements.Focusable::get_focusController() */, (Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_2);
		NullCheck((FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B *)L_3);
		Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * L_4;
		L_4 = FocusController_get_focusedElement_m4CA25427D3E72BB26A76098C58409F561BA7A9EB((FocusController_tC337430532E3E8FF9AD076CA4A5E3F49E437839B *)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		return (bool)((((RuntimeObject*)(Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 *)L_4) == ((RuntimeObject*)(RuntimeObject *)L_5))? 1 : 0);
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::IsVisible<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElementExtensions_IsVisible_TisRuntimeObject_m24F47070F7F3561FDAB8AC1FCCBD8A5639A2E49C_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.HasParent() && target.style.display.value == DisplayStyle.Flex;
		RuntimeObject * L_0 = ___target0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2);
		RuntimeObject* L_3;
		L_3 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  L_4;
		L_4 = InterfaceFuncInvoker0< StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  >::Invoke(33 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_0 = (StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A )L_4;
		int32_t L_5;
		L_5 = StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2((StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A *)(StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A *)(&V_0), /*hidden argument*/StyleEnum_1_get_value_mE2F00D1086668D1B850FE1AF3D6B72A149B817D2_RuntimeMethod_var);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::RemoveAllChildren<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_RemoveAllChildren_TisRuntimeObject_m7461CEDCD74693D51F4303B41AE710D1FB0B06A6_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (VisualElement child in new List<VisualElement>(target.Children()))
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_Children_m9A93E2A897CEBB1F0654DDF32DAC0EA79E8D0E08((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_2 = (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)il2cpp_codegen_object_new(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_il2cpp_TypeInfo_var);
		List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896(L_2, (RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896_RuntimeMethod_var);
		NullCheck((List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_2);
		Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  L_3;
		L_3 = List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639((List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_2, /*hidden argument*/List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639_RuntimeMethod_var);
		V_0 = (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D )L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0018:
		{
			// foreach (VisualElement child in new List<VisualElement>(target.Children()))
			VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_4;
			L_4 = Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_inline((Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_RuntimeMethod_var);
			// child.RemoveFromHierarchy();
			NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
			VisualElement_RemoveFromHierarchy_m3F9F60514E915E7978E88396FAD883BB7872CBB2((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (VisualElement child in new List<VisualElement>(target.Children()))
			bool L_5;
			L_5 = Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A((Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0018;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_6(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__55 = il2cpp_codegen_get_interface_invoke_data(0, (&L_6), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__55.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__55.method);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// return target;
		RuntimeObject * L_7 = ___target0;
		return (RuntimeObject *)L_7;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::RemoveClass<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_RemoveClass_TisRuntimeObject_mEA104C9AE3D9EE7BB51325CF65E9A6B6F520A9C3_gshared (RuntimeObject * ___target0, String_t* ___className1, const RuntimeMethod* method)
{
	{
		// if (target.ClassListContains(className))
		RuntimeObject * L_0 = ___target0;
		String_t* L_1 = ___className1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		bool L_2;
		L_2 = VisualElement_ClassListContains_m6AA8278A65764A869BC465D4911C6584E9DF5103((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// target.RemoveFromClassList(className);
		RuntimeObject * L_3 = ___target0;
		String_t* L_4 = ___className1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3);
		VisualElement_RemoveFromClassList_m883D0B10DF47A558062DDA56102492A86BC4FC7C((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3, (String_t*)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// return target;
		RuntimeObject * L_5 = ___target0;
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::RemoveStyle<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_RemoveStyle_TisRuntimeObject_m067AB5A1DD3F89D837D3D738BAE72CDCBA7FD059_gshared (RuntimeObject * ___target0, String_t* ___styleSheetName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * V_0 = NULL;
	int32_t V_1 = 0;
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// StyleSheet styleSheet = null;
		V_0 = (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *)NULL;
		// for (var i = 0; i < target.styleSheets.count; i++)
		V_1 = (int32_t)0;
		goto IL_0042;
	}

IL_0006:
	{
		// if (!target.styleSheets[i].name.Equals(styleSheetName)) continue;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_1;
		L_1 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		V_2 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_1;
		int32_t L_2 = V_1;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_3;
		L_3 = VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_2), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___styleSheetName1;
		NullCheck((String_t*)L_4);
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D((String_t*)L_4, (String_t*)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// styleSheet = target.styleSheets[i];
		RuntimeObject * L_7 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_7);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_8;
		L_8 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_7, /*hidden argument*/NULL);
		V_2 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_8;
		int32_t L_9 = V_1;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_10;
		L_10 = VisualElementStyleSheetSet_get_Item_m459480C9BEED97F21C32F7321A0F23A589468EEB((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_2), (int32_t)L_9, /*hidden argument*/NULL);
		V_0 = (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *)L_10;
		// break;
		goto IL_0058;
	}

IL_003e:
	{
		// for (var i = 0; i < target.styleSheets.count; i++)
		int32_t L_11 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0042:
	{
		// for (var i = 0; i < target.styleSheets.count; i++)
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_13);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_14;
		L_14 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_13, /*hidden argument*/NULL);
		V_2 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_14;
		int32_t L_15;
		L_15 = VisualElementStyleSheetSet_get_count_m328C84DDBDB8D66506AB0396009CA1E9AFDAEB59((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		// if (styleSheet != null)
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		// target.styleSheets.Remove(styleSheet);
		RuntimeObject * L_18 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_18);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_19;
		L_19 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_18, /*hidden argument*/NULL);
		V_2 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_19;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_20 = V_0;
		bool L_21;
		L_21 = VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_2), (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *)L_20, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// return target;
		RuntimeObject * L_22 = ___target0;
		return (RuntimeObject *)L_22;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::RemoveStyle<System.Object>(T,UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_RemoveStyle_TisRuntimeObject_mB08F527C9E593551D0642A3EFE9A372D236DC82F_gshared (RuntimeObject * ___target0, StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * ___styleSheet1, const RuntimeMethod* method)
{
	VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (target.styleSheets.Contains(styleSheet))
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_1;
		L_1 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		V_0 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_1;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_2 = ___styleSheet1;
		bool L_3;
		L_3 = VisualElementStyleSheetSet_Contains_m80CCE5B2AFB36ABD1FB9E3D312C4D5F4877426E2((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_0), (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// target.styleSheets.Remove(styleSheet);
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB  L_5;
		L_5 = VisualElement_get_styleSheets_m11E9A2C34DC70C14C5F2867B7EDC063931104EF0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		V_0 = (VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB )L_5;
		StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F * L_6 = ___styleSheet1;
		bool L_7;
		L_7 = VisualElementStyleSheetSet_Remove_m5F1D11252F5E25CFA4E79D80368862E9DF82F568((VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(VisualElementStyleSheetSet_t0B9A63A6BF47D41F4EC7EF071129DB3A1471FBBB *)(&V_0), (StyleSheet_tB0EAD646842945D83386B5A06090AAFE6A60520F *)L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// return target;
		RuntimeObject * L_8 = ___target0;
		return (RuntimeObject *)L_8;
	}
}
// O Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ReplaceWith<System.Object,System.Object>(T,O)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ReplaceWith_TisRuntimeObject_TisRuntimeObject_mB3CD2BB0DD195C8477C5EF19A0E1C6B8851F204E_gshared (RuntimeObject * ___target0, RuntimeObject * ___other1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (target.childCount > 0) //check if the target has children
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		int32_t L_1;
		L_1 = VisualElement_get_childCount_m216B9D794BCAD6A3B25E83F66CD3328B55203B9C((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// var children = new List<VisualElement>(target.Children());
		RuntimeObject * L_2 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2);
		RuntimeObject* L_3;
		L_3 = VisualElement_Children_m9A93E2A897CEBB1F0654DDF32DAC0EA79E8D0E08((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_2, /*hidden argument*/NULL);
		List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 * L_4 = (List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)il2cpp_codegen_object_new(List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72_il2cpp_TypeInfo_var);
		List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896(L_4, (RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m50E398A04DE5E29A516086C05B20B8BD128E8896_RuntimeMethod_var);
		// foreach (VisualElement child in children)
		NullCheck((List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_4);
		Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D  L_5;
		L_5 = List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639((List_1_t7D2F7D0925345DA03B22D4DCAE09D7A6D49FCE72 *)L_4, /*hidden argument*/List_1_GetEnumerator_mDB815CD2B4D9429A5E49CF8D6FE96CCE1CC1C639_RuntimeMethod_var);
		V_1 = (Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D )L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0026:
		{
			// foreach (VisualElement child in children)
			VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_6;
			L_6 = Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_inline((Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3BEFDC34F0518A207D863FCE45885DCD1F3D30F5_RuntimeMethod_var);
			V_2 = (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_6;
			// other.AddChild(child);
			RuntimeObject * L_7 = ___other1;
			VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_8 = V_2;
			RuntimeObject * L_9;
			L_9 = ((  RuntimeObject * (*) (RuntimeObject *, VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_7, (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		}

IL_0036:
		{
			// foreach (VisualElement child in children)
			bool L_10;
			L_10 = Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A((Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m268A764FDE232A1B51C307846FBF899D8EB2E89A_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0026;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_11(Enumerator_t0D9EEF2BAFD14DCABA5663BD9A6BA3429EA7741D_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__73 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__73.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_1))-1, /*hidden argument*/il2cpp_virtual_invoke_data__73.method);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// if (!target.HasParent()) return other;
		RuntimeObject * L_12 = ___target0;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		// if (!target.HasParent()) return other;
		RuntimeObject * L_14 = ___other1;
		return (RuntimeObject *)L_14;
	}

IL_0059:
	{
		// VisualElement parent = target.parent;                      //get the target parent
		RuntimeObject * L_15 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_15);
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_16;
		L_16 = VisualElement_get_parent_m82DFC195B5302C8B4EDB2F220748A86EA76F52C0((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_15, /*hidden argument*/NULL);
		// int targetIndexInParentHierarchy = parent.IndexOf(target); //get the 'child index' of the target inside the parent's hierarchy
		VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * L_17 = (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_16;
		RuntimeObject * L_18 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_17);
		int32_t L_19;
		L_19 = VisualElement_IndexOf_m3DC4BEDB32A89D007E391669EF1AADE4927F92AC((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_17, (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_18, /*hidden argument*/NULL);
		V_0 = (int32_t)L_19;
		// target.RemoveFromHierarchy();                              //remove the target from its parent hierarchy
		RuntimeObject * L_20 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_20);
		VisualElement_RemoveFromHierarchy_m3F9F60514E915E7978E88396FAD883BB7872CBB2((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_20, /*hidden argument*/NULL);
		// parent.Insert(targetIndexInParentHierarchy, other);        //insert the element back to the parent at the initial target's index
		int32_t L_21 = V_0;
		RuntimeObject * L_22 = ___other1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_17);
		VisualElement_Insert_mBA363A58458420B451402353C01566C2744828AB((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_17, (int32_t)L_21, (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_22, /*hidden argument*/NULL);
		// return other;                                              //return a reference to the element
		RuntimeObject * L_23 = ___other1;
		return (RuntimeObject *)L_23;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetLayout<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetLayout_TisRuntimeObject_m5C9F8C35A7B8262297F76FF2FF86E4A48B9ED992_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target
		//     .SetStyleDisplay(DisplayStyle.Flex)
		//     .ResetStyleMinSize()
		//     .ResetStyleSize()
		//     .ResetStyleMaxSize()
		//     .ClearMargins()
		//     .ClearPaddings()
		//     .ClearDistances();
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (RuntimeObject *)L_7;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleHeight_TisRuntimeObject_m42C6033E81A85170B36727F57B99833810433F17_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleHeight(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMaxHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMaxHeight_TisRuntimeObject_mA30C2606794E84B63ABAC0044D78AE4F7EB1337E_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxHeight(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMaxSize<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMaxSize_TisRuntimeObject_m7EA3C2B5087BCF89D4284D61AF58716FC3101444_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxSize(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMaxWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMaxWidth_TisRuntimeObject_m6B157BD0C624222749E28D4311B48A63F001022F_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxWidth(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMinHeight<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMinHeight_TisRuntimeObject_m1218CE6E70B423570EF94FC6608275A9143F34BB_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinHeight(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMinSize<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMinSize_TisRuntimeObject_m020D616E96FA6AAFDAC5913D8370B0C17276655E_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinSize(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleMinWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleMinWidth_TisRuntimeObject_m09DF40F44986D0DD3BFE7B88BFE982CBC6735B18_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinWidth(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleSize<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleSize_TisRuntimeObject_m320918845DE7B3DF143CAE73E0BBE902371652FF_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleSize(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResetStyleWidth<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResetStyleWidth_TisRuntimeObject_m4EC6589569CDA0EC8393226C047279170E92B7B0_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleWidth(StyleKeyword.Auto);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToHeight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToHeight_TisRuntimeObject_mEBA8ED3B24CF29E2224849D6BA5EEEB743DDBBD2_gshared (RuntimeObject * ___target0, float ___referenceHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float width = target.resolvedStyle.width;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(10 /* System.Single UnityEngine.UIElements.IResolvedStyle::get_width() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (float)L_2;
		// float height = target.resolvedStyle.height;
		RuntimeObject * L_3 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3);
		RuntimeObject* L_4;
		L_4 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(7 /* System.Single UnityEngine.UIElements.IResolvedStyle::get_height() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		V_1 = (float)L_5;
		// float ratio = referenceHeight / height;
		float L_6 = ___referenceHeight1;
		float L_7 = V_1;
		V_2 = (float)((float)((float)L_6/(float)L_7));
		// height = referenceHeight;
		float L_8 = ___referenceHeight1;
		V_1 = (float)L_8;
		// width *= ratio;
		float L_9 = V_0;
		float L_10 = V_2;
		V_0 = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// return target.SetStyleSize(width, height);
		RuntimeObject * L_11 = ___target0;
		float L_12 = V_0;
		float L_13 = V_1;
		RuntimeObject * L_14;
		L_14 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_11, (float)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_14;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureHeight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureHeight_TisRuntimeObject_mC4E718F5D0B0CFA4D994F5A5F66BAA60EDB93FF4_gshared (RuntimeObject * ___target0, float ___referenceHeight1, const RuntimeMethod* method)
{
	{
		// target.ResizeToTextureHeight(target.GetStyleBackgroundImageTexture2D(), referenceHeight);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1 = ___target0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___referenceHeight1;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_0, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureHeight<System.Object>(T,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureHeight_TisRuntimeObject_mFE5B36CC6D767E475D91ADE9E642260533250E42_gshared (RuntimeObject * ___target0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, float ___referenceHeight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (texture == null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return target;
		RuntimeObject * L_2 = ___target0;
		return (RuntimeObject *)L_2;
	}

IL_000b:
	{
		// float width = texture.width;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		V_0 = (float)((float)((float)L_4));
		// float height = texture.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		V_1 = (float)((float)((float)L_6));
		// float ratio = referenceHeight / height;
		float L_7 = ___referenceHeight2;
		float L_8 = V_1;
		V_2 = (float)((float)((float)L_7/(float)L_8));
		// height = referenceHeight;
		float L_9 = ___referenceHeight2;
		V_1 = (float)L_9;
		// width *= ratio;
		float L_10 = V_0;
		float L_11 = V_2;
		V_0 = (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// return target.SetStyleSize(width, height);
		RuntimeObject * L_12 = ___target0;
		float L_13 = V_0;
		float L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_12, (float)L_13, (float)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_15;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureSize<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureSize_TisRuntimeObject_m099522708603FE1ED3CAFA50733A443E5BC5625A_gshared (RuntimeObject * ___target0, float ___ratio1, const RuntimeMethod* method)
{
	{
		// target.ResizeToTextureSize(target.GetStyleBackgroundImageTexture2D(), ratio);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1 = ___target0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___ratio1;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_0, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureSize<System.Object>(T,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureSize_TisRuntimeObject_m139D6FC22D87E05EF89F178D558C0C8104D4FF35_gshared (RuntimeObject * ___target0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, float ___ratio2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	float G_B3_0 = 0.0f;
	bool G_B3_1 = false;
	float G_B6_0 = 0.0f;
	{
		// bool hasTexture = texture != null;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		// float width = hasTexture ? texture.width : 0f;
		bool L_2 = (bool)L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0011:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		G_B3_0 = ((float)((float)L_4));
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		V_0 = (float)G_B3_0;
		// float height = hasTexture ? texture.height : 0f;
		if (G_B3_1)
		{
			goto IL_0022;
		}
	}
	{
		G_B6_0 = (0.0f);
		goto IL_0029;
	}

IL_0022:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		G_B6_0 = ((float)((float)L_6));
	}

IL_0029:
	{
		V_1 = (float)G_B6_0;
		// ratio = Mathf.Max(0, ratio);
		float L_7 = ___ratio2;
		float L_8;
		L_8 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79((float)(0.0f), (float)L_7, /*hidden argument*/NULL);
		___ratio2 = (float)L_8;
		// width *= ratio;
		float L_9 = V_0;
		float L_10 = ___ratio2;
		V_0 = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// height *= ratio;
		float L_11 = V_1;
		float L_12 = ___ratio2;
		V_1 = (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12));
		// return target.SetStyleSize(width, height);
		RuntimeObject * L_13 = ___target0;
		float L_14 = V_0;
		float L_15 = V_1;
		RuntimeObject * L_16;
		L_16 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_13, (float)L_14, (float)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureWidth_TisRuntimeObject_m2D79CB63F7BAE671D332655C7D2376DD738612E9_gshared (RuntimeObject * ___target0, float ___referenceWidth1, const RuntimeMethod* method)
{
	{
		// target.ResizeToTextureWidth(target.GetStyleBackgroundImageTexture2D(), referenceWidth);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1 = ___target0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___referenceWidth1;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_0, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToTextureWidth<System.Object>(T,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToTextureWidth_TisRuntimeObject_m2999DC5C6FCC3AC5AD6316E9D44B63A71FE616E8_gshared (RuntimeObject * ___target0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, float ___referenceWidth2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (texture == null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return target;
		RuntimeObject * L_2 = ___target0;
		return (RuntimeObject *)L_2;
	}

IL_000b:
	{
		// float width = texture.width;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		V_0 = (float)((float)((float)L_4));
		// float height = texture.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		V_1 = (float)((float)((float)L_6));
		// float ratio = referenceWidth / width;
		float L_7 = ___referenceWidth2;
		float L_8 = V_0;
		V_2 = (float)((float)((float)L_7/(float)L_8));
		// width = referenceWidth;
		float L_9 = ___referenceWidth2;
		V_0 = (float)L_9;
		// height *= ratio;
		float L_10 = V_1;
		float L_11 = V_2;
		V_1 = (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// return target.SetStyleSize(width, height);
		RuntimeObject * L_12 = ___target0;
		float L_13 = V_0;
		float L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_12, (float)L_13, (float)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_15;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::ResizeToWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_ResizeToWidth_TisRuntimeObject_m38C4EADDABFFD36E9E2FC984A0450121CB1ABE8E_gshared (RuntimeObject * ___target0, float ___referenceWidth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float width = target.resolvedStyle.width;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(10 /* System.Single UnityEngine.UIElements.IResolvedStyle::get_width() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_0 = (float)L_2;
		// float height = target.resolvedStyle.height;
		RuntimeObject * L_3 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3);
		RuntimeObject* L_4;
		L_4 = VisualElement_get_resolvedStyle_mA04F20686F08336054580BABA585416DE1D2071F((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_3, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(7 /* System.Single UnityEngine.UIElements.IResolvedStyle::get_height() */, IResolvedStyle_tBDEB32185117F0D96C5D8C22C91D94A402C5A523_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		V_1 = (float)L_5;
		// float ratio = referenceWidth / width;
		float L_6 = ___referenceWidth1;
		float L_7 = V_0;
		V_2 = (float)((float)((float)L_6/(float)L_7));
		// width = referenceWidth;
		float L_8 = ___referenceWidth1;
		V_0 = (float)L_8;
		// height *= ratio;
		float L_9 = V_1;
		float L_10 = V_2;
		V_1 = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// return target.SetStyleSize(width, height);
		RuntimeObject * L_11 = ___target0;
		float L_12 = V_0;
		float L_13 = V_1;
		RuntimeObject * L_14;
		L_14 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_11, (float)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_14;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetName<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetName_TisRuntimeObject_mA678D5DEA5DDA852DB1EF8376E6092ECBD7E3479_gshared (RuntimeObject * ___target0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// target.name = value;
		RuntimeObject * L_0 = ___target0;
		String_t* L_1 = ___value1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElement_set_name_m6C1E013C250D02FB6E5F55D9FE4814828E95A129((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		// return target;
		RuntimeObject * L_2 = ___target0;
		return (RuntimeObject *)L_2;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetPickingMode<System.Object>(T,UnityEngine.UIElements.PickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetPickingMode_TisRuntimeObject_m505CB92EE7B931C447CEEC1DB7AE2470EDF51340_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// target.pickingMode = value;
		RuntimeObject * L_0 = ___target0;
		int32_t L_1 = ___value1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElement_set_pickingMode_m9DE9A6A38587478971E15868D8CC9EB234CEBC5D_inline((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		// return target;
		RuntimeObject * L_2 = ___target0;
		return (RuntimeObject *)L_2;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleAlignContent<System.Object>(T,UnityEngine.UIElements.Align)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleAlignContent_TisRuntimeObject_mFB1FB03A520C6D3A607A86D2D9263F863CD9B6B7_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.alignContent = new StyleEnum<Align>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  >::Invoke(1 /* System.Void UnityEngine.UIElements.IStyle::set_alignContent(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleAlignItems<System.Object>(T,UnityEngine.UIElements.Align)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleAlignItems_TisRuntimeObject_m84706841EF8FCC0884F1AD26CA3CE2242C8D4ED0_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.alignItems = new StyleEnum<Align>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  >::Invoke(3 /* System.Void UnityEngine.UIElements.IStyle::set_alignItems(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleAlignSelf<System.Object>(T,UnityEngine.UIElements.Align)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleAlignSelf_TisRuntimeObject_m1F258D4457B0BA9D5185EE0C05E0B7D547F9E011_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.alignSelf = new StyleEnum<Align>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_mFC5A8EB58C60F08612B48A13B42672AAAF56FDE2_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73  >::Invoke(5 /* System.Void UnityEngine.UIElements.IStyle::set_alignSelf(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t9B3B33256E91B4A3F4B146E07BEBFCCEB79ABA73 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundColor_TisRuntimeObject_m4A90C336743FFB98431524FEC4E3B49265183856_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.backgroundColor = color;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(6 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImage<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImage_TisRuntimeObject_m4A63853464092E26AC6DE0F8A5A9127DBF4DF47D_gshared (RuntimeObject * ___target0, String_t* ___texturePath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D3CEBB5DB732F9689529DC0F45E4536F7BA73B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Doozy.Runtime.Common.Debugger.LogWarning("This method works only in the Editor");
		Debugger_LogWarning_m1EC3B3E66FDA1F0E1C6B40B00B402353B79CD065((RuntimeObject *)_stringLiteralA9D3CEBB5DB732F9689529DC0F45E4536F7BA73B, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		// return target;
		RuntimeObject * L_0 = ___target0;
		return (RuntimeObject *)L_0;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImage<System.Object>(T,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImage_TisRuntimeObject_mB225A3EAEE7D7A6A63FFE4F538732FF60AB51675_gshared (RuntimeObject * ___target0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.backgroundImage = new StyleBackground(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___value1;
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleBackground__ctor_m3869A40FD6AD78BD1F741512C6D6B2BCE287FF46((&L_3), (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImage<System.Object>(T,UnityEngine.UIElements.Background)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImage_TisRuntimeObject_mCF04F7D4422FE778FEAD518C48F374A90F6FB96A_gshared (RuntimeObject * ___target0, Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.backgroundImage = new StyleBackground(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD  L_2 = ___value1;
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleBackground__ctor_m6A7536D59978B46E920441CFE0077EF7C6EAB814((&L_3), (Background_t14D781972AD80DA2C6B3070F7A7EE46F063CDEAD )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImage<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImage_TisRuntimeObject_m47192C77E977760B9724457808D87F6DB06DBE05_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.backgroundImage = new StyleBackground(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleBackground__ctor_mCB8102A96A5E7D805767A6A365D8C0AA908117EA((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImage<System.Object>(T,UnityEngine.UIElements.VectorImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImage_TisRuntimeObject_m0CBF253FBF336F0AD870986189F5EC8D2009880F_gshared (RuntimeObject * ___target0, VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.backgroundImage = new StyleBackground(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 * L_2 = ___value1;
		StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleBackground__ctor_mFF1A5B59BF24C016B0659AF5470378C3FBA7FF68((&L_3), (VectorImage_t2C2B26B2A738C1DCD0845B82228343838DAE2022 *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2  >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleBackground_t66F6A2B74711A4EF45FFDCF0DA03852D5972D6A2 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImageTintColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImageTintColor_TisRuntimeObject_mBA27D89E585967DAC7321B270D2440CCDCDF4851_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unityBackgroundImageTintColor = new StyleColor(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleColor__ctor_m545F71C6A71B1F46880AFCCC15A3E037D4909360((&L_3), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(88 /* System.Void UnityEngine.UIElements.IStyle::set_unityBackgroundImageTintColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundImageTintColor<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundImageTintColor_TisRuntimeObject_m66ADAF5F7CA48F09CF1C305194C646FA5B30F237_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unityBackgroundImageTintColor = new StyleColor(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleColor__ctor_m8F20F2DE481AAD57BD6C82C1C9B95D2C3FC14133((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(88 /* System.Void UnityEngine.UIElements.IStyle::set_unityBackgroundImageTintColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBackgroundScaleMode<System.Object>(T,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBackgroundScaleMode_TisRuntimeObject_m9FD4C9382A6A653ACE67877690EBDC5035D139DB_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m749463DFCB15110ABF03F5164FA17FB9510145A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unityBackgroundScaleMode = new StyleEnum<UnityEngine.ScaleMode>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m749463DFCB15110ABF03F5164FA17FB9510145A5((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m749463DFCB15110ABF03F5164FA17FB9510145A5_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4  >::Invoke(90 /* System.Void UnityEngine.UIElements.IStyle::set_unityBackgroundScaleMode(UnityEngine.UIElements.StyleEnum`1<UnityEngine.ScaleMode>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_tD1C31CDACF32CA299CC08BC2DA1103B4385A29B4 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderBottomColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderBottomColor_TisRuntimeObject_m7C10F13A498B758D403F02D2547829745C434497_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderBottomColor = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(9 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderBottomLeftRadius<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderBottomLeftRadius_TisRuntimeObject_m2915857731BE9FC3298FB9B35169AF619C62F7CA_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderBottomLeftRadius = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(11 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderBottomRightRadius<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderBottomRightRadius_TisRuntimeObject_m7BA0856C1F1FABEF54480AEA4D24EB881F316C41_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderBottomRightRadius = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(13 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderBottomWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderBottomWidth_TisRuntimeObject_m04FFEF613742503B1106B584A5B6AC3BE30BF8E8_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderBottomWidth = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(15 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderColor_TisRuntimeObject_mF831C196CF981FE51B31F05E4B6CFD9996CDF2E1_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleBorderColor(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___value1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___value1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_1, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_3, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderColor<System.Object>(T,UnityEngine.Color,UnityEngine.Color,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderColor_TisRuntimeObject_m007AD131C88D4B43A030D9844C938A4360D2A987_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___left1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___top2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___right3, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderLeftColor = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___left1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(16 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// target.style.borderTopColor = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___top2;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_7;
		L_7 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(22 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_7);
		// target.style.borderRightColor = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = ___right3;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_11;
		L_11 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(19 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_11);
		// target.style.borderBottomColor = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___bottom4;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_15;
		L_15 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(9 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderLeftColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderLeftColor_TisRuntimeObject_m122D29C38DCBC677CB66EF365C2467D51534B605_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderLeftColor = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(16 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderLeftWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderLeftWidth_TisRuntimeObject_m6199ED1900F011231CAAD5F7226C7040EA7A97ED_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderLeftWidth = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderRadius<System.Object>(T,Doozy.Runtime.UIElements.EdgeValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderRadius_TisRuntimeObject_m58B82E4BDC9DB467112A174F461FA51BDBE03097_gshared (RuntimeObject * ___target0, EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___edge1, const RuntimeMethod* method)
{
	{
		// target.SetStyleBorderRadius(edge.Left, edge.Top, edge.Right, edge.Bottom);
		RuntimeObject * L_0 = ___target0;
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_1 = ___edge1;
		float L_2 = (float)L_1.get_Left_0();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_3 = ___edge1;
		float L_4 = (float)L_3.get_Top_1();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_5 = ___edge1;
		float L_6 = (float)L_5.get_Right_2();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_7 = ___edge1;
		float L_8 = (float)L_7.get_Bottom_3();
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_2, (float)L_4, (float)L_6, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_9;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderRadius<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderRadius_TisRuntimeObject_m64D98C4F17F04AA374CE833F0A5C821B83412864_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleBorderRadius(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		float L_2 = ___value1;
		float L_3 = ___value1;
		float L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, (float)L_2, (float)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderRadius<System.Object>(T,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderRadius_TisRuntimeObject_m0EB007EDF5AACA9587BFC6F800ECA26006E0CACA_gshared (RuntimeObject * ___target0, float ___topLeft1, float ___topRight2, float ___bottomRight3, float ___bottomLeft4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderTopLeftRadius = topLeft;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___topLeft1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// target.style.borderTopRightRadius = topRight;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		float L_6 = ___topRight2;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_7;
		L_7 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(26 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_7);
		// target.style.borderBottomRightRadius = bottomRight;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		float L_10 = ___bottomRight3;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_11;
		L_11 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(13 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_11);
		// target.style.borderBottomLeftRadius = bottomLeft;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		float L_14 = ___bottomLeft4;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_15;
		L_15 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(11 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderRightColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderRightColor_TisRuntimeObject_mF644A572B1608F6CA20893220B90FB26D8956401_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderRightColor = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(19 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderRightWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderRightWidth_TisRuntimeObject_m0204A0C9402D37F8D325CF21F34B6A75D1ABE451_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderRightWidth = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(21 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderTopColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderTopColor_TisRuntimeObject_m6905572174E49E797744E34627758B2619DDD5DB_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderTopColor = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(22 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopColor(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderTopLeftRadius<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderTopLeftRadius_TisRuntimeObject_mBA43362EDECFD71E5C8E360AC2CDD8FD139F8067_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderTopLeftRadius = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderTopRightRadius<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderTopRightRadius_TisRuntimeObject_m5B5852C8548E6E6F6DB73902854D3B674AE60F5F_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderTopRightRadius = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(26 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderTopWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderTopWidth_TisRuntimeObject_mB86CF14B88EA376EE68565C8555BA0CD68936B80_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderTopWidth = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(28 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderWidth<System.Object>(T,Doozy.Runtime.UIElements.EdgeValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderWidth_TisRuntimeObject_mC3B32F86196B7CD8A409CEE64C042040E9C9DB61_gshared (RuntimeObject * ___target0, EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___edge1, const RuntimeMethod* method)
{
	{
		// target.SetStyleBorderWidth(edge.Left, edge.Top, edge.Right, edge.Bottom);
		RuntimeObject * L_0 = ___target0;
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_1 = ___edge1;
		float L_2 = (float)L_1.get_Left_0();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_3 = ___edge1;
		float L_4 = (float)L_3.get_Top_1();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_5 = ___edge1;
		float L_6 = (float)L_5.get_Right_2();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_7 = ___edge1;
		float L_8 = (float)L_7.get_Bottom_3();
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_2, (float)L_4, (float)L_6, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_9;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderWidth_TisRuntimeObject_m73736BC7B5148C55F2A93C67E9BFDA9D2BD838E3_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleBorderWidth(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		float L_2 = ___value1;
		float L_3 = ___value1;
		float L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, (float)L_2, (float)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBorderWidth<System.Object>(T,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBorderWidth_TisRuntimeObject_m8A243F5BAE12345F84E94DDEC1882A04F9CC114D_gshared (RuntimeObject * ___target0, float ___left1, float ___top2, float ___right3, float ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.borderLeftWidth = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___left1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// target.style.borderTopWidth = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		float L_6 = ___top2;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_7;
		L_7 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(28 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_7);
		// target.style.borderRightWidth = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		float L_10 = ___right3;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_11;
		L_11 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(21 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_11);
		// target.style.borderBottomWidth = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		float L_14 = ___bottom4;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_15;
		L_15 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(15 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleBottom<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleBottom_TisRuntimeObject_mF865DACC19A4AEA168A9EA3316FDC07FEC2F9EA9_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.bottom = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(30 /* System.Void UnityEngine.UIElements.IStyle::set_bottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleColor<System.Object>(T,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleColor_TisRuntimeObject_mA6682CEC938FD12C5EF0835D43201D4C65A74058_gshared (RuntimeObject * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.color = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value1;
		StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  L_3;
		L_3 = StyleColor_op_Implicit_m49CED7B74EEE4EC88D4E4070C294227414CE3486((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361  >::Invoke(31 /* System.Void UnityEngine.UIElements.IStyle::set_color(UnityEngine.UIElements.StyleColor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleColor_t3A18C14B90212D8717B573527DE7CF9B51DDA361 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleCursor<System.Object>(T,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleCursor_TisRuntimeObject_mC40421390368389F0BD7F4E60F6B800A447F42E1_gshared (RuntimeObject * ___target0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.cursor = new Cursor()
		// {
		//     texture = texture,
		//     hotspot = new Vector2(texture.width / 2f, texture.height / 2f)
		// };
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F ));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture1;
		Cursor_set_texture_m1F4B0EB8F4622F1E59EABF6704D138FDF1C62EC2_inline((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(&V_0), (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)L_2, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_3);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture1;
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (float)((float)((float)((float)((float)L_4))/(float)(2.0f))), (float)((float)((float)((float)((float)L_6))/(float)(2.0f))), /*hidden argument*/NULL);
		Cursor_set_hotspot_mF9C8E7AD262116B1146745F8DCB5223F3261DBC0_inline((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7, /*hidden argument*/NULL);
		Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  L_8 = V_0;
		StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  L_9;
		L_9 = StyleCursor_op_Implicit_m742BE99BDF27A3757CF29025555CFDAB83719985((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F )L_8, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  >::Invoke(32 /* System.Void UnityEngine.UIElements.IStyle::set_cursor(UnityEngine.UIElements.StyleCursor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 )L_9);
		// return target;
		RuntimeObject * L_10 = ___target0;
		return (RuntimeObject *)L_10;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleCursor<System.Object>(T,UnityEngine.UIElements.Cursor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleCursor_TisRuntimeObject_m0AC837229139605E0AD1EA1FB8C5BE62F1930321_gshared (RuntimeObject * ___target0, Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  ___cursor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.cursor = new StyleCursor(cursor);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  L_2 = ___cursor1;
		StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleCursor__ctor_mC0E06F249DC393AEC316848AF3B8C767BD309BF5((&L_3), (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F )L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  >::Invoke(32 /* System.Void UnityEngine.UIElements.IStyle::set_cursor(UnityEngine.UIElements.StyleCursor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleCursor<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleCursor_TisRuntimeObject_m22A5EE8B8770444F42932E220E62DC0B028BDDD4_gshared (RuntimeObject * ___target0, int32_t ___keyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.cursor = new StyleCursor(keyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___keyword1;
		StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleCursor__ctor_mA33BDFED9B0C2179F35C0011FEB523B73CE8245D((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  >::Invoke(32 /* System.Void UnityEngine.UIElements.IStyle::set_cursor(UnityEngine.UIElements.StyleCursor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleCursor<System.Object>(T,UnityEngine.Texture2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleCursor_TisRuntimeObject_m15BB19DEA97466C2C846ECE814261C3A3B53C8E8_gshared (RuntimeObject * ___target0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___hotspot2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target.style.cursor = new Cursor()
		// {
		//     texture = texture,
		//     hotspot = hotspot
		// };
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F ));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture1;
		Cursor_set_texture_m1F4B0EB8F4622F1E59EABF6704D138FDF1C62EC2_inline((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(&V_0), (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___hotspot2;
		Cursor_set_hotspot_mF9C8E7AD262116B1146745F8DCB5223F3261DBC0_inline((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3, /*hidden argument*/NULL);
		Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F  L_4 = V_0;
		StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  L_5;
		L_5 = StyleCursor_op_Implicit_m742BE99BDF27A3757CF29025555CFDAB83719985((Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F )L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1  >::Invoke(32 /* System.Void UnityEngine.UIElements.IStyle::set_cursor(UnityEngine.UIElements.StyleCursor) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleCursor_tC8170AE81E8E4294682DC1106BB0E47F328E8AF1 )L_5);
		// return target;
		RuntimeObject * L_6 = ___target0;
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleDisplay<System.Object>(T,UnityEngine.UIElements.DisplayStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleDisplay_TisRuntimeObject_m4FA5DCCA92A204371E870353BDA45BE1B77B6EFF_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mD16BFB811AC19FD70507B1F9D469FB1AA8D3352A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.display = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  L_3;
		L_3 = StyleEnum_1_op_Implicit_mD16BFB811AC19FD70507B1F9D469FB1AA8D3352A((int32_t)L_2, /*hidden argument*/StyleEnum_1_op_Implicit_mD16BFB811AC19FD70507B1F9D469FB1AA8D3352A_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A  >::Invoke(34 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t9A3CF73092AACBB09EB65B2D2A27EB9D53B6330A )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleDistance<System.Object>(T,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleDistance_TisRuntimeObject_mB7F94B22122022042ADC6C00DD42773349B875D1_gshared (RuntimeObject * ___target0, float ___left1, float ___top2, float ___right3, float ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.left = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___left1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(52 /* System.Void UnityEngine.UIElements.IStyle::set_left(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// target.style.top = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		float L_6 = ___top2;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_7;
		L_7 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(86 /* System.Void UnityEngine.UIElements.IStyle::set_top(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_7);
		// target.style.right = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		float L_10 = ___right3;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_11;
		L_11 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(84 /* System.Void UnityEngine.UIElements.IStyle::set_right(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_11);
		// target.style.bottom = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		float L_14 = ___bottom4;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_15;
		L_15 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(30 /* System.Void UnityEngine.UIElements.IStyle::set_bottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexBasis<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexBasis_TisRuntimeObject_m38838F34711836CA776983A956C390AF29D4E885_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexBasis = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(36 /* System.Void UnityEngine.UIElements.IStyle::set_flexBasis(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexBasisStyleLength<System.Object>(T,UnityEngine.UIElements.StyleLength)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexBasisStyleLength_TisRuntimeObject_m75BDC44B900A46CAD6FA99015E12152EDFBB8F49_gshared (RuntimeObject * ___target0, StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexBasis = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_2 = ___value1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(36 /* System.Void UnityEngine.UIElements.IStyle::set_flexBasis(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_2);
		// return target;
		RuntimeObject * L_3 = ___target0;
		return (RuntimeObject *)L_3;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexDirection<System.Object>(T,UnityEngine.UIElements.FlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexDirection_TisRuntimeObject_mCEAE66AA673EB6EAB82305EE381A7A0ECBD0C526_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m776400B1BB2076032B745C37F2A2D375D06C2527_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexDirection = new StyleEnum<FlexDirection>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m776400B1BB2076032B745C37F2A2D375D06C2527((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m776400B1BB2076032B745C37F2A2D375D06C2527_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  >::Invoke(38 /* System.Void UnityEngine.UIElements.IStyle::set_flexDirection(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexDirectionKeyword<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexDirectionKeyword_TisRuntimeObject_m8DD8446332A72CA7C8A99EA9EDCD07249EA3136A_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m0FFAB2FAD1455C7E025389B90EC9D2AC9CCE8925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexDirection = new StyleEnum<FlexDirection>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m0FFAB2FAD1455C7E025389B90EC9D2AC9CCE8925((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m0FFAB2FAD1455C7E025389B90EC9D2AC9CCE8925_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250  >::Invoke(38 /* System.Void UnityEngine.UIElements.IStyle::set_flexDirection(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.FlexDirection>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_tDB8A2ED363AB7B1E0D535DC5B3237A21D2489250 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexGrow<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexGrow_TisRuntimeObject_mFD66C5C0BCBBE69E7548AB80EF57428C591105F8_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexGrow = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(40 /* System.Void UnityEngine.UIElements.IStyle::set_flexGrow(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexGrowKeyword<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexGrowKeyword_TisRuntimeObject_mF440463B5B256A03F537F57E79579051E85CC49E_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexGrow = new StyleFloat(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleFloat__ctor_mBE561D637D813DD5085CFD96FA5708C99D908758((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(40 /* System.Void UnityEngine.UIElements.IStyle::set_flexGrow(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexShrink<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexShrink_TisRuntimeObject_mAD1CA72762B5C187E9179636F686B249B2DF3ECB_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexShrink = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(42 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexShrinkKeyword<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexShrinkKeyword_TisRuntimeObject_m7B472A9C5CB6EC2D182AF11874956AD628380E39_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexShrink = new StyleFloat(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleFloat__ctor_mBE561D637D813DD5085CFD96FA5708C99D908758((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(42 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFlexWrap<System.Object>(T,UnityEngine.UIElements.Wrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFlexWrap_TisRuntimeObject_m165104A3B0DACB3E4850B71A9C82F69CC37D8FDE_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m236BF072C9508E623828534E4F3B74D59A2F3985_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.flexWrap = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  L_3;
		L_3 = StyleEnum_1_op_Implicit_m236BF072C9508E623828534E4F3B74D59A2F3985((int32_t)L_2, /*hidden argument*/StyleEnum_1_op_Implicit_m236BF072C9508E623828534E4F3B74D59A2F3985_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C  >::Invoke(44 /* System.Void UnityEngine.UIElements.IStyle::set_flexWrap(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Wrap>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t0E2F1FB3015382831E6A2F5083BC22734C8E023C )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleFontSize<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleFontSize_TisRuntimeObject_m80FF399718DE0B8224C144F061D6FD81063E75C3_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.fontSize = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)((float)((float)L_2)), /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(46 /* System.Void UnityEngine.UIElements.IStyle::set_fontSize(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleHeight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleHeight_TisRuntimeObject_m1C85087936218E13CF16006A5E76AB7C15476DDD_gshared (RuntimeObject * ___target0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.height = height;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___height1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(48 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleHeight<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleHeight_TisRuntimeObject_mED6189216BD1BC9F2CD49150CE8B8F0D42B9ED0E_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.height = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(48 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleHeight<System.Object>(T,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleHeight_TisRuntimeObject_m1F8671481815070CC15A6CBD6251C6BAF7109076_gshared (RuntimeObject * ___target0, float ___minHeight1, float ___height2, float ___maxHeight3, const RuntimeMethod* method)
{
	{
		// return target.SetStyleMinHeight(minHeight)
		//     .SetStyleHeight(height)
		//     .SetStyleMaxHeight(maxHeight);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___minHeight1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___height2;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		float L_5 = ___maxHeight3;
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, (float)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleJustifyContent<System.Object>(T,UnityEngine.UIElements.Justify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleJustifyContent_TisRuntimeObject_mD44D9EC55D70562D71D6724709CB29981E7A14D5_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m52AB6AE26DC6961EE74851E0213807FCBF9CEC7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.justifyContent = new StyleEnum<Justify>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m52AB6AE26DC6961EE74851E0213807FCBF9CEC7D((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m52AB6AE26DC6961EE74851E0213807FCBF9CEC7D_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491  >::Invoke(50 /* System.Void UnityEngine.UIElements.IStyle::set_justifyContent(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t47A56CFB8FCFC465C3A6456DF26CD08843611491 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleLeft<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleLeft_TisRuntimeObject_mE12D9851D853135C0BB268997A6E0DB5FCE01C55_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.left = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(52 /* System.Void UnityEngine.UIElements.IStyle::set_left(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMarginBottom<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMarginBottom_TisRuntimeObject_m15BDABA09A3271AD060BDB18A33CFF66B0F8EEE6_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.marginBottom = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(54 /* System.Void UnityEngine.UIElements.IStyle::set_marginBottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMarginLeft<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMarginLeft_TisRuntimeObject_m89474B904E8DAD3589700BFCBD7C3E71194CDD2F_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.marginLeft = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(56 /* System.Void UnityEngine.UIElements.IStyle::set_marginLeft(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMarginRight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMarginRight_TisRuntimeObject_mE12005A8C625E1D4C60A9104FF1A63C32A0F2DA3_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.marginRight = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(58 /* System.Void UnityEngine.UIElements.IStyle::set_marginRight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMarginTop<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMarginTop_TisRuntimeObject_m54ACBC32FB0B99C1F0E7EB94584F88DB9D3A3F36_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.marginTop = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(60 /* System.Void UnityEngine.UIElements.IStyle::set_marginTop(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMargins<System.Object>(T,Doozy.Runtime.UIElements.EdgeValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMargins_TisRuntimeObject_m4508BB3175B6E1516AB84F017A384BA199C16DA0_gshared (RuntimeObject * ___target0, EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___edge1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMargins(edge.Left, edge.Top, edge.Right, edge.Bottom);
		RuntimeObject * L_0 = ___target0;
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_1 = ___edge1;
		float L_2 = (float)L_1.get_Left_0();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_3 = ___edge1;
		float L_4 = (float)L_3.get_Top_1();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_5 = ___edge1;
		float L_6 = (float)L_5.get_Right_2();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_7 = ___edge1;
		float L_8 = (float)L_7.get_Bottom_3();
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_2, (float)L_4, (float)L_6, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_9;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMargins<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMargins_TisRuntimeObject_m35B1741AF6BE4C3F2CDBBD2497633E9D5102D501_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMargins(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		float L_2 = ___value1;
		float L_3 = ___value1;
		float L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, (float)L_2, (float)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMargins<System.Object>(T,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMargins_TisRuntimeObject_mFE401B5F746B2053C3E000BC60BB57BDE8AF451E_gshared (RuntimeObject * ___target0, float ___left1, float ___top2, float ___right3, float ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.marginLeft = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___left1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(56 /* System.Void UnityEngine.UIElements.IStyle::set_marginLeft(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// target.style.marginTop = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		float L_6 = ___top2;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_7;
		L_7 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(60 /* System.Void UnityEngine.UIElements.IStyle::set_marginTop(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_7);
		// target.style.marginRight = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		float L_10 = ___right3;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_11;
		L_11 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(58 /* System.Void UnityEngine.UIElements.IStyle::set_marginRight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_11);
		// target.style.marginBottom = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		float L_14 = ___bottom4;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_15;
		L_15 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(54 /* System.Void UnityEngine.UIElements.IStyle::set_marginBottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMaxHeight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMaxHeight_TisRuntimeObject_mA2A95F1BBFB84E1D4C1A362C4AA2C2879651989F_gshared (RuntimeObject * ___target0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.maxHeight = height;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___height1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(62 /* System.Void UnityEngine.UIElements.IStyle::set_maxHeight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMaxHeight<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMaxHeight_TisRuntimeObject_mFD1C9F577C19A112F4626FCBD771D8FFE8666104_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.maxHeight = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(62 /* System.Void UnityEngine.UIElements.IStyle::set_maxHeight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMaxSize<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMaxSize_TisRuntimeObject_m108FED617487603C54297782B351D668F06B7AE5_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxWidth(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		int32_t L_1 = ___styleKeyword1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// target.SetStyleMaxHeight(styleKeyword);
		RuntimeObject * L_3 = ___target0;
		int32_t L_4 = ___styleKeyword1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return target;
		RuntimeObject * L_6 = ___target0;
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMaxWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMaxWidth_TisRuntimeObject_m0967577A9260AE434714F38B9A3FAD4AC8AF8A3E_gshared (RuntimeObject * ___target0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.maxWidth = width;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___width1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(64 /* System.Void UnityEngine.UIElements.IStyle::set_maxWidth(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMaxWidth<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMaxWidth_TisRuntimeObject_mB5C8E72BEA51543E0A4D8CC1926F361D4E739BEA_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.maxWidth = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(64 /* System.Void UnityEngine.UIElements.IStyle::set_maxWidth(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinHeight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinHeight_TisRuntimeObject_mD0E23789083DD2CDE0755552111A42D86AEF181B_gshared (RuntimeObject * ___target0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.minHeight = height;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___height1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(66 /* System.Void UnityEngine.UIElements.IStyle::set_minHeight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinHeight<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinHeight_TisRuntimeObject_m0DC132E577CCF585C94506AC2DBBF12754DFF9AD_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.minHeight = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(66 /* System.Void UnityEngine.UIElements.IStyle::set_minHeight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinSize<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinSize_TisRuntimeObject_m803E047FB72B6D17B7884D443D8AA75A90F0EB94_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinWidth(value).SetStyleMinHeight(value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___value1;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinSize<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinSize_TisRuntimeObject_m1C57B2B55D707943621AD97F16FFE9FA43FD73E6_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinWidth(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		int32_t L_1 = ___styleKeyword1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// target.SetStyleMinHeight(styleKeyword);
		RuntimeObject * L_3 = ___target0;
		int32_t L_4 = ___styleKeyword1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return target;
		RuntimeObject * L_6 = ___target0;
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinSize<System.Object>(T,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinSize_TisRuntimeObject_m926E517FC9FE3F86ADD7631A7E4260D57C61ADBA_gshared (RuntimeObject * ___target0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	{
		// target.SetStyleMinWidth(width).SetStyleMinHeight(height);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___width1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___height2;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinWidth_TisRuntimeObject_m9B5E9F8641DF484D709F1C5D5178199D46056A75_gshared (RuntimeObject * ___target0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.minWidth = width;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___width1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(68 /* System.Void UnityEngine.UIElements.IStyle::set_minWidth(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleMinWidth<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleMinWidth_TisRuntimeObject_m15FF5C87EA01D9C469275DD3E3E6A52DBCFC1ADD_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.minWidth = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(68 /* System.Void UnityEngine.UIElements.IStyle::set_minWidth(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleOpacity<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleOpacity_TisRuntimeObject_m15AA74A859B3BC458CCEF7DD439E6B5BF5530922_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.opacity = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  L_3;
		L_3 = StyleFloat_op_Implicit_mBC296A3FABDA96EFEAA49C087FEC480D67204210((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF  >::Invoke(70 /* System.Void UnityEngine.UIElements.IStyle::set_opacity(UnityEngine.UIElements.StyleFloat) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFloat_tDF8CD46F62E2F161C52E858CCD7D73F13DE0B2CF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleOverflow<System.Object>(T,UnityEngine.UIElements.Overflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleOverflow_TisRuntimeObject_m3633D2449A6BD6790531A55B474624D34E2669EB_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m00F5EAAB115797A1D9E1129037856CF93639D051_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.overflow = new StyleEnum<Overflow>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m00F5EAAB115797A1D9E1129037856CF93639D051((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m00F5EAAB115797A1D9E1129037856CF93639D051_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278  >::Invoke(72 /* System.Void UnityEngine.UIElements.IStyle::set_overflow(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t9F7645EFD7FF2E31C1047DA7E6415EA94CAD9278 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePadding<System.Object>(T,Doozy.Runtime.UIElements.EdgeValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePadding_TisRuntimeObject_m1377C4CBD57107B048C402E0FE5C44A246E80C8B_gshared (RuntimeObject * ___target0, EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___edge1, const RuntimeMethod* method)
{
	{
		// target.SetStylePadding(edge.Left, edge.Top, edge.Right, edge.Bottom);
		RuntimeObject * L_0 = ___target0;
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_1 = ___edge1;
		float L_2 = (float)L_1.get_Left_0();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_3 = ___edge1;
		float L_4 = (float)L_3.get_Top_1();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_5 = ___edge1;
		float L_6 = (float)L_5.get_Right_2();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_7 = ___edge1;
		float L_8 = (float)L_7.get_Bottom_3();
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_2, (float)L_4, (float)L_6, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_9;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePadding<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePadding_TisRuntimeObject_m97C88A9A7B0D38C20ECFE20DB974C3321E56460D_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStylePadding(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		float L_2 = ___value1;
		float L_3 = ___value1;
		float L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, (float)L_2, (float)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePadding<System.Object>(T,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePadding_TisRuntimeObject_m0905BA8BBAB27175F86180F5F736085F9C03561B_gshared (RuntimeObject * ___target0, float ___left1, float ___top2, float ___right3, float ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.paddingLeft = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___left1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(76 /* System.Void UnityEngine.UIElements.IStyle::set_paddingLeft(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// target.style.paddingTop = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		float L_6 = ___top2;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_7;
		L_7 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(80 /* System.Void UnityEngine.UIElements.IStyle::set_paddingTop(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_7);
		// target.style.paddingRight = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		float L_10 = ___right3;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_11;
		L_11 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(78 /* System.Void UnityEngine.UIElements.IStyle::set_paddingRight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_11);
		// target.style.paddingBottom = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		float L_14 = ___bottom4;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_15;
		L_15 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(74 /* System.Void UnityEngine.UIElements.IStyle::set_paddingBottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePaddingBottom<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePaddingBottom_TisRuntimeObject_mBC5F84627600A968D3023F483D5CD8A662531C10_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.paddingBottom = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(74 /* System.Void UnityEngine.UIElements.IStyle::set_paddingBottom(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePaddingLeft<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePaddingLeft_TisRuntimeObject_mCCA9EA28124505C9B98BAF64DA11CC57601280B7_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.paddingLeft = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(76 /* System.Void UnityEngine.UIElements.IStyle::set_paddingLeft(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePaddingRight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePaddingRight_TisRuntimeObject_mF36F41E5B1DEFD9C1825B3D3D8FA98C6E8B6DA79_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.paddingRight = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(78 /* System.Void UnityEngine.UIElements.IStyle::set_paddingRight(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePaddingTop<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePaddingTop_TisRuntimeObject_mDACB28060228D12B1C0BC34BA2AF06B148992E1A_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.paddingTop = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(80 /* System.Void UnityEngine.UIElements.IStyle::set_paddingTop(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStylePosition<System.Object>(T,UnityEngine.UIElements.Position)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStylePosition_TisRuntimeObject_mFE7E389C6504CD81868EA36F9AC59CAB2FCB7A55_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1__ctor_m85D70055C29DB0BEB808ACCD6505E9FF16E8F6C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.position = new StyleEnum<Position>(value);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleEnum_1__ctor_m85D70055C29DB0BEB808ACCD6505E9FF16E8F6C9((&L_3), (int32_t)L_2, /*hidden argument*/StyleEnum_1__ctor_m85D70055C29DB0BEB808ACCD6505E9FF16E8F6C9_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB  >::Invoke(82 /* System.Void UnityEngine.UIElements.IStyle::set_position(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_tBF524D3E598084E4D1006694E88103F56EE079DB )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleRight<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleRight_TisRuntimeObject_mE83B9FC76137F1F497FAA7DB367DF25CC14FF172_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.right = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(84 /* System.Void UnityEngine.UIElements.IStyle::set_right(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleSize<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleSize_TisRuntimeObject_mE49F241A14E7D06B73B5A35339D02BCAD11258D5_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleSize(value, value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		float L_2 = ___value1;
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (RuntimeObject *, float, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_3;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleSize<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleSize_TisRuntimeObject_m665B789D5DBF91A953BCED55ECAB0787C95553A7_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	{
		// target.SetStyleWidth(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		int32_t L_1 = ___styleKeyword1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// target.SetStyleHeight(styleKeyword);
		RuntimeObject * L_3 = ___target0;
		int32_t L_4 = ___styleKeyword1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return target;
		RuntimeObject * L_6 = ___target0;
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleSize<System.Object>(T,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleSize_TisRuntimeObject_mA4A183635658D2A64D60069B61E744F1495E2525_gshared (RuntimeObject * ___target0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	{
		// target.SetStyleWidth(width).SetStyleHeight(height);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___width1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___height2;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleTextAlign<System.Object>(T,UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleTextAlign_TisRuntimeObject_mEEEC347600E36506EDBB2D067795DFD99332CB2E_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m17526F377AF8E68A6FC02592D57F592886909441_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unityTextAlign = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  L_3;
		L_3 = StyleEnum_1_op_Implicit_m17526F377AF8E68A6FC02592D57F592886909441((int32_t)L_2, /*hidden argument*/StyleEnum_1_op_Implicit_m17526F377AF8E68A6FC02592D57F592886909441_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5  >::Invoke(102 /* System.Void UnityEngine.UIElements.IStyle::set_unityTextAlign(UnityEngine.UIElements.StyleEnum`1<UnityEngine.TextAnchor>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t04D1672DAA97F32E3399B6CBB263506B5E1D9EA5 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleTop<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleTop_TisRuntimeObject_m849E68745D6D77D21BAE85CD11DAB3D3F8BA5913_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.top = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___value1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(86 /* System.Void UnityEngine.UIElements.IStyle::set_top(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnityFont<System.Object>(T,UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnityFont_TisRuntimeObject_m7A9AB5C487A188ADF92B600651BAC04E77FA1D9E_gshared (RuntimeObject * ___target0, Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unityFont = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_2 = ___value1;
		StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  L_3;
		L_3 = StyleFont_op_Implicit_mA2357BCD41B9EB3176FB170BB50B211497B5342F((Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D  >::Invoke(92 /* System.Void UnityEngine.UIElements.IStyle::set_unityFont(UnityEngine.UIElements.StyleFont) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleFont_tF672E14DC3EC31F49FC29818641EFFAE57EE5C5D )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySlice<System.Object>(T,Doozy.Runtime.UIElements.EdgeValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySlice_TisRuntimeObject_m7C89849FE4FF58DCBA13A079CA8C0DF0CECA615B_gshared (RuntimeObject * ___target0, EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  ___edge1, const RuntimeMethod* method)
{
	{
		// target.SetStyleUnitySlice((int)edge.Left, (int)edge.Top, (int)edge.Right, (int)edge.Bottom);
		RuntimeObject * L_0 = ___target0;
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_1 = ___edge1;
		float L_2 = (float)L_1.get_Left_0();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_3 = ___edge1;
		float L_4 = (float)L_3.get_Top_1();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_5 = ___edge1;
		float L_6 = (float)L_5.get_Right_2();
		EdgeValues_t5A4E6258A2D76570553DA259EC0024D3D503E369  L_7 = ___edge1;
		float L_8 = (float)L_7.get_Bottom_3();
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_2), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_4), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_6), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_9;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySlice<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySlice_TisRuntimeObject_m50BB36FDE505D2C32F7C51F4ACC2D5F6B51150FE_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleUnitySlice(value, value, value, value);
		RuntimeObject * L_0 = ___target0;
		int32_t L_1 = ___value1;
		int32_t L_2 = ___value1;
		int32_t L_3 = ___value1;
		int32_t L_4 = ___value1;
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_5;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySlice<System.Object>(T,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySlice_TisRuntimeObject_mD7B1F8F54A88080B8F723ED39B46DC566A228DA6_gshared (RuntimeObject * ___target0, int32_t ___left1, int32_t ___top2, int32_t ___right3, int32_t ___bottom4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unitySliceLeft = left;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___left1;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_3;
		L_3 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(96 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceLeft(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_3);
		// target.style.unitySliceTop = top;
		RuntimeObject * L_4 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___top2;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_7;
		L_7 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(100 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceTop(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_7);
		// target.style.unitySliceRight = right;
		RuntimeObject * L_8 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___right3;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_11;
		L_11 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_10, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(98 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceRight(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_11);
		// target.style.unitySliceBottom = bottom;
		RuntimeObject * L_12 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___bottom4;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_15;
		L_15 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_14, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(94 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceBottom(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_15);
		// return target;
		RuntimeObject * L_16 = ___target0;
		return (RuntimeObject *)L_16;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySliceBottom<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySliceBottom_TisRuntimeObject_m7F9D581094B5E0032ECF3297530D1D01665F07A2_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unitySliceBottom = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_3;
		L_3 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(94 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceBottom(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySliceLeft<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySliceLeft_TisRuntimeObject_m23BB91F3102C26BD7C1F499C8ACCB38D585DA0B5_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unitySliceLeft = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_3;
		L_3 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(96 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceLeft(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySliceRight<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySliceRight_TisRuntimeObject_mBAF3DE93CBA9B7D5474199E55100FD2486AACD65_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unitySliceRight = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_3;
		L_3 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(98 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceRight(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleUnitySliceTop<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleUnitySliceTop_TisRuntimeObject_mCC9D1B498C54C52845E59A949D43AF7AB1EEF84E_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.unitySliceTop = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  L_3;
		L_3 = StyleInt_op_Implicit_m2615D321EFAE0B85A51E0D18483FA620010D6198((int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F  >::Invoke(100 /* System.Void UnityEngine.UIElements.IStyle::set_unitySliceTop(UnityEngine.UIElements.StyleInt) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleInt_tED8A246316C94E6EBB8E6604BD9BC4667B28D41F )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleWidth<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleWidth_TisRuntimeObject_m9A70850B7CCE6A97CAD60B4CF97FD9AB8EA16902_gshared (RuntimeObject * ___target0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.width = width;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		float L_2 = ___width1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		L_3 = StyleLength_op_Implicit_mDBCA6186803ABD4C108DE32D97956CC58D2A0D1F((float)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(106 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleWidth<System.Object>(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleWidth_TisRuntimeObject_m9342EE196933CDDCFC6985D8D4E19D7605FD0B6E_gshared (RuntimeObject * ___target0, int32_t ___styleKeyword1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.width = new StyleLength(styleKeyword);
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___styleKeyword1;
		StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		StyleLength__ctor_mA06DD57186E4ED43206167F3A19E91B9436AB543((&L_3), (int32_t)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF  >::Invoke(106 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleLength_t8414559ED8D3E6EF98A98EFB7761560EB5E7C1AF )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetStyleWidth<System.Object>(T,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetStyleWidth_TisRuntimeObject_m0464381EF11A37B340F9CCF770B02AC5C97425D8_gshared (RuntimeObject * ___target0, float ___minWidth1, float ___width2, float ___maxWidth3, const RuntimeMethod* method)
{
	{
		// return target.SetStyleMinWidth(minWidth)
		//     .SetStyleWidth(width)
		//     .SetStyleMaxWidth(maxWidth);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___minWidth1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___width2;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		float L_5 = ___maxWidth3;
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, (float)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_6;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetTooltip<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetTooltip_TisRuntimeObject_m941079871F7D08F3817711708ED06DE407203EE0_gshared (RuntimeObject * ___target0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// target.tooltip = value;
		RuntimeObject * L_0 = ___target0;
		String_t* L_1 = ___value1;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		VisualElement_set_tooltip_mD33F88827D60AF6299E2894863FA75BDD788B8CC((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		// return target;
		RuntimeObject * L_2 = ___target0;
		return (RuntimeObject *)L_2;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::SetWhiteSpace<System.Object>(T,UnityEngine.UIElements.WhiteSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_SetWhiteSpace_TisRuntimeObject_mBAC694C0D9CF7DDB172A07EACE9FEEBAF3DD3EF7_gshared (RuntimeObject * ___target0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m1762AE1D83664775F024C0A32BDE81004E9F60AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.style.whiteSpace = value;
		RuntimeObject * L_0 = ___target0;
		NullCheck((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_style_mBC549DCF1948389284FF4B5891A5AFC9AE181541((VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  L_3;
		L_3 = StyleEnum_1_op_Implicit_m1762AE1D83664775F024C0A32BDE81004E9F60AE((int32_t)L_2, /*hidden argument*/StyleEnum_1_op_Implicit_m1762AE1D83664775F024C0A32BDE81004E9F60AE_RuntimeMethod_var);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951  >::Invoke(104 /* System.Void UnityEngine.UIElements.IStyle::set_whiteSpace(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.WhiteSpace>) */, IStyle_tC90BECD4A86B935E6546AF743DDD68FAB3CEFEED_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (StyleEnum_1_t01B31D0B17051FE1C0D9F61250D36304BB708951 )L_3);
		// return target;
		RuntimeObject * L_4 = ___target0;
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::Show<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_Show_TisRuntimeObject_m246FAE3FB9FDA59EB38730CB26CF9A9B09358A86_gshared (RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetStyleDisplay(DisplayStyle.Flex);
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::StyleMaxSize<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_StyleMaxSize_TisRuntimeObject_m6FC4F3117F5047898611B5E95B68505FC3CB44BA_gshared (RuntimeObject * ___target0, float ___value1, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxWidth(value).SetStyleMaxHeight(value);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___value1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___value1;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T Doozy.Runtime.UIElements.Extensions.VisualElementExtensions::StyleMaxSize<System.Object>(T,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VisualElementExtensions_StyleMaxSize_TisRuntimeObject_m763E9A4979DB59FA73C1A2EC4263A3371BFE473A_gshared (RuntimeObject * ___target0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	{
		// target.SetStyleMaxWidth(width).SetStyleMaxHeight(height);
		RuntimeObject * L_0 = ___target0;
		float L_1 = ___width1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float L_3 = ___height2;
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_4;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m219E6D93D13D4C84AD414AE7B01E2D1EF3E4F0B4_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m7D0D9CA4F71A59E30913B0DF777E084C45F30975_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.IObservable`1<TResult> UniRx.WebRequestExtensions::AbortableDeferredAsyncRequest<System.Object>(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Net.WebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestExtensions_AbortableDeferredAsyncRequest_TisRuntimeObject_m837942F4C0746D37E561C426C608C32814154288_gshared (Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 * ___begin0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___end1, WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * ___request2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observable_tFD04225232589715810F680FE63EB09951846DF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB * L_0 = (U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB * L_1 = (U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB *)L_0;
		Func_3_tDA4C8184C72F04366C43649AB724B6CEA3089020 * L_2 = ___begin0;
		NullCheck(L_1);
		L_1->set_begin_0(L_2);
		U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB * L_3 = (U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB *)L_1;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_4 = ___end1;
		NullCheck(L_3);
		L_3->set_end_1(L_4);
		U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB * L_5 = (U3CU3Ec__DisplayClass0_0_1_t8789E0753E2E8D391346E70A08AF4A67B6EA78AB *)L_3;
		WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * L_6 = ___request2;
		NullCheck(L_5);
		L_5->set_request_2(L_6);
		// var result = Observable.Create<TResult>(observer =>
		// {
		//     var isCompleted = -1;
		//     var subscription = Observable.FromAsyncPattern<TResult>(begin,
		//         ar =>
		//         {
		//             try
		//             {
		//                 Interlocked.Increment(ref isCompleted);
		//                 return end(ar);
		//             }
		//             catch (WebException ex)
		//             {
		//                 if (ex.Status == WebExceptionStatus.RequestCanceled) return default(TResult);
		//                 throw;
		//             }
		//         })()
		//         .Subscribe(observer);
		//     return Disposable.Create(() =>
		//     {
		//         if (Interlocked.Increment(ref isCompleted) == 0)
		//         {
		//             subscription.Dispose();
		//             request.Abort();
		//         }
		//     });
		// });
		Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43 * L_7 = (Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_7, (RuntimeObject *)L_5, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		IL2CPP_RUNTIME_CLASS_INIT(Observable_tFD04225232589715810F680FE63EB09951846DF5_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_2_t55ADA60E19EABA29580AF944EAA2CFD42C7F4C43 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		// return result;
		return (RuntimeObject*)L_8;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null)
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_0 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4((int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_3 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = V_0;
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3, (int32_t)L_4, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_5, (InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_7 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_mF0DEB6C4CA699499AF670ECA554013A43892F9D6((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7, (int32_t)L_8, (int32_t)L_9, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )G_B4_0;
	}

IL_004b:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = V_0;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_11;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * _thisAdjusted = reinterpret_cast<CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m17B8B014C9034B934182C0E6A27022D16FD82933(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null)
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_0 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4((int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_3 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		float L_5 = V_0;
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3);
		float L_6;
		L_6 = ((  float (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, float, InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3, (int32_t)L_4, (float)L_5, (InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_7 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_mF0DEB6C4CA699499AF670ECA554013A43892F9D6((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7);
		float L_10;
		L_10 = ((  float (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7, (int32_t)L_8, (int32_t)L_9, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = (float)G_B4_0;
	}

IL_004b:
	{
		// return value;
		float L_11 = V_0;
		return (float)L_11;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * _thisAdjusted = reinterpret_cast<CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE234FD7AC6E0663845F6CF6B330212FCE11FB7A0(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null)
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_0 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4((int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_3 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3, (int32_t)L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5, (InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_7 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_mF0DEB6C4CA699499AF670ECA554013A43892F9D6((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7, (int32_t)L_8, (int32_t)L_9, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )G_B4_0;
	}

IL_004b:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_11;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * _thisAdjusted = reinterpret_cast<CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null)
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_0 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4((int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_3 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_3, (int32_t)L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, (InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * L_7 = (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)__this->get_m_State_0();
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_m69B90CFDB53A2E79B58F826E11ECBB242ADD882D((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_mF0DEB6C4CA699499AF670ECA554013A43892F9D6((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 *)L_7, (int32_t)L_8, (int32_t)L_9, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )G_B4_0;
	}

IL_004b:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * _thisAdjusted = reinterpret_cast<CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m305E55F9E7020EF26093DB2386B11CDC5A884D3F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * RebindingOperation_WithExpectedControlType_TisRuntimeObject_mE7CEBE511D836F4C478F7BA84491EABC48780EE0_gshared (RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		NullCheck((RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A *)__this);
		RebindingOperation_ThrowIfRebindInProgress_mA6FE4FFF5B706A7A71859FA6FA7AFE46D8483962((RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A *)__this);
		RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m0B6DD3EB95536A3570193CF5B9D6D4C7FE9D30DE((RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A *)L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_gshared (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m94C95AE76FD8FE9A927409EC6AADA06A879A68FC((BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  L_4;
		L_4 = TypeTable_FindNameForType_m2CCF07DEECB922A06DFD357E1146C32207EB84D1((TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F *)(TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F *)(((InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED )L_4;
		// if (interactionName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_mDC1F123EBDF899AB57EDDCFFC3F67DA84A2CC2AD((InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithInteraction(interactionName);
		InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m5C5E28D59A0F856D52E38C0C147176E4B306D6BD((InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED )L_10, /*hidden argument*/NULL);
		BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  L_12;
		L_12 = BindingSyntax_WithInteraction_m26B27DCD44A2A047C509016EC4AECD0006A6B476((BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * _thisAdjusted = reinterpret_cast<BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *>(__this + _offset);
	BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_m82C7CF2764D0650D7C3E27943E57E476927390A3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_gshared (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m94C95AE76FD8FE9A927409EC6AADA06A879A68FC((BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  L_4;
		L_4 = TypeTable_FindNameForType_m2CCF07DEECB922A06DFD357E1146C32207EB84D1((TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F *)(TypeTable_t4E41B03F931506BA07A120F6578A8CA47459C64F *)(((InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t245C316DEE36AA1BC9558F838B3B7A0223813A1D_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED )L_4;
		// if (processorName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_mDC1F123EBDF899AB57EDDCFFC3F67DA84A2CC2AD((InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithProcessor(processorName);
		InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m5C5E28D59A0F856D52E38C0C147176E4B306D6BD((InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED )L_10, /*hidden argument*/NULL);
		BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  L_12;
		L_12 = BindingSyntax_WithProcessor_m787C2C90A12A6BB6572752AF1BD6D0456A5B37C6((BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)(BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 * _thisAdjusted = reinterpret_cast<BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757 *>(__this + _offset);
	BindingSyntax_t610045794B1FE2A72BD0408E21444DAA427F9757  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mEB90BCBD2B9747A34B8E8E57CF2BF841D401C9DF(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  L_2;
		L_2 = Collection_TryFindLayoutForType_mC84D3FC044E2F243F888F3335424CCCA07072AC9((Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F *)(Collection_tE4D2860D7319AE2B62163AFBA0A549B87DB0B97F *)(((InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_tE6B3ECA665209114AFF079155BF9F2FA79A03741_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m1C5D47E8AB1F840D23F79E06D6F27BF6AAFD1D39((InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		V_0 = (String_t*)L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_9, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return (String_t*)L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mFAB9DBBAD1DAF896D552CB325C7A07B10A2939C5((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *>(__this + _offset);
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m0D06414E4DDFD7548BF9B8BC6A15A595D144B3DC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mEF83949FF6ECD6E31A68263DD380C962678144EC((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *>(__this + _offset);
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mF67A3304F3A0923394A6B37CC4428EB0F615A2A9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mFAB9DBBAD1DAF896D552CB325C7A07B10A2939C5((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *>(__this + _offset);
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mDA2B6CDA366E5D06022AB2089239112812A3534E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748_gshared (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mD0C0006E2B4DA836BA465AE9B00AC20900E48F69((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mEF83949FF6ECD6E31A68263DD380C962678144EC((ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)(ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094 *>(__this + _offset);
	ControlSchemeSyntax_t2D6D0DCD2A91C88B1B71171D2E66F82F6C275094  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m8F3ECFF6158586958475A16E0289AE4FF5363748(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 * Builder_WithType_TisRuntimeObject_m483BFFB2077461C78F130BCCF9C2C2EEFD299558_gshared (Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 *)__this);
		Builder_set_type_m56B41DD71339D68C781AC2A267644B79100B546E_inline((Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		return (Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 *)__this;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisRuntimeObject_mD48C3F8DC6881004DF2E69BA2AE75BE183138526_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject * ___state0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_0 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_1 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_0;
		RuntimeObject * L_2 = ___state0;
		NullCheck(L_1);
		L_1->set_state_4(L_2);
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_3 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_5 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		L_5->set_cancellation_2(L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_mA33AFDA7F134DEC20068A69CF61087E993A0BBD1_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state0, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_0 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_1 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state0;
		NullCheck(L_1);
		L_1->set_state_4(L_2);
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_3 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_5 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		L_5->set_cancellation_2(L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mE015320EE23ACD1967D1903D57D6ABCC09B2CC21_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject * L_0 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this, (RuntimeObject *)L_0, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_m259D95EDF314B7CB26648D3136D84D80D9018C88((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m0787276F00BD0C2CC80BC5084708A1965C54E57E_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_0 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_0, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_m259D95EDF314B7CB26648D3136D84D80D9018C88((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisRuntimeObject_m4DD48596C2B6510E6A49714EA82341E2F086D46D_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject * ___state0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_0 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_1 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_0;
		RuntimeObject * L_2 = ___state0;
		NullCheck(L_1);
		L_1->set_state_4(L_2);
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_3 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_5 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		L_5->set_cancellation_2(L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_mA172FB291BE32CAFD2B4A201DC0CFA239F0F966D_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state0, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_0 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_1 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state0;
		NullCheck(L_1);
		L_1->set_state_4(L_2);
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_3 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_3(L_4);
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_5 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		L_5->set_cancellation_2(L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mDE2A8E62E4144895E4050EDC73EA7E88A8B08FF1_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject * L_0 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this, (RuntimeObject *)L_0, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mCE797AE3C39D0A7E9C3EF79BCF5EC84B03995A59((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m22BD1A3BEFB9B3D9A95536BFE030FE37C07501AE_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_0 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_0, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mCE797AE3C39D0A7E9C3EF79BCF5EC84B03995A59((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mCCF0E62BCFE742CDAA9A68C5F75298758DCADA12_gshared (IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		RuntimeObject * L_2 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___action2;
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_4;
		L_4 = ((  Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * (*) (RuntimeObject*, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (RuntimeObject *)L_2, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mECEEF0DD5ADBE1F2049C534F473EFA2FCEFD2200((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m0468DF44B7C7A179A363300D5E95C3C41D792449_gshared (IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_3 = ___action2;
		Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * L_4;
		L_4 = ((  Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * (*) (RuntimeObject*, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_2, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mECEEF0DD5ADBE1F2049C534F473EFA2FCEFD2200((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m3FC6E85DC4BD3467E282CA05F26D00286995C182_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * V_0 = NULL;
	{
		// var t = (Tuple<ICancelable, T, Action<T>>)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		// if (!t.Item1.IsDisposed)
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_1 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_1);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((RuntimeObject*)L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// t.Item3(t.Item2);
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_4 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_4);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_5;
		L_5 = ((  Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_6 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_5);
		((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_5, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m29FA3BFE909538143108E6817B1A8733667E027D_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		RuntimeObject * L_2 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___action2;
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_4;
		L_4 = ((  Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * (*) (RuntimeObject*, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (RuntimeObject *)L_2, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mECEEF0DD5ADBE1F2049C534F473EFA2FCEFD2200((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m541C8DD13509D03E3E89F2CB95B560C2C0B898C0_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_3 = ___action2;
		Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * L_4;
		L_4 = ((  Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * (*) (RuntimeObject*, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_2, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mECEEF0DD5ADBE1F2049C534F473EFA2FCEFD2200((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_ScheduleQueueing_TisRuntimeObject_mFEE0E222D8A27BA92ACE8ED4205C08E360022D25_gshared (ThreadPoolScheduler_t6B1784E3AF696409A4166A25788B6EF188DF1D2F * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 * L_0 = (U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 * L_1 = (U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 *)L_0;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck(L_1);
		L_1->set_cancel_0(L_2);
		U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 * L_3 = (U3CU3Ec__DisplayClass7_0_1_t198FC31CC4E1C8F30B3D82E8D60DD3B3955FFE77 *)L_1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_4 = ___action2;
		NullCheck(L_3);
		L_3->set_action_1(L_4);
		// System.Threading.ThreadPool.QueueUserWorkItem(callBackState =>
		// {
		//     if (!cancel.IsDisposed)
		//     {
		//         action((T)callBackState);
		//     }
		// }, state);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_5 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_5, (RuntimeObject *)L_3, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)), /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___state1;
		bool L_7;
		L_7 = ThreadPool_QueueUserWorkItem_mE7FD1E4AAAB1B73522158FAA3299AA115EAC02F4((WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElement_get_enabledSelf_m0AD7D3CCAF8946007C89521CB710F5EBDBB2CF68_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenabledSelfU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_focusable_mA3BF33F025B1AE6F0E8E220E58DE6BDC1FDAB310_inline (Focusable_t54CC145FEE85D2A5D92761C419288150CF5BEC14 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CfocusableU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m9DE9A6A38587478971E15868D8CC9EB234CEBC5D_inline (VisualElement_tAF72253CBD78143319BFE58F26C2349B2959C8C0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpickingModeU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cursor_set_texture_m1F4B0EB8F4622F1E59EABF6704D138FDF1C62EC2_inline (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___value0;
		__this->set_U3CtextureU3Ek__BackingField_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cursor_set_hotspot_mF9C8E7AD262116B1146745F8DCB5223F3261DBC0_inline (Cursor_t6FF56333603B811AE4BB9A0C7D66B88D874A4C4F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3ChotspotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m56B41DD71339D68C781AC2A267644B79100B546E_inline (Builder_t8406B9A4DE45683537A009418F8732393F25A8B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
